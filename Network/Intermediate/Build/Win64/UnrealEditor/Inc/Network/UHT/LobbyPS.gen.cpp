// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/Lobby/LobbyPS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NETWORK_API UClass* Z_Construct_UClass_ALobbyPS();
NETWORK_API UClass* Z_Construct_UClass_ALobbyPS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class ALobbyPS
void ALobbyPS::StaticRegisterNativesALobbyPS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyPS);
UClass* Z_Construct_UClass_ALobbyPS_NoRegister()
{
	return ALobbyPS::StaticClass();
}
struct Z_Construct_UClass_ALobbyPS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Lobby/LobbyPS.h" },
		{ "ModuleRelativePath", "Lobby/LobbyPS.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALobbyPS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyPS_Statics::ClassParams = {
	&ALobbyPS::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPS_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyPS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyPS()
{
	if (!Z_Registration_Info_UClass_ALobbyPS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyPS.OuterSingleton, Z_Construct_UClass_ALobbyPS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyPS.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<ALobbyPS>()
{
	return ALobbyPS::StaticClass();
}
ALobbyPS::ALobbyPS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyPS);
ALobbyPS::~ALobbyPS() {}
// End Class ALobbyPS

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyPS, ALobbyPS::StaticClass, TEXT("ALobbyPS"), &Z_Registration_Info_UClass_ALobbyPS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPS), 3511154606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_331013673(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
