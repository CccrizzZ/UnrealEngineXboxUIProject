// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Liu_Beining : ModuleRules
{
	public Project_Liu_Beining(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
