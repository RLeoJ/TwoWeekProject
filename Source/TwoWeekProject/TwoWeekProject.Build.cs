// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TwoWeekProject : ModuleRules
{
	public TwoWeekProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
