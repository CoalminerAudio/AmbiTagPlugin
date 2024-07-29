// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AmbiTagSettings.generated.h"

/**
 * 
 */
UCLASS(config = Game, DefaultConfig, meta = (DisplayName = "AmbiTags"))
class AMBIENCETAGS_API UAmbiTagSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:

	//Number of emitters AmbiTags will allow at once
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General")
	int MaxNumberOfEmitters = 16;

	//Turns on debug, allowing emitters to be visualized
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General")
	bool bDebugAmbiTags = false;

	//Length of time debug info will 
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "General")
	float DebugLength = 5.f;
};
