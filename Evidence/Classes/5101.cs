private sealed class RewardUtil.<>c // TypeDefIndex: 5101
{
	// Fields
	public static readonly RewardUtil.<>c <>9; // 0x0
	public static Func<RewardModel, CurrencyType> <>9__0_0; // 0x8
	public static Func<RewardModel, int> <>9__0_2; // 0x10
	public static Func<TimeSpan, RewardModel, TimeSpan> <>9__0_3; // 0x18
	public static Func<RewardModel, IEnumerable<RewardModel>> <>9__0_4; // 0x20
	public static Func<IGrouping<CurrencyType, RewardModel>, RewardModel> <>9__0_1; // 0x28

	// Methods

	// RVA: 0x3CEB7E4 Offset: 0x3CEB7E4 VA: 0x3CEB7E4
	private static void .cctor() { }

	// RVA: 0x3CEB854 Offset: 0x3CEB854 VA: 0x3CEB854
	public void .ctor() { }

	// RVA: 0x3CEB85C Offset: 0x3CEB85C VA: 0x3CEB85C
	internal CurrencyType <MergeRewards>b__0_0(RewardModel r) { }

	// RVA: 0x3CEB874 Offset: 0x3CEB874 VA: 0x3CEB874
	internal RewardModel <MergeRewards>b__0_1(IGrouping<CurrencyType, RewardModel> group) { }

	// RVA: 0x3CEBC00 Offset: 0x3CEBC00 VA: 0x3CEBC00
	internal int <MergeRewards>b__0_2(RewardModel r) { }

	// RVA: 0x3CEBC18 Offset: 0x3CEBC18 VA: 0x3CEBC18
	internal TimeSpan <MergeRewards>b__0_3(TimeSpan total, RewardModel next) { }

	// RVA: 0x3CEBC84 Offset: 0x3CEBC84 VA: 0x3CEBC84
	internal IEnumerable<RewardModel> <MergeRewards>b__0_4(RewardModel r) { }
}

// Namespace: Modules.Contexts.Application.Reward.Scripts
[Extension]