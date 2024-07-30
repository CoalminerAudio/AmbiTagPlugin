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
				AmbiTagCollection->SpawnSource = SpawnComponent;
				InactiveAmbiTagCollections.Add(AmbiTagCollection);
			}

			//check tags
			AmbiTagsUpdateDelegate();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AmbiTag Subsysem not valid"));
		}
	}
	//remove component if the collection list is empty or if the component is disabled
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Removing from AmbiTag trigger %s due to being disabled or an empty AmbiTag Collection List"), *DebugName.ToString());
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
	//check the active ambi tag collection
	if (ActiveAmbiTagCollections.Num() > 0)
	{
		CheckTags(true, ActiveAmbiTagCollections);
	}

	//check the inactive ambitag collection
	if (InactiveAmbiTagCollections.Num() > 0)
	{
		CheckTags(false, InactiveAmbiTagCollections);
	}

	//check to see if there are active events attached to this component
	if (ActiveAmbiTagCollections.IsEmpty())
	{
		bHasActiveEvents = false;
	}
	else
	{
		bHasActiveEvents = true;
	}

	CallActivated();

	//if debug is set, run the debug values
	if (ambiTagSubsystem->bDebugEmitters)
	{
		DebugEvent();
	}
}


void UAC_AmbiTagTrigger::CheckTags(bool ActiveTags, TArray<UAmbiTagCollection*> CollectionList)
{
	//iterate through the array backwards
	for (int i = CollectionList.Num() - 1; i >= 0; i--)
	{
		//get the collection from that index
		UAmbiTagCollection* AmbiTagCollection = CollectionList[i];

		//if we are using the active tags list
		if (ActiveTags)
		{
			//for each active tag, check if it still matches the subsystem. if it doesn't trigger end
			if (!AmbiTagCollection->CollectionTriggerCondition.Matches(ambiTagSubsystem->ActiveAmbiTags))
			{
				//deactivate the ambitags in the collection
				AmbiTagCollection->TriggerAmbiTags(false);

				//add to inactive array
				InactiveAmbiTagCollections.Add(AmbiTagCollection);

				//Remove item from debug list
				AmbiTagDebugList.DebugNames.Remove(AmbiTagCollection->GetFName());

				//trigger debug function
				SendDebugInfo(true);

				//remove this item from this array
				ActiveAmbiTagCollections.Remove(AmbiTagCollection);

			}
		}

		//if we are using the inactive tags list
		else
		{
			//for each collection, does the trigger condition match the subsystem?
			if (AmbiTagCollection->CollectionTriggerCondition.Matches(ambiTagSubsystem->ActiveAmbiTags))
			{
				//activate
				AmbiTagCollection->TriggerAmbiTags(true);

				//add to active array
				ActiveAmbiTagCollections.Add(AmbiTagCollection);

				//add to debug list
				AmbiTagDebugList.DebugNames.Add(AmbiTagCollection->GetFName());

				//trigger debug function
				SendDebugInfo(false);

				//remove item from array
				InactiveAmbiTagCollections.Remove(AmbiTagCollection);
			}
		}
	}


}

//displays debug info in the world
void UAC_AmbiTagTrigger::SendDebugInfo(bool Remove)
{
	//send debug info to the subsystem
	ambiTagSubsystem->UpdateDebugList(Remove, DebugName, AmbiTagDebugList);
}

//broadcast for this component having active events
void UAC_AmbiTagTrigger::CallActivated()
{
	ActivationChanged.Broadcast(bHasActiveEvents);
}

//displays world debug info for this component
void UAC_AmbiTagTrigger::DebugEvent()
{
	FVector SpawnPoint = SpawnComponent->GetComponentLocation() + FVector{0, 0, 25};
	DrawDebugString(
		GetWorld(), 
		SpawnPoint, 
		*FString::Printf(TEXT("Active AmbiCollections from AC %s : %d"), 
		*DebugName.ToString(), 
		ActiveAmbiTagCollections.Num()), nullptr, FColor::White, ambiTagSubsystem->debugDuration);
}



// Called every frame
void UAC_AmbiTagTrigger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

