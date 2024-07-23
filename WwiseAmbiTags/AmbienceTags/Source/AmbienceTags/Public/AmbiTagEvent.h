// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkGameplayStatics.h"
#include "AkComponent.h"
#include "Math.h"
#include "AmbienceTagsData.h"
#include "AmbiTagEmitter.h"
#include "AmbiTagEvent.generated.h"

/**
 * 
 */
//struct for Wwise events
// event start
// event stop
// 
//Struct for spawn values
// clamp height?
// Distance 2d vect
// Time delay 2d vect
// delay first spawn bool
// respawn after first event ends
// max number of voices
//



UCLASS(BlueprintType)
class AMBIENCETAGS_API UAmbiTagEvent : public UObject
{
	GENERATED_BODY()

public:

	FOnAkPostEventCallback BindCallback;

	//variables\\
	
	//Assocaited Wwise events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAmbiTagWwiseEvents WwiseEvents;

	//Spawn values for triggering Wwise events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAmbiTagSpawnInfo SpawnValues;
	
	//Scene component used for settings spawn location, defaults to Default scene root
	UPROPERTY(BlueprintReadWrite)
	USceneComponent* SpawnSource;

	//Array of AkComponents used to tracking playback
	UPROPERTY(BlueprintReadonly)
	TArray<AAmbiTagEmitter*> ActiveAmbiTagEmitters;

	//functions\\
	
	//Starts the logic for event playback
	UFUNCTION(BlueprintCallable)
	void SetUp(USceneComponent* SpawnComp, FName CollectionName);

	//Stops event playback
	UFUNCTION(BlueprintCallable)
	void StopEvent();

};
