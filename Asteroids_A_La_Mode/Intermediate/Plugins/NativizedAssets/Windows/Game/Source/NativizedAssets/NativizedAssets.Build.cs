// We don't have a legal team rip.

using UnrealBuildTool;

public class NativizedAssets : ModuleRules
{
	public NativizedAssets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine", "Asteroids_A_La_Mode" });

		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "UMG", "InputCore", "OnlineSubsystemUtils", "SlateCore", "ClothingSystemRuntimeInterface", "AIModule", "GameplayTasks", "MovieScene", "Slate" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
