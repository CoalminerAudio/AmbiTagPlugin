// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AC_AmbiTagTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef AMBIENCETAGS_AC_AmbiTagTrigger_generated_h
#error "AC_AmbiTagTrigger.generated.h already included, missing '#pragma once' in AC_AmbiTagTrigger.h"
#endif
#define AMBIENCETAGS_AC_AmbiTagTrigger_generated_h

#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_12_DELEGATE \
AMBIENCETAGS_API void FActivationChange_DelegateWrapper(const FMulticastScriptDelegate& ActivationChange, bool Activated);


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugEvent); \
	DECLARE_FUNCTION(execCallActivated); \
	DECLARE_FUNCTION(execSendDebugInfo); \
	DECLARE_FUNCTION(execCheckInactiveTags); \
	DECLARE_FUNCTION(execCheckActiveTags); \
	DECLARE_FUNCTION(execAmbiTagsUpdateDelegate); \
	DECLARE_FUNCTION(execAddComponentToTracker); \
	DECLARE_FUNCTION(execOverrideSpawnComponent);


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAC_AmbiTagTrigger(); \
	friend struct Z_Construct_UClass_UAC_AmbiTagTrigger_Statics; \
public: \
	DECLARE_CLASS(UAC_AmbiTagTrigger, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AmbienceTags"), NO_API) \
	DECLARE_SERIALIZER(UAC_AmbiTagTrigger)


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAC_AmbiTagTrigger(UAC_AmbiTagTrigger&&); \
	UAC_AmbiTagTrigger(const UAC_AmbiTagTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_AmbiTagTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_AmbiTagTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAC_AmbiTagTrigger) \
	NO_API virtual ~UAC_AmbiTagTrigger();


#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_14_PROLOG
#define FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AMBIENCETAGS_API UClass* StaticClass<class UAC_AmbiTagTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AudioTestLevel_AudioTestProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AC_AmbiTagTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
