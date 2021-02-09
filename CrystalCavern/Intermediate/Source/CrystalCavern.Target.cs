using UnrealBuildTool;

public class CrystalCavernTarget : TargetRules
{
	public CrystalCavernTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("CrystalCavern");
	}
}
