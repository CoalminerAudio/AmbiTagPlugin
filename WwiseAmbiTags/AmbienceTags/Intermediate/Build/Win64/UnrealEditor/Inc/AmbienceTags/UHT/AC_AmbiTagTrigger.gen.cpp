// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AC_AmbiTagTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAC_AmbiTagTrigger() {}

// Begin Cross Module References
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAC_AmbiTagTrigger();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAC_AmbiTagTrigger_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagCollection_NoRegister();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagSubsystem_NoRegister();
AMBIENCETAGS_API UFunction* Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin Delegate FActivationChange
struct Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics
{
	struct _Script_AmbienceTags_eventActivationChange_Parms
	{
		bool Activated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Activated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Activated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::NewProp_Activated_SetBit(void* Obj)
{
	((_Script_AmbienceTags_eventActivationChange_Parms*)Obj)->Activated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::NewProp_Activated = { "Activated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AmbienceTags_eventActivationChange_Parms), &Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::NewProp_Activated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::NewProp_Activated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AmbienceTags, nullptr, "ActivationChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::_Script_AmbienceTags_eventActivationChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::_Script_AmbienceTags_eventActivationChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FActivationChange_DelegateWrapper(const FMulticastScriptDelegate& ActivationChange, bool Activated)
{
	struct _Script_AmbienceTags_eventActivationChange_Parms
	{
		bool Activated;
	};
	_Script_AmbienceTags_eventActivationChange_Parms Parms;
	Parms.Activated=Activated ? true : false;
	ActivationChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FActivationChange

// Begin Class UAC_AmbiTagTrigger Function AddComponentToTracker
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_AddComponentToTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_AddComponentToTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "AddComponentToTracker", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_AddComponentToTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_AddComponentToTracker_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_AddComponentToTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_AddComponentToTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execAddComponentToTracker)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddComponentToTracker();
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function AddComponentToTracker

// Begin Class UAC_AmbiTagTrigger Function AmbiTagsUpdateDelegate
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_AmbiTagsUpdateDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_AmbiTagsUpdateDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "AmbiTagsUpdateDelegate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_AmbiTagsUpdateDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_AmbiTagsUpdateDelegate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_AmbiTagsUpdateDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_AmbiTagsUpdateDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execAmbiTagsUpdateDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AmbiTagsUpdateDelegate();
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function AmbiTagsUpdateDelegate

// Begin Class UAC_AmbiTagTrigger Function CallActivated
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_CallActivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_CallActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "CallActivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_CallActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_CallActivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_CallActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_CallActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execCallActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallActivated();
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function CallActivated

// Begin Class UAC_AmbiTagTrigger Function CheckActiveTags
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckActiveTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckActiveTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "CheckActiveTags", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckActiveTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckActiveTags_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckActiveTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckActiveTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execCheckActiveTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckActiveTags();
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function CheckActiveTags

// Begin Class UAC_AmbiTagTrigger Function CheckInactiveTags
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckInactiveTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckInactiveTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "CheckInactiveTags", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckInactiveTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckInactiveTags_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckInactiveTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckInactiveTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execCheckInactiveTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckInactiveTags();
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function CheckInactiveTags

// Begin Class UAC_AmbiTagTrigger Function DebugEvent
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_DebugEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_DebugEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "DebugEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_DebugEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_DebugEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_DebugEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_DebugEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execDebugEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugEvent();
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function DebugEvent

// Begin Class UAC_AmbiTagTrigger Function OverrideSpawnComponent
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics
{
	struct AC_AmbiTagTrigger_eventOverrideSpawnComponent_Parms
	{
		USceneComponent* SceneComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//functions\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "functions\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_AmbiTagTrigger_eventOverrideSpawnComponent_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::NewProp_SceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "OverrideSpawnComponent", nullptr, nullptr, Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::AC_AmbiTagTrigger_eventOverrideSpawnComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::AC_AmbiTagTrigger_eventOverrideSpawnComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execOverrideSpawnComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverrideSpawnComponent(Z_Param_SceneComponent);
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function OverrideSpawnComponent

// Begin Class UAC_AmbiTagTrigger Function SendDebugInfo
struct Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics
{
	struct AC_AmbiTagTrigger_eventSendDebugInfo_Parms
	{
		bool Remove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Remove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Remove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::NewProp_Remove_SetBit(void* Obj)
{
	((AC_AmbiTagTrigger_eventSendDebugInfo_Parms*)Obj)->Remove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::NewProp_Remove = { "Remove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_AmbiTagTrigger_eventSendDebugInfo_Parms), &Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::NewProp_Remove_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::NewProp_Remove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAC_AmbiTagTrigger, nullptr, "SendDebugInfo", nullptr, nullptr, Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::AC_AmbiTagTrigger_eventSendDebugInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::AC_AmbiTagTrigger_eventSendDebugInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAC_AmbiTagTrigger::execSendDebugInfo)
{
	P_GET_UBOOL(Z_Param_Remove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendDebugInfo(Z_Param_Remove);
	P_NATIVE_END;
}
// End Class UAC_AmbiTagTrigger Function SendDebugInfo

// Begin Class UAC_AmbiTagTrigger
void UAC_AmbiTagTrigger::StaticRegisterNativesUAC_AmbiTagTrigger()
{
	UClass* Class = UAC_AmbiTagTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddComponentToTracker", &UAC_AmbiTagTrigger::execAddComponentToTracker },
		{ "AmbiTagsUpdateDelegate", &UAC_AmbiTagTrigger::execAmbiTagsUpdateDelegate },
		{ "CallActivated", &UAC_AmbiTagTrigger::execCallActivated },
		{ "CheckActiveTags", &UAC_AmbiTagTrigger::execCheckActiveTags },
		{ "CheckInactiveTags", &UAC_AmbiTagTrigger::execCheckInactiveTags },
		{ "DebugEvent", &UAC_AmbiTagTrigger::execDebugEvent },
		{ "OverrideSpawnComponent", &UAC_AmbiTagTrigger::execOverrideSpawnComponent },
		{ "SendDebugInfo", &UAC_AmbiTagTrigger::execSendDebugInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAC_AmbiTagTrigger);
UClass* Z_Construct_UClass_UAC_AmbiTagTrigger_NoRegister()
{
	return UAC_AmbiTagTrigger::StaticClass();
}
struct Z_Construct_UClass_UAC_AmbiTagTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AC_AmbiTagTrigger.h" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ambiTagSubsystem_MetaData[] = {
		{ "Category", "AC_AmbiTagTrigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables\\\\" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "Category", "Spawn Values" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnComponent_MetaData[] = {
		{ "Category", "Spawn Values" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbiTagCollectionList_MetaData[] = {
		{ "Category", "Spawn Values" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAmbiTagCollections_MetaData[] = {
		{ "Category", "Debug Values" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveAmbiTagCollections_MetaData[] = {
		{ "Category", "Debug Values" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "Category", "Debug Values" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasActiveEvents_MetaData[] = {
		{ "Category", "AC_AmbiTagTrigger" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "AC_AmbiTagTrigger" },
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//delegates\\\\\n" },
#endif
		{ "ModuleRelativePath", "Public/AC_AmbiTagTrigger.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "delegates\\\\" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ambiTagSubsystem;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmbiTagCollectionList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AmbiTagCollectionList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAmbiTagCollections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAmbiTagCollections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveAmbiTagCollections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InactiveAmbiTagCollections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
	static void NewProp_bHasActiveEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasActiveEvents;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActivationChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_AddComponentToTracker, "AddComponentToTracker" }, // 3324041252
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_AmbiTagsUpdateDelegate, "AmbiTagsUpdateDelegate" }, // 3525517979
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_CallActivated, "CallActivated" }, // 1385545344
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckActiveTags, "CheckActiveTags" }, // 3362610893
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_CheckInactiveTags, "CheckInactiveTags" }, // 3146352839
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_DebugEvent, "DebugEvent" }, // 1858185343
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_OverrideSpawnComponent, "OverrideSpawnComponent" }, // 2691048944
		{ &Z_Construct_UFunction_UAC_AmbiTagTrigger_SendDebugInfo, "SendDebugInfo" }, // 3887950334
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAC_AmbiTagTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ambiTagSubsystem = { "ambiTagSubsystem", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_AmbiTagTrigger, ambiTagSubsystem), Z_Construct_UClass_UAmbiTagSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ambiTagSubsystem_MetaData), NewProp_ambiTagSubsystem_MetaData) };
void Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((UAC_AmbiTagTrigger*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAC_AmbiTagTrigger), &Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_SpawnComponent = { "SpawnComponent", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_AmbiTagTrigger, SpawnComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnComponent_MetaData), NewProp_SpawnComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_AmbiTagCollectionList_Inner = { "AmbiTagCollectionList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAmbiTagCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_AmbiTagCollectionList = { "AmbiTagCollectionList", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_AmbiTagTrigger, AmbiTagCollectionList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbiTagCollectionList_MetaData), NewProp_AmbiTagCollectionList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ActiveAmbiTagCollections_Inner = { "ActiveAmbiTagCollections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAmbiTagCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ActiveAmbiTagCollections = { "ActiveAmbiTagCollections", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_AmbiTagTrigger, ActiveAmbiTagCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAmbiTagCollections_MetaData), NewProp_ActiveAmbiTagCollections_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_InactiveAmbiTagCollections_Inner = { "InactiveAmbiTagCollections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAmbiTagCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_InactiveAmbiTagCollections = { "InactiveAmbiTagCollections", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_AmbiTagTrigger, InactiveAmbiTagCollections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveAmbiTagCollections_MetaData), NewProp_InactiveAmbiTagCollections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_AmbiTagTrigger, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
void Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bHasActiveEvents_SetBit(void* Obj)
{
	((UAC_AmbiTagTrigger*)Obj)->bHasActiveEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bHasActiveEvents = { "bHasActiveEvents", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAC_AmbiTagTrigger), &Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bHasActiveEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasActiveEvents_MetaData), NewProp_bHasActiveEvents_MetaData) };
void Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UAC_AmbiTagTrigger*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAC_AmbiTagTrigger), &Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ActivationChanged = { "ActivationChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAC_AmbiTagTrigger, ActivationChanged), Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationChanged_MetaData), NewProp_ActivationChanged_MetaData) }; // 121993631
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ambiTagSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_SpawnComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_AmbiTagCollectionList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_AmbiTagCollectionList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ActiveAmbiTagCollections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ActiveAmbiTagCollections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_InactiveAmbiTagCollections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_InactiveAmbiTagCollections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bHasActiveEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::NewProp_ActivationChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::ClassParams = {
	&UAC_AmbiTagTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAC_AmbiTagTrigger()
{
	if (!Z_Registration_Info_UClass_UAC_AmbiTagTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAC_AmbiTagTrigger.OuterSingleton, Z_Construct_UClass_UAC_AmbiTagTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAC_AmbiTagTrigger.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<UAC_AmbiTagTrigger>()
{
	return UAC_AmbiTagTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAC_AmbiTagTrigger);
UAC_AmbiTagTrigger::~UAC_AmbiTagTrigger() {}
// End Class UAC_AmbiTagTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAC_AmbiTagTrigger, UAC_AmbiTagTrigger::StaticClass, TEXT("UAC_AmbiTagTrigger"), &Z_Registration_Info_UClass_UAC_AmbiTagTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAC_AmbiTagTrigger), 3810159665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_841828696(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
