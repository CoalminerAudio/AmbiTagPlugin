// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbienceTagsData.h"

AmbienceTagsData::AmbienceTagsData()
{
}

AmbienceTagsData::~AmbienceTagsData()
{
}

void UAmbiTagEventDraft::SetUp(USceneComponent* LocationComp)
{
	//set the spawnsource for location information
	SpawnSource = LocationComp;
	ParentActor = SpawnSource->GetOwner();
	
	AkArray.Empty();

	if (SpawnSource)
	{
		//Set up array of AkComps
		for (int i = 0; i < SpawnInfo.MaxSpawnedElemetns; i++)
		{
			auto* AkAudioComp = NewObject<UAkComponent>(ParentActor);
			AkAudioComp->SetupAttachment(SpawnSource);
			AkArray.Add(AkAudioComp);
			AkAudioComp->RegisterComponent();
		}

		//int ArraySize = AkArray.Num();
		//start inital delay, or start event
		if (SpawnInfo.bDelayFirstEvent)
		{
			TimingDelay();
		}
		else
		{
			EventStart();
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SpawnSource is invalid"));
	}
}

//Trigger a timer, and then trigger the Event at end
void UAmbiTagEventDraft::TimingDelay()
{
	//set delay time and trigger timer that leads to event start
	//if (UWorld* World = GetWorld())
	//{

		float TimeDelay = FMath::RandRange(SpawnInfo.RespawnTime.X, SpawnInfo.RespawnTime.Y);
		//cant't get world from a data asset func, maybe push the world into the variables as part of set up?
		SpawnSource->GetWorld()->GetTimerManager().SetTimer(TimeHandle, this, &UAmbiTagEventDraft::EventStart, TimeDelay);
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Error, TEXT("No valid world found"));
	//}
}

//get the location we will be moving the AKcomponent to
FVector UAmbiTagEventDraft::SetEventLocation(FVector ComponentLocation)
{
	FVector AppendedLocation =
	{
		(FMath::RandRange(SpawnInfo.HorizontalRange.X, SpawnInfo.HorizontalRange.Y)),
		(FMath::RandRange(SpawnInfo.HorizontalRange.X, SpawnInfo.HorizontalRange.Y)),
		(FMath::RandRange(SpawnInfo.VerticalRange.X, SpawnInfo.VerticalRange.Y)),
	};

	SpawnPoint = ComponentLocation + AppendedLocation;
	return SpawnPoint;
}

//move the component to the correct location, and then trigger it to start
void UAmbiTagEventDraft::EventStart()
{
	if (!SpawnSource)
	{
		UE_LOG(LogTemp, Error, TEXT("No valid Scene component tied to AmbiEvent, no audio triggered"));
	}
	{

		
		//get a component that isn't playing
		UAkComponent* akComp = nullptr;
		int arraycount = AkArray.Num();
		for (auto& AudComp : AkArray)
		{
			if (!AudComp->HasActiveEvents())
			{
				akComp = AudComp;
				break;
			}
		}

		//Set the location of the component
		if (akComp)
		{
			akComp->SetWorldLocation(SetEventLocation(SpawnSource->GetComponentLocation()));
			akComp->PostAkEventAndWaitForEnd(WwiseEvents.StartEvent, LatentInfo);

			if (SpawnInfo.bRespawnAfterFirstEvent)
			{
				TimingDelay();
			}
			else
			{
				AkArray.Remove(akComp);
			}
		}
	}
}


void UAmbiTagEventDraft::StopEvent()
{

	for (auto& AudComp : AkArray)
	{
		if (AudComp->HasActiveEvents())
		{
			if (WwiseEvents.StopEvent)
			{
				AudComp->PostAkEvent(WwiseEvents.StopEvent);
			}

			else
			{
				AudComp->Stop();
			}
		}
		else
		{
			TimeHandle.Invalidate();
		}
	}
}