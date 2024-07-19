// Fill out your copyright notice in the Description page of Project Settings.


#include "AC_AmbiTagTrigger.h"


// Sets default values for this component's properties
UAC_AmbiTagTrigger::UAC_AmbiTagTrigger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	// ...
}


// Called when the game starts
void UAC_AmbiTagTrigger::BeginPlay()
{
	Super::BeginPlay();

	//set up debug info, if the debug name isn't set use the actors name
	if (DebugName == "" || DebugName == "None")
	{
		DebugName = this->GetOwner()->GetFName();
	}

	//check if the component is set to be enabled, and if the list has values
	if (bEnable && !AmbiTagCollectionList.IsEmpty())
	{
		//set up subsystem
		ambiTagSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UAmbiTagSubsystem>();

		if (ambiTagSubsystem)
		{
			//if no valid scene component, set spawning component as root component
			if (!SpawnComponent)
			{
				SpawnComponent = this->GetOwner()->GetRootComponent();
			}

			ambiTagSubsystem->AmbiTagsUpdateDelegate.AddDynamic(this, &UAC_AmbiTagTrigger::AmbiTagsUpdateDelegate);

			//initailize active array as empty
			ActiveAmbiTagCollections.Empty();

			//set spawn variables for each collection
			for (auto& AmbiTagCollection : AmbiTagCollectionList)
			{
			
				AmbiTagCollection->bDebugEvents = bDebug;
				AmbiTagCollection->SpawnSource = SpawnComponent;
				AmbiTagCollection->ParentActor = this->GetOwner();
				InactiveAmbiTagCollections.Add(AmbiTagCollection);
			}

			//check tags
			AmbiTagsUpdateDelegate();
		}
		else
		{
			//UE_LOG(LogTemp, Error, TEXT("Deleting AmbiTagTrigger component of actor: %s"), DebugName);
		}

		
	}

	else
	{
		this->DestroyComponent();
	}

	
}

//Set the scene component that will be sent to the AmbiTagCollections
void UAC_AmbiTagTrigger::OverrideSpawnComponent(USceneComponent* SceneComponent)
{
	SpawnComponent = SceneComponent;
}

//TODO: Set this to send a debug string to the subsystem
void UAC_AmbiTagTrigger::AddComponentToTracker()
{

}

//triggers a check for ambitags
void UAC_AmbiTagTrigger::AmbiTagsUpdateDelegate()
{
	if (ActiveAmbiTagCollections.Num() > 0)
	{
		CheckActiveTags();
	}

	if (InactiveAmbiTagCollections.Num() > 0)
	{
		CheckInactiveTags();
	}

	DebugEvent();
}

void UAC_AmbiTagTrigger::CheckActiveTags()
{
	for (auto& AmbiTagCollection : ActiveAmbiTagCollections)
	{
		//for each active tag, check if it still matches the subsystem. if it doesn't trigger end
		if (!AmbiTagCollection->CollectionTriggerCondition.Matches(ambiTagSubsystem->ActiveAmbiTags))
		{
			//deactivate
			AmbiTagCollection->TriggerAmbiTags(false);

			//add to inactive array
			InactiveAmbiTagCollections.Add(AmbiTagCollection);

			//remove from this array
			ActiveAmbiTagCollections.Remove(AmbiTagCollection);

			//Remove item from debug list
			AmbiTagDebugList.DebugNames.Remove(AmbiTagCollection->GetFName());

			//trigger debug function
			SendDebugInfo(true);
		}

		if (ActiveAmbiTagCollections.IsEmpty() && bHasActiveEvents)
		{
			bHasActiveEvents = false;
			CallActivated();
		}
	}

}

void UAC_AmbiTagTrigger::CheckInactiveTags()
{
	for (auto& AmbiTagCollection : InactiveAmbiTagCollections)
	{
		//for each collection, does the trigger condition match the subsystem?
		if (AmbiTagCollection->CollectionTriggerCondition.Matches(ambiTagSubsystem->ActiveAmbiTags))
		{
			if (!bHasActiveEvents)
			{
				bHasActiveEvents = true;
				CallActivated();
			}
			//activate
			AmbiTagCollection->TriggerAmbiTags(true);
			
			//add to active array
			ActiveAmbiTagCollections.Add(AmbiTagCollection);
			
			//add to debug list
			AmbiTagDebugList.DebugNames.Add(AmbiTagCollection->GetFName());

			//trigger debug function
			SendDebugInfo(false);
		}
	}
}

void UAC_AmbiTagTrigger::SendDebugInfo(bool Remove)
{
	//send debug info to the subsystem
	ambiTagSubsystem->UpdateDebugList(Remove, DebugName, AmbiTagDebugList);
}

void UAC_AmbiTagTrigger::CallActivated()
{
	ActivationChanged.Broadcast(bHasActiveEvents);
}

void UAC_AmbiTagTrigger::DebugEvent()
{
	FVector SpawnPoint = SpawnComponent->GetComponentLocation() + FVector{0, 0, 25};
	DrawDebugString(GetWorld(), SpawnPoint, *FString::Printf(TEXT("Current active collections: %f"), ActiveAmbiTagCollections.Num()), nullptr, FColor::White, 10.f);
}



// Called every frame
void UAC_AmbiTagTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

