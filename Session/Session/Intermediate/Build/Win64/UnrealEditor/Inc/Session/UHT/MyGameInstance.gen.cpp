// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Session/MyGameInstance.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
SESSION_API UClass* Z_Construct_UClass_UMyGameInstance();
SESSION_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Session();
// End Cross Module References

// Begin Class UMyGameInstance Function DestroySessionAndLeaveGame
struct Z_Construct_UFunction_UMyGameInstance_DestroySessionAndLeaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Network|Test" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_DestroySessionAndLeaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "DestroySessionAndLeaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_DestroySessionAndLeaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_DestroySessionAndLeaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyGameInstance_DestroySessionAndLeaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_DestroySessionAndLeaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execDestroySessionAndLeaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroySessionAndLeaveGame();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function DestroySessionAndLeaveGame

// Begin Class UMyGameInstance Function FindOnlineGames
struct Z_Construct_UFunction_UMyGameInstance_FindOnlineGames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Network|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------[ Searching & Find Session ]--------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------[ Searching & Find Session ]--------------------------------------------" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_FindOnlineGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "FindOnlineGames", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_FindOnlineGames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_FindOnlineGames_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyGameInstance_FindOnlineGames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_FindOnlineGames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execFindOnlineGames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindOnlineGames();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function FindOnlineGames

// Begin Class UMyGameInstance Function JoinOnlineGame
struct Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics
{
	struct MyGameInstance_eventJoinOnlineGame_Parms
	{
		FBlueprintSessionResult SessionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Network|Test" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::NewProp_SessionResult = { "SessionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventJoinOnlineGame_Parms, SessionResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::NewProp_SessionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "JoinOnlineGame", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::MyGameInstance_eventJoinOnlineGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::MyGameInstance_eventJoinOnlineGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execJoinOnlineGame)
{
	P_GET_STRUCT(FBlueprintSessionResult,Z_Param_SessionResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinOnlineGame(Z_Param_SessionResult);
	P_NATIVE_END;
}
// End Class UMyGameInstance Function JoinOnlineGame

// Begin Class UMyGameInstance Function StartOnlineGame
struct Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics
{
	struct MyGameInstance_eventStartOnlineGame_Parms
	{
		FName SessionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Network|Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------[ BlueprintFunction Callable Session ]--------------------------------------------//\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------[ BlueprintFunction Callable Session ]--------------------------------------------" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventStartOnlineGame_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::NewProp_SessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "StartOnlineGame", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::MyGameInstance_eventStartOnlineGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::MyGameInstance_eventStartOnlineGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_StartOnlineGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_StartOnlineGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execStartOnlineGame)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartOnlineGame(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class UMyGameInstance Function StartOnlineGame

// Begin Class UMyGameInstance
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
	UClass* Class = UMyGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroySessionAndLeaveGame", &UMyGameInstance::execDestroySessionAndLeaveGame },
		{ "FindOnlineGames", &UMyGameInstance::execFindOnlineGames },
		{ "JoinOnlineGame", &UMyGameInstance::execJoinOnlineGame },
		{ "StartOnlineGame", &UMyGameInstance::execStartOnlineGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_DestroySessionAndLeaveGame, "DestroySessionAndLeaveGame" }, // 38414056
		{ &Z_Construct_UFunction_UMyGameInstance_FindOnlineGames, "FindOnlineGames" }, // 1755444408
		{ &Z_Construct_UFunction_UMyGameInstance_JoinOnlineGame, "JoinOnlineGame" }, // 1198467392
		{ &Z_Construct_UFunction_UMyGameInstance_StartOnlineGame, "StartOnlineGame" }, // 3540000162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Session,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
template<> SESSION_API UClass* StaticClass<UMyGameInstance>()
{
	return UMyGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// End Class UMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_BluePrint_Session_Session_Source_Session_MyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 2079841903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BluePrint_Session_Session_Source_Session_MyGameInstance_h_1055793495(TEXT("/Script/Session"),
	Z_CompiledInDeferFile_FID_BluePrint_Session_Session_Source_Session_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BluePrint_Session_Session_Source_Session_MyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
