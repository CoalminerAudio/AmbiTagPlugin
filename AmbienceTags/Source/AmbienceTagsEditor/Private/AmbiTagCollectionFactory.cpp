// Fill out your copyright notice in the Description page of Project Settings.


#include "AmbiTagCollectionFactory.h"
#include "AmbiTagCollection.h"

UAmbiTagCollectionFactory::UAmbiTagCollectionFactory()
{
	SupportedClass = UAmbiTagCollection::StaticClass();
	bCreateNew = true;
}

UObject* UAmbiTagCollectionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAmbiTagCollection>(InParent, Class, Name, Flags, Context);
}