// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/InGame/InGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
NETWORK_API UClass* Z_Construct_UClass_AInGameHUD();
NETWORK_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class AInGameHUD Function ShowHeight
struct Z_Construct_UFunction_AInGameHUD_ShowHeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Exec\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "InGame/InGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exec\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGameHUD_ShowHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGameHUD, nullptr, "ShowHeight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGameHUD_ShowHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInGameHUD_ShowHeight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AInGameHUD_ShowHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInGameHUD_ShowHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInGameHUD::execShowHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowHeight();
	P_NATIVE_END;
}
// End Class AInGameHUD Function ShowHeight

// Begin Class AInGameHUD
void AInGameHUD::StaticRegisterNativesAInGameHUD()
{
	UClass* Class = AInGameHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowHeight", &AInGameHUD::execShowHeight },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGameHUD);
UClass* Z_Construct_UClass_AInGameHUD_NoRegister()
{
	return AInGameHUD::StaticClass();
}
struct Z_Construct_UClass_AInGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InGame/InGameHUD.h" },
		{ "ModuleRelativePath", "InGame/InGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInGameHUD_ShowHeight, "ShowHeight" }, // 3868356090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInGameHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGameHUD_Statics::ClassParams = {
	&AInGameHUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInGameHUD()
{
	if (!Z_Registration_Info_UClass_AInGameHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGameHUD.OuterSingleton, Z_Construct_UClass_AInGameHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInGameHUD.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<AInGameHUD>()
{
	return AInGameHUD::StaticClass();
}
AInGameHUD::AInGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameHUD);
AInGameHUD::~AInGameHUD() {}
// End Class AInGameHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInGameHUD, AInGameHUD::StaticClass, TEXT("AInGameHUD"), &Z_Registration_Info_UClass_AInGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGameHUD), 4017988283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameHUD_h_1166931056(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGameHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
