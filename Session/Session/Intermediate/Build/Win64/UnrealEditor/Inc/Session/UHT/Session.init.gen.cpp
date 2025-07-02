// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSession_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Session;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Session()
	{
		if (!Z_Registration_Info_UPackage__Script_Session.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Session",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9ECF6787,
				0xA5B63AD7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Session.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Session.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Session(Z_Construct_UPackage__Script_Session, TEXT("/Script/Session"), Z_Registration_Info_UPackage__Script_Session, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9ECF6787, 0xA5B63AD7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
