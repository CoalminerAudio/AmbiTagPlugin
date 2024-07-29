// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AmbienceTagsData.h"
#include "GameplayTagContainer.h"
#include "AmbiTagSettings.h"
#include "AmbiTagSubsystem.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmbiTagsUpdatedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmbiTagsDebugDelegate);

UCLASS()
class AMBIENCETAGS_API UAmbiTagSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
protected:

	//TODO: add system for tracking active tags

	UFUNCTION()
	void AmbiTagsUpdated();

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UPROPERTY(BlueprintReadWrite)
	TMap<FName, FAmbiTagCollectionDebugInfo> AmbiTagDebugMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer ActiveAmbiTags;

	UPROPERTY(BlueprintReadonly)
	int MaxEmitterCount = 16;

	UPROPERTY(BlueprintReadonly)
	int CurrentEmitterCount = 0;

	UPROPERTY(BlueprintReadWrite)
	bool bDebugEmitters = true;

	UFUNCTION(BlueprintCallable)
	void AddAmbiTags(FGameplayTagContainer InTags);

	UFUNCTION(BlueprintCallable)
	void RemoveAmbiTags(FGameplayTagContainer OutTags);

	UFUNCTION()
	void UpdateDebugList(bool remove, FName SourceName, FAmbiTagCollectionDebugInfo ActiveCollections);

	UPROPERTY()
	float debugDuration = 5.f; 

	UPROPERTY(BlueprintAssignable)
	FAmbiTagsUpdatedDelegate AmbiTagsUpdateDelegate;

	UPROPERTY(BlueprintAssignable)
	FAmbiTagsDebugDelegate AmbiTagDebugDelegate;

	
};
