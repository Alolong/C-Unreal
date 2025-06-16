// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/InGame/InGameGC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameGC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NETWORK_API UClass* Z_Construct_UClass_AInGameGC();
NETWORK_API UClass* Z_Construct_UClass_AInGameGC_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class AInGameGC
void AInGameGC::StaticRegisterNativesAInGameGC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGameGC);
UClass* Z_Construct_UClass_AInGameGC_NoRegister()
{
	return AInGameGC::StaticClass();
}
struct Z_Construct_UClass_AInGameGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "InGame/InGameGC.h" },
		{ "ModuleRelativePath", "InGame/InGameGC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInGameGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGameGC_Statics::ClassParams = {
	&AInGameGC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameGC_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGameGC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInGameGC()
{
	if (!Z_Registration_Info_UClass_AInGameGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGameGC.OuterSingleton, Z_Construct_UClass_AInGameGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInGameGC.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<AInGameGC>()
{
	return AInGameGC::StaticClass();
}
AInGameGC::AInGameGC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameGC);
AInGameGC::~AInGameGC() {}
// End Class AInGameGC

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInGameGC, AInGameGC::StaticClass, TEXT("AInGameGC"), &Z_Registration_Info_UClass_AInGameGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGameGC), 2462794223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_2250253893(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameGC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
