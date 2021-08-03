// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BowSim : ModuleRules
{
	public BowSim(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
