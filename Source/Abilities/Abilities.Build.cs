// Copyright 2020 Splash Damage, Ltd. - All Rights Reserved.

using UnrealBuildTool;

public class Abilities : ModuleRules
{
	public Abilities(ReadOnlyTargetRules Target) : base(Target)
	{
		// Enable support for Include-What-You-Use
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"DeveloperSettings",
			"Engine",
			"GameplayTags"
		});
	}
}
