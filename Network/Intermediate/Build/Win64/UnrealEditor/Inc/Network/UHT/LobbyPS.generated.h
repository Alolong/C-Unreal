// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/LobbyPS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_LobbyPS_generated_h
#error "LobbyPS.generated.h already included, missing '#pragma once' in LobbyPS.h"
#endif
#define NETWORK_LobbyPS_generated_h

#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyPS(); \
	friend struct Z_Construct_UClass_ALobbyPS_Statics; \
public: \
	DECLARE_CLASS(ALobbyPS, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(ALobbyPS)


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyPS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyPS(ALobbyPS&&); \
	ALobbyPS(const ALobbyPS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyPS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyPS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyPS) \
	NO_API virtual ~ALobbyPS();


#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_12_PROLOG
#define FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_15_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class ALobbyPS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
