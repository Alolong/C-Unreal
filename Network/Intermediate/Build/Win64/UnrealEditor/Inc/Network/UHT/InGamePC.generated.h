// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InGame/InGamePC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_InGamePC_generated_h
#error "InGamePC.generated.h already included, missing '#pragma once' in InGamePC.h"
#endif
#define NETWORK_InGamePC_generated_h

#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowInventory);


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGamePC(); \
	friend struct Z_Construct_UClass_AInGamePC_Statics; \
public: \
	DECLARE_CLASS(AInGamePC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(AInGamePC)


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGamePC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInGamePC(AInGamePC&&); \
	AInGamePC(const AInGamePC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGamePC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGamePC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGamePC) \
	NO_API virtual ~AInGamePC();


#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_15_PROLOG
#define FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_18_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class AInGamePC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
