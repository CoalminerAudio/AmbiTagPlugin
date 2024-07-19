// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagEvent.h"

void UAmbiTagEvent::SetUp(AActor* Parent, USceneComponent* SpawnComp)
{

	FOnAkPostEventCallback OnAkPostEventDelegate;
	void EndPlay(const EEndPlayReason::Type EndPlayReason);

	//set up spawning component
	ParentActor = Parent;
	SpawnSource = SpawnComp;

	if (!ParentActor || !SpawnSource)
	{
		UE_LOG(LogTemp, Error, TEXT("No valid Parent or Spawn Component found from Ambi Tag event"));
	}
	
	else
	{

		//initialize array to be empty
		AudCompArray.Empty();

		//Set up array of AkComps
		for (int i = 0; i < SpawnValues.MaxSpawnedElemetns; i++)
		{
			auto* audioComp = NewObject<UAkComponent>(ParentActor);
			audioComp->SetupAttachment(SpawnSource);
			AudCompArray.Add(audioComp);
			audioComp->RegisterComponent();
		}

		//If we are delaying the first spawn, trigger spawn
		if (SpawnValues.bDelayFirstEvent)
		{
			TimingDelay(SpawnValues.InitailSpawnDelayRange);
		}

		else
		{
			EventStart();
		}
	}
}

void UAmbiTagEvent::TimingDelay(FVector2D DelayRange)
{
	float TimeDelay = FMath::RandRange(DelayRange.X, DelayRange.Y);
	SpawnSource->GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAmbiTagEvent::EventStart, TimeDelay);
}

void UAmbiTagEvent::EventStart()
{
	//get an akComponent that isn't playing
	UAkComponent* AudioComp = nullptr;
	for (auto& AudComp : AudCompArray)
	{
		if (!AudComp->HasActiveEvents())
		{
			AudioComp = AudComp;
			break;
		}
	}
	if (AudioComp)
	{
		//initialize a vector for use with spawning
		FVector SpawnLocation = { 0, 0, 0 };

		//get a spawnpoint away from the component
		if (SpawnValues.bSpawnAwayFromActor)
		{
			SpawnLocation = GetEventLocation();
		}

		else
		{
			SpawnLocation = SpawnSource->GetComponentLocation();
			
		}

		//set the components location
		AudioComp->SetWorldLocation(SpawnLocation);

		//spawn debug values at the location of the spawn point
		if (bDebug)
		{
			DrawDebugSphere(SpawnSource->GetWorld(), SpawnLocation, 10.f, 10, FColor::Blue, true, 10.f, 0, 5.f);
			DrawDebugString(SpawnSource->GetWorld(), SpawnLocation + FVector{ 0, 0, 11 }, this->GetName(), nullptr, FColor::White, 10.f);
		}
		AudioComp->PostAkEventAndWaitForEnd(WwiseEvents.StartEvent, LatentActionInfo);
	}
	
	if (SpawnValues.bRespawnAfterFirstEvent)
	{
		TimingDelay(SpawnValues.RetriggerSpawnDelayRange);
	}
	else
	{
		AudCompArray.Remove(AudioComp);
		AudioComp->DestroyComponent();
	}
	
}



FVector UAmbiTagEvent::GetEventLocation()
{
	//Get the starting point for the sound spawn
	FVector SpawnStart = SpawnSource->GetComponentLocation();

	//get the distance to spawn a sound at
	float SpawnDist = FMath::RandRange(SpawnValues.DistanceRange.X, SpawnValues.DistanceRange.Y);

	//get the angle to spawn a sound at
	float chosenAngle = FMath::RandRange(0.f, 2.f * PI);

	//make the spawn point location
	FVector SpawnPoint = FVector
	(
		SpawnStart.X + SpawnDist * FMath::Cos(chosenAngle), 
		SpawnStart.Y + SpawnDist * FMath::Sin(chosenAngle), 
		SpawnStart.Z + FMath::RandRange(SpawnValues.VerticalClamp.X, SpawnValues.VerticalClamp.Y)
	);

	//if there is a blocking asset between the spawn component and the hit location, set the location to be at the hit
	FHitResult HitResult;
	if (SpawnSource->GetWorld()->LineTraceSingleByChannel(HitResult, SpawnStart, SpawnPoint, ECollisionChannel::ECC_Vehicle))
	{
		SpawnPoint = HitResult.Location;
	}

	return SpawnPoint;
}

void UAmbiTagEvent::StopEvent()
{
	//trigger stop events for any active events
	for (auto& AudComp : AudCompArray)
	{
		if (AudComp->HasActiveEvents())
		{
			if (WwiseEvents.StopEvent)
			{
				//set auto destroy, and triggerr stop event
				AudComp->SetAutoDestroy(true);
				AudComp->PostAkEvent(WwiseEvents.StopEvent);
			}

			else
			{
				//stop and destroy the component
				AudComp->Stop();
				AudComp->DestroyComponent();
			}
		}

		//remove comp from array, and destroy
		AudCompArray.Remove(AudComp);
	}

	//clear timer handle
	TimerHandle.Invalidate();
}

/*
void UAmbiTagEvent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
}
*/
