// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AmbiTagSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAmbiTagCollectionDebugInfo;
struct FGameplayTagContainer;
#ifdef AMBIENCETAGS_AmbiTagSubsystem_generated_h
#error "AmbiTagSubsystem.generated.h already included, missing '#pragma once' in AmbiTagSubsystem.h"
#endif
#define AMBIENCETAGS_AmbiTagSubsystem_generated_h

#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_16_DELEGATE \
AMBIENCETAGS_API void FAmbiTagsUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& AmbiTagsUpdatedDelegate);


#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_17_DELEGATE \
AMBIENCETAGS_API void FAmbiTagsDebugDelegate_DelegateWrapper(const FMulticastScriptDelegate& AmbiTagsDebugDelegate);


#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateDebugList); \
	DECLARE_FUNCTION(execRemoveAmbiTags); \
	DECLARE_FUNCTION(execAddAmbiTags); \
	DECLARE_FUNCTION(execAmbiTagsUpdated);


#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmbiTagSubsystem(); \
	friend struct Z_Construct_UClass_UAmbiTagSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAmbiTagSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AmbienceTags"), NO_API) \
	DECLARE_SERIALIZER(UAmbiTagSubsystem)


#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAmbiTagSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAmbiTagSubsystem(UAmbiTagSubsystem&&); \
	UAmbiTagSubsystem(const UAmbiTagSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmbiTagSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmbiTagSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAmbiTagSubsystem) \
	NO_API virtual ~UAmbiTagSubsystem();


#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_19_PROLOG
#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AMBIENCETAGS_API UClass* StaticClass<class UAmbiTagSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
