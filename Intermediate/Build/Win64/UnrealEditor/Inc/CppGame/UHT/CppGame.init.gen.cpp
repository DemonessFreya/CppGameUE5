// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CppGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CppGame()
	{
		if (!Z_Registration_Info_UPackage__Script_CppGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CppGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5058F182,
				0xD3206F9A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CppGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CppGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CppGame(Z_Construct_UPackage__Script_CppGame, TEXT("/Script/CppGame"), Z_Registration_Info_UPackage__Script_CppGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5058F182, 0xD3206F9A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
