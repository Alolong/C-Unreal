// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/LobbyGM.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_LobbyGM_generated_h
#error "LobbyGM.generated.h already included, missing '#pragma once' in LobbyGM.h"
#endif
#define NETWORK_LobbyGM_generated_h

#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDecreaseTime);


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGM(); \
	friend struct Z_Construct_UClass_ALobbyGM_Statics; \
public: \
	DECLARE_CLASS(ALobbyGM, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGM)


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGM(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyGM(ALobbyGM&&); \
	ALobbyGM(const ALobbyGM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGM); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGM) \
	NO_API virtual ~ALobbyGM();


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_12_PROLOG
#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_15_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class ALobbyGM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyGM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
