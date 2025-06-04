// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Zombie/ZombieAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FActorPerceptionUpdateInfo;
struct FAIStimulus;
#ifdef MYPROJECT_ZombieAIController_generated_h
#error "ZombieAIController.generated.h already included, missing '#pragma once' in ZombieAIController.h"
#endif
#define MYPROJECT_ZombieAIController_generated_h

#define FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessPerceptionInfoUpdated); \
	DECLARE_FUNCTION(execProcessPerceptionForgetUpdated); \
	DECLARE_FUNCTION(execProcessPerceptionUpdated);


#define FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieAIController(); \
	friend struct Z_Construct_UClass_AZombieAIController_Statics; \
public: \
	DECLARE_CLASS(AZombieAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AZombieAIController)


#define FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AZombieAIController(AZombieAIController&&); \
	AZombieAIController(const AZombieAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieAIController) \
	NO_API virtual ~AZombieAIController();


#define FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_31_PROLOG
#define FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_34_INCLASS_NO_PURE_DECLS \
	FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AZombieAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
