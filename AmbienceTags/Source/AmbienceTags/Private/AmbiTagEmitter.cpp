// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagEmitter.h"
#include "MetasoundSource.h"
#include "AmbiTagEvent.h"

// Sets default values
AAmbiTagEmitter::AAmbiTagEmitter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AudComp = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio Component"));
	AudComp->bAutoActivate = false;
	this->SetRootComponent(AudComp);
}

void AAmbiTagEmitter::StartAmbiSource(USceneComponent* componentValue, UAmbiTagEvent* ambiTagEvent, FName AmbitagCollectionName)
{
	//set up inital values

	SpawnInfo = ambiTagEvent->SpawnValues;
	AudioEvents = ambiTagEvent->AudioEvents;
	VariationInfo = ambiTagEvent->VariationValues;
	SpawnSource = componentValue;

	//set up string for debug visual
	if (bDebug)
	{
		DebugName = AmbitagCollectionName.ToString();
		DebugName.Append(" : ");
		DebugName.Append(ambiTagEvent->GetName());
		DebugName.Append(" : ");

		//create debug shape
		DebugPoint = NewObject<USphereComponent>(this);
		DebugPoint->RegisterComponent();
		DebugPoint->AttachToComponent(AudComp, FAttachmentTransformRules::KeepRelativeTransform);

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

	if (ambiTagSubsystem->CurrentEmitterCount >= ambiTagSubsystem->MaxEmitterCount)
	{
		UE_LOG(LogTemp, Error, TEXT("Ambitag subsystem is at max capacity, destroying an actor from %s"), *DebugName);
		this->Destroy();
	}
	else
	{
		//set sound on audcomp
		AudComp->SetSound(AudioEvents.StartSound);

		//set up event bind
		AudComp->OnAudioFinished.AddDynamic(this, &AAmbiTagEmitter::EventCallback);
		
		//Whether to lock this to the spawn source
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

void AAmbiTagEmitter::SetSoundParameters()
{

	if (!VariationInfo.bModulateAudio)
	{
		return;
	}

	else
	{

		if (VariationInfo.bModulatePitch)
		{
			VariParams.pitchValue = FMath::RandRange(VariationInfo.PitchRange.X, VariationInfo.PitchRange.Y);
		}

		if (VariationInfo.bModulateVolume)
		{
			VariParams.volumeValue = FMath::RandRange(VariationInfo.VolumeRange.X, VariationInfo.VolumeRange.Y);
		}

		if (VariationInfo.bModulateFadeIn)
		{
			VariParams.FadeinValue = FMath::RandRange(VariationInfo.FadeInRange.X, VariationInfo.FadeInRange.Y);
		}

		if (VariationInfo.bModulateFadeOut)
		{
			VariParams.FadeOutValue = FMath::RandRange(VariationInfo.FadeOutRange.X, VariationInfo.FadeOutRange.Y);
		}
	}
}

void AAmbiTagEmitter::PlayAudio()
{
	//set sound spawn point
	FVector SpawnPoint = SpawnSource->GetComponentLocation();

	//Get sounds spawning point if needed
	if (SpawnInfo.bSpawnAwayFromActor)
	{
		SpawnPoint = SetSoundLocation(SpawnPoint);
	}

	//set aud comp world location
	this->SetActorLocation(SpawnPoint);

	//Randomize sound values
	if (VariationInfo.bModulateAudio)
	{
		SetSoundParameters();
	}

	//set up modulation
	AudComp->PitchMultiplier = VariParams.pitchValue;
	AudComp->VolumeMultiplier = VariParams.volumeValue;
	
	//post sound with optional fade in time
	if (VariationInfo.bFadeIn)
	{
		AudComp->FadeIn(VariParams.FadeinValue);
	}

	else
	{
		AudComp->Play();
	}

	//Run debug event
	if (bDebug)
	{
		DebugEmitter();
	}
	
}

void AAmbiTagEmitter::EventCallback()
{
	//hide debug if needed
	if (bDebug && DebugPoint)
	{
		DebugPoint->SetVisibility(false);
	}

	if (SpawnInfo.bRespawnAfterFirstEvent)
	{
		//retrigger audio timer
		TriggerDelay(SpawnInfo.RetriggerSpawnDelayRange);
	}
	else
	{
		//prep for destruction
		EventEnded();
	}
}

void AAmbiTagEmitter::DebugEmitter()
{
	//Set debug visible
	DebugPoint->SetVisibility(true);

	//Debug distance
	float DebugDist = FVector::Distance(SpawnSource->GetComponentLocation(), AudComp->GetComponentLocation());

	FString TempName = DebugName;

	//String to print
	FString DebugString = TempName.Append(FString::SanitizeFloat(DebugDist));

	//Set debug string
	DrawDebugString(GetWorld(), AudComp->GetComponentLocation() + FVector{0, 0, 11}, DebugString, nullptr, FColor::Blue, DebugTime);
}

void AAmbiTagEmitter::EventDetriggered()
{
	//if component is currently playing trigger stop event, or stop emitter
	if (AudComp->IsPlaying())
	{
		//fade out and stop aud comp
		AudComp->FadeOut(VariParams.FadeOutValue, 0.f);
	}

	else
	{
		EventEnded();
	}
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

