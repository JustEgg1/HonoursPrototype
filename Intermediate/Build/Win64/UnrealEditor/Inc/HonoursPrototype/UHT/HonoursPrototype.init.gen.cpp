// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHonoursPrototype_init() {}
	HONOURSPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_HonoursPrototype_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HonoursPrototype;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HonoursPrototype()
	{
		if (!Z_Registration_Info_UPackage__Script_HonoursPrototype.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HonoursPrototype_OnUnitMoveCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HonoursPrototype",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x95733D1A,
				0xC9652B7E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HonoursPrototype.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HonoursPrototype.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HonoursPrototype(Z_Construct_UPackage__Script_HonoursPrototype, TEXT("/Script/HonoursPrototype"), Z_Registration_Info_UPackage__Script_HonoursPrototype, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x95733D1A, 0xC9652B7E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
