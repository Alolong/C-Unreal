// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Zombie/Zombie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombie() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MYPROJECT_API UClass* Z_Construct_UClass_AZombie();
MYPROJECT_API UClass* Z_Construct_UClass_AZombie_NoRegister();
MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EZombieState();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Enum EZombieState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZombieState;
static UEnum* EZombieState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EZombieState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EZombieState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject_EZombieState, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("EZombieState"));
	}
	return Z_Registration_Info_UEnum_EZombieState.OuterSingleton;
}
template<> MYPROJECT_API UEnum* StaticEnum<EZombieState>()
{
	return EZombieState_StaticEnum();
}
struct Z_Construct_UEnum_MyProject_EZombieState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Battle.DisplayName", "Battle" },
		{ "Battle.Name", "EZombieState::Battle" },
		{ "BlueprintType", "true" },
		{ "Chase.DisplayName", "Chase" },
		{ "Chase.Name", "EZombieState::Chase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9\n// \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd C++ enum \xef\xbf\xbd\xef\xbf\xbd int(4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n// uint8 = 1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae (8\xef\xbf\xbd\xef\xbf\xbd\xc6\xae)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EZombieState::Dead" },
		{ "ModuleRelativePath", "Zombie/Zombie.h" },
		{ "Patrol.DisplayName", "Patrol" },
		{ "Patrol.Name", "EZombieState::Patrol" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9\n\xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd C++ enum \xef\xbf\xbd\xef\xbf\xbd int(4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nuint8 = 1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae (8\xef\xbf\xbd\xef\xbf\xbd\xc6\xae)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EZombieState::Patrol", (int64)EZombieState::Patrol },
		{ "EZombieState::Battle", (int64)EZombieState::Battle },
		{ "EZombieState::Chase", (int64)EZombieState::Chase },
		{ "EZombieState::Dead", (int64)EZombieState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject_EZombieState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
	nullptr,
	"EZombieState",
	"EZombieState",
	Z_Construct_UEnum_MyProject_EZombieState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EZombieState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EZombieState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject_EZombieState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MyProject_EZombieState()
{
	if (!Z_Registration_Info_UEnum_EZombieState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZombieState.InnerSingleton, Z_Construct_UEnum_MyProject_EZombieState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EZombieState.InnerSingleton;
}
// End Enum EZombieState

// Begin Class AZombie
void AZombie::StaticRegisterNativesAZombie()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombie);
UClass* Z_Construct_UClass_AZombie_NoRegister()
{
	return AZombie::StaticClass();
}
struct Z_Construct_UClass_AZombie_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Zombie/Zombie.h" },
		{ "ModuleRelativePath", "Zombie/Zombie.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Zombie/Zombie.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombie>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AZombie_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombie, CurrentState), Z_Construct_UEnum_MyProject_EZombieState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2829920005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombie_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombie_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AZombie_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombie_Statics::ClassParams = {
	&AZombie::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AZombie_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombie_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AZombie()
{
	if (!Z_Registration_Info_UClass_AZombie.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombie.OuterSingleton, Z_Construct_UClass_AZombie_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZombie.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<AZombie>()
{
	return AZombie::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombie);
AZombie::~AZombie() {}
// End Class AZombie

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EZombieState_StaticEnum, TEXT("EZombieState"), &Z_Registration_Info_UEnum_EZombieState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2829920005U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombie, AZombie::StaticClass, TEXT("AZombie"), &Z_Registration_Info_UClass_AZombie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombie), 3449572981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_1575806353(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_MyProject_Source_MyProject_Zombie_Zombie_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
