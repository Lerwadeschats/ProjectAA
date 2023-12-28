// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectAA : ModuleRules
{
	public ProjectAA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
