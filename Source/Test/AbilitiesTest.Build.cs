// Copyright 2020 Splash Damage, Ltd. - All Rights Reserved.

using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class AbilitiesTest : ModuleRules
	{
		public AbilitiesTest(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core"
			});

			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"Abilities",
				"CoreUObject",
				"Engine",
				"EngineSettings"
			});

			if (Target.bBuildEditor)
			{
				PrivateDependencyModuleNames.Add("UnrealEd");
			}
		}
	}
}