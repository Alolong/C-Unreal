// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/InGame/InGamePS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGamePS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
NETWORK_API UClass* Z_Construct_UClass_AInGamePS();
NETWORK_API UClass* Z_Construct_UClass_AInGamePS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class AInGamePS
void AInGamePS::StaticRegisterNativesAInGamePS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGamePS);
UClass* Z_Construct_UClass_AInGamePS_NoRegister()
{
	return AInGamePS::StaticClass();
}
struct Z_Construct_UClass_AInGamePS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InGame/InGamePS.h" },
		{ "ModuleRelativePath", "InGame/InGamePS.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGamePS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInGamePS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGamePS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGamePS_Statics::ClassParams = {
	&AInGamePS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGamePS_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGamePS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInGamePS()
{
	if (!Z_Registration_Info_UClass_AInGamePS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGamePS.OuterSingleton, Z_Construct_UClass_AInGamePS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInGamePS.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<AInGamePS>()
{
	return AInGamePS::StaticClass();
}
AInGamePS::AInGamePS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInGamePS);
AInGamePS::~AInGamePS() {}
// End Class AInGamePS

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInGamePS, AInGamePS::StaticClass, TEXT("AInGamePS"), &Z_Registration_Info_UClass_AInGamePS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGamePS), 3896714386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_3928324235(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
