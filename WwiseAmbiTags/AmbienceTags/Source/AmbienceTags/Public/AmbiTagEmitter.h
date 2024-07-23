// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkGameplayStatics.h"
#include "AkComponent.h"
#include "AkAudioEvent.h"
#include "AkGameplayTypes.h"
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

	FOnAkPostEventCallback EventCallbackDelegate;

	UPROPERTY()
	FAmbiTagWwiseEvents AudioEvents;

	UPROPERTY()
	FAmbiTagSpawnInfo SpawnInfo;

	UPROPERTY()
	UAmbiTagSubsystem* ambiTagSubsystem;

	UFUNCTION(BlueprintCallable)
	void StartAmbiSource(USceneComponent* componentValue, FAmbiTagWwiseEvents eventValues, FAmbiTagSpawnInfo spawnValues, FName AmbitagCollectionName, FName AmbiTagEventName);

	UFUNCTION(BlueprintCallable)
	void EventDetriggered();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebug = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//variables\\

	UPROPERTY()
	UAkComponent* AudComp;

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
	FVector SetSoundLocation(FVector StartingLocation);

	UFUNCTION()
	void EventCallback(EAkCallbackType callbacktype, UAkCallbackInfo* CallbackInfo);

	UFUNCTION()
	void EventEnded();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
