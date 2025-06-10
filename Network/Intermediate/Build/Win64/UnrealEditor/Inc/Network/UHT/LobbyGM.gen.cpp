// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/Lobby/LobbyGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGM() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NETWORK_API UClass* Z_Construct_UClass_ALobbyGM();
NETWORK_API UClass* Z_Construct_UClass_ALobbyGM_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class ALobbyGM Function DecreaseTime
struct Z_Construct_UFunction_ALobbyGM_DecreaseTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGM.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGM_DecreaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGM, nullptr, "DecreaseTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyGM_DecreaseTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyGM_DecreaseTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALobbyGM_DecreaseTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyGM_DecreaseTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyGM::execDecreaseTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DecreaseTime();
	P_NATIVE_END;
}
// End Class ALobbyGM Function DecreaseTime

// Begin Class ALobbyGM
void ALobbyGM::StaticRegisterNativesALobbyGM()
{
	UClass* Class = ALobbyGM::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseTime", &ALobbyGM::execDecreaseTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyGM);
UClass* Z_Construct_UClass_ALobbyGM_NoRegister()
{
	return ALobbyGM::StaticClass();
}
struct Z_Construct_UClass_ALobbyGM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lobby/LobbyGM.h" },
		{ "ModuleRelativePath", "Lobby/LobbyGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyGM_DecreaseTime, "DecreaseTime" }, // 227493840
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALobbyGM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGM_Statics::ClassParams = {
	&ALobbyGM::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGM_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyGM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyGM()
{
	if (!Z_Registration_Info_UClass_ALobbyGM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyGM.OuterSingleton, Z_Construct_UClass_ALobbyGM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyGM.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<ALobbyGM>()
{
	return ALobbyGM::StaticClass();
}
ALobbyGM::ALobbyGM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGM);
ALobbyGM::~ALobbyGM() {}
// End Class ALobbyGM

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGM_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyGM, ALobbyGM::StaticClass, TEXT("ALobbyGM"), &Z_Registration_Info_UClass_ALobbyGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyGM), 1623556883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGM_h_3547584271(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGM_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
