// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Actions_AmbiTagCollection.h"
#include "Actions_AmbiTagEvent.h"

class FAmbienceTagsEditorModule : public IModuleInterface
{
public:
	void StartupModule() override;
	void ShutdownModule() override;

private:
	TSharedPtr<FActions_AmbiTagEvent> AmbiTagsEventTypeActions;
	TSharedPtr<FActions_AmbiTagCollection> AmbiTagsCollectionTypeActions;
};
