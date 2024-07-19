// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbiTagEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagEvent() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagEvent();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagEvent_NoRegister();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagSpawnInfo();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagWwiseEvents();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin ScriptStruct FAmbiTagWwiseEvents
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents;
class UScriptStruct* FAmbiTagWwiseEvents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagWwiseEvents, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagWwiseEvents"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagWwiseEvents>()
{
	return FAmbiTagWwiseEvents::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///struct for Wwise events\n// event start\n// event stop\n// \n//Struct for spawn values\n// clamp height?\n// Distance 2d vect\n// Time delay 2d vect\n// delay first spawn bool\n// respawn after first event ends\n// max number of voices\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//struct for Wwise events\n// event start\n// event stop\n//\n//Struct for spawn values\n// clamp height?\n// Distance 2d vect\n// Time delay 2d vect\n// delay first spawn bool\n// respawn after first event ends\n// max number of voices\n//" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[] = {
		{ "Category", "AmbiTagWwiseEvents" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopEvent_MetaData[] = {
		{ "Category", "AmbiTagWwiseEvents" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagWwiseEvents>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagWwiseEvents, StartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEvent_MetaData), NewProp_StartEvent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::NewProp_StopEvent = { "StopEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagWwiseEvents, StopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopEvent_MetaData), NewProp_StopEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::NewProp_StartEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::NewProp_StopEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagWwiseEvents",
	Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::PropPointers),
	sizeof(FAmbiTagWwiseEvents),
	alignof(FAmbiTagWwiseEvents),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagWwiseEvents()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents.InnerSingleton;
}
// End ScriptStruct FAmbiTagWwiseEvents

// Begin ScriptStruct FAmbiTagSpawnInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo;
class UScriptStruct* FAmbiTagSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagSpawnInfo, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagSpawnInfo>()
{
	return FAmbiTagSpawnInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnAwayFromActor_MetaData[] = {
		{ "Category", "Spawn Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//spawn the sounds away from the actors location \n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "spawn the sounds away from the actors location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceRange_MetaData[] = {
		{ "Category", "Spawn Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//distance used for spawning from scene component\n" },
#endif
		{ "EditCondition", "bSpawnAwayFromActor" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "distance used for spawning from scene component" },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalClamp_MetaData[] = {
		{ "Category", "Spawn Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//distance used for spawning from scene component\n" },
#endif
		{ "EditCondition", "bSpawnAwayFromActor" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "distance used for spawning from scene component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstEvent_MetaData[] = {
		{ "Category", "Spawn Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//should the first event trigger have a time delay\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "should the first event trigger have a time delay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitailSpawnDelayRange_MetaData[] = {
		{ "Category", "Spawn Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//time delay value for first event\n" },
#endif
		{ "EditCondition", "bDelayFirstSpawn" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "time delay value for first event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespawnAfterFirstEvent_MetaData[] = {
		{ "Category", "Spawn Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//should events be retriggered after they end\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "should events be retriggered after they end" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetriggerSpawnDelayRange_MetaData[] = {
		{ "Category", "Spawn Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Time range used for delaying retrigger playback\n" },
#endif
		{ "EditCondition", "bRespawnAfterFirstEvent" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time range used for delaying retrigger playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnedElemetns_MetaData[] = {
		{ "Category", "Spawn Amount" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//max number of spawned elements allowed\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "max number of spawned elements allowed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSpawnAwayFromActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnAwayFromActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalClamp;
	static void NewProp_bDelayFirstEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitailSpawnDelayRange;
	static void NewProp_bRespawnAfterFirstEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespawnAfterFirstEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RetriggerSpawnDelayRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnedElemetns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagSpawnInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bSpawnAwayFromActor_SetBit(void* Obj)
{
	((FAmbiTagSpawnInfo*)Obj)->bSpawnAwayFromActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bSpawnAwayFromActor = { "bSpawnAwayFromActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagSpawnInfo), &Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bSpawnAwayFromActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnAwayFromActor_MetaData), NewProp_bSpawnAwayFromActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_DistanceRange = { "DistanceRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, DistanceRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceRange_MetaData), NewProp_DistanceRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_VerticalClamp = { "VerticalClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, VerticalClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalClamp_MetaData), NewProp_VerticalClamp_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bDelayFirstEvent_SetBit(void* Obj)
{
	((FAmbiTagSpawnInfo*)Obj)->bDelayFirstEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bDelayFirstEvent = { "bDelayFirstEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagSpawnInfo), &Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bDelayFirstEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayFirstEvent_MetaData), NewProp_bDelayFirstEvent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_InitailSpawnDelayRange = { "InitailSpawnDelayRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, InitailSpawnDelayRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitailSpawnDelayRange_MetaData), NewProp_InitailSpawnDelayRange_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bRespawnAfterFirstEvent_SetBit(void* Obj)
{
	((FAmbiTagSpawnInfo*)Obj)->bRespawnAfterFirstEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bRespawnAfterFirstEvent = { "bRespawnAfterFirstEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagSpawnInfo), &Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bRespawnAfterFirstEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespawnAfterFirstEvent_MetaData), NewProp_bRespawnAfterFirstEvent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_RetriggerSpawnDelayRange = { "RetriggerSpawnDelayRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, RetriggerSpawnDelayRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetriggerSpawnDelayRange_MetaData), NewProp_RetriggerSpawnDelayRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_MaxSpawnedElemetns = { "MaxSpawnedElemetns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, MaxSpawnedElemetns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnedElemetns_MetaData), NewProp_MaxSpawnedElemetns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bSpawnAwayFromActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_DistanceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_VerticalClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bDelayFirstEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_InitailSpawnDelayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bRespawnAfterFirstEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_RetriggerSpawnDelayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_MaxSpawnedElemetns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagSpawnInfo",
	Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::PropPointers),
	sizeof(FAmbiTagSpawnInfo),
	alignof(FAmbiTagSpawnInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagSpawnInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo.InnerSingleton;
}
// End ScriptStruct FAmbiTagSpawnInfo

// Begin Class UAmbiTagEvent Function EventStart
struct Z_Construct_UFunction_UAmbiTagEvent_EventStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Plays event\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEvent_EventStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEvent, nullptr, "EventStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_EventStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEvent_EventStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAmbiTagEvent_EventStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEvent_EventStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEvent::execEventStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventStart();
	P_NATIVE_END;
}
// End Class UAmbiTagEvent Function EventStart

// Begin Class UAmbiTagEvent Function GetEventLocation
struct Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics
{
	struct AmbiTagEvent_eventGetEventLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//gets location sound will be spawned at\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "gets location sound will be spawned at" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEvent_eventGetEventLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEvent, nullptr, "GetEventLocation", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::AmbiTagEvent_eventGetEventLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::AmbiTagEvent_eventGetEventLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEvent::execGetEventLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetEventLocation();
	P_NATIVE_END;
}
// End Class UAmbiTagEvent Function GetEventLocation

// Begin Class UAmbiTagEvent Function SetUp
struct Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics
{
	struct AmbiTagEvent_eventSetUp_Parms
	{
		AActor* Parent;
		USceneComponent* SpawnComp;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEvent_eventSetUp_Parms, Parent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_SpawnComp = { "SpawnComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEvent_eventSetUp_Parms, SpawnComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnComp_MetaData), NewProp_SpawnComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEvent_SetUp_Statics::NewProp_SpawnComp,
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
	P_GET_OBJECT(AActor,Z_Param_Parent);
	P_GET_OBJECT(USceneComponent,Z_Param_SpawnComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUp(Z_Param_Parent,Z_Param_SpawnComp);
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

// Begin Class UAmbiTagEvent Function TimingDelay
struct Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics
{
	struct AmbiTagEvent_eventTimingDelay_Parms
	{
		FVector2D DelayRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Random time delay\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random time delay" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelayRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::NewProp_DelayRange = { "DelayRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEvent_eventTimingDelay_Parms, DelayRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::NewProp_DelayRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEvent, nullptr, "TimingDelay", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::AmbiTagEvent_eventTimingDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::AmbiTagEvent_eventTimingDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagEvent_TimingDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEvent_TimingDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEvent::execTimingDelay)
{
	P_GET_STRUCT(FVector2D,Z_Param_DelayRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimingDelay(Z_Param_DelayRange);
	P_NATIVE_END;
}
// End Class UAmbiTagEvent Function TimingDelay

// Begin Class UAmbiTagEvent
void UAmbiTagEvent::StaticRegisterNativesUAmbiTagEvent()
{
	UClass* Class = UAmbiTagEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EventStart", &UAmbiTagEvent::execEventStart },
		{ "GetEventLocation", &UAmbiTagEvent::execGetEventLocation },
		{ "SetUp", &UAmbiTagEvent::execSetUp },
		{ "StopEvent", &UAmbiTagEvent::execStopEvent },
		{ "TimingDelay", &UAmbiTagEvent::execTimingDelay },
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
		{ "IncludePath", "AmbiTagEvent.h" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseEvents_MetaData[] = {
		{ "Category", "AmbiTagEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\\\\\n// \n//Assocaited Wwise events\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables\\\\\n\nAssocaited Wwise events" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Actor this component is attached too\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor this component is attached too" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudCompArray_MetaData[] = {
		{ "Category", "AmbiTagEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Array of AkComponents used to tracking playback\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of AkComponents used to tracking playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "AmbiTagEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//debug bool\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "debug bool" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnValues;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudCompArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudCompArray;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmbiTagEvent_EventStart, "EventStart" }, // 1819840612
		{ &Z_Construct_UFunction_UAmbiTagEvent_GetEventLocation, "GetEventLocation" }, // 4110939693
		{ &Z_Construct_UFunction_UAmbiTagEvent_SetUp, "SetUp" }, // 72712307
		{ &Z_Construct_UFunction_UAmbiTagEvent_StopEvent, "StopEvent" }, // 1729925199
		{ &Z_Construct_UFunction_UAmbiTagEvent_TimingDelay, "TimingDelay" }, // 3703263797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_WwiseEvents = { "WwiseEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, WwiseEvents), Z_Construct_UScriptStruct_FAmbiTagWwiseEvents, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseEvents_MetaData), NewProp_WwiseEvents_MetaData) }; // 1064566894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnValues = { "SpawnValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, SpawnValues), Z_Construct_UScriptStruct_FAmbiTagSpawnInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnValues_MetaData), NewProp_SpawnValues_MetaData) }; // 3814631030
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnSource = { "SpawnSource", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, SpawnSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSource_MetaData), NewProp_SpawnSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentActor_MetaData), NewProp_ParentActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_AudCompArray_Inner = { "AudCompArray", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_AudCompArray = { "AudCompArray", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEvent, AudCompArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudCompArray_MetaData), NewProp_AudCompArray_MetaData) };
void Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UAmbiTagEvent*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAmbiTagEvent), &Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbiTagEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_WwiseEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_SpawnSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_AudCompArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_AudCompArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEvent_Statics::NewProp_bDebug,
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
struct Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAmbiTagWwiseEvents::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagWwiseEvents_Statics::NewStructOps, TEXT("AmbiTagWwiseEvents"), &Z_Registration_Info_UScriptStruct_AmbiTagWwiseEvents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagWwiseEvents), 1064566894U) },
		{ FAmbiTagSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewStructOps, TEXT("AmbiTagSpawnInfo"), &Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagSpawnInfo), 3814631030U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagEvent, UAmbiTagEvent::StaticClass, TEXT("UAmbiTagEvent"), &Z_Registration_Info_UClass_UAmbiTagEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagEvent), 3087603348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_4130336128(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
