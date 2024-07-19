// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AkGameplayStatics.h"
#include "GameplayTagContainer.h"
#include "AkComponent.h"
#include "Math.h"
#include "AmbienceTagsData.generated.h"

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagCollectionDebugInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TArray<FName> DebugNames;

};

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagWwiseEventsDraft
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* StartEvent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* StopEvent = nullptr;

};

USTRUCT(BlueprintType)
struct AMBIENCETAGS_API FAmbiTagSpawnInfoDraft
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Values")
	FVector2D HorizontalRange = { 100.f, 500.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Values")
	FVector2D VerticalRange = { 100.f, 500.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time Values")
	FVector2D RespawnTime = { 15.f, 20.f };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Values")
	bool bDelayFirstEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Values")
	bool bRespawnAfterFirstEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Distance Values")
	int MaxSpawnedElemetns = 2;
};
UCLASS(Blueprintable, BlueprintType)
class AMBIENCETAGS_API UAmbiTagEventDraft : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAmbiTagWwiseEventsDraft WwiseEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAmbiTagSpawnInfoDraft SpawnInfo;

	UPROPERTY(BlueprintReadWrite)
	FVector SpawnPoint = { 0, 0, 0 };

	//Scene Component to use for location spawning
	UPROPERTY(BlueprintReadWrite)
	USceneComponent* SpawnSource;

	UPROPERTY()
	AActor* ParentActor;

	UPROPERTY(BlueprintReadonly)
	TArray<UAkComponent*> AkArray;

	UFUNCTION(BlueprintCallable)
	void SetUp(USceneComponent* LocationComp);

	UFUNCTION(BlueprintCallable)
	void EventStart();

	UFUNCTION(BlueprintCallable)
	void TimingDelay();

	UFUNCTION(BlueprintCallable)
	FVector SetEventLocation(FVector ComponentLocation);

	UFUNCTION(BlueprintCallable)
	void StopEvent();

	FLatentActionInfo LatentInfo;
	FTimerHandle TimeHandle;

};

UCLASS(Blueprintable, BlueprintType)
class AMBIENCETAGS_API UAmbiTagCollectionDraft : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagQuery CollectionTriggerCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAmbiTagEventDraft*> AssociatedAmbiTags;
};



class AMBIENCETAGS_API AmbienceTagsData
{
public:
	AmbienceTagsData();
	~AmbienceTagsData();
};



