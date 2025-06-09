// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Zombie/Zombie.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Zombie_generated_h
#error "Zombie.generated.h already included, missing '#pragma once' in Zombie.h"
#endif
#define MYPROJECT_Zombie_generated_h

#define FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AZombie)


#define FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AZombie(AZombie&&); \
	AZombie(const AZombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombie) \
	NO_API virtual ~AZombie();


#define FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_23_PROLOG
#define FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_26_INCLASS_NO_PURE_DECLS \
	FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AZombie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h


#define FOREACH_ENUM_EZOMBIESTATE(op) \
	op(EZombieState::Patrol) \
	op(EZombieState::Battle) \
	op(EZombieState::Chase) \
	op(EZombieState::Dead) 

enum class EZombieState : uint8;
template<> struct TIsUEnumClass<EZombieState> { enum { Value = true }; };
template<> MYPROJECT_API UEnum* StaticEnum<EZombieState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
