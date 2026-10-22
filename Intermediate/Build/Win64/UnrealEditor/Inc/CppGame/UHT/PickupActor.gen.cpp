// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppGame/PickupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupActor() {}

// Begin Cross Module References
CPPGAME_API UClass* Z_Construct_UClass_APickupActor();
CPPGAME_API UClass* Z_Construct_UClass_APickupActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CppGame();
// End Cross Module References

// Begin Class APickupActor
void APickupActor::StaticRegisterNativesAPickupActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupActor);
UClass* Z_Construct_UClass_APickupActor_NoRegister()
{
	return APickupActor::StaticClass();
}
struct Z_Construct_UClass_APickupActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PickupActor.h" },
		{ "ModuleRelativePath", "PickupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "ModuleRelativePath", "PickupActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "PickupActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Degrees per second\n" },
#endif
		{ "ModuleRelativePath", "PickupActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Degrees per second" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[] = {
		{ "Category", "PickupActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupActor, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationSpeed_MetaData), NewProp_rotationSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupActor, Points), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupActor_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupActor, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMesh_MetaData), NewProp_PickupMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_rotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupActor_Statics::NewProp_PickupMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APickupActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CppGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupActor_Statics::ClassParams = {
	&APickupActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APickupActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickupActor()
{
	if (!Z_Registration_Info_UClass_APickupActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupActor.OuterSingleton, Z_Construct_UClass_APickupActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickupActor.OuterSingleton;
}
template<> CPPGAME_API UClass* StaticClass<APickupActor>()
{
	return APickupActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickupActor);
APickupActor::~APickupActor() {}
// End Class APickupActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_PickupActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickupActor, APickupActor::StaticClass, TEXT("APickupActor"), &Z_Registration_Info_UClass_APickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupActor), 890709863U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_PickupActor_h_926789856(TEXT("/Script/CppGame"),
	Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_PickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Freyja_Documents_Unreal_Projects_CppGame_Source_CppGame_PickupActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
