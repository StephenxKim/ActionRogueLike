// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRogueLike/SCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}

// Begin Cross Module References
ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASCharacter();
ACTIONROGUELIKE_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActionRogueLike();
// End Cross Module References

// Begin Class ASCharacter
void ASCharacter::StaticRegisterNativesASCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCharacter);
UClass* Z_Construct_UClass_ASCharacter_NoRegister()
{
	return ASCharacter::StaticClass();
}
struct Z_Construct_UClass_ASCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCharacter.h" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "SCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ActionRogueLike,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCharacter_Statics::ClassParams = {
	&ASCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASCharacter()
{
	if (!Z_Registration_Info_UClass_ASCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCharacter.OuterSingleton, Z_Construct_UClass_ASCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASCharacter.OuterSingleton;
}
template<> ACTIONROGUELIKE_API UClass* StaticClass<ASCharacter>()
{
	return ASCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
ASCharacter::~ASCharacter() {}
// End Class ASCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASCharacter, ASCharacter::StaticClass, TEXT("ASCharacter"), &Z_Registration_Info_UClass_ASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCharacter), 2521381599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_1219610128(TEXT("/Script/ActionRogueLike"),
	Z_CompiledInDeferFile_FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Downloads_GitHub_ActionRogueLike_Source_ActionRogueLike_SCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
