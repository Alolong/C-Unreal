// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Zombie/ZombieAIController.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AZombieAIController();
MYPROJECT_API UClass* Z_Construct_UClass_AZombieAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class AZombieAIController Function ProcessPerceptionForgetUpdated
struct Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics
{
	struct ZombieAIController_eventProcessPerceptionForgetUpdated_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Zombie/ZombieAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZombieAIController_eventProcessPerceptionForgetUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "ProcessPerceptionForgetUpdated", nullptr, nullptr, Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::ZombieAIController_eventProcessPerceptionForgetUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::ZombieAIController_eventProcessPerceptionForgetUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZombieAIController::execProcessPerceptionForgetUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPerceptionForgetUpdated(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class AZombieAIController Function ProcessPerceptionForgetUpdated

// Begin Class AZombieAIController Function ProcessPerceptionInfoUpdated
struct Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics
{
	struct ZombieAIController_eventProcessPerceptionInfoUpdated_Parms
	{
		FActorPerceptionUpdateInfo UpdateInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Zombie/ZombieAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::NewProp_UpdateInfo = { "UpdateInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZombieAIController_eventProcessPerceptionInfoUpdated_Parms, UpdateInfo), Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInfo_MetaData), NewProp_UpdateInfo_MetaData) }; // 3283545429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::NewProp_UpdateInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "ProcessPerceptionInfoUpdated", nullptr, nullptr, Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::ZombieAIController_eventProcessPerceptionInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::ZombieAIController_eventProcessPerceptionInfoUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZombieAIController::execProcessPerceptionInfoUpdated)
{
	P_GET_STRUCT_REF(FActorPerceptionUpdateInfo,Z_Param_Out_UpdateInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPerceptionInfoUpdated(Z_Param_Out_UpdateInfo);
	P_NATIVE_END;
}
// End Class AZombieAIController Function ProcessPerceptionInfoUpdated

// Begin Class AZombieAIController Function ProcessPerceptionUpdated
struct Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics
{
	struct ZombieAIController_eventProcessPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//U\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd : \n" },
#endif
		{ "ModuleRelativePath", "Zombie/ZombieAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "U\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd :" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZombieAIController_eventProcessPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZombieAIController_eventProcessPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 177100813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieAIController, nullptr, "ProcessPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::ZombieAIController_eventProcessPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::ZombieAIController_eventProcessPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AZombieAIController::execProcessPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// End Class AZombieAIController Function ProcessPerceptionUpdated

// Begin Class AZombieAIController
void AZombieAIController::StaticRegisterNativesAZombieAIController()
{
	UClass* Class = AZombieAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ProcessPerceptionForgetUpdated", &AZombieAIController::execProcessPerceptionForgetUpdated },
		{ "ProcessPerceptionInfoUpdated", &AZombieAIController::execProcessPerceptionInfoUpdated },
		{ "ProcessPerceptionUpdated", &AZombieAIController::execProcessPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieAIController);
UClass* Z_Construct_UClass_AZombieAIController_NoRegister()
{
	return AZombieAIController::StaticClass();
}
struct Z_Construct_UClass_AZombieAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Zombie/ZombieAIController.h" },
		{ "ModuleRelativePath", "Zombie/ZombieAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombie/ZombieAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieAIController_ProcessPerceptionForgetUpdated, "ProcessPerceptionForgetUpdated" }, // 2844113338
		{ &Z_Construct_UFunction_AZombieAIController_ProcessPerceptionInfoUpdated, "ProcessPerceptionInfoUpdated" }, // 138700021
		{ &Z_Construct_UFunction_AZombieAIController_ProcessPerceptionUpdated, "ProcessPerceptionUpdated" }, // 1982032747
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieAIController_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AZombieAIController, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perception_MetaData), NewProp_Perception_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieAIController_Statics::NewProp_Perception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieAIController_Statics::ClassParams = {
	&AZombieAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AZombieAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombieAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AZombieAIController()
{
	if (!Z_Registration_Info_UClass_AZombieAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieAIController.OuterSingleton, Z_Construct_UClass_AZombieAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AZombieAIController.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<AZombieAIController>()
{
	return AZombieAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieAIController);
AZombieAIController::~AZombieAIController() {}
// End Class AZombieAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AZombieAIController, AZombieAIController::StaticClass, TEXT("AZombieAIController"), &Z_Registration_Info_UClass_AZombieAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieAIController), 695392242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_1434065326(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_Zombie_ZombieAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
