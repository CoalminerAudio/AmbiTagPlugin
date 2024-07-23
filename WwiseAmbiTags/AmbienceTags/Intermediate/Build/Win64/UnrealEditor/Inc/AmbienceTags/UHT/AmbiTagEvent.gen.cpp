// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbiTagEvent.h"
#include "AmbienceTags/Public/AmbienceTagsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagEvent() {}

// Begin Cross Module References
AMBIENCETAGS_API UClass* Z_Construct_UClass_AAmbiTagEmitter_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagEvent();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagEvent_NoRegister();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagSpawnInfo();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagWwiseEvents();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin Class UAmbiTagEvent Function SetUp
struct Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics
{
	struct AmbiTagEvent_eventSetUp_Parms
	{
		USceneComponent* SpawnComp;
		FName CollectionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Starts the logic for event playback\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the logic for event playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnComp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CollectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_SpawnComp = { "SpawnComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEvent_eventSetUp_Parms, SpawnComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnComp_MetaData), NewProp_SpawnComp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEvent_eventSetUp_Parms, CollectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_SpawnComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_CollectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEvent, nullptr, "SetUp", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::AmbiTagEvent_eventSetUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::AmbiTagEvent_eventSetUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagEvent_SetUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEvent::execSetUp)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SpawnComp);
	P_GET_PROPERTY(FNameProperty,Z_Param_CollectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUp(Z_Param_SpawnComp,Z_Param_CollectionName);
	P_NATIVE_END;
}
// End Class UAmbiTagEvent Function SetUp

// Begin Class UAmbiTagEvent Function StopEvent
struct Z_Construct_UFunction_UAmbiTagEvent_StopEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Stops event playback\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops event playback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEvent_StopEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEvent, nullptr, "StopEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_StopEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEvent_StopEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAmbiTagEvent_StopEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEvent_StopEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEvent::execStopEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopEvent();
	P_NATIVE_END;
}
// End Class UAmbiTagEvent Function StopEvent

// Begin Class UAmbiTagEvent
void UAmbiTagEvent::StaticRegisterNativesUAmbiTagEvent()
{
	UClass* Class = UAmbiTagEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUp", &UAmbiTagEvent::execSetUp },
		{ "StopEvent", &UAmbiTagEvent::execStopEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagEvent);
UClass* Z_Construct_UClass_UAmbiTagEvent_NoRegister()
{
	return UAmbiTagEvent::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///struct for Wwise events\n// event start\n// event stop\n// \n//Struct for spawn values\n// clamp height?\n// Distance 2d vect\n// Time delay 2d vect\n// delay first spawn bool\n// respawn after first event ends\n// max number of voices\n//\n" },
#endif
		{ "IncludePath", "AmbiTagEvent.h" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//struct for Wwise events\n// event start\n// event stop\n//\n//Struct for spawn values\n// clamp height?\n// Distance 2d vect\n// Time delay 2d vect\n// delay first spawn bool\n// respawn after first event ends\n// max number of voices\n//" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseEvents_MetaData[] = {
		{ "Category", "AmbiTagEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Assocaited Wwise events\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assocaited Wwise events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnValues_MetaData[] = {
		{ "Category", "AmbiTagEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spawn values for triggering Wwise events\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn values for triggering Wwise events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSource_MetaData[] = {
		{ "Category", "AmbiTagEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scene component used for settings spawn location, defaults to Default scene root\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene component used for settings spawn location, defaults to Default scene root" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAmbiTagEmitters_MetaData[] = {
		{ "Category", "AmbiTagEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Array of AkComponents used to tracking playback\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of AkComponents used to tracking playback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAmbiTagEmitters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAmbiTagEmitters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmbiTagEvent_SetUp, "SetUp" }, // 2649179617
		{ &Z_Construct_UFunction_UAmbiTagEvent_StopEvent, "StopEvent" }, // 1729925199
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_WwiseEvents = { "WwiseEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, WwiseEvents), Z_Construct_UScriptStruct_FAmbiTagWwiseEvents, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseEvents_MetaData), NewProp_WwiseEvents_MetaData) }; // 429037265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnValues = { "SpawnValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, SpawnValues), Z_Construct_UScriptStruct_FAmbiTagSpawnInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnValues_MetaData), NewProp_SpawnValues_MetaData) }; // 1023506501
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnSource = { "SpawnSource", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, SpawnSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSource_MetaData), NewProp_SpawnSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_ActiveAmbiTagEmitters_Inner = { "ActiveAmbiTagEmitters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AAmbiTagEmitter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_ActiveAmbiTagEmitters = { "ActiveAmbiTagEmitters", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, ActiveAmbiTagEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAmbiTagEmitters_MetaData), NewProp_ActiveAmbiTagEmitters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbiTagEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_WwiseEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_ActiveAmbiTagEmitters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_ActiveAmbiTagEmitters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbiTagEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagEvent_Statics::ClassParams = {
	&UAmbiTagEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAmbiTagEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEvent_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagEvent()
{
	if (!Z_Registration_Info_UClass_UAmbiTagEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagEvent.OuterSingleton, Z_Construct_UClass_UAmbiTagEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagEvent.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<UAmbiTagEvent>()
{
	return UAmbiTagEvent::StaticClass();
}
UAmbiTagEvent::UAmbiTagEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagEvent);
UAmbiTagEvent::~UAmbiTagEvent() {}
// End Class UAmbiTagEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagEvent, UAmbiTagEvent::StaticClass, TEXT("UAmbiTagEvent"), &Z_Registration_Info_UClass_UAmbiTagEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagEvent), 1140758167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_221330139(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
