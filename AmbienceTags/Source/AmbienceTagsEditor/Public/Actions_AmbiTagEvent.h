#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"


class FActions_AmbiTagEvent : public FAssetTypeActions_Base
{
public:
	UClass* GetSupportedClass() const override;
	FText GetName() const override;
	FColor GetTypeColor() const override;
	virtual const TArray<FText>& GetSubMenus() const override;
	uint32 GetCategories() override;
};
