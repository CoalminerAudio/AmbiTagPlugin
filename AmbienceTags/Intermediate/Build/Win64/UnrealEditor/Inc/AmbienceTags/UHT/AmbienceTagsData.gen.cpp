// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AmbienceTags/Public/AmbienceTagsData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbienceTagsData() {}

// Begin Cross Module References
AMBIENCETAGS_API UEnum* Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagAudioEvents();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagSpawnInfo();
AMBIENCETAGS_API UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
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

// Begin Enum EAmbiTagZoneType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmbiTagZoneType;
static UEnum* EAmbiTagZoneType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAmbiTagZoneType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAmbiTagZoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("EAmbiTagZoneType"));
	}
	return Z_Registration_Info_UEnum_EAmbiTagZoneType.OuterSingleton;
}
template<> AMBIENCETAGS_API UEnum* StaticEnum<EAmbiTagZoneType>()
{
	return EAmbiTagZoneType_StaticEnum();
}
struct Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.DisplayName", "Box Zone" },
		{ "Box.Name", "Box" },
		{ "Capsule.DisplayName", "Capsule Zone" },
		{ "Capsule.Name", "Capsule" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
		{ "Sphere.DisplayName", "Sphere Zone" },
		{ "Sphere.Name", "Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Box", (int64)Box },
		{ "Sphere", (int64)Sphere },
		{ "Capsule", (int64)Capsule },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	"EAmbiTagZoneType",
	"EAmbiTagZoneType",
	Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType()
{
	if (!Z_Registration_Info_UEnum_EAmbiTagZoneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmbiTagZoneType.InnerSingleton, Z_Construct_UEnum_AmbienceTags_EAmbiTagZoneType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAmbiTagZoneType.InnerSingleton;
}
// End Enum EAmbiTagZoneType

// Begin ScriptStruct FAmbiTagVaraitionParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters;
class UScriptStruct* FAmbiTagVaraitionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagVaraitionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagVaraitionParameters>()
{
	return FAmbiTagVaraitionParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pitchValue_MetaData[] = {
		{ "Category", "AmbiTagVaraitionParameters" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_volumeValue_MetaData[] = {
		{ "Category", "AmbiTagVaraitionParameters" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeinValue_MetaData[] = {
		{ "Category", "AmbiTagVaraitionParameters" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutValue_MetaData[] = {
		{ "Category", "AmbiTagVaraitionParameters" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pitchValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_volumeValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagVaraitionParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_pitchValue = { "pitchValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagVaraitionParameters, pitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pitchValue_MetaData), NewProp_pitchValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_volumeValue = { "volumeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagVaraitionParameters, volumeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_volumeValue_MetaData), NewProp_volumeValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_FadeinValue = { "FadeinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagVaraitionParameters, FadeinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeinValue_MetaData), NewProp_FadeinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_FadeOutValue = { "FadeOutValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagVaraitionParameters, FadeOutValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutValue_MetaData), NewProp_FadeOutValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_pitchValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_volumeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_FadeinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewProp_FadeOutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagVaraitionParameters",
	Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::PropPointers),
	sizeof(FAmbiTagVaraitionParameters),
	alignof(FAmbiTagVaraitionParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters.InnerSingleton;
}
// End ScriptStruct FAmbiTagVaraitionParameters

// Begin ScriptStruct FAmbiTagAudioEvents
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents;
class UScriptStruct* FAmbiTagAudioEvents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagAudioEvents, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagAudioEvents"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagAudioEvents>()
{
	return FAmbiTagAudioEvents::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSound_MetaData[] = {
		{ "Category", "AmbiTagAudioEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//event to play when conditions match correctly\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "event to play when conditions match correctly" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagAudioEvents>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::NewProp_StartSound = { "StartSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagAudioEvents, StartSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSound_MetaData), NewProp_StartSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::NewProp_StartSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagAudioEvents",
	Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::PropPointers),
	sizeof(FAmbiTagAudioEvents),
	alignof(FAmbiTagAudioEvents),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagAudioEvents()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents.InnerSingleton;
}
// End ScriptStruct FAmbiTagAudioEvents

// Begin ScriptStruct FAmbiTagAudioVariationInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo;
class UScriptStruct* FAmbiTagAudioVariationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo, (UObject*)Z_Construct_UPackage__Script_AmbienceTags(), TEXT("AmbiTagAudioVariationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo.OuterSingleton;
}
template<> AMBIENCETAGS_API UScriptStruct* StaticStruct<FAmbiTagAudioVariationInfo>()
{
	return FAmbiTagAudioVariationInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModulateAudio_MetaData[] = {
		{ "Category", "AmbiTagAudioVariationInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allow randomization of audio parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow randomization of audio parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModulatePitch_MetaData[] = {
		{ "Category", "Pitch Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allow randomization of audio pitch at spawn\n" },
#endif
		{ "EditCondition", "bModulateAudio" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow randomization of audio pitch at spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[] = {
		{ "Category", "Pitch Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Range used for randomizing pitch\n" },
#endif
		{ "EditCondition", "bModulatePitch" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range used for randomizing pitch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModulateVolume_MetaData[] = {
		{ "Category", "Volume Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allow randomization of audio volume at spawn\n" },
#endif
		{ "EditCondition", "bModulateAudio" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow randomization of audio volume at spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRange_MetaData[] = {
		{ "Category", "Volume Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Range used for randomizing volume\n" },
#endif
		{ "EditCondition", "bModulateVolume" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range used for randomizing volume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFadeIn_MetaData[] = {
		{ "Category", "Fade Modulation" },
		{ "EditCondition", "bModulateAudio" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModulateFadeIn_MetaData[] = {
		{ "Category", "Fade Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allow randomization of fade in time\n" },
#endif
		{ "EditCondition", "bModulateAudio" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow randomization of fade in time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInRange_MetaData[] = {
		{ "Category", "Fade Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Range used for randomizing fade in time\n" },
#endif
		{ "EditCondition", "bModulateFadeIn" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range used for randomizing fade in time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModulateFadeOut_MetaData[] = {
		{ "Category", "Fade Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Allow randomization of fade out time\n" },
#endif
		{ "EditCondition", "bModulateAudio" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow randomization of fade out time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutRange_MetaData[] = {
		{ "Category", "Fade Modulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Range used for randomizing fade out time\n" },
#endif
		{ "EditCondition", "bModulateFadeOut" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Range used for randomizing fade out time" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bModulateAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulateAudio;
	static void NewProp_bModulatePitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulatePitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRange;
	static void NewProp_bModulateVolume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulateVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeRange;
	static void NewProp_bFadeIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeIn;
	static void NewProp_bModulateFadeIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulateFadeIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeInRange;
	static void NewProp_bModulateFadeOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModulateFadeOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeOutRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmbiTagAudioVariationInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateAudio_SetBit(void* Obj)
{
	((FAmbiTagAudioVariationInfo*)Obj)->bModulateAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateAudio = { "bModulateAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagAudioVariationInfo), &Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModulateAudio_MetaData), NewProp_bModulateAudio_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulatePitch_SetBit(void* Obj)
{
	((FAmbiTagAudioVariationInfo*)Obj)->bModulatePitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulatePitch = { "bModulatePitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagAudioVariationInfo), &Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulatePitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModulatePitch_MetaData), NewProp_bModulatePitch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagAudioVariationInfo, PitchRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRange_MetaData), NewProp_PitchRange_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateVolume_SetBit(void* Obj)
{
	((FAmbiTagAudioVariationInfo*)Obj)->bModulateVolume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateVolume = { "bModulateVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagAudioVariationInfo), &Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateVolume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModulateVolume_MetaData), NewProp_bModulateVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_VolumeRange = { "VolumeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagAudioVariationInfo, VolumeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRange_MetaData), NewProp_VolumeRange_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bFadeIn_SetBit(void* Obj)
{
	((FAmbiTagAudioVariationInfo*)Obj)->bFadeIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bFadeIn = { "bFadeIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagAudioVariationInfo), &Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bFadeIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFadeIn_MetaData), NewProp_bFadeIn_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeIn_SetBit(void* Obj)
{
	((FAmbiTagAudioVariationInfo*)Obj)->bModulateFadeIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeIn = { "bModulateFadeIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagAudioVariationInfo), &Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeIn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModulateFadeIn_MetaData), NewProp_bModulateFadeIn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_FadeInRange = { "FadeInRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagAudioVariationInfo, FadeInRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInRange_MetaData), NewProp_FadeInRange_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeOut_SetBit(void* Obj)
{
	((FAmbiTagAudioVariationInfo*)Obj)->bModulateFadeOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeOut = { "bModulateFadeOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagAudioVariationInfo), &Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModulateFadeOut_MetaData), NewProp_bModulateFadeOut_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_FadeOutRange = { "FadeOutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagAudioVariationInfo, FadeOutRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutRange_MetaData), NewProp_FadeOutRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulatePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_PitchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_VolumeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bFadeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_FadeInRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_bModulateFadeOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewProp_FadeOutRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AmbienceTags,
	nullptr,
	&NewStructOps,
	"AmbiTagAudioVariationInfo",
	Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::PropPointers),
	sizeof(FAmbiTagAudioVariationInfo),
	alignof(FAmbiTagAudioVariationInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo.InnerSingleton, Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo.InnerSingleton;
}
// End ScriptStruct FAmbiTagAudioVariationInfo

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
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnAwayFromActor_MetaData[] = {
		{ "Category", "Spawn Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//spawn the sounds away from the actors location \n" },
#endif
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "spawn the sounds away from the actors location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockAudioToSpawnSource_MetaData[] = {
		{ "Category", "Spawn Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//attach the spawned sound to the associated actor\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "attach the spawned sound to the associated actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceRange_MetaData[] = {
		{ "Category", "Spawn Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//distance used for spawning from scene component\n" },
#endif
		{ "EditCondition", "bSpawnAwayFromActor" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
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
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "distance used for spawning from scene component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLineTraceForSpawn_MetaData[] = {
		{ "Category", "Spawn Distance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//use a linetrace to block the sound from spawning past a blocking actor\n" },
#endif
		{ "EditCondition", "bSpawnAwayFromActor" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "use a linetrace to block the sound from spawning past a blocking actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "AmbiTagSpawnInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//channel to watch for line trace detection from\n" },
#endif
		{ "EditCondition", "bUseLineTRaceForSpawn" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "channel to watch for line trace detection from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstEvent_MetaData[] = {
		{ "Category", "Spawn Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//should the first event trigger have a time delay\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "should the first event trigger have a time delay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitailSpawnDelayRange_MetaData[] = {
		{ "Category", "Spawn Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//time delay value for first event\n" },
#endif
		{ "EditCondition", "bDelayFirstEvent" },
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "time delay value for first event" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespawnAfterFirstEvent_MetaData[] = {
		{ "Category", "Spawn Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//should events be retriggered after they end\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
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
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time range used for delaying retrigger playback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnedElemetns_MetaData[] = {
		{ "Category", "Spawn Amount" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//max number of spawned elements allowed\n" },
#endif
		{ "ModuleRelativePath", "Public/AmbienceTagsData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "max number of spawned elements allowed" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSpawnAwayFromActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnAwayFromActor;
	static void NewProp_bLockAudioToSpawnSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAudioToSpawnSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalClamp;
	static void NewProp_bUseLineTraceForSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLineTraceForSpawn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
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
void Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bLockAudioToSpawnSource_SetBit(void* Obj)
{
	((FAmbiTagSpawnInfo*)Obj)->bLockAudioToSpawnSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bLockAudioToSpawnSource = { "bLockAudioToSpawnSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagSpawnInfo), &Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bLockAudioToSpawnSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockAudioToSpawnSource_MetaData), NewProp_bLockAudioToSpawnSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_DistanceRange = { "DistanceRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, DistanceRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceRange_MetaData), NewProp_DistanceRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_VerticalClamp = { "VerticalClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, VerticalClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalClamp_MetaData), NewProp_VerticalClamp_MetaData) };
void Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bUseLineTraceForSpawn_SetBit(void* Obj)
{
	((FAmbiTagSpawnInfo*)Obj)->bUseLineTraceForSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bUseLineTraceForSpawn = { "bUseLineTraceForSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAmbiTagSpawnInfo), &Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bUseLineTraceForSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLineTraceForSpawn_MetaData), NewProp_bUseLineTraceForSpawn_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmbiTagSpawnInfo, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
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
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bLockAudioToSpawnSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_DistanceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_VerticalClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_bUseLineTraceForSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewProp_TraceChannel,
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

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAmbiTagZoneType_StaticEnum, TEXT("EAmbiTagZoneType"), &Z_Registration_Info_UEnum_EAmbiTagZoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 38019997U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAmbiTagCollectionDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagCollectionDebugInfo_Statics::NewStructOps, TEXT("AmbiTagCollectionDebugInfo"), &Z_Registration_Info_UScriptStruct_AmbiTagCollectionDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagCollectionDebugInfo), 1357033588U) },
		{ FAmbiTagVaraitionParameters::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagVaraitionParameters_Statics::NewStructOps, TEXT("AmbiTagVaraitionParameters"), &Z_Registration_Info_UScriptStruct_AmbiTagVaraitionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagVaraitionParameters), 3504106345U) },
		{ FAmbiTagAudioEvents::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagAudioEvents_Statics::NewStructOps, TEXT("AmbiTagAudioEvents"), &Z_Registration_Info_UScriptStruct_AmbiTagAudioEvents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagAudioEvents), 4111025581U) },
		{ FAmbiTagAudioVariationInfo::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagAudioVariationInfo_Statics::NewStructOps, TEXT("AmbiTagAudioVariationInfo"), &Z_Registration_Info_UScriptStruct_AmbiTagAudioVariationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagAudioVariationInfo), 2969519709U) },
		{ FAmbiTagSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FAmbiTagSpawnInfo_Statics::NewStructOps, TEXT("AmbiTagSpawnInfo"), &Z_Registration_Info_UScriptStruct_AmbiTagSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmbiTagSpawnInfo), 1023506501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_3297685747(TEXT("/Script/AmbienceTags"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbienceTagsData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
