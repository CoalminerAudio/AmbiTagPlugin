// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AmbiTagEvent.h"
#include "AmbiTagCollection.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class AMBIENCETAGS_API UAmbiTagCollection : public UObject
{
	GENERATED_BODY()

public:

	

	//Query to trigger event spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagQuery CollectionTriggerCondition;

	//AmbiTag events to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAmbiTagEvent*> AssociatedAmbiTags;
	
	//parent actor
	UPROPERTY()
	AActor* ParentActor;

	//spawn comp
	UPROPERTY()
	USceneComponent* SpawnSource;

	UPROPERTY(BlueprintReadWrite)
	bool bDebugEvents = false;

	//tell associated tags to start or stop playback
	UFUNCTION(BlueprintCallable)
	void TriggerAmbiTags(bool bTrigger);
};
