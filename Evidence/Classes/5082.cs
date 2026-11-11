public class OrderedRewardAnimationService : IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 5082
{
	// Fields
	private CurrencyViewFactory _currencyViewFactory; // 0x10
	private InventoryService _inventoryService; // 0x18
	private Dictionary<CurrencyType, CurrencyRewardTarget> _currencyRewardTargets; // 0x20
	private CurrencyAnimationConfig _currencyAnimationConfig; // 0x28
	private bool _isAnimationPlaying; // 0x30

	// Methods

	// RVA: 0x3CE4218 Offset: 0x3CE4218 VA: 0x3CE4218
	public void .ctor(CurrencyViewFactory currencyViewFactory, InventoryService inventoryService, CurrencyAnimationConfig currencyAnimationConfig) { }

	// RVA: 0x3CE4278 Offset: 0x3CE4278 VA: 0x3CE4278 Slot: 4
	public void Initialize() { }

	// RVA: 0x3CE4428 Offset: 0x3CE4428 VA: 0x3CE4428
	public CurrencyRewardTarget GetCurrencyRewardTarget(CurrencyType currencyType) { }

	// RVA: 0x3CE4480 Offset: 0x3CE4480 VA: 0x3CE4480
	public void OnCurrencyDisplayerActiveSignal(CurrencyType currencyType, CurrencyRewardTarget currencyRewardTarget) { }

	// RVA: 0x3CE44E8 Offset: 0x3CE44E8 VA: 0x3CE44E8
	public void OnCurrencyDisplayerDeactiveSignal(CurrencyType currencyType, CurrencyRewardTarget currencyRewardTarget) { }

	[AsyncStateMachine(typeof(OrderedRewardAnimationService.<PlayRewardAnimationAndEarnOnAnimationCompleteAsync>d__10))]
	// RVA: 0x3CE4544 Offset: 0x3CE4544 VA: 0x3CE4544
	public Task PlayRewardAnimationAndEarnOnAnimationCompleteAsync(RewardModel rewardModel, Nullable<Vector3> initialPosition) { }

	// RVA: 0x3CE465C Offset: 0x3CE465C VA: 0x3CE465C
	public Tween PlayRewardAnimationAndEarnOnAnimationComplete(RewardModel rewardModel, Nullable<Vector3> initialPosition) { }

	// RVA: 0x3CE4B3C Offset: 0x3CE4B3C VA: 0x3CE4B3C
	private void GiveAmountRewards(RewardModel rewardModel, CurrencyType currencyType, Sequence sequence, Nullable<Vector3> initialPosition) { }

	// RVA: 0x3CE5030 Offset: 0x3CE5030 VA: 0x3CE5030
	private List<int> GetRewardsAmountsForBoosters(int amount) { }

	// RVA: 0x3CE48BC Offset: 0x3CE48BC VA: 0x3CE48BC
	private void GiveDurationRewards(RewardModel rewardModel, CurrencyType currencyType, Sequence sequence, Nullable<Vector3> initialPosition) { }

	// RVA: 0x3CE4E70 Offset: 0x3CE4E70 VA: 0x3CE4E70
	private List<int> GetRewardsAmountsForCoins(int amount) { }

	// RVA: 0x3CE52D8 Offset: 0x3CE52D8 VA: 0x3CE52D8 Slot: 5
	public void Dispose() { }

	// RVA: 0x3CE52DC Offset: 0x3CE52DC VA: 0x3CE52DC Slot: 6
	public bool IsInterrupting() { }

	// RVA: 0x3CE52E4 Offset: 0x3CE52E4 VA: 0x3CE52E4
	public void Reset() { }

	[CompilerGenerated]
	// RVA: 0x3CE52EC Offset: 0x3CE52EC VA: 0x3CE52EC
	private void <PlayRewardAnimationAndEarnOnAnimationComplete>b__11_0() { }
}

// Namespace: Modules.Contexts.Application.Reward.Scripts