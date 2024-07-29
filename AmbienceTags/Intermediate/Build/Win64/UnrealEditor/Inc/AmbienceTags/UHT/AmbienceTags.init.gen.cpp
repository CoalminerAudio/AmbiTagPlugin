// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbienceTags_init() {}
	AMBIENCETAGS_API UFunction* Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature();
	AMBIENCETAGS_API UFunction* Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature();
	AMBIENCETAGS_API UFunction* Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AmbienceTags;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AmbienceTags()
	{
		if (!Z_Registration_Info_UPackage__Script_AmbienceTags.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AmbienceTags_ActivationChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsDebugDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AmbienceTags_AmbiTagsUpdatedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AmbienceTags",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC5A812D1,
				0xA4CE23C4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AmbienceTags.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AmbienceTags.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AmbienceTags(Z_Construct_UPackage__Script_AmbienceTags, TEXT("/Script/AmbienceTags"), Z_Registration_Info_UPackage__Script_AmbienceTags, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC5A812D1, 0xA4CE23C4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
