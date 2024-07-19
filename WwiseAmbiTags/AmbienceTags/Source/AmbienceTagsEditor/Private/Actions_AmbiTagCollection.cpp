// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions_AmbiTagCollection.h"
#include "AmbiTagCollection.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

UClass* FActions_AmbiTagCollection::GetSupportedClass() const
{
    return UAmbiTagCollection::StaticClass();
}

FText FActions_AmbiTagCollection::GetName() const
{
    return INVTEXT("AmbiTag Collection");
}

FColor FActions_AmbiTagCollection::GetTypeColor() const
{
    return FColor::Purple;
}

const TArray<FText>& FActions_AmbiTagCollection::GetSubMenus() const
{
	static const TArray<FText> SubMenus
	{
		LOCTEXT("AmbiTags", "AmbiTags")
	};
	return SubMenus;
}

uint32 FActions_AmbiTagCollection::GetCategories()
{
    return EAssetTypeCategories::Sounds;
}
