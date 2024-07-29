// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Math.h"
#include "AmbienceTagsData.generated.h"

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagCollectionDebugInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TArray<FName> DebugNames;

};

UENUM(BlueprintType)
enum EAmbiTagZoneType
{
	Box UMETA(DisplayName = "Box Zone"),
	Sphere UMETA(DisplayName = "Sphere Zone"),
	Capsule UMETA(DisplayName = "Capsule Zone"),
};

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagVaraitionParameters
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float pitchValue = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float volumeValue = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeinValue = .5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeOutValue = .5f;
};

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagAudioEvents
{
	GENERATED_BODY()

	//event to play when conditions match correctly
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* StartSound = nullptr;
};

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagAudioVariationInfo
{
	GENERATED_BODY()

	//Allow randomization of audio parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bModulateAudio = true;

	//Allow randomization of audio pitch at spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pitch Modulation", meta = (EditCondition = bModulateAudio))
	bool bModulatePitch = false;

	//Range used for randomizing pitch
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pitch Modulation", meta = (EditCondition = bModulatePitch))
	FVector2D PitchRange = { -.5, .5 };

	//Allow randomization of audio volume at spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Volume Modulation", meta = (EditCondition = bModulateAudio))
	bool bModulateVolume = false;

	//Range used for randomizing volume
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Volume Modulation", meta = (EditCondition = bModulateVolume))
	FVector2D VolumeRange = { .5, 1 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fade Modulation", meta = (EditCondition = bModulateAudio))
	bool bFadeIn = false;

	//Allow randomization of fade in time
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fade Modulation", meta = (EditCondition = bModulateAudio))
	bool bModulateFadeIn = false;

	//Range used for randomizing fade in time
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fade Modulation", meta = (EditCondition = bModulateFadeIn))
	FVector2D FadeInRange = { .25, .5 };

	//Allow randomization of fade out time
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fade Modulation", meta = (EditCondition = bModulateAudio))
	bool bModulateFadeOut = false;

	//Range used for randomizing fade out time
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fade Modulation", meta = (EditCondition = bModulateFadeOut))
	FVector2D FadeOutRange = { .25, .5 };
};


USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagSpawnInfo
{
	GENERATED_BODY()

	//spawn the sounds away from the actors location 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance")
	bool bSpawnAwayFromActor = true;

	//attach the spawned sound to the associated actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance")
	bool bLockAudioToSpawnSource = false;

	//distance used for spawning from scene component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance", meta = (EditCondition = bSpawnAwayFromActor, UIMin = 0.0))
	FVector2D DistanceRange = { 100.f, 500.f };

	//distance used for spawning from scene component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance", meta = (EditCondition = bSpawnAwayFromActor))
	FVector2D VerticalClamp = { -50.f, 50.f };

	//use a linetrace to block the sound from spawning past a blocking actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Distance", meta = (EditCondition = bSpawnAwayFromActor))
	bool bUseLineTraceForSpawn = true;

	//channel to watch for line trace detection from
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = bUseLineTRaceForSpawn))
	TEnumAsByte<ECollisionChannel> TraceChannel = ECollisionChannel::ECC_Visibility;

	//should the first event trigger have a time delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time")
	bool bDelayFirstEvent;

	//time delay value for first event
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta = (EditCondition = bDelayFirstEvent))
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


class AMBIENCETAGS_API AmbienceTagsData
{
public:
	AmbienceTagsData();
	~AmbienceTagsData();
};



