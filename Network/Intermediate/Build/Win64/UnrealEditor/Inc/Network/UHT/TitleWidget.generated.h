// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Title/TitleWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_TitleWidget_generated_h
#error "TitleWidget.generated.h already included, missing '#pragma once' in TitleWidget.h"
#endif
#define NETWORK_TitleWidget_generated_h

#define FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnClickConnectButton); \
	DECLARE_FUNCTION(execOnClickServerStartButton);


#define FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTitleWidget(); \
	friend struct Z_Construct_UClass_UTitleWidget_Statics; \
public: \
	DECLARE_CLASS(UTitleWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Network"), NO_API) \
	DECLARE_SERIALIZER(UTitleWidget)


#define FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTitleWidget(UTitleWidget&&); \
	UTitleWidget(const UTitleWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleWidget) \
	NO_API virtual ~UTitleWidget();


#define FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_17_PROLOG
#define FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORK_API UClass* StaticClass<class UTitleWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C_Unreal_Network_Source_Network_Title_TitleWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
