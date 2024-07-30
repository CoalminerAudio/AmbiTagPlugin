// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AmbiTagSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AMBIENCETAGS_AmbiTagSettings_generated_h
#error "AmbiTagSettings.generated.h already included, missing '#pragma once' in AmbiTagSettings.h"
#endif
#define AMBIENCETAGS_AmbiTagSettings_generated_h

#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmbiTagSettings(); \
	friend struct Z_Construct_UClass_UAmbiTagSettings_Statics; \
public: \
	DECLARE_CLASS(UAmbiTagSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AmbienceTags"), NO_API) \
	DECLARE_SERIALIZER(UAmbiTagSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAmbiTagSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAmbiTagSettings(UAmbiTagSettings&&); \
	UAmbiTagSettings(const UAmbiTagSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmbiTagSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmbiTagSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmbiTagSettings) \
	NO_API virtual ~UAmbiTagSettings();


#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_12_PROLOG
#define FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AMBIENCETAGS_API UClass* StaticClass<class UAmbiTagSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AmbiTagShowcase_AmbiTagShowcaseBuildout_AmbiTagProject_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
