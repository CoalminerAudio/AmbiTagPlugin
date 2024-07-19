// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTagsEditor/Public/AmbiTagEventFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagEventFactory() {}

// Begin Cross Module References
AMBIENCETAGSEDITOR_API UClass* Z_Construct_UClass_UAmbiTagEventFactory();
AMBIENCETAGSEDITOR_API UClass* Z_Construct_UClass_UAmbiTagEventFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AmbienceTagsEditor();
// End Cross Module References

// Begin Class UAmbiTagEventFactory
void UAmbiTagEventFactory::StaticRegisterNativesUAmbiTagEventFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagEventFactory);
UClass* Z_Construct_UClass_UAmbiTagEventFactory_NoRegister()
{
	return UAmbiTagEventFactory::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagEventFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AmbiTagEventFactory.h" },
		{ "ModuleRelativePath", "Public/AmbiTagEventFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagEventFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAmbiTagEventFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTagsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEventFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagEventFactory_Statics::ClassParams = {
	&UAmbiTagEventFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEventFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagEventFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagEventFactory()
{
	if (!Z_Registration_Info_UClass_UAmbiTagEventFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagEventFactory.OuterSingleton, Z_Construct_UClass_UAmbiTagEventFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagEventFactory.OuterSingleton;
}
template<> AMBIENCETAGSEDITOR_API UClass* StaticClass<UAmbiTagEventFactory>()
{
	return UAmbiTagEventFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagEventFactory);
UAmbiTagEventFactory::~UAmbiTagEventFactory() {}
// End Class UAmbiTagEventFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagEventFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagEventFactory, UAmbiTagEventFactory::StaticClass, TEXT("UAmbiTagEventFactory"), &Z_Registration_Info_UClass_UAmbiTagEventFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagEventFactory), 4127869697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagEventFactory_h_3021617875(TEXT("/Script/AmbienceTagsEditor"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagEventFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagEventFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
