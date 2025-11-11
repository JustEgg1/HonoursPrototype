// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HonoursPrototypeGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHonoursPrototypeGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HONOURSPROTOTYPE_API UClass* Z_Construct_UClass_AHonoursPrototypeGameMode();
HONOURSPROTOTYPE_API UClass* Z_Construct_UClass_AHonoursPrototypeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HonoursPrototype();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHonoursPrototypeGameMode ************************************************
void AHonoursPrototypeGameMode::StaticRegisterNativesAHonoursPrototypeGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHonoursPrototypeGameMode;
UClass* AHonoursPrototypeGameMode::GetPrivateStaticClass()
{
	using TClass = AHonoursPrototypeGameMode;
	if (!Z_Registration_Info_UClass_AHonoursPrototypeGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HonoursPrototypeGameMode"),
			Z_Registration_Info_UClass_AHonoursPrototypeGameMode.InnerSingleton,
			StaticRegisterNativesAHonoursPrototypeGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AHonoursPrototypeGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHonoursPrototypeGameMode_NoRegister()
{
	return AHonoursPrototypeGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHonoursPrototypeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HonoursPrototypeGameMode.h" },
		{ "ModuleRelativePath", "HonoursPrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHonoursPrototypeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHonoursPrototypeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HonoursPrototype,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHonoursPrototypeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHonoursPrototypeGameMode_Statics::ClassParams = {
	&AHonoursPrototypeGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHonoursPrototypeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHonoursPrototypeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHonoursPrototypeGameMode()
{
	if (!Z_Registration_Info_UClass_AHonoursPrototypeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHonoursPrototypeGameMode.OuterSingleton, Z_Construct_UClass_AHonoursPrototypeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHonoursPrototypeGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHonoursPrototypeGameMode);
AHonoursPrototypeGameMode::~AHonoursPrototypeGameMode() {}
// ********** End Class AHonoursPrototypeGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2202245_Documents_Unreal_Projects_HonoursPrototype_Source_HonoursPrototype_HonoursPrototypeGameMode_h__Script_HonoursPrototype_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHonoursPrototypeGameMode, AHonoursPrototypeGameMode::StaticClass, TEXT("AHonoursPrototypeGameMode"), &Z_Registration_Info_UClass_AHonoursPrototypeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHonoursPrototypeGameMode), 3825439954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2202245_Documents_Unreal_Projects_HonoursPrototype_Source_HonoursPrototype_HonoursPrototypeGameMode_h__Script_HonoursPrototype_1762098868(TEXT("/Script/HonoursPrototype"),
	Z_CompiledInDeferFile_FID_Users_2202245_Documents_Unreal_Projects_HonoursPrototype_Source_HonoursPrototype_HonoursPrototypeGameMode_h__Script_HonoursPrototype_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2202245_Documents_Unreal_Projects_HonoursPrototype_Source_HonoursPrototype_HonoursPrototypeGameMode_h__Script_HonoursPrototype_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
