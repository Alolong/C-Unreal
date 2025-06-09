// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/Lobby/LobbyPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NETWORK_API UClass* Z_Construct_UClass_ALobbyPC();
NETWORK_API UClass* Z_Construct_UClass_ALobbyPC_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class ALobbyPC
void ALobbyPC::StaticRegisterNativesALobbyPC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyPC);
UClass* Z_Construct_UClass_ALobbyPC_NoRegister()
{
	return ALobbyPC::StaticClass();
}
struct Z_Construct_UClass_ALobbyPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Lobby/LobbyPC.h" },
		{ "ModuleRelativePath", "Lobby/LobbyPC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALobbyPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyPC_Statics::ClassParams = {
	&ALobbyPC::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPC_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyPC()
{
	if (!Z_Registration_Info_UClass_ALobbyPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyPC.OuterSingleton, Z_Construct_UClass_ALobbyPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyPC.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<ALobbyPC>()
{
	return ALobbyPC::StaticClass();
}
ALobbyPC::ALobbyPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyPC);
ALobbyPC::~ALobbyPC() {}
// End Class ALobbyPC

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyPC, ALobbyPC::StaticClass, TEXT("ALobbyPC"), &Z_Registration_Info_UClass_ALobbyPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPC), 2851553414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_4274740618(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
