// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagSubsystem.h"


void UAmbiTagSubsystem::AmbiTagsUpdated()
{
	AmbiTagsUpdateDelegate.Broadcast();
}

void UAmbiTagSubsystem::AddAmbiTags(FGameplayTagContainer InTags)
{
	UE_LOG(LogTemp, Error, TEXT("The log has been hit"));
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




