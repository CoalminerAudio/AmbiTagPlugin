// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagSubsystem.h"

//TODO: Add debug and max voice count settings to project settings?

void UAmbiTagSubsystem::AmbiTagsUpdated()
{
	AmbiTagsUpdateDelegate.Broadcast();
}

void UAmbiTagSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	if (const UAmbiTagSettings* AmbiTagSetting = GetDefault<UAmbiTagSettings>())
	{
		UE_LOG(LogTemp, Display, TEXT("Loading AmbiTag subsystem"));
		bDebugEmitters = AmbiTagSetting->bDebugAmbiTags;
		MaxEmitterCount = AmbiTagSetting->MaxNumberOfEmitters;
	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load in AmbiTag subsystem"));
	}
}




void UAmbiTagSubsystem::AddAmbiTags(FGameplayTagContainer InTags)
{
	ActiveAmbiTags.AppendTags(InTags);
	AmbiTagsUpdated();
}

void UAmbiTagSubsystem::RemoveAmbiTags(FGameplayTagContainer OutTags)
{
	ActiveAmbiTags.RemoveTags(OutTags);
	AmbiTagsUpdated();
}


void UAmbiTagSubsystem::UpdateDebugList(bool remove, FName SourceName, FAmbiTagCollectionDebugInfo ActiveCollections)
{
	//Remove the value from the debug map
	if (remove)
	{
		AmbiTagDebugMap.Remove(SourceName);
	}

	//Add or update the value from the debug map
	else
	{
		AmbiTagDebugMap.Add(SourceName, ActiveCollections);
	}

	AmbiTagDebugDelegate.Broadcast();
}




