// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagEvent.h"

void UAmbiTagEvent::SetUp(USceneComponent* SpawnComp, FName CollectionName)
{
	//check for valid audio
	if (!AudioEvents.StartSound)
	{
		
		UE_LOG(LogTemp, Error, TEXT("No valid audio event found from AmbiTag event %s"), *this->GetName());
	}

	else
	{
		//initailize array
		ActiveAmbiTagEmitters.Empty();

		//set up spawning component
		SpawnSource = SpawnComp;

		if (!SpawnSource)
		{
			UE_LOG(LogTemp, Error, TEXT("No valid Parent or Spawn Component found from Ambi Tag event %s"), *this->GetName());
		}

		else
		{
			for (int i = 1; i <= SpawnValues.MaxSpawnedElemetns; i++)
			{
				//spawn an audio emitter actor
				FActorSpawnParameters SpawnParams;
				AAmbiTagEmitter* ambiEmitter = SpawnSource->GetWorld()->SpawnActor<AAmbiTagEmitter>(SpawnSource->GetComponentLocation(), SpawnSource->GetComponentRotation(), SpawnParams);

				//add actor to array
				ActiveAmbiTagEmitters.Add(ambiEmitter);

				//trigger event play for actor
				ambiEmitter->StartAmbiSource(SpawnSource, this, CollectionName);
			}
		}
	}
}


void UAmbiTagEvent::StopEvent()
{
	//trigger ending of each event in the ambi tag emitters
	for (auto& AmbiEmitter : ActiveAmbiTagEmitters)
	{
		AmbiEmitter->EventDetriggered();
	}
}

