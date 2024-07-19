// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbienceTagsData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbienceTagsData() {}

// Begin Cross Module References
AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagCollectionDraft();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagCollectionDraft_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagEventDraft();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagEventDraft_NoRegister();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin ScriptStruct FAmbiTagCollectionDebugInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo;
class UScriptStruct* FAmbiTagCollectionDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagCollectionDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagCollectionDebugInfo>()
{
	return FAmbiTagCollectionDebugInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugNames_MetaData[] = {
		{ "Category", "AmbiTagCollectionDebugInfo" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagCollectionDebugInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::NewProp_DebugNames_Inner = { "DebugNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::NewProp_DebugNames = { "DebugNames", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagCollectionDebugInfo, DebugNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugNames_MetaData), NewProp_DebugNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::NewProp_DebugNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::NewProp_DebugNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagCollectionDebugInfo",
	Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::PropPointers),
	sizeof(FAmbiTagCollectionDebugInfo),
	alignof(FAmbiTagCollectionDebugInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo.InnerSingleton;
}
// End ScriptStruct FAmbiTagCollectionDebugInfo

// Begin ScriptStruct FAmbiTagWwiseEventsDraft
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft;
class UScriptStruct* FAmbiTagWwiseEventsDraft::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagWwiseEventsDraft"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagWwiseEventsDraft>()
{
	return FAmbiTagWwiseEventsDraft::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[] = {
		{ "Category", "AmbiTagWwiseEventsDraft" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopEvent_MetaData[] = {
		{ "Category", "AmbiTagWwiseEventsDraft" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagWwiseEventsDraft>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagWwiseEventsDraft, StartEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEvent_MetaData), NewProp_StartEvent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::NewProp_StopEvent = { "StopEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagWwiseEventsDraft, StopEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopEvent_MetaData), NewProp_StopEvent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::NewProp_StartEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::NewProp_StopEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagWwiseEventsDraft",
	Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::PropPointers),
	sizeof(FAmbiTagWwiseEventsDraft),
	alignof(FAmbiTagWwiseEventsDraft),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft.InnerSingleton;
}
// End ScriptStruct FAmbiTagWwiseEventsDraft

// Begin ScriptStruct FAmbiTagSpawnInfoDraft
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft;
class UScriptStruct* FAmbiTagSpawnInfoDraft::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagSpawnInfoDraft"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagSpawnInfoDraft>()
{
	return FAmbiTagSpawnInfoDraft::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRange_MetaData[] = {
		{ "Category", "Distance Values" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRange_MetaData[] = {
		{ "Category", "Distance Values" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[] = {
		{ "Category", "Time Values" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstEvent_MetaData[] = {
		{ "Category", "Distance Values" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespawnAfterFirstEvent_MetaData[] = {
		{ "Category", "Distance Values" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnedElemetns_MetaData[] = {
		{ "Category", "Distance Values" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RespawnTime;
	static void NewProp_bDelayFirstEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstEvent;
	static void NewProp_bRespawnAfterFirstEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespawnAfterFirstEvent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnedElemetns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagSpawnInfoDraft>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_HorizontalRange = { "HorizontalRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfoDraft, HorizontalRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalRange_MetaData), NewProp_HorizontalRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_VerticalRange = { "VerticalRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfoDraft, VerticalRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalRange_MetaData), NewProp_VerticalRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfoDraft, RespawnTime), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnTime_MetaData), NewProp_RespawnTime_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bDelayFirstEvent_SetBit(void* Obj)
{
	((FAmbiTagSpawnInfoDraft*)Obj)->bDelayFirstEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bDelayFirstEvent = { "bDelayFirstEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagSpawnInfoDraft), &Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bDelayFirstEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayFirstEvent_MetaData), NewProp_bDelayFirstEvent_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bRespawnAfterFirstEvent_SetBit(void* Obj)
{
	((FAmbiTagSpawnInfoDraft*)Obj)->bRespawnAfterFirstEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bRespawnAfterFirstEvent = { "bRespawnAfterFirstEvent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagSpawnInfoDraft), &Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bRespawnAfterFirstEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespawnAfterFirstEvent_MetaData), NewProp_bRespawnAfterFirstEvent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_MaxSpawnedElemetns = { "MaxSpawnedElemetns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfoDraft, MaxSpawnedElemetns), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnedElemetns_MetaData), NewProp_MaxSpawnedElemetns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_HorizontalRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_VerticalRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_RespawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bDelayFirstEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_bRespawnAfterFirstEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewProp_MaxSpawnedElemetns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagSpawnInfoDraft",
	Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::PropPointers),
	sizeof(FAmbiTagSpawnInfoDraft),
	alignof(FAmbiTagSpawnInfoDraft),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft.InnerSingleton;
}
// End ScriptStruct FAmbiTagSpawnInfoDraft

// Begin Class UAmbiTagEventDraft Function EventStart
struct Z_Construct_UFunction_UAmbiTagEventDraft_EventStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEventDraft_EventStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEventDraft, nullptr, "EventStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_EventStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEventDraft_EventStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAmbiTagEventDraft_EventStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEventDraft_EventStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEventDraft::execEventStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventStart();
	P_NATIVE_END;
}
// End Class UAmbiTagEventDraft Function EventStart

// Begin Class UAmbiTagEventDraft Function SetEventLocation
struct Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics
{
	struct AmbiTagEventDraft_eventSetEventLocation_Parms
	{
		FVector ComponentLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::NewProp_ComponentLocation = { "ComponentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEventDraft_eventSetEventLocation_Parms, ComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEventDraft_eventSetEventLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::NewProp_ComponentLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEventDraft, nullptr, "SetEventLocation", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::AmbiTagEventDraft_eventSetEventLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::AmbiTagEventDraft_eventSetEventLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEventDraft::execSetEventLocation)
{
	P_GET_STRUCT(FVector,Z_Param_ComponentLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->SetEventLocation(Z_Param_ComponentLocation);
	P_NATIVE_END;
}
// End Class UAmbiTagEventDraft Function SetEventLocation

// Begin Class UAmbiTagEventDraft Function SetUp
struct Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics
{
	struct AmbiTagEventDraft_eventSetUp_Parms
	{
		USceneComponent* LocationComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::NewProp_LocationComp = { "LocationComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEventDraft_eventSetUp_Parms, LocationComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationComp_MetaData), NewProp_LocationComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::NewProp_LocationComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEventDraft, nullptr, "SetUp", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::AmbiTagEventDraft_eventSetUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::AmbiTagEventDraft_eventSetUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagEventDraft_SetUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEventDraft_SetUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEventDraft::execSetUp)
{
	P_GET_OBJECT(USceneComponent,Z_Param_LocationComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUp(Z_Param_LocationComp);
	P_NATIVE_END;
}
// End Class UAmbiTagEventDraft Function SetUp

// Begin Class UAmbiTagEventDraft Function StopEvent
struct Z_Construct_UFunction_UAmbiTagEventDraft_StopEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEventDraft_StopEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEventDraft, nullptr, "StopEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_StopEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEventDraft_StopEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAmbiTagEventDraft_StopEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEventDraft_StopEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEventDraft::execStopEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopEvent();
	P_NATIVE_END;
}
// End Class UAmbiTagEventDraft Function StopEvent

// Begin Class UAmbiTagEventDraft Function TimingDelay
struct Z_Construct_UFunction_UAmbiTagEventDraft_TimingDelay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagEventDraft_TimingDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagEventDraft, nullptr, "TimingDelay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagEventDraft_TimingDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagEventDraft_TimingDelay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAmbiTagEventDraft_TimingDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagEventDraft_TimingDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagEventDraft::execTimingDelay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimingDelay();
	P_NATIVE_END;
}
// End Class UAmbiTagEventDraft Function TimingDelay

// Begin Class UAmbiTagEventDraft
void UAmbiTagEventDraft::StaticRegisterNativesUAmbiTagEventDraft()
{
	UClass* Class = UAmbiTagEventDraft::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EventStart", &UAmbiTagEventDraft::execEventStart },
		{ "SetEventLocation", &UAmbiTagEventDraft::execSetEventLocation },
		{ "SetUp", &UAmbiTagEventDraft::execSetUp },
		{ "StopEvent", &UAmbiTagEventDraft::execStopEvent },
		{ "TimingDelay", &UAmbiTagEventDraft::execTimingDelay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagEventDraft);
UClass* Z_Construct_UClass_UAmbiTagEventDraft_NoRegister()
{
	return UAmbiTagEventDraft::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagEventDraft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AmbienceTagsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WwiseEvents_MetaData[] = {
		{ "Category", "AmbiTagEventDraft" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfo_MetaData[] = {
		{ "Category", "AmbiTagEventDraft" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "AmbiTagEventDraft" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSource_MetaData[] = {
		{ "Category", "AmbiTagEventDraft" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scene Component to use for location spawning\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Component to use for location spawning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AkArray_MetaData[] = {
		{ "Category", "AmbiTagEventDraft" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WwiseEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AkArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AkArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmbiTagEventDraft_EventStart, "EventStart" }, // 3493825523
		{ &Z_Construct_UFunction_UAmbiTagEventDraft_SetEventLocation, "SetEventLocation" }, // 443617602
		{ &Z_Construct_UFunction_UAmbiTagEventDraft_SetUp, "SetUp" }, // 175338726
		{ &Z_Construct_UFunction_UAmbiTagEventDraft_StopEvent, "StopEvent" }, // 3637757974
		{ &Z_Construct_UFunction_UAmbiTagEventDraft_TimingDelay, "TimingDelay" }, // 3179534017
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagEventDraft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_WwiseEvents = { "WwiseEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEventDraft, WwiseEvents), Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WwiseEvents_MetaData), NewProp_WwiseEvents_MetaData) }; // 1537423510
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_SpawnInfo = { "SpawnInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEventDraft, SpawnInfo), Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInfo_MetaData), NewProp_SpawnInfo_MetaData) }; // 3077813006
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEventDraft, SpawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoint_MetaData), NewProp_SpawnPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_SpawnSource = { "SpawnSource", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEventDraft, SpawnSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSource_MetaData), NewProp_SpawnSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEventDraft, ParentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentActor_MetaData), NewProp_ParentActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_AkArray_Inner = { "AkArray", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_AkArray = { "AkArray", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagEventDraft, AkArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AkArray_MetaData), NewProp_AkArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbiTagEventDraft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_WwiseEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_SpawnInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_SpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_SpawnSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_AkArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagEventDraft_Statics::NewProp_AkArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEventDraft_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbiTagEventDraft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEventDraft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagEventDraft_Statics::ClassParams = {
	&UAmbiTagEventDraft::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAmbiTagEventDraft_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEventDraft_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagEventDraft_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagEventDraft_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagEventDraft()
{
	if (!Z_Registration_Info_UClass_UAmbiTagEventDraft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagEventDraft.OuterSingleton, Z_Construct_UClass_UAmbiTagEventDraft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagEventDraft.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<UAmbiTagEventDraft>()
{
	return UAmbiTagEventDraft::StaticClass();
}
UAmbiTagEventDraft::UAmbiTagEventDraft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagEventDraft);
UAmbiTagEventDraft::~UAmbiTagEventDraft() {}
// End Class UAmbiTagEventDraft

// Begin Class UAmbiTagCollectionDraft
void UAmbiTagCollectionDraft::StaticRegisterNativesUAmbiTagCollectionDraft()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagCollectionDraft);
UClass* Z_Construct_UClass_UAmbiTagCollectionDraft_NoRegister()
{
	return UAmbiTagCollectionDraft::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagCollectionDraft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AmbienceTagsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectionTriggerCondition_MetaData[] = {
		{ "Category", "AmbiTagCollectionDraft" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedAmbiTags_MetaData[] = {
		{ "Category", "AmbiTagCollectionDraft" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionTriggerCondition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedAmbiTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssociatedAmbiTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagCollectionDraft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::NewProp_CollectionTriggerCondition = { "CollectionTriggerCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagCollectionDraft, CollectionTriggerCondition), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectionTriggerCondition_MetaData), NewProp_CollectionTriggerCondition_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::NewProp_AssociatedAmbiTags_Inner = { "AssociatedAmbiTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAmbiTagEventDraft_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::NewProp_AssociatedAmbiTags = { "AssociatedAmbiTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagCollectionDraft, AssociatedAmbiTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedAmbiTags_MetaData), NewProp_AssociatedAmbiTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::NewProp_CollectionTriggerCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::NewProp_AssociatedAmbiTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::NewProp_AssociatedAmbiTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::ClassParams = {
	&UAmbiTagCollectionDraft::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagCollectionDraft()
{
	if (!Z_Registration_Info_UClass_UAmbiTagCollectionDraft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagCollectionDraft.OuterSingleton, Z_Construct_UClass_UAmbiTagCollectionDraft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagCollectionDraft.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<UAmbiTagCollectionDraft>()
{
	return UAmbiTagCollectionDraft::StaticClass();
}
UAmbiTagCollectionDraft::UAmbiTagCollectionDraft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagCollectionDraft);
UAmbiTagCollectionDraft::~UAmbiTagCollectionDraft() {}
// End Class UAmbiTagCollectionDraft

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAmbiTagCollectionDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::NewStructOps, TEXT("AmbiTagCollectionDebugInfo"), &Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagCollectionDebugInfo), 1357033588U) },
		{ FAmbiTagWwiseEventsDraft::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagWwiseEventsDraft_Statics::NewStructOps, TEXT("AmbiTagWwiseEventsDraft"), &Z_Registration_Info_UScriptStruct_AmbiTagWwiseEventsDraft, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagWwiseEventsDraft), 1537423510U) },
		{ FAmbiTagSpawnInfoDraft::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagSpawnInfoDraft_Statics::NewStructOps, TEXT("AmbiTagSpawnInfoDraft"), &Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfoDraft, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagSpawnInfoDraft), 3077813006U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagEventDraft, UAmbiTagEventDraft::StaticClass, TEXT("UAmbiTagEventDraft"), &Z_Registration_Info_UClass_UAmbiTagEventDraft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagEventDraft), 1525423374U) },
		{ Z_Construct_UClass_UAmbiTagCollectionDraft, UAmbiTagCollectionDraft::StaticClass, TEXT("UAmbiTagCollectionDraft"), &Z_Registration_Info_UClass_UAmbiTagCollectionDraft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagCollectionDraft), 2334473864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_1826867799(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
