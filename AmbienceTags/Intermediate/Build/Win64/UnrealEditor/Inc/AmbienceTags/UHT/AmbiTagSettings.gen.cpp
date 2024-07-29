// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbiTagSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagSettings() {}

// Begin Cross Module References
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagSettings();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin Class UAmbiTagSettings
void UAmbiTagSettings::StaticRegisterNativesUAmbiTagSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagSettings);
UClass* Z_Construct_UClass_UAmbiTagSettings_NoRegister()
{
	return UAmbiTagSettings::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "AmbiTags" },
		{ "IncludePath", "AmbiTagSettings.h" },
		{ "ModuleRelativePath", "Public/AmbiTagSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfEmitters_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Number of emitters AmbiTags will allow at once\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of emitters AmbiTags will allow at once" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugAmbiTags_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Turns on debug, allowing emitters to be visualized\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turns on debug, allowing emitters to be visualized" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLength_MetaData[] = {
		{ "Category", "General" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Length of time debug info will \n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Length of time debug info will" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfEmitters;
	static void NewProp_bDebugAmbiTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugAmbiTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_MaxNumberOfEmitters = { "MaxNumberOfEmitters", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSettings, MaxNumberOfEmitters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfEmitters_MetaData), NewProp_MaxNumberOfEmitters_MetaData) };
void Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_bDebugAmbiTags_SetBit(void* Obj)
{
	((UAmbiTagSettings*)Obj)->bDebugAmbiTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_bDebugAmbiTags = { "bDebugAmbiTags", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAmbiTagSettings), &Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_bDebugAmbiTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugAmbiTags_MetaData), NewProp_bDebugAmbiTags_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_DebugLength = { "DebugLength", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSettings, DebugLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLength_MetaData), NewProp_DebugLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbiTagSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_MaxNumberOfEmitters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_bDebugAmbiTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSettings_Statics::NewProp_DebugLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbiTagSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagSettings_Statics::ClassParams = {
	&UAmbiTagSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAmbiTagSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagSettings()
{
	if (!Z_Registration_Info_UClass_UAmbiTagSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagSettings.OuterSingleton, Z_Construct_UClass_UAmbiTagSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagSettings.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<UAmbiTagSettings>()
{
	return UAmbiTagSettings::StaticClass();
}
UAmbiTagSettings::UAmbiTagSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagSettings);
UAmbiTagSettings::~UAmbiTagSettings() {}
// End Class UAmbiTagSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagSettings, UAmbiTagSettings::StaticClass, TEXT("UAmbiTagSettings"), &Z_Registration_Info_UClass_UAmbiTagSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagSettings), 689524556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_3358356879(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
