// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagCollection.h"

void UAmbiTagCollection::TriggerAmbiTags(bool bTrigger)
{
	for (auto& AmbiTag : AssociatedAmbiTags)
	{
		if (bTrigger)
		{
			AmbiTag->SetUp(ParentActor, SpawnSource);
			if (bDebugEvents)
			{
				AmbiTag->bDebug = true;
			}
		}
		else
		{
			AmbiTag->StopEvent();
		}
	}
}

