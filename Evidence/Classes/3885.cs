public struct MagicStreakGaeViewCache // TypeDefIndex: 3885
{
	// Fields
	public MagicStreakGaeAnimationType MagicStreakGaeAnimationType; // 0x0
	public MagicStreakGaeProgressViewModel LastSeenMultiplierBarViewModel; // 0x4
	public MagicStreakGaeProgressViewModel CurrentMultiplierBarViewModel; // 0xC
	public int LevelMultiplierForLevelWinAnimation; // 0x14
	public int CurrentRewardScore; // 0x18
	public List<int> Multipliers; // 0x20
	public MagicStreakGaeStepViewModel CurrentStepViewModel; // 0x28
	public MagicStreakGaeStepViewModel LastSeenStepViewModel; // 0x40
	public bool IsAllStepsClaimed; // 0x58
	public DateTime EndDateUtc; // 0x60
	public int CurrentStepIndexInRewards; // 0x68
	public List<MagicStreakGaeRewardElementViewModel> ProgressbarRewards; // 0x70
	[CanBeNull]
	public List<MagicStreakGaeStepViewModel> MagicStreakGaeStepViewModels; // 0x78

	// Methods

	// RVA: 0x3CFF85C Offset: 0x3CFF85C VA: 0x3CFF85C
	public bool ShouldPlayStreakMultiplierStepAnimation() { }

	// RVA: 0x3CFF884 Offset: 0x3CFF884 VA: 0x3CFF884
	public bool ShouldPlayRewardAnimation() { }

	// RVA: 0x3CFF894 Offset: 0x3CFF894 VA: 0x3CFF894
	public bool ShouldPlayAnimation() { }
}

// Namespace: 
[CompilerGenerated]