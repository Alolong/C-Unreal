// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/InGame/InGameChar.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameChar() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
NETWORK_API UClass* Z_Construct_UClass_AInGameChar();
NETWORK_API UClass* Z_Construct_UClass_AInGameChar_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class AInGameChar Function C2S_Fire
struct InGameChar_eventC2S_Fire_Parms
{
	FVector SpawnPosition;
	FRotator SpawnRotation;
};
static const FName NAME_AInGameChar_C2S_Fire = FName(TEXT("C2S_Fire"));
void AInGameChar::C2S_Fire(FVector const& SpawnPosition, FRotator const& SpawnRotation)
{
	InGameChar_eventC2S_Fire_Parms Parms;
	Parms.SpawnPosition=SpawnPosition;
	Parms.SpawnRotation=SpawnRotation;
	UFunction* Func = FindFunctionChecked(NAME_AInGameChar_C2S_Fire);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGame/InGameChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::NewProp_SpawnPosition = { "SpawnPosition", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InGameChar_eventC2S_Fire_Parms, SpawnPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPosition_MetaData), NewProp_SpawnPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InGameChar_eventC2S_Fire_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRotation_MetaData), NewProp_SpawnRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::NewProp_SpawnPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::NewProp_SpawnRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameChar, nullptr, "C2S_Fire", nullptr, nullptr, Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::PropPointers), sizeof(InGameChar_eventC2S_Fire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::Function_MetaDataParams) };
static_assert(sizeof(InGameChar_eventC2S_Fire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInGameChar_C2S_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInGameChar_C2S_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInGameChar::execC2S_Fire)
{
	P_GET_STRUCT(FVector,Z_Param_SpawnPosition);
	P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->C2S_Fire_Validate(Z_Param_SpawnPosition,Z_Param_SpawnRotation))
	{
		RPC_ValidateFailed(TEXT("C2S_Fire_Validate"));
		return;
	}
	P_THIS->C2S_Fire_Implementation(Z_Param_SpawnPosition,Z_Param_SpawnRotation);
	P_NATIVE_END;
}
// End Class AInGameChar Function C2S_Fire

// Begin Class AInGameChar Function OnFire
struct Z_Construct_UFunction_AInGameChar_OnFire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGame/InGameChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameChar_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameChar, nullptr, "OnFire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameChar_OnFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInGameChar_OnFire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AInGameChar_OnFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInGameChar_OnFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInGameChar::execOnFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFire();
	P_NATIVE_END;
}
// End Class AInGameChar Function OnFire

// Begin Class AInGameChar Function S2A_Dead
struct Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics
{
	struct InGameChar_eventS2A_Dead_Parms
	{
		FVector ImpulseDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Validate \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//Implementation \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "InGame/InGameChar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nImplementation \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpulseDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::NewProp_ImpulseDirection = { "ImpulseDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InGameChar_eventS2A_Dead_Parms, ImpulseDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseDirection_MetaData), NewProp_ImpulseDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::NewProp_ImpulseDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameChar, nullptr, "S2A_Dead", nullptr, nullptr, Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::InGameChar_eventS2A_Dead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::InGameChar_eventS2A_Dead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInGameChar_S2A_Dead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInGameChar_S2A_Dead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInGameChar::execS2A_Dead)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpulseDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->S2A_Dead(Z_Param_Out_ImpulseDirection);
	P_NATIVE_END;
}
// End Class AInGameChar Function S2A_Dead

// Begin Class AInGameChar
void AInGameChar::StaticRegisterNativesAInGameChar()
{
	UClass* Class = AInGameChar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "C2S_Fire", &AInGameChar::execC2S_Fire },
		{ "OnFire", &AInGameChar::execOnFire },
		{ "S2A_Dead", &AInGameChar::execS2A_Dead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGameChar);
UClass* Z_Construct_UClass_AInGameChar_NoRegister()
{
	return AInGameChar::StaticClass();
}
struct Z_Construct_UClass_AInGameChar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InGame/InGameChar.h" },
		{ "ModuleRelativePath", "InGame/InGameChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "InGame/InGameChar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletActor_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "InGame/InGameChar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInGameChar_C2S_Fire, "C2S_Fire" }, // 1581199599
		{ &Z_Construct_UFunction_AInGameChar_OnFire, "OnFire" }, // 3117152806
		{ &Z_Construct_UFunction_AInGameChar_S2A_Dead, "S2A_Dead" }, // 3524630345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameChar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGameChar_Statics::NewProp_FireInput = { "FireInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameChar, FireInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireInput_MetaData), NewProp_FireInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGameChar_Statics::NewProp_BulletActor = { "BulletActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGameChar, BulletActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletActor_MetaData), NewProp_BulletActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInGameChar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameChar_Statics::NewProp_FireInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGameChar_Statics::NewProp_BulletActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameChar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInGameChar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameChar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGameChar_Statics::ClassParams = {
	&AInGameChar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInGameChar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInGameChar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameChar_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGameChar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInGameChar()
{
	if (!Z_Registration_Info_UClass_AInGameChar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGameChar.OuterSingleton, Z_Construct_UClass_AInGameChar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInGameChar.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<AInGameChar>()
{
	return AInGameChar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameChar);
AInGameChar::~AInGameChar() {}
// End Class AInGameChar

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInGameChar, AInGameChar::StaticClass, TEXT("AInGameChar"), &Z_Registration_Info_UClass_AInGameChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGameChar), 761755015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_3095687494(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameChar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
