// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class KMIDS_UE5_V1_2025 : ModuleRules
{
	public KMIDS_UE5_V1_2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
