// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/InGame/InGamePC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGamePC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
NETWORK_API UClass* Z_Construct_UClass_AInGamePC();
NETWORK_API UClass* Z_Construct_UClass_AInGamePC_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class AInGamePC Function ShowInventory
struct Z_Construct_UFunction_AInGamePC_ShowInventory_Statics
{
	struct InGamePC_eventShowInventory_Parms
	{
		bool bShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InGame/InGamePC.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((InGamePC_eventShowInventory_Parms*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InGamePC_eventShowInventory_Parms), &Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::NewProp_bShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInGamePC, nullptr, "ShowInventory", nullptr, nullptr, Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::InGamePC_eventShowInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::InGamePC_eventShowInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInGamePC_ShowInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInGamePC_ShowInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInGamePC::execShowInventory)
{
	P_GET_UBOOL(Z_Param_bShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowInventory(Z_Param_bShow);
	P_NATIVE_END;
}
// End Class AInGamePC Function ShowInventory

// Begin Class AInGamePC
void AInGamePC::StaticRegisterNativesAInGamePC()
{
	UClass* Class = AInGamePC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowInventory", &AInGamePC::execShowInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInGamePC);
UClass* Z_Construct_UClass_AInGamePC_NoRegister()
{
	return AInGamePC::StaticClass();
}
struct Z_Construct_UClass_AInGamePC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "InGame/InGamePC.h" },
		{ "ModuleRelativePath", "InGame/InGamePC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InGame/InGamePC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryTemplate_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InGame/InGamePC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInventory_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "InGame/InGamePC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "InGame/InGamePC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryTemplate;
	static void NewProp_bShowInventory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInGamePC_ShowInventory, "ShowInventory" }, // 1996523577
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGamePC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGamePC_Statics::NewProp_InventoryWidget = { "InventoryWidget", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGamePC, InventoryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryWidget_MetaData), NewProp_InventoryWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGamePC_Statics::NewProp_InventoryTemplate = { "InventoryTemplate", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGamePC, InventoryTemplate), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryTemplate_MetaData), NewProp_InventoryTemplate_MetaData) };
void Z_Construct_UClass_AInGamePC_Statics::NewProp_bShowInventory_SetBit(void* Obj)
{
	((AInGamePC*)Obj)->bShowInventory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInGamePC_Statics::NewProp_bShowInventory = { "bShowInventory", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AInGamePC), &Z_Construct_UClass_AInGamePC_Statics::NewProp_bShowInventory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInventory_MetaData), NewProp_bShowInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInGamePC_Statics::NewProp_InventoryInput = { "InventoryInput", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInGamePC, InventoryInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryInput_MetaData), NewProp_InventoryInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInGamePC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGamePC_Statics::NewProp_InventoryWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGamePC_Statics::NewProp_InventoryTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGamePC_Statics::NewProp_bShowInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInGamePC_Statics::NewProp_InventoryInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGamePC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInGamePC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInGamePC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInGamePC_Statics::ClassParams = {
	&AInGamePC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInGamePC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInGamePC_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInGamePC_Statics::Class_MetaDataParams), Z_Construct_UClass_AInGamePC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInGamePC()
{
	if (!Z_Registration_Info_UClass_AInGamePC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInGamePC.OuterSingleton, Z_Construct_UClass_AInGamePC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInGamePC.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<AInGamePC>()
{
	return AInGamePC::StaticClass();
}
AInGamePC::AInGamePC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInGamePC);
AInGamePC::~AInGamePC() {}
// End Class AInGamePC

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInGamePC, AInGamePC::StaticClass, TEXT("AInGamePC"), &Z_Registration_Info_UClass_AInGamePC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInGamePC), 1216528631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_957962339(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_InGame_InGamePC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
