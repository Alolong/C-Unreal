// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lobby/LobbyGS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_LobbyGS_generated_h
#error "LobbyGS.generated.h already included, missing '#pragma once' in LobbyGS.h"
#endif
#define NETWORK_LobbyGS_generated_h

#define FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ConnectCount); \
	DECLARE_FUNCTION(execOnRep_LeftTime);


#define FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGS(); \
	friend struct Z_Construct_UClass_ALobbyGS_Statics; \
public: \
	DECLARE_CLASS(ALobbyGS, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGS) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LeftTime=NETFIELD_REP_START, \
		ConnectCount, \
		NETFIELD_REP_END=ConnectCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyGS(ALobbyGS&&); \
	ALobbyGS(const ALobbyGS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGS) \
	NO_API virtual ~ALobbyGS();


#define FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_14_PROLOG
#define FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_17_INCLASS_NO_PURE_DECLS \
	FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class ALobbyGS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
