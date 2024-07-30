// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions_AmbiTagEvent.h"
#include "AmbiTagEvent.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

UClass* FActions_AmbiTagEvent::GetSupportedClass() const
{
    return UAmbiTagEvent::StaticClass();
}

FText FActions_AmbiTagEvent::GetName() const
{
    return INVTEXT("AmbiTag Event");
}

FColor FActions_AmbiTagEvent::GetTypeColor() const
{
    return FColor::Cyan;
}

const TArray<FText>& FActions_AmbiTagEvent::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("AmbiTags", "AmbiTags")
	};
	return SubMenus;
}

uint32 FActions_AmbiTagEvent::GetCategories()
{
    return EAssetTypeCategories::Sounds;
}
