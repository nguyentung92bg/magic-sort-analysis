public class OrderedRewardQueue : IHomeIdleInterrupter // TypeDefIndex: 5084
{
	// Fields
	private List<RewardQueueModel> _rewardList; // 0x10

	// Methods

	// RVA: 0x3CE58A8 Offset: 0x3CE58A8 VA: 0x3CE58A8
	public void AddReward(CurrencyEarnReason currencyEarnReason, RewardModel reward) { }

	// RVA: 0x3CE59AC Offset: 0x3CE59AC VA: 0x3CE59AC
	public RewardModel GetNextReward() { }

	// RVA: 0x3CE5AA8 Offset: 0x3CE5AA8 VA: 0x3CE5AA8
	public List<RewardModel> GetAndRemoveRewardsByEarnReasons(List<CurrencyEarnReason> currencyEarnReasons) { }

	// RVA: 0x3CE5C68 Offset: 0x3CE5C68 VA: 0x3CE5C68
	public int Count() { }

	// RVA: 0x3CE5CB0 Offset: 0x3CE5CB0 VA: 0x3CE5CB0
	public void ResetAllRewards() { }

	// RVA: 0x3CE5D20 Offset: 0x3CE5D20 VA: 0x3CE5D20 Slot: 4
	public bool IsInterrupting() { }

	// RVA: 0x3CE5D70 Offset: 0x3CE5D70 VA: 0x3CE5D70
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Reward.Scripts