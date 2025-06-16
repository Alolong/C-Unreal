// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/Title/TitleWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleWidget() {}

// Begin Cross Module References
NETWORK_API UClass* Z_Construct_UClass_UTitleWidget();
NETWORK_API UClass* Z_Construct_UClass_UTitleWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class UTitleWidget Function OnClickConnectButton
struct Z_Construct_UFunction_UTitleWidget_OnClickConnectButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleWidget_OnClickConnectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleWidget, nullptr, "OnClickConnectButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleWidget_OnClickConnectButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleWidget_OnClickConnectButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleWidget_OnClickConnectButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleWidget_OnClickConnectButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleWidget::execOnClickConnectButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickConnectButton();
	P_NATIVE_END;
}
// End Class UTitleWidget Function OnClickConnectButton

// Begin Class UTitleWidget Function OnClickServerStartButton
struct Z_Construct_UFunction_UTitleWidget_OnClickServerStartButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleWidget_OnClickServerStartButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleWidget, nullptr, "OnClickServerStartButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleWidget_OnClickServerStartButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleWidget_OnClickServerStartButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleWidget_OnClickServerStartButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleWidget_OnClickServerStartButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleWidget::execOnClickServerStartButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickServerStartButton();
	P_NATIVE_END;
}
// End Class UTitleWidget Function OnClickServerStartButton

// Begin Class UTitleWidget
void UTitleWidget::StaticRegisterNativesUTitleWidget()
{
	UClass* Class = UTitleWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnClickConnectButton", &UTitleWidget::execOnClickConnectButton },
		{ "OnClickServerStartButton", &UTitleWidget::execOnClickServerStartButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitleWidget);
UClass* Z_Construct_UClass_UTitleWidget_NoRegister()
{
	return UTitleWidget::StaticClass();
}
struct Z_Construct_UClass_UTitleWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Title/TitleWidget.h" },
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIDText_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PasswordText_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIDText_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartServerButton_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectButton_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIPText_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Title/TitleWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserIDText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PasswordText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerIDText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartServerButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerIPText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleWidget_OnClickConnectButton, "OnClickConnectButton" }, // 2775202600
		{ &Z_Construct_UFunction_UTitleWidget_OnClickServerStartButton, "OnClickServerStartButton" }, // 31115730
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleWidget_Statics::NewProp_UserIDText = { "UserIDText", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleWidget, UserIDText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIDText_MetaData), NewProp_UserIDText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleWidget_Statics::NewProp_PasswordText = { "PasswordText", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleWidget, PasswordText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PasswordText_MetaData), NewProp_PasswordText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleWidget_Statics::NewProp_ServerIDText = { "ServerIDText", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleWidget, ServerIDText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIDText_MetaData), NewProp_ServerIDText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleWidget_Statics::NewProp_StartServerButton = { "StartServerButton", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleWidget, StartServerButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartServerButton_MetaData), NewProp_StartServerButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleWidget_Statics::NewProp_ConnectButton = { "ConnectButton", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleWidget, ConnectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectButton_MetaData), NewProp_ConnectButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleWidget_Statics::NewProp_ServerIPText = { "ServerIPText", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleWidget, ServerIPText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIPText_MetaData), NewProp_ServerIPText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleWidget_Statics::NewProp_UserIDText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleWidget_Statics::NewProp_PasswordText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleWidget_Statics::NewProp_ServerIDText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleWidget_Statics::NewProp_StartServerButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleWidget_Statics::NewProp_ConnectButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleWidget_Statics::NewProp_ServerIPText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTitleWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleWidget_Statics::ClassParams = {
	&UTitleWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTitleWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTitleWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleWidget()
{
	if (!Z_Registration_Info_UClass_UTitleWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleWidget.OuterSingleton, Z_Construct_UClass_UTitleWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleWidget.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<UTitleWidget>()
{
	return UTitleWidget::StaticClass();
}
UTitleWidget::UTitleWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleWidget);
UTitleWidget::~UTitleWidget() {}
// End Class UTitleWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Title_TitleWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleWidget, UTitleWidget::StaticClass, TEXT("UTitleWidget"), &Z_Registration_Info_UClass_UTitleWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleWidget), 4204861620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Title_TitleWidget_h_1824154789(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Title_TitleWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Title_TitleWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
