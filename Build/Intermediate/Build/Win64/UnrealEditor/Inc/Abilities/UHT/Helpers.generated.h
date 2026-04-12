// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Misc/Helpers.h"

#ifdef ABILITIES_Helpers_generated_h
#error "Helpers.generated.h already included, missing '#pragma once' in Helpers.h"
#endif
#define ABILITIES_Helpers_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Piperift_TestBench_Plugins_Abilities_Build_HostProject_Plugins_Abilities_Source_Abilities_Public_Misc_Helpers_h

// ********** Begin Enum EAllAny *******************************************************************
#define FOREACH_ENUM_EALLANY(op) \
	op(EAllAny::All) \
	op(EAllAny::Any) 

enum class EAllAny : uint8;
template<> struct TIsUEnumClass<EAllAny> { enum { Value = true }; };
template<> ABILITIES_NON_ATTRIBUTED_API UEnum* StaticEnum<EAllAny>();
// ********** End Enum EAllAny *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
