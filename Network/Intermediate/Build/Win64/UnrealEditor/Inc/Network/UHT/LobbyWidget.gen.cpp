// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/Lobby/LobbyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyWidget() {}

// Begin Cross Module References
NETWORK_API UClass* Z_Construct_UClass_ULobbyWidget();
NETWORK_API UClass* Z_Construct_UClass_ULobbyWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class ULobbyWidget Function EnterChat
struct Z_Construct_UFunction_ULobbyWidget_EnterChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_EnterChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "EnterChat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_EnterChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULobbyWidget_EnterChat_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULobbyWidget_EnterChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_EnterChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULobbyWidget::execEnterChat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterChat();
	P_NATIVE_END;
}
// End Class ULobbyWidget Function EnterChat

// Begin Class ULobbyWidget Function OnChangedEvent
struct Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics
{
	struct LobbyWidget_eventOnChangedEvent_Parms
	{
		FText Text;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyWidget_eventOnChangedEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "OnChangedEvent", nullptr, nullptr, Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::LobbyWidget_eventOnChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::LobbyWidget_eventOnChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULobbyWidget_OnChangedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_OnChangedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULobbyWidget::execOnChangedEvent)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChangedEvent(Z_Param_Out_Text);
	P_NATIVE_END;
}
// End Class ULobbyWidget Function OnChangedEvent

// Begin Class ULobbyWidget Function OnCommitEvent
struct Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics
{
	struct LobbyWidget_eventOnCommitEvent_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdb\xbc\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xc2\xb0\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xdb\xbc\xef\xbf\xbd\n \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xc2\xb0\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyWidget_eventOnCommitEvent_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyWidget_eventOnCommitEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "OnCommitEvent", nullptr, nullptr, Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::LobbyWidget_eventOnCommitEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::LobbyWidget_eventOnCommitEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULobbyWidget_OnCommitEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_OnCommitEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULobbyWidget::execOnCommitEvent)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCommitEvent(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class ULobbyWidget Function OnCommitEvent

// Begin Class ULobbyWidget Function Start
struct Z_Construct_UFunction_ULobbyWidget_Start_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULobbyWidget_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULobbyWidget, nullptr, "Start", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULobbyWidget_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULobbyWidget_Start_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULobbyWidget_Start()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULobbyWidget_Start_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULobbyWidget::execStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Start();
	P_NATIVE_END;
}
// End Class ULobbyWidget Function Start

// Begin Class ULobbyWidget
void ULobbyWidget::StaticRegisterNativesULobbyWidget()
{
	UClass* Class = ULobbyWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnterChat", &ULobbyWidget::execEnterChat },
		{ "OnChangedEvent", &ULobbyWidget::execOnChangedEvent },
		{ "OnCommitEvent", &ULobbyWidget::execOnCommitEvent },
		{ "Start", &ULobbyWidget::execStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULobbyWidget);
UClass* Z_Construct_UClass_ULobbyWidget_NoRegister()
{
	return ULobbyWidget::StaticClass();
}
struct Z_Construct_UClass_ULobbyWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* \xef\xbf\xbd\xce\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* 1. \xef\xbf\xbd\xce\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd , \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n*\x09\n* 2. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n*\x09""1. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\n*\x09""2. \xc3\xa4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n*\x09""3. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb9\xef\xbf\xbd\xc6\xb0)\n*\x09""4. \xef\xbf\xbd\xde\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdb\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * \n */" },
#endif
		{ "IncludePath", "Lobby/LobbyWidget.h" },
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n1. \xef\xbf\xbd\xce\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd , \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\n2. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n     1. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb0\xef\xbf\xbd\n     2. \xc3\xa4\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n     3. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb9\xef\xbf\xbd\xc6\xb0)\n     4. \xef\xbf\xbd\xde\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdb\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTimeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectCountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatScroll_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatEnterButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftTimeText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectCountText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatScroll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatEnterButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULobbyWidget_EnterChat, "EnterChat" }, // 1515956119
		{ &Z_Construct_UFunction_ULobbyWidget_OnChangedEvent, "OnChangedEvent" }, // 1045765465
		{ &Z_Construct_UFunction_ULobbyWidget_OnCommitEvent, "OnCommitEvent" }, // 242815204
		{ &Z_Construct_UFunction_ULobbyWidget_Start, "Start" }, // 1230620754
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULobbyWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LeftTimeText = { "LeftTimeText", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, LeftTimeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTimeText_MetaData), NewProp_LeftTimeText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ConnectCountText = { "ConnectCountText", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, ConnectCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectCountText_MetaData), NewProp_ConnectCountText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ChatScroll = { "ChatScroll", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, ChatScroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatScroll_MetaData), NewProp_ChatScroll_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ChatEnterButton = { "ChatEnterButton", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, ChatEnterButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatEnterButton_MetaData), NewProp_ChatEnterButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartButton_MetaData), NewProp_StartButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ChatInput = { "ChatInput", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULobbyWidget, ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInput_MetaData), NewProp_ChatInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULobbyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_LeftTimeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ConnectCountText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ChatScroll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ChatEnterButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_StartButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULobbyWidget_Statics::NewProp_ChatInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULobbyWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Network,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULobbyWidget_Statics::ClassParams = {
	&ULobbyWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULobbyWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULobbyWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULobbyWidget()
{
	if (!Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton, Z_Construct_UClass_ULobbyWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULobbyWidget.OuterSingleton;
}
template<> NETWORK_API UClass* StaticClass<ULobbyWidget>()
{
	return ULobbyWidget::StaticClass();
}
ULobbyWidget::ULobbyWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULobbyWidget);
ULobbyWidget::~ULobbyWidget() {}
// End Class ULobbyWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULobbyWidget, ULobbyWidget::StaticClass, TEXT("ULobbyWidget"), &Z_Registration_Info_UClass_ULobbyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULobbyWidget), 1504394919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyWidget_h_2710737563(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
