// Copyright Epic Games, Inc. All Rights Reserved.

#include "AmbienceTagsEditor.h"

#define LOCTEXT_NAMESPACE "FAmbienceTagsEditorModule"

void FAmbienceTagsEditorModule::StartupModule()
{
	AmbiTagsEventTypeActions = MakeShared<FActions_AmbiTagEvent>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(AmbiTagsEventTypeActions.ToSharedRef());

	AmbiTagsCollectionTypeActions = MakeShared<FActions_AmbiTagCollection>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(AmbiTagsCollectionTypeActions.ToSharedRef());
}

void FAmbienceTagsEditorModule::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(AmbiTagsEventTypeActions.ToSharedRef());
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(AmbiTagsCollectionTypeActions.ToSharedRef());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAmbienceTagsEditorModule, AmbienceTagsEditor)