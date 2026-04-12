// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitiesTest_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AbilitiesTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AbilitiesTest()
	{
		if (!Z_Registration_Info_UPackage__Script_AbilitiesTest.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/AbilitiesTest",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000080,
			0xB030172B,
			0xC63700DC,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AbilitiesTest.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_AbilitiesTest.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AbilitiesTest(Z_Construct_UPackage__Script_AbilitiesTest, TEXT("/Script/AbilitiesTest"), Z_Registration_Info_UPackage__Script_AbilitiesTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB030172B, 0xC63700DC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
