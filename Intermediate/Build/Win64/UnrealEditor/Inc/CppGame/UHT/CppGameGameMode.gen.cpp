// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppGame/CppGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppGameGameMode() {}

// Begin Cross Module References
CPPGAME_API UClass* Z_Construct_UClass_ACppGameGameMode();
CPPGAME_API UClass* Z_Construct_UClass_ACppGameGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CppGame();
// End Cross Module References

// Begin Class ACppGameGameMode
void ACppGameGameMode::StaticRegisterNativesACppGameGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACppGameGameMode);
UClass* Z_Construct_UClass_ACppGameGameMode_NoRegister()
{
	return ACppGameGameMode::StaticClass();
}
struct Z_Construct_UClass_ACppGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CppGameGameMode.h" },
		{ "ModuleRelativePath", "CppGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACppGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACppGameGameMode_Statics::ClassParams = {
	&ACppGameGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACppGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACppGameGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACppGameGameMode()
{
	if (!Z_Registration_Info_UClass_ACppGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACppGameGameMode.OuterSingleton, Z_Construct_UClass_ACppGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACppGameGameMode.OuterSingleton;
}
template<> CPPGAME_API UClass* StaticClass<ACppGameGameMode>()
{
	return ACppGameGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACppGameGameMode);
ACppGameGameMode::~ACppGameGameMode() {}
// End Class ACppGameGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACppGameGameMode, ACppGameGameMode::StaticClass, TEXT("ACppGameGameMode"), &Z_Registration_Info_UClass_ACppGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACppGameGameMode), 1818117714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameGameMode_h_741730297(TEXT("/Script/CppGame"),
	Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
