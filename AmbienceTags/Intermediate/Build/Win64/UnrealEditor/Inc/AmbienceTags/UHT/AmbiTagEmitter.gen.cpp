// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbiTagEmitter.h"
#include "AmbienceTags/Public/AmbienceTagsData.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagEmitter() {}

// Begin Cross Module References
AMBIENCETAGS_API UClass* Z_Construct_UClass_AAmbiTagEmitter();
AMBIENCETAGS_API UClass* Z_Construct_UClass_AAmbiTagEmitter_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagSubsystem_NoRegister();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagAudioEvent();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagSpawnInfo();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin Class AAmbiTagEmitter Function DebugEmitter
struct Z_Construct_UFunction_AAmbiTagEmitter_DebugEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_DebugEmitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "DebugEmitter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_DebugEmitter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_DebugEmitter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_DebugEmitter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_DebugEmitter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execDebugEmitter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugEmitter();
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function DebugEmitter

// Begin Class AAmbiTagEmitter Function EventCallback
struct Z_Construct_UFunction_AAmbiTagEmitter_EventCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_EventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "EventCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_EventCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_EventCallback_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_EventCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_EventCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execEventCallback)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventCallback();
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function EventCallback

// Begin Class AAmbiTagEmitter Function EventDetriggered
struct Z_Construct_UFunction_AAmbiTagEmitter_EventDetriggered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_EventDetriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "EventDetriggered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_EventDetriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_EventDetriggered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_EventDetriggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_EventDetriggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execEventDetriggered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventDetriggered();
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function EventDetriggered

// Begin Class AAmbiTagEmitter Function EventEnded
struct Z_Construct_UFunction_AAmbiTagEmitter_EventEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_EventEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "EventEnded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_EventEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_EventEnded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_EventEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_EventEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execEventEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EventEnded();
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function EventEnded

// Begin Class AAmbiTagEmitter Function PlayAudio
struct Z_Construct_UFunction_AAmbiTagEmitter_PlayAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_PlayAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "PlayAudio", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_PlayAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_PlayAudio_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_PlayAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_PlayAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execPlayAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAudio();
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function PlayAudio

