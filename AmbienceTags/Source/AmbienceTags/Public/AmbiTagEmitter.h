// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AmbienceTagsData.h"
#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"
#include "AmbiTagSubsystem.h"
#include "AmbiTagEmitter.generated.h"

UCLASS()
class AMBIENCETAGS_API AAmbiTagEmitter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAmbiTagEmitter();

	UPROPERTY()
	FAmbiTagAudioEvents AudioEvents;

	UPROPERTY()
	FAmbiTagAudioVariationInfo VariationInfo;

	UPROPERTY()
	FAmbiTagSpawnInfo SpawnInfo;

	UPROPERTY()
	UAmbiTagSubsystem* ambiTagSubsystem;

	UFUNCTION(BlueprintCallable)
	void StartAmbiSource(USceneComponent* componentValue, UAmbiTagEvent* ambiTagEvent, FName AmbitagCollectionName);

	UFUNCTION(BlueprintCallable)
	void EventDetriggered();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebug = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//variables\\

	UPROPERTY()
	UAudioComponent* AudComp;

	UPROPERTY()
	USphereComponent* DebugPoint;
	
	UPROPERTY()
	FString DebugName;

	UPROPERTY()
	USceneComponent* SpawnSource;

	UPROPERTY()
	FTimerHandle AudioDelayTimer;

	UPROPERTY()
	FAmbiTagVaraitionParameters VariParams;

	UPROPERTY()
	bool bEndingEventTriggered = false;

	UPROPERTY()
	float DebugTime = 5.f;



	//functions\\
	
	

	UFUNCTION()
	void TriggerDelay(FVector2D DelayRange);

	UFUNCTION()
	void PlayAudio();

	UFUNCTION()
	FVector SetSoundLocation(FVector StartingLocation);

	UFUNCTION()
	void SetSoundParameters();

	UFUNCTION()
	void EventCallback();

	UFUNCTION()
	void DebugEmitter();

	UFUNCTION()
	void EventEnded();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
