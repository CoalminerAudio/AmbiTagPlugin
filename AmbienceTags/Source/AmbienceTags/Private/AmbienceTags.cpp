// Copyright Epic Games, Inc. All Rights Reserved.

#include "AmbienceTags.h"
#include "ISettingsModule.h"

#define LOCTEXT_NAMESPACE "FAmbienceTagsModule"

void FAmbienceTagsModule::StartupModule()
{
	/*
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "AmbiTag_Settings",
			LOCTEXT("RuntimeSettingsName", "AmbitTags Settings"), 
			LOCTEXT("RuntimeSettingsDescription", "Ambitag settings"),
			GetMutableDefault<UAmbiTag
	}
	*/
}

void FAmbienceTagsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAmbienceTagsModule, AmbienceTags)