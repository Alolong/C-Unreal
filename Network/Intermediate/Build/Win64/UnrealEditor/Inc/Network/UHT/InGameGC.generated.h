// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InGame/InGameGC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_InGameGC_generated_h
#error "InGameGC.generated.h already included, missing '#pragma once' in InGameGC.h"
#endif
#define NETWORK_InGameGC_generated_h

#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGameGC(); \
	friend struct Z_Construct_UClass_AInGameGC_Statics; \
public: \
	DECLARE_CLASS(AInGameGC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(AInGameGC)


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGameGC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInGameGC(AInGameGC&&); \
	AInGameGC(const AInGameGC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameGC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGameGC) \
	NO_API virtual ~AInGameGC();


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_12_PROLOG
#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_15_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class AInGameGC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
