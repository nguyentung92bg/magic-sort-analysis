public class CollectionRewardAnimationService : MonoBehaviour, IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 5077
{
	// Fields
	[SerializeField]
	private TextMeshPro _coinAmountText; // 0x18
	[SerializeField]
	private BulkRewardAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private CurrencyViewFactory _defaultCurrencyViewFactory; // 0x28
	private Dictionary<CurrencyType, CurrencyRewardTarget> _currencyRewardTargets; // 0x30
	private CollectionService _collectionService; // 0x38
	private InventoryService _inventoryService; // 0x40
	private ProfileSpriteService _profileSpriteService; // 0x48
	private IPopUpService _popUpService; // 0x50
	private int _playingAnimationCount; // 0x58

	// Methods

	// RVA: 0x3CE19B8 Offset: 0x3CE19B8 VA: 0x3CE19B8 Slot: 4
	public void Initialize() { }

	// RVA: 0x3CE1C8C Offset: 0x3CE1C8C VA: 0x3CE1C8C Slot: 5
	public void Dispose() { }

	// RVA: 0x3CE1DEC Offset: 0x3CE1DEC VA: 0x3CE1DEC
	public bool HasAnyCompletedThemeReward() { }

	// RVA: 0x3CE1E08 Offset: 0x3CE1E08 VA: 0x3CE1E08
	public List<RewardModel> GetCompletedThemeRewards() { }

	[AsyncStateMachine(typeof(CollectionRewardAnimationService.<ShowThemeCompletedSequence>d__13))]
	// RVA: 0x3CE2024 Offset: 0x3CE2024 VA: 0x3CE2024
	public Task ShowThemeCompletedSequence() { }

	// RVA: 0x3CE2114 Offset: 0x3CE2114 VA: 0x3CE2114
	public bool HasCollectionCompletedReward() { }

	// RVA: 0x3CE2154 Offset: 0x3CE2154 VA: 0x3CE2154
	public List<RewardModel> GetCollectionCompletedRewardExceptToken() { }

	[AsyncStateMachine(typeof(CollectionRewardAnimationService.<ShowCollectionCompletedSequence>d__16))]
	// RVA: 0x3CE228C Offset: 0x3CE228C VA: 0x3CE228C
	public Task ShowCollectionCompletedSequence() { }

	// RVA: 0x3CE2378 Offset: 0x3CE2378 VA: 0x3CE2378
	public Sequence PlayMoveRewardsToTargetAnimation(CurrencyView currencyView, RewardModel rewardModel) { }

	// RVA: 0x3CE2A50 Offset: 0x3CE2A50 VA: 0x3CE2A50
	private void SetFloatingCoinAmountText(int amount, Vector3 position) { }

	// RVA: 0x3CE2B44 Offset: 0x3CE2B44 VA: 0x3CE2B44
	private Tween CoinAmountMoveUp() { }

	// RVA: 0x3CE2C78 Offset: 0x3CE2C78 VA: 0x3CE2C78
	private Tween ScaleCoinAmountText() { }

	// RVA: 0x3CE2D98 Offset: 0x3CE2D98 VA: 0x3CE2D98
	private List<CurrencyView> GetCoinCurrencyViews(int coinRewardAmount) { }

	// RVA: 0x3CE31B0 Offset: 0x3CE31B0 VA: 0x3CE31B0
	private int MapRewardToViewCount(int rewardCount, int minReward, int maxReward, int minViewCount, int maxViewCount) { }

	// RVA: 0x3CE305C Offset: 0x3CE305C VA: 0x3CE305C
	private void SetCoinSortOrders(List<CurrencyView> coinCurrencyViews, int sortOrder) { }

	// RVA: 0x3CE2ED0 Offset: 0x3CE2ED0 VA: 0x3CE2ED0
	private void SetCoinPositions(List<CurrencyView> coinCurrencyViews, Vector3 startPosition) { }

	// RVA: 0x3CE2D8C Offset: 0x3CE2D8C VA: 0x3CE2D8C
	private Tween FadeCoinAmountText(float alpha, float duration) { }

	// RVA: 0x3CE32C4 Offset: 0x3CE32C4 VA: 0x3CE32C4
	private void OnCurrencyDisplayerActiveSignal(CurrencyType currencyType, CurrencyRewardTarget currencyRewardTarget) { }

	// RVA: 0x3CE332C Offset: 0x3CE332C VA: 0x3CE332C
	private void OnCurrencyDisplayerDeactiveSignal(CurrencyType currencyType, CurrencyRewardTarget currencyRewardTarget) { }

	// RVA: 0x3CE3388 Offset: 0x3CE3388 VA: 0x3CE3388 Slot: 6
	public bool IsInterrupting() { }

	// RVA: 0x3CE3398 Offset: 0x3CE3398 VA: 0x3CE3398
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CE33A0 Offset: 0x3CE33A0 VA: 0x3CE33A0
	private void <CoinAmountMoveUp>b__19_0() { }
}

// Namespace: 
[CompilerGenerated]