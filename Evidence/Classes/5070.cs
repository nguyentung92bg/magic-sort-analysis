public class BulkRewardQueue : IHomeIdleInterrupter // TypeDefIndex: 5070
{
	// Fields
	private readonly Dictionary<CurrencyEarnReason, List<RewardModel>> _rewards; // 0x10

	// Methods

	// RVA: 0x3CE14A4 Offset: 0x3CE14A4 VA: 0x3CE14A4
	public void AddReward(CurrencyEarnReason currencyEarnReason, RewardModel reward) { }

	// RVA: 0x3CE1624 Offset: 0x3CE1624 VA: 0x3CE1624
	public void AddRewards(CurrencyEarnReason currencyEarnReason, List<RewardModel> rewards) { }

	// RVA: 0x3CE1748 Offset: 0x3CE1748 VA: 0x3CE1748
	public List<RewardModel> GetAndRemoveRewardsByEarnReason(CurrencyEarnReason currencyEarnReason) { }

	// RVA: 0x3CE182C Offset: 0x3CE182C VA: 0x3CE182C
	public bool HasReward(CurrencyEarnReason currencyEarnReason) { }

	// RVA: 0x3CE1884 Offset: 0x3CE1884 VA: 0x3CE1884
	public void ResetAllRewards() { }

	// RVA: 0x3CE18D4 Offset: 0x3CE18D4 VA: 0x3CE18D4 Slot: 4
	public bool IsInterrupting() { }

	// RVA: 0x3CE1930 Offset: 0x3CE1930 VA: 0x3CE1930
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]