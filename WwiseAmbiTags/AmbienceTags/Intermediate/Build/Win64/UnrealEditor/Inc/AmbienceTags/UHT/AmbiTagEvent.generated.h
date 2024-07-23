// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AmbiTagEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef AMBIENCETAGS_AmbiTagEvent_generated_h
#error "AmbiTagEvent.generated.h already included, missing '#pragma once' in AmbiTagEvent.h"
#endif
#define AMBIENCETAGS_AmbiTagEvent_generated_h

#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopEvent); \
	DECLARE_FUNCTION(execSetUp);


#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmbiTagEvent(); \
	friend struct Z_Construct_UClass_UAmbiTagEvent_Statics; \
public: \
	DECLARE_CLASS(UAmbiTagEvent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AmbienceTags"), NO_API) \
	DECLARE_SERIALIZER(UAmbiTagEvent)


#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAmbiTagEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAmbiTagEvent(UAmbiTagEvent&&); \
	UAmbiTagEvent(const UAmbiTagEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmbiTagEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmbiTagEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmbiTagEvent) \
	NO_API virtual ~UAmbiTagEvent();


#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_32_PROLOG
#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_35_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AMBIENCETAGS_API UClass* StaticClass<class UAmbiTagEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
