// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppGame/CppGameSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppGameSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CPPGAME_API UClass* Z_Construct_UClass_UCppGameSaveGame();
CPPGAME_API UClass* Z_Construct_UClass_UCppGameSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_CppGame();
// End Cross Module References

// Begin Class UCppGameSaveGame
void UCppGameSaveGame::StaticRegisterNativesUCppGameSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCppGameSaveGame);
UClass* Z_Construct_UClass_UCppGameSaveGame_NoRegister()
{
	return UCppGameSaveGame::StaticClass();
}
struct Z_Construct_UClass_UCppGameSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CppGameSaveGame.h" },
		{ "ModuleRelativePath", "CppGameSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
		{ "ModuleRelativePath", "CppGameSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayerLocation_MetaData[] = {
		{ "ModuleRelativePath", "CppGameSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveTransformsByName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of transforms\n// Key: Name of the actor\n// Value: Transform of the actor at the time of saving\n" },
#endif
		{ "ModuleRelativePath", "CppGameSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of transforms\nKey: Name of the actor\nValue: Transform of the actor at the time of saving" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HighScore;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastPlayerLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveTransformsByName_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveTransformsByName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SaveTransformsByName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppGameSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCppGameSaveGame, HighScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighScore_MetaData), NewProp_HighScore_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_LastPlayerLocation = { "LastPlayerLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCppGameSaveGame, LastPlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlayerLocation_MetaData), NewProp_LastPlayerLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_SaveTransformsByName_ValueProp = { "SaveTransformsByName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_SaveTransformsByName_Key_KeyProp = { "SaveTransformsByName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_SaveTransformsByName = { "SaveTransformsByName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCppGameSaveGame, SaveTransformsByName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveTransformsByName_MetaData), NewProp_SaveTransformsByName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCppGameSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_HighScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_LastPlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_SaveTransformsByName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_SaveTransformsByName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppGameSaveGame_Statics::NewProp_SaveTransformsByName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCppGameSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_CppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCppGameSaveGame_Statics::ClassParams = {
	&UCppGameSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCppGameSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCppGameSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCppGameSaveGame()
{
	if (!Z_Registration_Info_UClass_UCppGameSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCppGameSaveGame.OuterSingleton, Z_Construct_UClass_UCppGameSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCppGameSaveGame.OuterSingleton;
}
template<> CPPGAME_API UClass* StaticClass<UCppGameSaveGame>()
{
	return UCppGameSaveGame::StaticClass();
}
UCppGameSaveGame::UCppGameSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCppGameSaveGame);
UCppGameSaveGame::~UCppGameSaveGame() {}
// End Class UCppGameSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCppGameSaveGame, UCppGameSaveGame::StaticClass, TEXT("UCppGameSaveGame"), &Z_Registration_Info_UClass_UCppGameSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCppGameSaveGame), 2720994794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveGame_h_4110077935(TEXT("/Script/CppGame"),
	Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
