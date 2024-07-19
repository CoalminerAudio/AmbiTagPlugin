// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "AmbiTagEventFactory.generated.h"

/**
 * 
 */
UCLASS()
class AMBIENCETAGSEDITOR_API UAmbiTagEventFactory : public UFactory
{
	GENERATED_BODY()
public:
	UAmbiTagEventFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
