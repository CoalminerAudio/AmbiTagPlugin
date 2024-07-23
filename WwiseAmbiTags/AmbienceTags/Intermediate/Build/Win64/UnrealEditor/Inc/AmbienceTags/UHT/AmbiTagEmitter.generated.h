// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AmbiTagEmitter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkCallbackInfo;
class USceneComponent;
enum class EAkCallbackType : uint8;
struct FAmbiTagSpawnInfo;
struct FAmbiTagWwiseEvents;
#ifdef AMBIENCETAGS_AmbiTagEmitter_generated_h
#error "AmbiTagEmitter.generated.h already included, missing '#pragma once' in AmbiTagEmitter.h"
#endif
#define AMBIENCETAGS_AmbiTagEmitter_generated_h

#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEventEnded); \
	DECLARE_FUNCTION(execEventCallback); \
	DECLARE_FUNCTION(execSetSoundLocation); \
	DECLARE_FUNCTION(execPlayAudio); \
	DECLARE_FUNCTION(execTriggerDelay); \
	DECLARE_FUNCTION(execEventDetriggered); \
	DECLARE_FUNCTION(execStartAmbiSource);


#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmbiTagEmitter(); \
	friend struct Z_Construct_UClass_AAmbiTagEmitter_Statics; \
public: \
	DECLARE_CLASS(AAmbiTagEmitter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AmbienceTags"), NO_API) \
	DECLARE_SERIALIZER(AAmbiTagEmitter)


#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAmbiTagEmitter(AAmbiTagEmitter&&); \
	AAmbiTagEmitter(const AAmbiTagEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmbiTagEmitter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmbiTagEmitter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmbiTagEmitter) \
	NO_API virtual ~AAmbiTagEmitter();


#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_16_PROLOG
#define FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_19_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AMBIENCETAGS_API UClass* StaticClass<class AAmbiTagEmitter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_AmbiTagShowcase_Plugins_AmbienceTags_Source_AmbienceTags_Public_AmbiTagEmitter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
