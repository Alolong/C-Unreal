// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Network/Lobby/LobbyPC.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyPC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NETWORK_API UClass* Z_Construct_UClass_ALobbyPC();
NETWORK_API UClass* Z_Construct_UClass_ALobbyPC_NoRegister();
NETWORK_API UClass* Z_Construct_UClass_ULobbyWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Network();
// End Cross Module References

// Begin Class ALobbyPC Function C2S_SendMessage
struct LobbyPC_eventC2S_SendMessage_Parms
{
	FText Message;
};
static const FName NAME_ALobbyPC_C2S_SendMessage = FName(TEXT("C2S_SendMessage"));
void ALobbyPC::C2S_SendMessage(FText const& Message)
{
	LobbyPC_eventC2S_SendMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ALobbyPC_C2S_SendMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd,\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd-\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Reliable \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcd\xb8\xef\xbf\xbd)// Unreliable\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xc6\xb5\xef\xbf\xbd \xef\xbf\xbd\xc8\xb9\xde\xbe\xc6\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Lobby/LobbyPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd,\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd-\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Reliable \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcd\xb8\xef\xbf\xbd) Unreliable\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xc6\xb5\xef\xbf\xbd \xef\xbf\xbd\xc8\xb9\xde\xbe\xc6\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyPC_eventC2S_SendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPC, nullptr, "C2S_SendMessage", nullptr, nullptr, Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::PropPointers), sizeof(LobbyPC_eventC2S_SendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(LobbyPC_eventC2S_SendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALobbyPC_C2S_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPC_C2S_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPC::execC2S_SendMessage)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->C2S_SendMessage_Validate(Z_Param_Message))
	{
		RPC_ValidateFailed(TEXT("C2S_SendMessage_Validate"));
		return;
	}
	P_THIS->C2S_SendMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ALobbyPC Function C2S_SendMessage

// Begin Class ALobbyPC Function S2C_SendMessage
struct LobbyPC_eventS2C_SendMessage_Parms
{
	FText Message;
};
static const FName NAME_ALobbyPC_S2C_SendMessage = FName(TEXT("S2C_SendMessage"));
void ALobbyPC::S2C_SendMessage(FText const& Message)
{
	LobbyPC_eventS2C_SendMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ALobbyPC_S2C_SendMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdb\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Lobby/LobbyPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdb\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LobbyPC_eventS2C_SendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyPC, nullptr, "S2C_SendMessage", nullptr, nullptr, Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::PropPointers), sizeof(LobbyPC_eventS2C_SendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(LobbyPC_eventS2C_SendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALobbyPC_S2C_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyPC_S2C_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALobbyPC::execS2C_SendMessage)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->S2C_SendMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ALobbyPC Function S2C_SendMessage

// Begin Class ALobbyPC
void ALobbyPC::StaticRegisterNativesALobbyPC()
{
	UClass* Class = ALobbyPC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "C2S_SendMessage", &ALobbyPC::execC2S_SendMessage },
		{ "S2C_SendMessage", &ALobbyPC::execS2C_SendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "Comment", "/**\n * \xef\xbf\xbd\xce\xba\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\n * 1. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * 2. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Lobby/LobbyPC.h" },
		{ "ModuleRelativePath", "Lobby/LobbyPC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xba\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\n1. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n2. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetObject_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lobby/LobbyPC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyPC_C2S_SendMessage, "C2S_SendMessage" }, // 821079371
		{ &Z_Construct_UFunction_ALobbyPC_S2C_SendMessage, "S2C_SendMessage" }, // 2045530975
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALobbyPC_Statics::NewProp_WidgetObject = { "WidgetObject", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALobbyPC, WidgetObject), Z_Construct_UClass_ULobbyWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetObject_MetaData), NewProp_WidgetObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyPC_Statics::NewProp_WidgetObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPC_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ALobbyPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyPC_Statics::PropPointers),
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
		{ Z_Construct_UClass_ALobbyPC, ALobbyPC::StaticClass, TEXT("ALobbyPC"), &Z_Registration_Info_UClass_ALobbyPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyPC), 2299900811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_3112000575(TEXT("/Script/Network"),
	Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C___C__Unreal_Network_Source_Network_Lobby_LobbyPC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
