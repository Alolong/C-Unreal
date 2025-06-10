// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/Lobby/LobbyGS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NETWORK_API UClass* Z_Construct_UClass_ALobbyGS();
NETWORK_API UClass* Z_Construct_UClass_ALobbyGS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class ALobbyGS Function OnRep_ConnectCount
struct Z_Construct_UFunction_ALobbyGS_OnRep_ConnectCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGS_OnRep_ConnectCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGS, nullptr, "OnRep_ConnectCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyGS_OnRep_ConnectCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyGS_OnRep_ConnectCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALobbyGS_OnRep_ConnectCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyGS_OnRep_ConnectCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyGS::execOnRep_ConnectCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ConnectCount();
	P_NATIVE_END;
}
// End Class ALobbyGS Function OnRep_ConnectCount

// Begin Class ALobbyGS Function OnRep_LeftTime
struct Z_Construct_UFunction_ALobbyGS_OnRep_LeftTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyGS_OnRep_LeftTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyGS, nullptr, "OnRep_LeftTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyGS_OnRep_LeftTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyGS_OnRep_LeftTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALobbyGS_OnRep_LeftTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyGS_OnRep_LeftTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyGS::execOnRep_LeftTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LeftTime();
	P_NATIVE_END;
}
// End Class ALobbyGS Function OnRep_LeftTime

// Begin Class ALobbyGS
void ALobbyGS::StaticRegisterNativesALobbyGS()
{
	UClass* Class = ALobbyGS::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ConnectCount", &ALobbyGS::execOnRep_ConnectCount },
		{ "OnRep_LeftTime", &ALobbyGS::execOnRep_LeftTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyGS);
UClass* Z_Construct_UClass_ALobbyGS_NoRegister()
{
	return ALobbyGS::StaticClass();
}
struct Z_Construct_UClass_ALobbyGS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n * 1. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * 2. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd9\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lobby/LobbyGS.h" },
		{ "ModuleRelativePath", "Lobby/LobbyGS.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n1. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n2. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd9\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Uint16 \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 16\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd: \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb1\xef\xbf\xbd\n//ReplicatedUsing- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xc9\xb6\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Lobby/LobbyGS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uint16 \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 16\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd: \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb1\xef\xbf\xbd\nReplicatedUsing- \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xc9\xb6\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectCount_MetaData[] = {
		{ "ModuleRelativePath", "Lobby/LobbyGS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_LeftTime;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_ConnectCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyGS_OnRep_ConnectCount, "OnRep_ConnectCount" }, // 2622033289
		{ &Z_Construct_UFunction_ALobbyGS_OnRep_LeftTime, "OnRep_LeftTime" }, // 736003767
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ALobbyGS_Statics::NewProp_LeftTime = { "LeftTime", "OnRep_LeftTime", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyGS, LeftTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTime_MetaData), NewProp_LeftTime_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_ALobbyGS_Statics::NewProp_ConnectCount = { "ConnectCount", "OnRep_ConnectCount", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyGS, ConnectCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectCount_MetaData), NewProp_ConnectCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyGS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGS_Statics::NewProp_LeftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyGS_Statics::NewProp_ConnectCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALobbyGS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGS_Statics::ClassParams = {
	&ALobbyGS::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALobbyGS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGS_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGS_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyGS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyGS()
{
	if (!Z_Registration_Info_UClass_ALobbyGS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyGS.OuterSingleton, Z_Construct_UClass_ALobbyGS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyGS.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<ALobbyGS>()
{
	return ALobbyGS::StaticClass();
}
void ALobbyGS::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_LeftTime(TEXT("LeftTime"));
	static const FName Name_ConnectCount(TEXT("ConnectCount"));
	const bool bIsValid = true
		&& Name_LeftTime == ClassReps[(int32)ENetFields_Private::LeftTime].Property->GetFName()
		&& Name_ConnectCount == ClassReps[(int32)ENetFields_Private::ConnectCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALobbyGS"));
}
ALobbyGS::ALobbyGS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGS);
ALobbyGS::~ALobbyGS() {}
// End Class ALobbyGS

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyGS, ALobbyGS::StaticClass, TEXT("ALobbyGS"), &Z_Registration_Info_UClass_ALobbyGS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyGS), 800825821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_2046849285(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Unreal_Network_Source_Network_Lobby_LobbyGS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
