public class RewardService : IRestartableService, IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 5100
{
	// Fields
	private InventoryService _inventoryService; // 0x10
	private OrderedRewardQueue _orderedRewardQueue; // 0x18
	private OrderedRewardAnimationService _orderedRewardAnimationService; // 0x20
	private BulkRewardAnimationService _bulkRewardAnimationService; // 0x28
	private BulkRewardQueue _bulkRewardQueue; // 0x30
	private CollectionRewardAnimationService _collectionRewardAnimationService; // 0x38

	// Methods

	// RVA: 0x3CE7E44 Offset: 0x3CE7E44 VA: 0x3CE7E44
	public void .ctor(InventoryService inventoryService, OrderedRewardAnimationService orderedRewardAnimationService, BulkRewardAnimationService bulkRewardAnimationService, CollectionRewardAnimationService collectionRewardAnimationService) { }

	[AsyncStateMachine(typeof(RewardService.<Initialize>d__7))]
	// RVA: 0x3CE7EB8 Offset: 0x3CE7EB8 VA: 0x3CE7EB8 Slot: 4
	public void Initialize() { }

	// RVA: 0x3CE7F6C Offset: 0x3CE7F6C VA: 0x3CE7F6C
	public CurrencyRewardTarget GetCurrencyRewardTarget(CurrencyType currencyType) { }

	// RVA: 0x3CE7F84 Offset: 0x3CE7F84 VA: 0x3CE7F84
	public void GiveDirectlyReward(CurrencyEarnReason currencyEarnReason, RewardModel reward) { }

	// RVA: 0x3CE80DC Offset: 0x3CE80DC VA: 0x3CE80DC
	public void GiveDirectlyRewards(CurrencyEarnReason currencyEarnReason, List<RewardModel> rewards) { }

	// RVA: 0x3CE831C Offset: 0x3CE831C VA: 0x3CE831C
	public void QueueRewards(CurrencyEarnReason currencyEarnReason, List<RewardModel> rewards) { }

	// RVA: 0x3CE86B0 Offset: 0x3CE86B0 VA: 0x3CE86B0
	public void QueueReward(CurrencyEarnReason currencyEarnReason, RewardModel reward) { }

	// RVA: 0x3CE8810 Offset: 0x3CE8810 VA: 0x3CE8810
	public void PendRewards(List<RewardModel> rewards) { }

	// RVA: 0x3CE84D0 Offset: 0x3CE84D0 VA: 0x3CE84D0
	private void PendReward(RewardModel reward) { }

	[AsyncStateMachine(typeof(RewardService.<GiveNextRewardAsync>d__15))]
	// RVA: 0x3CE894C Offset: 0x3CE894C VA: 0x3CE894C
	public Task GiveNextRewardAsync() { }

	// RVA: 0x3CE8A38 Offset: 0x3CE8A38 VA: 0x3CE8A38
	public Tween GiveNextReward() { }

	// RVA: 0x3CE8A70 Offset: 0x3CE8A70 VA: 0x3CE8A70
	public Tween GiveRegularLevelCoinRewards() { }

	// RVA: 0x3CE8D3C Offset: 0x3CE8D3C VA: 0x3CE8D3C
	public Tween GiveDailyLevelCoinRewards() { }

	[AsyncStateMachine(typeof(RewardService.<GiveAllRewards>d__19))]
	// RVA: 0x3CE8FA0 Offset: 0x3CE8FA0 VA: 0x3CE8FA0
	public Task GiveAllRewards() { }

	[AsyncStateMachine(typeof(RewardService.<GiveNextRewardFromPosition>d__20))]
	// RVA: 0x3CE9090 Offset: 0x3CE9090 VA: 0x3CE9090
	public Task GiveNextRewardFromPosition(Vector3 position) { }

	// RVA: 0x3CE91A0 Offset: 0x3CE91A0 VA: 0x3CE91A0
	public bool HasBulkRewardByCurrencyEarnReason(CurrencyEarnReason currencyEarnReason) { }

	[AsyncStateMachine(typeof(RewardService.<GiveBulkRewards>d__22))]
	// RVA: 0x3CE91B8 Offset: 0x3CE91B8 VA: 0x3CE91B8
	public Task GiveBulkRewards(CurrencyEarnReason currencyEarnReason) { }

	[AsyncStateMachine(typeof(RewardService.<GiveBulkRewardsCombined>d__23))]
	// RVA: 0x3CE92B0 Offset: 0x3CE92B0 VA: 0x3CE92B0
	public Task GiveBulkRewardsCombined(CurrencyEarnReason currencyEarnReason) { }

	[AsyncStateMachine(typeof(RewardService.<TryShowCollectionRewards>d__24))]
	// RVA: 0x3CE93A8 Offset: 0x3CE93A8 VA: 0x3CE93A8
	public Task TryShowCollectionRewards() { }

	// RVA: 0x3CE9494 Offset: 0x3CE9494 VA: 0x3CE9494
	public void QueueBulkRewards(CurrencyEarnReason currencyEarnReason, List<RewardModel> rewardModels) { }

	// RVA: 0x3CE9518 Offset: 0x3CE9518 VA: 0x3CE9518
	public void QueueBulkReward(CurrencyEarnReason currencyEarnReason, RewardModel rewardModel) { }

	// RVA: 0x3CE982C Offset: 0x3CE982C VA: 0x3CE982C
	public void ResetAllRewards() { }

	// RVA: 0x3CE9864 Offset: 0x3CE9864 VA: 0x3CE9864 Slot: 5
	public void Dispose() { }

	// RVA: 0x3CE9868 Offset: 0x3CE9868 VA: 0x3CE9868 Slot: 6
	public bool IsInterrupting() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]