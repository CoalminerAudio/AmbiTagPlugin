// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbiTagSubsystem.h"
#include "AmbienceTags/Public/AmbienceTagsData.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbiTagSubsystem() {}

// Begin Cross Module References
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagSubsystem();
AMBIENCETAGS_API UClass* Z_Construct_UClass_UAmbiTagSubsystem_NoRegister();
AMBIENCETAGS_API UFunction* Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature();
AMBIENCETAGS_API UFunction* Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AmbienceTags();
// End Cross Module References

// Begin Delegate FAmbiTagsUpdatedDelegate
struct Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AmbienceTags, nullptr, "AmbiTagsUpdatedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAmbiTagsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AmbiTagsUpdatedDelegate)
{
	AmbiTagsUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAmbiTagsUpdatedDelegate

// Begin Delegate FAmbiTagsDebugDelegate
struct Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AmbienceTags, nullptr, "AmbiTagsDebugDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAmbiTagsDebugDelegate_DelegateWrapper(const FMulticastScriptDelegate& AmbiTagsDebugDelegate)
{
	AmbiTagsDebugDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAmbiTagsDebugDelegate

// Begin Class UAmbiTagSubsystem Function AddAmbiTags
struct Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics
{
	struct AmbiTagSubsystem_eventAddAmbiTags_Parms
	{
		FGameplayTagContainer InTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::NewProp_InTags = { "InTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagSubsystem_eventAddAmbiTags_Parms, InTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::NewProp_InTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagSubsystem, nullptr, "AddAmbiTags", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::AmbiTagSubsystem_eventAddAmbiTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::AmbiTagSubsystem_eventAddAmbiTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagSubsystem::execAddAmbiTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_InTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAmbiTags(Z_Param_InTags);
	P_NATIVE_END;
}
// End Class UAmbiTagSubsystem Function AddAmbiTags

// Begin Class UAmbiTagSubsystem Function AmbiTagsUpdated
struct Z_Construct_UFunction_UAmbiTagSubsystem_AmbiTagsUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TODO: add system for tracking active tags\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: add system for tracking active tags" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagSubsystem_AmbiTagsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagSubsystem, nullptr, "AmbiTagsUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_AmbiTagsUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagSubsystem_AmbiTagsUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAmbiTagSubsystem_AmbiTagsUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagSubsystem_AmbiTagsUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagSubsystem::execAmbiTagsUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AmbiTagsUpdated();
	P_NATIVE_END;
}
// End Class UAmbiTagSubsystem Function AmbiTagsUpdated

// Begin Class UAmbiTagSubsystem Function RemoveAmbiTags
struct Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics
{
	struct AmbiTagSubsystem_eventRemoveAmbiTags_Parms
	{
		FGameplayTagContainer OutTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::NewProp_OutTags = { "OutTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagSubsystem_eventRemoveAmbiTags_Parms, OutTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::NewProp_OutTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagSubsystem, nullptr, "RemoveAmbiTags", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::AmbiTagSubsystem_eventRemoveAmbiTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::AmbiTagSubsystem_eventRemoveAmbiTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagSubsystem::execRemoveAmbiTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_OutTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAmbiTags(Z_Param_OutTags);
	P_NATIVE_END;
}
// End Class UAmbiTagSubsystem Function RemoveAmbiTags

// Begin Class UAmbiTagSubsystem Function UpdateDebugList
struct Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics
{
	struct AmbiTagSubsystem_eventUpdateDebugList_Parms
	{
		bool remove;
		FName SourceName;
		FAmbiTagCollectionDebugInfo ActiveCollections;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_remove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_remove;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveCollections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_remove_SetBit(void* Obj)
{
	((AmbiTagSubsystem_eventUpdateDebugList_Parms*)Obj)->remove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_remove = { "remove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AmbiTagSubsystem_eventUpdateDebugList_Parms), &Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_remove_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagSubsystem_eventUpdateDebugList_Parms, SourceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_ActiveCollections = { "ActiveCollections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmbiTagSubsystem_eventUpdateDebugList_Parms, ActiveCollections), Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo, METADATA_PARAMS(0, nullptr) }; // 1357033588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_remove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_SourceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::NewProp_ActiveCollections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbiTagSubsystem, nullptr, "UpdateDebugList", nullptr, nullptr, Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::AmbiTagSubsystem_eventUpdateDebugList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::AmbiTagSubsystem_eventUpdateDebugList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbiTagSubsystem::execUpdateDebugList)
{
	P_GET_UBOOL(Z_Param_remove);
	P_GET_PROPERTY(FNameProperty,Z_Param_SourceName);
	P_GET_STRUCT(FAmbiTagCollectionDebugInfo,Z_Param_ActiveCollections);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDebugList(Z_Param_remove,Z_Param_SourceName,Z_Param_ActiveCollections);
	P_NATIVE_END;
}
// End Class UAmbiTagSubsystem Function UpdateDebugList

// Begin Class UAmbiTagSubsystem
void UAmbiTagSubsystem::StaticRegisterNativesUAmbiTagSubsystem()
{
	UClass* Class = UAmbiTagSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAmbiTags", &UAmbiTagSubsystem::execAddAmbiTags },
		{ "AmbiTagsUpdated", &UAmbiTagSubsystem::execAmbiTagsUpdated },
		{ "RemoveAmbiTags", &UAmbiTagSubsystem::execRemoveAmbiTags },
		{ "UpdateDebugList", &UAmbiTagSubsystem::execUpdateDebugList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbiTagSubsystem);
UClass* Z_Construct_UClass_UAmbiTagSubsystem_NoRegister()
{
	return UAmbiTagSubsystem::StaticClass();
}
struct Z_Construct_UClass_UAmbiTagSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AmbiTagSubsystem.h" },
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbiTagDebugMap_MetaData[] = {
		{ "Category", "AmbiTagSubsystem" },
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAmbiTags_MetaData[] = {
		{ "Category", "AmbiTagSubsystem" },
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEmitterCount_MetaData[] = {
		{ "Category", "AmbiTagSubsystem" },
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEmitterCount_MetaData[] = {
		{ "Category", "AmbiTagSubsystem" },
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugEmitters_MetaData[] = {
		{ "Category", "AmbiTagSubsystem" },
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbiTagsUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbiTagDebugDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbiTagSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbiTagDebugMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AmbiTagDebugMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AmbiTagDebugMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAmbiTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEmitterCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentEmitterCount;
	static void NewProp_bDebugEmitters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugEmitters;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AmbiTagsUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AmbiTagDebugDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmbiTagSubsystem_AddAmbiTags, "AddAmbiTags" }, // 1931359294
		{ &Z_Construct_UFunction_UAmbiTagSubsystem_AmbiTagsUpdated, "AmbiTagsUpdated" }, // 1332189725
		{ &Z_Construct_UFunction_UAmbiTagSubsystem_RemoveAmbiTags, "RemoveAmbiTags" }, // 762179854
		{ &Z_Construct_UFunction_UAmbiTagSubsystem_UpdateDebugList, "UpdateDebugList" }, // 143280557
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbiTagSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugMap_ValueProp = { "AmbiTagDebugMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo, METADATA_PARAMS(0, nullptr) }; // 1357033588
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugMap_Key_KeyProp = { "AmbiTagDebugMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugMap = { "AmbiTagDebugMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSubsystem, AmbiTagDebugMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbiTagDebugMap_MetaData), NewProp_AmbiTagDebugMap_MetaData) }; // 1357033588
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_ActiveAmbiTags = { "ActiveAmbiTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSubsystem, ActiveAmbiTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAmbiTags_MetaData), NewProp_ActiveAmbiTags_MetaData) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_MaxEmitterCount = { "MaxEmitterCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSubsystem, MaxEmitterCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEmitterCount_MetaData), NewProp_MaxEmitterCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_CurrentEmitterCount = { "CurrentEmitterCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSubsystem, CurrentEmitterCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEmitterCount_MetaData), NewProp_CurrentEmitterCount_MetaData) };
void Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_bDebugEmitters_SetBit(void* Obj)
{
	((UAmbiTagSubsystem*)Obj)->bDebugEmitters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_bDebugEmitters = { "bDebugEmitters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAmbiTagSubsystem), &Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_bDebugEmitters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugEmitters_MetaData), NewProp_bDebugEmitters_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagsUpdateDelegate = { "AmbiTagsUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSubsystem, AmbiTagsUpdateDelegate), Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbiTagsUpdateDelegate_MetaData), NewProp_AmbiTagsUpdateDelegate_MetaData) }; // 2014319345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugDelegate = { "AmbiTagDebugDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbiTagSubsystem, AmbiTagDebugDelegate), Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbiTagDebugDelegate_MetaData), NewProp_AmbiTagDebugDelegate_MetaData) }; // 3748895996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbiTagSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_ActiveAmbiTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_MaxEmitterCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_CurrentEmitterCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_bDebugEmitters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagsUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbiTagSubsystem_Statics::NewProp_AmbiTagDebugDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbiTagSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbiTagSubsystem_Statics::ClassParams = {
	&UAmbiTagSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAmbiTagSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbiTagSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbiTagSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbiTagSubsystem()
{
	if (!Z_Registration_Info_UClass_UAmbiTagSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbiTagSubsystem.OuterSingleton, Z_Construct_UClass_UAmbiTagSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbiTagSubsystem.OuterSingleton;
}
template<> AMBIENCETAGS_API UClass* StaticClass<UAmbiTagSubsystem>()
{
	return UAmbiTagSubsystem::StaticClass();
}
UAmbiTagSubsystem::UAmbiTagSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbiTagSubsystem);
UAmbiTagSubsystem::~UAmbiTagSubsystem() {}
// End Class UAmbiTagSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbiTagSubsystem, UAmbiTagSubsystem::StaticClass, TEXT("UAmbiTagSubsystem"), &Z_Registration_Info_UClass_UAmbiTagSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbiTagSubsystem), 2674507097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_4177036255(TEXT("/Script/AmbienceTags"),
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
