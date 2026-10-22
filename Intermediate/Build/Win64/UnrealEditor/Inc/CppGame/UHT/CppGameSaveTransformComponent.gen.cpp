// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppGame/CppGameSaveTransformComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppGameSaveTransformComponent() {}

// Begin Cross Module References
CPPGAME_API UClass* Z_Construct_UClass_UCppGameSaveTransformComponent();
CPPGAME_API UClass* Z_Construct_UClass_UCppGameSaveTransformComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CppGame();
// End Cross Module References

// Begin Class UCppGameSaveTransformComponent
void UCppGameSaveTransformComponent::StaticRegisterNativesUCppGameSaveTransformComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCppGameSaveTransformComponent);
UClass* Z_Construct_UClass_UCppGameSaveTransformComponent_NoRegister()
{
	return UCppGameSaveTransformComponent::StaticClass();
}
struct Z_Construct_UClass_UCppGameSaveTransformComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CppGameSaveTransformComponent.h" },
		{ "ModuleRelativePath", "CppGameSaveTransformComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppGameSaveTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCppGameSaveTransformComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameSaveTransformComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCppGameSaveTransformComponent_Statics::ClassParams = {
	&UCppGameSaveTransformComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCppGameSaveTransformComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCppGameSaveTransformComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCppGameSaveTransformComponent()
{
	if (!Z_Registration_Info_UClass_UCppGameSaveTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCppGameSaveTransformComponent.OuterSingleton, Z_Construct_UClass_UCppGameSaveTransformComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCppGameSaveTransformComponent.OuterSingleton;
}
template<> CPPGAME_API UClass* StaticClass<UCppGameSaveTransformComponent>()
{
	return UCppGameSaveTransformComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCppGameSaveTransformComponent);
UCppGameSaveTransformComponent::~UCppGameSaveTransformComponent() {}
// End Class UCppGameSaveTransformComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveTransformComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCppGameSaveTransformComponent, UCppGameSaveTransformComponent::StaticClass, TEXT("UCppGameSaveTransformComponent"), &Z_Registration_Info_UClass_UCppGameSaveTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCppGameSaveTransformComponent), 108184259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveTransformComponent_h_3621995865(TEXT("/Script/CppGame"),
	Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveTransformComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_CppGameSaveTransformComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
