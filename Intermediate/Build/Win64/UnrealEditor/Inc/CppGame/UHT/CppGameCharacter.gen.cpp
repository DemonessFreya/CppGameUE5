// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppGame/CppGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppGameCharacter() {}

// Begin Cross Module References
CPPGAME_API UClass* Z_Construct_UClass_ACppGameCharacter();
CPPGAME_API UClass* Z_Construct_UClass_ACppGameCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CppGame();
// End Cross Module References

// Begin Class ACppGameCharacter
void ACppGameCharacter::StaticRegisterNativesACppGameCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACppGameCharacter);
UClass* Z_Construct_UClass_ACppGameCharacter_NoRegister()
{
	return ACppGameCharacter::StaticClass();
}
struct Z_Construct_UClass_ACppGameCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CppGameCharacter.h" },
		{ "ModuleRelativePath", "CppGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CppGameCharacter" },
		{ "ModuleRelativePath", "CppGameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPoints_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Points" },
		{ "ModuleRelativePath", "CppGameCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACppGameCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACppGameCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACppGameCharacter_Statics::NewProp_PlayerPoints = { "PlayerPoints", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACppGameCharacter, PlayerPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPoints_MetaData), NewProp_PlayerPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACppGameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACppGameCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACppGameCharacter_Statics::NewProp_PlayerPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppGameCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACppGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACppGameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACppGameCharacter_Statics::ClassParams = {
	&ACppGameCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACppGameCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACppGameCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACppGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACppGameCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACppGameCharacter()
{
	if (!Z_Registration_Info_UClass_ACppGameCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACppGameCharacter.OuterSingleton, Z_Construct_UClass_ACppGameCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACppGameCharacter.OuterSingleton;
}
template<> CPPGAME_API UClass* StaticClass<ACppGameCharacter>()
{
	return ACppGameCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACppGameCharacter);
ACppGameCharacter::~ACppGameCharacter() {}
// End Class ACppGameCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACppGameCharacter, ACppGameCharacter::StaticClass, TEXT("ACppGameCharacter"), &Z_Registration_Info_UClass_ACppGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACppGameCharacter), 1319007440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameCharacter_h_2606253210(TEXT("/Script/CppGame"),
	Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
