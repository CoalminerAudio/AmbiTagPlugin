// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagEventFactory.h"
#include "AmbiTagEvent.h"

UAmbiTagEventFactory::UAmbiTagEventFactory()
{
	SupportedClass = UAmbiTagEvent::StaticClass();
	bCreateNew = true;
}

UObject* UAmbiTagEventFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAmbiTagEvent>(InParent, Class, Name, Flags, Context);
}

