// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InGame/InGameChar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_InGameChar_generated_h
#error "InGameChar.generated.h already included, missing '#pragma once' in InGameChar.h"
#endif
#define NETWORK_InGameChar_generated_h

#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execS2A_Dead); \
	DECLARE_FUNCTION(execC2S_Fire); \
	DECLARE_FUNCTION(execOnFire);


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_CALLBACK_WRAPPERS
#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGameChar(); \
	friend struct Z_Construct_UClass_AInGameChar_Statics; \
public: \
	DECLARE_CLASS(AInGameChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(AInGameChar)


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInGameChar(AInGameChar&&); \
	AInGameChar(const AInGameChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInGameChar) \
	NO_API virtual ~AInGameChar();


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_11_PROLOG
#define FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_CALLBACK_WRAPPERS \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class AInGameChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
