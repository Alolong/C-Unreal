// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/LobbyPC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_LobbyPC_generated_h
#error "LobbyPC.generated.h already included, missing '#pragma once' in LobbyPC.h"
#endif
#define NETWORK_LobbyPC_generated_h

#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execS2C_SendMessage); \
	DECLARE_FUNCTION(execC2S_SendMessage);


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_CALLBACK_WRAPPERS
#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyPC(); \
	friend struct Z_Construct_UClass_ALobbyPC_Statics; \
public: \
	DECLARE_CLASS(ALobbyPC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(ALobbyPC)


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyPC(ALobbyPC&&); \
	ALobbyPC(const ALobbyPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPC) \
	NO_API virtual ~ALobbyPC();


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_20_PROLOG
#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_CALLBACK_WRAPPERS \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class ALobbyPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
