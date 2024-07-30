// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTagsEditor/Public/AmbiTagCollectionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagCollectionFactory() {}

// Begin Cross Module References
AMBIENCETAGSEDITOR_API UClass* Z_Construct_UClass_UAmbiTagCollectionFactory();
AMBIENCETAGSEDITOR_API UClass* Z_Construct_UClass_UAmbiTagCollectionFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AmbienceTagsEditor();
// End Cross Module References

// Begin Class UAmbiTagCollectionFactory
void UAmbiTagCollectionFactory::StaticRegisterNativesUAmbiTagCollectionFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagCollectionFactory);
UClass* Z_Construct_UClass_UAmbiTagCollectionFactory_NoRegister()
{
	return UAmbiTagCollectionFactory::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagCollectionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AmbiTagCollectionFactory.h" },
		{ "ModuleRelativePath", "Public/AmbiTagCollectionFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagCollectionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAmbiTagCollectionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTagsEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollectionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagCollectionFactory_Statics::ClassParams = {
	&UAmbiTagCollectionFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollectionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagCollectionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagCollectionFactory()
{
	if (!Z_Registration_Info_UClass_UAmbiTagCollectionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagCollectionFactory.OuterSingleton, Z_Construct_UClass_UAmbiTagCollectionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagCollectionFactory.OuterSingleton;
}
template<> AMBIENCETAGSEDITOR_API UClass* StaticClass<UAmbiTagCollectionFactory>()
{
	return UAmbiTagCollectionFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagCollectionFactory);
UAmbiTagCollectionFactory::~UAmbiTagCollectionFactory() {}
// End Class UAmbiTagCollectionFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagCollectionFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagCollectionFactory, UAmbiTagCollectionFactory::StaticClass, TEXT("UAmbiTagCollectionFactory"), &Z_Registration_Info_UClass_UAmbiTagCollectionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagCollectionFactory), 994538380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagCollectionFactory_h_1473897591(TEXT("/Script/AmbienceTagsEditor"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagCollectionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTagsEditor_Public_AmbiTagCollectionFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