// Begin Class AAmbiTagEmitter Function SetSoundLocation
struct Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics
{
	struct AmbiTagEmitter_eventSetSoundLocation_Parms
	{
		FVector StartingLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventSetSoundLocation_Parms, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventSetSoundLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::NewProp_StartingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "SetSoundLocation", nullptr, nullptr, Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::AmbiTagEmitter_eventSetSoundLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::AmbiTagEmitter_eventSetSoundLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execSetSoundLocation)
{
	P_GET_STRUCT(FVector,Z_Param_StartingLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->SetSoundLocation(Z_Param_StartingLocation);
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function SetSoundLocation

// Begin Class AAmbiTagEmitter Function StartAmbiSource
struct Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics
{
	struct AmbiTagEmitter_eventStartAmbiSource_Parms
	{
		USceneComponent* componentValue;
		FAmbiTagAudioEvent eventValues;
		FAmbiTagSpawnInfo spawnValues;
		FName AmbitagCollectionName;
		FName AmbiTagEventName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_componentValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_componentValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_eventValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_spawnValues;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AmbitagCollectionName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AmbiTagEventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_componentValue = { "componentValue", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventStartAmbiSource_Parms, componentValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_componentValue_MetaData), NewProp_componentValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_eventValues = { "eventValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventStartAmbiSource_Parms, eventValues), Z_Construct_UScriptStruct_FAmbiTagAudioEvent, METADATA_PARAMS(0, nullptr) }; // 1857380522
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_spawnValues = { "spawnValues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventStartAmbiSource_Parms, spawnValues), Z_Construct_UScriptStruct_FAmbiTagSpawnInfo, METADATA_PARAMS(0, nullptr) }; // 1023506501
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_AmbitagCollectionName = { "AmbitagCollectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventStartAmbiSource_Parms, AmbitagCollectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_AmbiTagEventName = { "AmbiTagEventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventStartAmbiSource_Parms, AmbiTagEventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_componentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_eventValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_spawnValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_AmbitagCollectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::NewProp_AmbiTagEventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "StartAmbiSource", nullptr, nullptr, Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::AmbiTagEmitter_eventStartAmbiSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::AmbiTagEmitter_eventStartAmbiSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execStartAmbiSource)
{
	P_GET_OBJECT(USceneComponent,Z_Param_componentValue);
	P_GET_STRUCT(FAmbiTagAudioEvent,Z_Param_eventValues);
	P_GET_STRUCT(FAmbiTagSpawnInfo,Z_Param_spawnValues);
	P_GET_PROPERTY(FNameProperty,Z_Param_AmbitagCollectionName);
	P_GET_PROPERTY(FNameProperty,Z_Param_AmbiTagEventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAmbiSource(Z_Param_componentValue,Z_Param_eventValues,Z_Param_spawnValues,Z_Param_AmbitagCollectionName,Z_Param_AmbiTagEventName);
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function StartAmbiSource

// Begin Class AAmbiTagEmitter Function TriggerDelay
struct Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics
{
	struct AmbiTagEmitter_eventTriggerDelay_Parms
	{
		FVector2D DelayRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//functions\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "functions\\\\" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DelayRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::NewProp_DelayRange = { "DelayRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagEmitter_eventTriggerDelay_Parms, DelayRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::NewProp_DelayRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmbiTagEmitter, nullptr, "TriggerDelay", nullptr, nullptr, Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::AmbiTagEmitter_eventTriggerDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::AmbiTagEmitter_eventTriggerDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAmbiTagEmitter::execTriggerDelay)
{
	P_GET_STRUCT(FVector2D,Z_Param_DelayRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerDelay(Z_Param_DelayRange);
	P_NATIVE_END;
}
// End Class AAmbiTagEmitter Function TriggerDelay

// Begin Class AAmbiTagEmitter
void AAmbiTagEmitter::StaticRegisterNativesAAmbiTagEmitter()
{
	UClass* Class = AAmbiTagEmitter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugEmitter", &AAmbiTagEmitter::execDebugEmitter },
		{ "EventCallback", &AAmbiTagEmitter::execEventCallback },
		{ "EventDetriggered", &AAmbiTagEmitter::execEventDetriggered },
		{ "EventEnded", &AAmbiTagEmitter::execEventEnded },
		{ "PlayAudio", &AAmbiTagEmitter::execPlayAudio },
		{ "SetSoundLocation", &AAmbiTagEmitter::execSetSoundLocation },
		{ "StartAmbiSource", &AAmbiTagEmitter::execStartAmbiSource },
		{ "TriggerDelay", &AAmbiTagEmitter::execTriggerDelay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmbiTagEmitter);
UClass* Z_Construct_UClass_AAmbiTagEmitter_NoRegister()
{
	return AAmbiTagEmitter::StaticClass();
}
struct Z_Construct_UClass_AAmbiTagEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AmbiTagEmitter.h" },
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ambiTagSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "AmbiTagEmitter" },
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\\\\\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioDelayTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndingEventTriggered_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ambiTagSubsystem;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugPoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioDelayTimer;
	static void NewProp_bEndingEventTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndingEventTriggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmbiTagEmitter_DebugEmitter, "DebugEmitter" }, // 2112414133
		{ &Z_Construct_UFunction_AAmbiTagEmitter_EventCallback, "EventCallback" }, // 4115223326
		{ &Z_Construct_UFunction_AAmbiTagEmitter_EventDetriggered, "EventDetriggered" }, // 2957220688
		{ &Z_Construct_UFunction_AAmbiTagEmitter_EventEnded, "EventEnded" }, // 4231977705
		{ &Z_Construct_UFunction_AAmbiTagEmitter_PlayAudio, "PlayAudio" }, // 3285826266
		{ &Z_Construct_UFunction_AAmbiTagEmitter_SetSoundLocation, "SetSoundLocation" }, // 3750348346
		{ &Z_Construct_UFunction_AAmbiTagEmitter_StartAmbiSource, "StartAmbiSource" }, // 3066673023
		{ &Z_Construct_UFunction_AAmbiTagEmitter_TriggerDelay, "TriggerDelay" }, // 533794493
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmbiTagEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_AudioEvents = { "AudioEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, AudioEvents), Z_Construct_UScriptStruct_FAmbiTagAudioEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioEvents_MetaData), NewProp_AudioEvents_MetaData) }; // 1857380522
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_SpawnInfo = { "SpawnInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, SpawnInfo), Z_Construct_UScriptStruct_FAmbiTagSpawnInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInfo_MetaData), NewProp_SpawnInfo_MetaData) }; // 1023506501
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_ambiTagSubsystem = { "ambiTagSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, ambiTagSubsystem), Z_Construct_UClass_UAmbiTagSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ambiTagSubsystem_MetaData), NewProp_ambiTagSubsystem_MetaData) };
void Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((AAmbiTagEmitter*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAmbiTagEmitter), &Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, DebugTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTime_MetaData), NewProp_DebugTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_AudComp = { "AudComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, AudComp), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudComp_MetaData), NewProp_AudComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_DebugPoint = { "DebugPoint", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, DebugPoint), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPoint_MetaData), NewProp_DebugPoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_SpawnSource = { "SpawnSource", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, SpawnSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSource_MetaData), NewProp_SpawnSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_AudioDelayTimer = { "AudioDelayTimer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmbiTagEmitter, AudioDelayTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioDelayTimer_MetaData), NewProp_AudioDelayTimer_MetaData) }; // 756291145
void Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bEndingEventTriggered_SetBit(void* Obj)
{
	((AAmbiTagEmitter*)Obj)->bEndingEventTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bEndingEventTriggered = { "bEndingEventTriggered", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAmbiTagEmitter), &Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bEndingEventTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndingEventTriggered_MetaData), NewProp_bEndingEventTriggered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmbiTagEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_AudioEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_SpawnInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_ambiTagSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_DebugTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_AudComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_DebugPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_SpawnSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_AudioDelayTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbiTagEmitter_Statics::NewProp_bEndingEventTriggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmbiTagEmitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAmbiTagEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmbiTagEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmbiTagEmitter_Statics::ClassParams = {
	&AAmbiTagEmitter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAmbiTagEmitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAmbiTagEmitter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmbiTagEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmbiTagEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAmbiTagEmitter()
{
	if (!Z_Registration_Info_UClass_AAmbiTagEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmbiTagEmitter.OuterSingleton, Z_Construct_UClass_AAmbiTagEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAmbiTagEmitter.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<AAmbiTagEmitter>()
{
	return AAmbiTagEmitter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAmbiTagEmitter);
AAmbiTagEmitter::~AAmbiTagEmitter() {}
// End Class AAmbiTagEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAmbiTagEmitter, AAmbiTagEmitter::StaticClass, TEXT("AAmbiTagEmitter"), &Z_Registration_Info_UClass_AAmbiTagEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmbiTagEmitter), 2413127821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_1812014590(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
