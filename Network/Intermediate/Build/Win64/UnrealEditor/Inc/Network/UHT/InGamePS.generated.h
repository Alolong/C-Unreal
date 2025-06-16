// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InGame/InGamePS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_InGamePS_generated_h
#error "InGamePS.generated.h already included, missing '#pragma once' in InGamePS.h"
#endif
#define NETWORK_InGamePS_generated_h

#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGamePS(); \
	friend struct Z_Construct_UClass_AInGamePS_Statics; \
public: \
	DECLARE_CLASS(AInGamePS, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(AInGamePS)


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGamePS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInGamePS(AInGamePS&&); \
	AInGamePS(const AInGamePS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGamePS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGamePS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGamePS) \
	NO_API virtual ~AInGamePS();


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_12_PROLOG
#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_15_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class AInGamePS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
