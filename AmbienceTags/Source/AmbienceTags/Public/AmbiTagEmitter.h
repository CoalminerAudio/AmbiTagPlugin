// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FmodEvent.h"
#include "FMODBlueprintStatics.h"
#include "AmbienceTagsData.h"
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

	//delegate\\

	FOnEventStopped EventCallbackDelegate;

	//Variables\\

	UPROPERTY()
	FAmbiTagAudioEvent AudioEvents;

	UPROPERTY()
	FAmbiTagSpawnInfo SpawnInfo;

	UPROPERTY()
	UAmbiTagSubsystem* ambiTagSubsystem;

	UFUNCTION(BlueprintCallable)
	void StartAmbiSource(USceneComponent* componentValue, FAmbiTagAudioEvent eventValues, FAmbiTagSpawnInfo spawnValues, FName AmbitagCollectionName, FName AmbiTagEventName);

	UFUNCTION(BlueprintCallable)
	void EventDetriggered();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebug = false;

	UPROPERTY()
	float DebugTime = 5.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//variables\\

	UPROPERTY()
	UFMODAudioComponent* AudComp;

	UPROPERTY()
	USphereComponent* DebugPoint;
	
	UPROPERTY()
	FString DebugName;

	UPROPERTY()
	USceneComponent* SpawnSource;

	UPROPERTY()
	FTimerHandle AudioDelayTimer;

	UPROPERTY()
	bool bEndingEventTriggered = false;



	//functions\\
	
	

	UFUNCTION()
	void TriggerDelay(FVector2D DelayRange);

	UFUNCTION()
	void PlayAudio();

	UFUNCTION()
	void DebugEmitter();

	UFUNCTION()
	FVector SetSoundLocation(FVector StartingLocation);

	UFUNCTION()
	void EventCallback();

	UFUNCTION()
	void EventEnded();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
