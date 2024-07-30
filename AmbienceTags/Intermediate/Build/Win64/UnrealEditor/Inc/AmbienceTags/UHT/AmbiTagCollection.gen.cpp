// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbiTagCollection.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagCollection() {}

// Begin Cross Module References
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagCollection();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagCollection_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagEvent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin Class UAmbiTagCollection Function TriggerAmbiTags
struct Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics
{
	struct AmbiTagCollection_eventTriggerAmbiTags_Parms
	{
		bool bTrigger;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//tell associated tags to start or stop playback\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "tell associated tags to start or stop playback" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bTrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::NewProp_bTrigger_SetBit(void* Obj)
{
	((AmbiTagCollection_eventTriggerAmbiTags_Parms*)Obj)->bTrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::NewProp_bTrigger = { "bTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AmbiTagCollection_eventTriggerAmbiTags_Parms), &Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::NewProp_bTrigger_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::NewProp_bTrigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagCollection, nullptr, "TriggerAmbiTags", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::AmbiTagCollection_eventTriggerAmbiTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::AmbiTagCollection_eventTriggerAmbiTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagCollection::execTriggerAmbiTags)
{
	P_GET_UBOOL(Z_Param_bTrigger);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerAmbiTags(Z_Param_bTrigger);
	P_NATIVE_END;
}
// End Class UAmbiTagCollection Function TriggerAmbiTags

// Begin Class UAmbiTagCollection
void UAmbiTagCollection::StaticRegisterNativesUAmbiTagCollection()
{
	UClass* Class = UAmbiTagCollection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TriggerAmbiTags", &UAmbiTagCollection::execTriggerAmbiTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagCollection);
UClass* Z_Construct_UClass_UAmbiTagCollection_NoRegister()
{
	return UAmbiTagCollection::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AmbiTagCollection.h" },
		{ "ModuleRelativePath", "Public/AmbiTagCollection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionTriggerCondition_MetaData[] = {
		{ "Category", "AmbiTagCollection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Query to trigger event spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query to trigger event spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedAmbiTags_MetaData[] = {
		{ "Category", "AmbiTagCollection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AmbiTag events to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AmbiTag events to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSource_MetaData[] = {
		{ "Category", "AmbiTagCollection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//spawn comp\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbiTagCollection.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "spawn comp" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionTriggerCondition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedAmbiTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssociatedAmbiTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmbiTagCollection_TriggerAmbiTags, "TriggerAmbiTags" }, // 4204216311
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_CollectionTriggerCondition = { "CollectionTriggerCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagCollection, CollectionTriggerCondition), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionTriggerCondition_MetaData), NewProp_CollectionTriggerCondition_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_AssociatedAmbiTags_Inner = { "AssociatedAmbiTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAmbiTagEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_AssociatedAmbiTags = { "AssociatedAmbiTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagCollection, AssociatedAmbiTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedAmbiTags_MetaData), NewProp_AssociatedAmbiTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_SpawnSource = { "SpawnSource", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagCollection, SpawnSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSource_MetaData), NewProp_SpawnSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbiTagCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_CollectionTriggerCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_AssociatedAmbiTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_AssociatedAmbiTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagCollection_Statics::NewProp_SpawnSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbiTagCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagCollection_Statics::ClassParams = {
	&UAmbiTagCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAmbiTagCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollection_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagCollection()
{
	if (!Z_Registration_Info_UClass_UAmbiTagCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagCollection.OuterSingleton, Z_Construct_UClass_UAmbiTagCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagCollection.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<UAmbiTagCollection>()
{
	return UAmbiTagCollection::StaticClass();
}
UAmbiTagCollection::UAmbiTagCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagCollection);
UAmbiTagCollection::~UAmbiTagCollection() {}
// End Class UAmbiTagCollection

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagCollection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagCollection, UAmbiTagCollection::StaticClass, TEXT("UAmbiTagCollection"), &Z_Registration_Info_UClass_UAmbiTagCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagCollection), 2028431389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagCollection_h_2455843377(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagCollection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
