// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AmbienceTagsData.h"
#include "AmbiTagCollection.h"
#include "AmbiTagSubsystem.h"
#include "AC_AmbiTagTrigger.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActivationChange, bool, Activated);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AMBIENCETAGS_API UAC_AmbiTagTrigger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_AmbiTagTrigger();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	//variables\\

	UPROPERTY(VisibleAnywhere)
	UAmbiTagSubsystem* ambiTagSubsystem;

	FAmbiTagCollectionDebugInfo AmbiTagDebugList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Values")
	bool bEnable = true;

	UPROPERTY(BlueprintReadWrite, Category = "Spawn Values")
	USceneComponent* SpawnComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Values")
	TArray<UAmbiTagCollection*> AmbiTagCollectionList;

	UPROPERTY(VisibleAnywhere, Category = "Debug Values")
	TArray<UAmbiTagCollection*> ActiveAmbiTagCollections;

	UPROPERTY(VisibleAnywhere, Category = "Debug Values")
	TArray<UAmbiTagCollection*> InactiveAmbiTagCollections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Values")
	FName DebugName = "None";

	UPROPERTY(BlueprintReadWrite)
	bool bHasActiveEvents = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDebug = false;
	
	//functions\\

	UFUNCTION(BlueprintCallable)
	void OverrideSpawnComponent(USceneComponent* SceneComponent);

	UFUNCTION(BlueprintCallable)
	void AddComponentToTracker();

	UFUNCTION(BlueprintCallable)
	void AmbiTagsUpdateDelegate();

	UFUNCTION(BlueprintCallable)
	void CheckActiveTags();

	UFUNCTION(BlueprintCallable)
	void CheckInactiveTags();

	UFUNCTION(BlueprintCallable)
	void SendDebugInfo(bool Remove);

	UFUNCTION()
	void CallActivated();

	UFUNCTION()
	void DebugEvent();


	//delegates\\

	UPROPERTY(BlueprintAssignable)
	FActivationChange ActivationChanged;
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
