// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/AnimNotify_PrintMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PrintMessage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
MYPROJECT_API UClass* Z_Construct_UClass_UAnimNotify_PrintMessage();
MYPROJECT_API UClass* Z_Construct_UClass_UAnimNotify_PrintMessage_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References

// Begin Class UAnimNotify_PrintMessage
void UAnimNotify_PrintMessage::StaticRegisterNativesUAnimNotify_PrintMessage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PrintMessage);
UClass* Z_Construct_UClass_UAnimNotify_PrintMessage_NoRegister()
{
	return UAnimNotify_PrintMessage::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_PrintMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///meta = (DisplayName = \"Print Message\"\n" },
#endif
		{ "DisplayName", "Print Message" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify_PrintMessage.h" },
		{ "ModuleRelativePath", "AnimNotify_PrintMessage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//meta = (DisplayName = \"Print Message\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrintMessage_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "AnimNotify_PrintMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrintMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PrintMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::NewProp_PrintMessage = { "PrintMessage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_PrintMessage, PrintMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrintMessage_MetaData), NewProp_PrintMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::NewProp_PrintMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::ClassParams = {
	&UAnimNotify_PrintMessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_PrintMessage()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_PrintMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PrintMessage.OuterSingleton, Z_Construct_UClass_UAnimNotify_PrintMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_PrintMessage.OuterSingleton;
}
template<> MYPROJECT_API UClass* StaticClass<UAnimNotify_PrintMessage>()
{
	return UAnimNotify_PrintMessage::StaticClass();
}
UAnimNotify_PrintMessage::UAnimNotify_PrintMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PrintMessage);
UAnimNotify_PrintMessage::~UAnimNotify_PrintMessage() {}
// End Class UAnimNotify_PrintMessage

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_AnimNotify_PrintMessage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PrintMessage, UAnimNotify_PrintMessage::StaticClass, TEXT("UAnimNotify_PrintMessage"), &Z_Registration_Info_UClass_UAnimNotify_PrintMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PrintMessage), 1700880898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_AnimNotify_PrintMessage_h_474252989(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_AnimNotify_PrintMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Unreal_MyProject_Source_MyProject_AnimNotify_PrintMessage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
