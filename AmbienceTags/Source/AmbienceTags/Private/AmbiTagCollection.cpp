// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagCollection.h"

void UAmbiTagCollection::TriggerAmbiTags(bool bTrigger)
{
	for (auto& AmbiTag : AssociatedAmbiTags)
	{
		//check for nullptr
		if (!AmbiTag)
		{
			UE_LOG(LogTemp, Error, TEXT("AmbiTag Collection %s has invalid AmbiTagEvent"), *this->GetName());
		}

		else
		{
			if (bTrigger)
			{
				AmbiTag->SetUp(SpawnSource, this->GetFName());
			}
			else
			{
				AmbiTag->StopEvent();
			}
		}
	}
}

