// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagEmitter.h"

// Sets default values
AAmbiTagEmitter::AAmbiTagEmitter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AudComp = CreateDefaultSubobject<UAkComponent>(TEXT("Audio Component"));

	
	
}

void AAmbiTagEmitter::StartAmbiSource(USceneComponent* componentValue, FAmbiTagWwiseEvents eventValues, FAmbiTagSpawnInfo spawnValues, FName AmbitagCollectionName, FName AmbiTagEventName)
{
	//set up inital values

	SpawnInfo = spawnValues;
	AudioEvents = eventValues;
	SpawnSource = componentValue;
	
	//set up string for debug visual
	if (bDebug)
	{
		DebugName = AmbitagCollectionName.ToString();
		DebugName.Append(" : ");
		DebugName.Append(AmbiTagEventName.ToString());
		DebugName.Append(" : ");
	}

	if (ambiTagSubsystem->CurrentEmitterCount >= ambiTagSubsystem->MaxEmitterCount)
	{
		UE_LOG(LogTemp, Error, TEXT("Ambitag subsystem is at max capacity, destroying an actor from %s"), *DebugName);
		this->Destroy();
	}
	else
	{
		if (SpawnInfo.bLockAudioToSpawnSource)
		{
			this->AttachToComponent(SpawnSource, FAttachmentTransformRules::KeepRelativeTransform);
		}
		//increment the current emitter count
		ambiTagSubsystem->CurrentEmitterCount++;

		//trigger audio playback 
		if (SpawnInfo.bDelayFirstEvent)
		{
			TriggerDelay(SpawnInfo.InitailSpawnDelayRange);
		}
		else
		{
			PlayAudio();
		}
	}

	
}

// Called when the game starts or when spawned
void AAmbiTagEmitter::BeginPlay()
{
	Super::BeginPlay();

	ambiTagSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UAmbiTagSubsystem>();

	bDebug = ambiTagSubsystem->bDebugEmitters;
}

void AAmbiTagEmitter::TriggerDelay(FVector2D DelayRange)
{
	float TimeDelay = FMath::RandRange(DelayRange.X, DelayRange.Y);
	SpawnSource->GetWorld()->GetTimerManager().SetTimer(AudioDelayTimer, this, &AAmbiTagEmitter::PlayAudio, TimeDelay);
}



FVector AAmbiTagEmitter::SetSoundLocation(FVector StartingLocation)
{
	//get the distance to spawn a sound at
	float SpawnDist = FMath::RandRange(SpawnInfo.DistanceRange.X, SpawnInfo.DistanceRange.Y);

	//get the angle to spawn a sound at
	float chosenAngle = FMath::RandRange(0.f, 2.f * PI);

	//make the spawn point location
	FVector SpawnPoint = FVector
	(
		StartingLocation.X + SpawnDist * FMath::Cos(chosenAngle),
		StartingLocation.Y + SpawnDist * FMath::Sin(chosenAngle),
		StartingLocation.Z + FMath::RandRange(SpawnInfo.VerticalClamp.X, SpawnInfo.VerticalClamp.Y)
	);


	//shoot a line trace from the source actor to the spawn point, looking for blockers to prevent the sound from spawning back blockers
	if (SpawnInfo.bUseLineTraceForSpawn)
	{
		//ignore the parent actor for a line trace
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(SpawnSource->GetOwner());

		//if there is a blocking asset between the spawn component and the hit location, set the location to be at the hit
		FHitResult HitResult;
		if (GetWorld()->LineTraceSingleByChannel(HitResult, StartingLocation, SpawnPoint, SpawnInfo.TraceChannel, CollisionParams))
		{
			SpawnPoint = HitResult.Location;
		}
	}

	return SpawnPoint;
}

void AAmbiTagEmitter::PlayAudio()
{
	//set sound spawn point
	FVector SpawnPoint = SpawnSource->GetComponentLocation();

	if (SpawnInfo.bSpawnAwayFromActor)
	{
		SpawnPoint = SetSoundLocation(SpawnPoint);
	}

	//set aud comp world location
	this->SetActorLocation(SpawnPoint);

	//set up event finihsed callback
	EventCallbackDelegate.BindUFunction(this, "EventCallback");

	//set up callback mask based on debug value
	int32 EventCallbackMask;
	if (bDebug)
	{
		EventCallbackMask = int32(AkCallbackType::AK_Duration) | int32(AkCallbackType::AK_EndOfEvent);
	}
	else
	{
		EventCallbackMask = int32(AkCallbackType::AK_EndOfEvent);
	}

	//post audio event
	AudComp->PostAkEvent(AudioEvents.StartEvent, EventCallbackMask, EventCallbackDelegate);
}

