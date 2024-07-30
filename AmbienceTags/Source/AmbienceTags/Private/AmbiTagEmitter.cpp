// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagEmitter.h"

// Sets default values
AAmbiTagEmitter::AAmbiTagEmitter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AudComp = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("Audio Component"));
	AudComp->bAutoActivate = false;
	
	this->SetRootComponent(AudComp);
}

void AAmbiTagEmitter::StartAmbiSource(USceneComponent* componentValue, FAmbiTagAudioEvent eventValues, FAmbiTagSpawnInfo spawnValues, FName AmbitagCollectionName, FName AmbiTagEventName)
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
		//set the event on the component
		AudComp->SetEvent(AudioEvents.StartEvent);
		AudComp->OnEventStopped.AddDynamic(this, &AAmbiTagEmitter::EventCallback);

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
	DebugTime = ambiTagSubsystem->debugDuration;

	//create debug sphere and text render
	if (bDebug)
	{
		DebugPoint = NewObject<USphereComponent>(this);
		DebugPoint->RegisterComponent();
		DebugPoint->AttachToComponent(AudComp, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

		//set visible in game
		DebugPoint->bHiddenInGame = false;
		DebugPoint->SetVisibility(false);

		//disable collision for component
		DebugPoint->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		//set size
		DebugPoint->SetSphereRadius(5, false);

		//set color
		DebugPoint->ShapeColor = FColor::Blue;
	}
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

	//post audio event
	
	AudComp->Play();

	if (ambiTagSubsystem->bDebugEmitters)
	{
		DebugEmitter();
	}
}

void AAmbiTagEmitter::DebugEmitter()
{
	//Set the sphere to be visible
	DebugPoint->SetVisibility(true);

	//get the distance between the source and this actor
	float DebugDiatance = FVector::Distance(SpawnSource->GetComponentLocation(), this->GetActorLocation());

	//Add the distance to the debug value
	FString TempName = DebugName;
	FString DebugString = TempName.Append(FString::SanitizeFloat(DebugDiatance));

	DrawDebugString(GetWorld(), AudComp->GetComponentLocation() + FVector{0, 0, 11}, DebugString, nullptr, FColor::Blue, DebugDiatance);
}

void AAmbiTagEmitter::EventCallback()
{
	//is we haven't stopped the ambi emitter, decide whether more audio should be triggered
	if (!bEndingEventTriggered)
	{

		if (bDebug && DebugPoint)
		{
			DebugPoint->SetVisibility(false);
		}

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
	
}

void AAmbiTagEmitter::EventDetriggered()
{
	//if component is currently playing trigger stop event, or stop emitter
	if (AudComp->IsPlaying())
	{
		//set bool for triggering ending
		bEndingEventTriggered = true;

		//Stop audio event
		AudComp->Stop();
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

