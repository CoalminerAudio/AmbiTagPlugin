// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkGameplayStatics.h"
#include "AkComponent.h"
#include "Math.h"
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

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagWwiseEvents
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* StartEvent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* StopEvent = nullptr;

};

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagSpawnInfo
{
	GENERATED_BODY()

	//spawn the sounds away from the actors location 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance")
	bool bSpawnAwayFromActor = true;

	//distance used for spawning from scene component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance", meta = (EditCondition = bSpawnAwayFromActor, UIMin = 0.0))
	FVector2D DistanceRange = { 100.f, 500.f };

	//distance used for spawning from scene component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance", meta = (EditCondition = bSpawnAwayFromActor))
	FVector2D VerticalClamp = { -50.f, 50.f };

	//should the first event trigger have a time delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time")
	bool bDelayFirstEvent;

	//time delay value for first event
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta = (EditCondition = bDelayFirstSpawn))
	FVector2D InitailSpawnDelayRange = { 15.f, 20.f };

	//should events be retriggered after they end
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time")
	bool bRespawnAfterFirstEvent;

	//Time range used for delaying retrigger playback
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta = (EditCondition = bRespawnAfterFirstEvent))
	FVector2D RetriggerSpawnDelayRange = { 15.f, 20.f };

	//max number of spawned elements allowed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Amount")
	int MaxSpawnedElemetns = 1;
};

UCLASS(BlueprintType)
class AMBIENCETAGS_API UAmbiTagEvent : public UObject
{
	GENERATED_BODY()

public:


	//variables\\
	// 
	//Assocaited Wwise events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAmbiTagWwiseEvents WwiseEvents;

	//Spawn values for triggering Wwise events
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAmbiTagSpawnInfo SpawnValues;
	
	//Scene component used for settings spawn location, defaults to Default scene root
	UPROPERTY(BlueprintReadWrite)
	USceneComponent* SpawnSource;

	//Actor this component is attached too
	UPROPERTY()
	AActor* ParentActor;

	//Array of AkComponents used to tracking playback
	UPROPERTY(BlueprintReadonly)
	TArray<UAkComponent*> AudCompArray;

	//debug bool
	UPROPERTY(BlueprintReadWrite)
	bool bDebug = false;

	//functions\\
	
	//Starts the logic for event playback
	UFUNCTION(BlueprintCallable)
	void SetUp(AActor* Parent, USceneComponent* SpawnComp);

	//Plays event
	UFUNCTION(BlueprintCallable)
	void EventStart();

	//Random time delay
	UFUNCTION(BlueprintCallable)
	void TimingDelay(FVector2D DelayRange);

	//gets location sound will be spawned at
	UFUNCTION(BlueprintCallable)
	FVector GetEventLocation();

	//Stops event playback
	UFUNCTION(BlueprintCallable)
	void StopEvent();

	//Consider a function as a bind on event callback for Wwise
	/*
	UFUNCTION()
	void EndPlay(const EEndPlayReason::Type EndPlayReason);
	*/

	//delegates\\

	FTimerHandle TimerHandle;
	FLatentActionInfo LatentActionInfo;
};