void AAmbiTagEmitter::EventCallback(EAkCallbackType callbacktype, UAkCallbackInfo* CallbackInfo)
{
	const UAkDurationCallbackInfo* CBInfo = static_cast<UAkDurationCallbackInfo*>(CallbackInfo);
	
	switch (callbacktype)
	{
		

		case EAkCallbackType::Duration:

			//run debug information
			if (bDebug)
			{
				
				if (AudioEvents.StartEvent->IsInfinite)
				{
					DebugPoint = NewObject<USphereComponent>(this);
					DebugPoint->RegisterComponent();
					DebugPoint->AttachToComponent(AudComp, FAttachmentTransformRules::KeepRelativeTransform);

					//set visible in game
					DebugPoint->bHiddenInGame = false;

					//disable collision for component
					DebugPoint->SetCollisionEnabled(ECollisionEnabled::NoCollision);

					//set size
					DebugPoint->SetSphereRadius(5, false);

					//set color
					DebugPoint->ShapeColor = FColor::Blue;

					//TODO: can I add a string to this somehow? Debug string doesn't destroy with an actor
				}
				else
				{
					//get duration of event
					float debugTime = CBInfo->Duration / 1000;

					//set up debug sphere
					FVector Debuglocation = AudComp->GetComponentLocation();
					DrawDebugSphere(GetWorld(), Debuglocation, 5.f, 10, FColor::Blue, false, debugTime, 0, .25f);

					//get distance of audio emitter from the spawn source
					float DebugDistance = FVector::Distance(Debuglocation, SpawnSource->GetComponentLocation());

					//Set up distance string
					FString DebugdistValue = FString::SanitizeFloat(DebugDistance);

					//set up debug string
					FString DebugString = DebugName.Append(DebugdistValue);

					//draw string in the world slightly above the spheres location
					DrawDebugString(GetWorld(), Debuglocation + FVector{ 0, 0, 11 }, DebugString, nullptr, FColor::Blue, debugTime);
				}

				
			}
			break;

		case EAkCallbackType::EndOfEvent:

			//stop binding of event
			EventCallbackDelegate.Unbind();
	
			//check if this is a normal ending, or if the ending is triggered from a stop event
			if (!bEndingEventTriggered)
			{
				//Retrigger delay if needed, or destroy actor
				if (SpawnInfo.bRespawnAfterFirstEvent)
				{
					TriggerDelay(SpawnInfo.RetriggerSpawnDelayRange);
				}

				else
				{
					EventEnded();
				}
			}

			//destroy actor if this was a triggered ending
			else
			{
				EventEnded();
			}

			break;
	}
	
}

void AAmbiTagEmitter::EventDetriggered()
{
	//if component is currently playing trigger stop event, or stop emitter
	if (AudComp->HasActiveEvents())
	{
		//check the bool for using ending event, and make sure ending event is valid
		if (AudioEvents.bUseEndingEvent && AudioEvents.StopEvent)
		{
			//post ending event
			FOnAkPostEventCallback nullcallback;
			AudComp->PostAkEvent(AudioEvents.StopEvent, 0, nullcallback);
			bEndingEventTriggered = true;
		}
		

		else
		{
			//stop the audio component
			AudComp->Stop();
			EventEnded();
		}
	}

	else
	{
		EventEnded();
	}
	//TODO: Figure out a way to communicate ending of this actor with the rest of the system?


}

void AAmbiTagEmitter::EventEnded()
{
	//if the timer is currenly running, stop it
	if (AudioDelayTimer.IsValid())
	{
		AudioDelayTimer.Invalidate();
	}

	//remove one value from the current emitter count
	ambiTagSubsystem->CurrentEmitterCount--;

	//desrtoy this component
	this->Destroy();
}

// Called every frame
void AAmbiTagEmitter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

