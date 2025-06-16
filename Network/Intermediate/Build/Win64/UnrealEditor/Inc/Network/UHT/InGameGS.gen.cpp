// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/InGame/InGameGS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameGS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NETWORK_API UClass* Z_Construct_UClass_AInGameGS();
NETWORK_API UClass* Z_Construct_UClass_AInGameGS_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class AInGameGS
void AInGameGS::StaticRegisterNativesAInGameGS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGameGS);
UClass* Z_Construct_UClass_AInGameGS_NoRegister()
{
	return AInGameGS::StaticClass();
}
struct Z_Construct_UClass_AInGameGS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InGame/InGameGS.h" },
		{ "ModuleRelativePath", "InGame/InGameGS.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameGS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInGameGS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameGS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGameGS_Statics::ClassParams = {
	&AInGameGS::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameGS_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGameGS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInGameGS()
{
	if (!Z_Registration_Info_UClass_AInGameGS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGameGS.OuterSingleton, Z_Construct_UClass_AInGameGS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInGameGS.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<AInGameGS>()
{
	return AInGameGS::StaticClass();
}
AInGameGS::AInGameGS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameGS);
AInGameGS::~AInGameGS() {}
// End Class AInGameGS

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInGameGS, AInGameGS::StaticClass, TEXT("AInGameGS"), &Z_Registration_Info_UClass_AInGameGS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGameGS), 1661738413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGS_h_2727629059(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
