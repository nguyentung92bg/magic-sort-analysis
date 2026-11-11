public class BulkRewardAnimationService : MonoBehaviour, IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 5069
{
	// Fields
	[SerializeField]
	private SpriteRenderer _backGround; // 0x18
	[SerializeField]
	private TextMeshPro _bottomText; // 0x20
	[SerializeField]
	private TextMeshPro _coinAmountText; // 0x28
	[SerializeField]
	private List<Transform> _layoutTransformParents; // 0x30
	[SerializeField]
	private CurrencyViewFactory _bulkRewardCurrencyViewFactory; // 0x38
	[SerializeField]
	private CurrencyViewFactory _defaultCurrencyViewFactory; // 0x40
	[SerializeField]
	private BulkRewardAnimationConfig _animationConfig; // 0x48
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x50
	[SerializeField]
	private Transform _duplicatedStarsMoveTransform; // 0x58
	[SerializeField]
	private CollectionAnimationConfig _collectionAnimationConfig; // 0x60
	private Dictionary<int, List<Transform>> _layoutTransforms; // 0x68
	private InventoryService _inventoryService; // 0x70
	private Dictionary<CurrencyType, CurrencyRewardTarget> _currencyRewardTargets; // 0x78
	private List<RewardModel> _rewardModels; // 0x80
	private readonly List<CurrencyView> _usingCurrencyViews; // 0x88
	private TaskCompletionSource<bool> _claimCompletionSource; // 0x90
	private Sequence _revealSequence; // 0x98
	private Sequence _gatherSequence; // 0xA0
	private Sequence _collectionPackSequence; // 0xA8
	private Sequence _instantlyOpenCardPackSequence; // 0xB0
	[SerializeField]
	private Button _continueButton; // 0xB8
	[SerializeField]
	private Button _continueButtonPrefab; // 0xC0
	[SerializeField]
	private ParticleSystem _instantlyOpenCardPackParticles; // 0xC8
	private CollectionService _collectionService; // 0xD0
	[TupleElementNames(new[] { "openedCardPack", "view" })]
	private List<ValueTuple<OpenedCardPackData, CurrencyView>> _openedCardPacks; // 0xD8
	private int _activeCardPackIndex; // 0xE0
	private bool _isPopUpOpen; // 0xE4
	private Button _claimCardsButton; // 0xE8
	private Button _skipButton; // 0xF0
	private Transform _dynamicLayoutParent; // 0xF8

	// Methods

	// RVA: 0x3CDBA0C Offset: 0x3CDBA0C VA: 0x3CDBA0C Slot: 4
	public void Initialize() { }

	// RVA: 0x3CDBE7C Offset: 0x3CDBE7C VA: 0x3CDBE7C
	private void OnContinueButtonDown() { }

	// RVA: 0x3CDBC60 Offset: 0x3CDBC60 VA: 0x3CDBC60
	private void CacheLayoutPositions() { }

	// RVA: 0x3CDC310 Offset: 0x3CDC310 VA: 0x3CDC310
	public void OnCurrencyDisplayerActiveSignal(CurrencyType currencyType, CurrencyRewardTarget currencyRewardTarget) { }

	// RVA: 0x3CDC378 Offset: 0x3CDC378 VA: 0x3CDC378
	public void OnCurrencyDisplayerDeactiveSignal(CurrencyType currencyType, CurrencyRewardTarget currencyRewardTarget) { }

	// RVA: 0x3CDC3D4 Offset: 0x3CDC3D4 VA: 0x3CDC3D4
	public Task ShowRewards(List<RewardModel> rewards, CurrencyEarnReason currencyEarnReason) { }

	// RVA: 0x3CDCA48 Offset: 0x3CDCA48 VA: 0x3CDCA48
	private void SetTextAccordingToCurrencyEarnReason(CurrencyEarnReason currencyEarnReason) { }

	// RVA: 0x3CDCE38 Offset: 0x3CDCE38 VA: 0x3CDCE38
	private void TryInstantiateContinueButton() { }

	// RVA: 0x3CDCF84 Offset: 0x3CDCF84 VA: 0x3CDCF84
	private void TryInstantiateClaimCardsButton() { }

	// RVA: 0x3CDD0D0 Offset: 0x3CDD0D0 VA: 0x3CDD0D0
	private void TryInstantiateSkipButton() { }

	// RVA: 0x3CDC540 Offset: 0x3CDC540 VA: 0x3CDC540
	private void ShowRewardsAnimations(CurrencyEarnReason currencyEarnReason) { }

	// RVA: 0x3CDD7F8 Offset: 0x3CDD7F8 VA: 0x3CDD7F8
	private Tween SetTextAndPlayTextSequence(CurrencyEarnReason currencyEarnReason) { }

	// RVA: 0x3CDC170 Offset: 0x3CDC170 VA: 0x3CDC170
	private void OnClaimMoveCurrencies() { }

	// RVA: 0x3CDD8C8 Offset: 0x3CDD8C8 VA: 0x3CDD8C8
	private Sequence RevealRewards() { }

	// RVA: 0x3CDDF2C Offset: 0x3CDDF2C VA: 0x3CDDF2C
	private Sequence GatherRewards() { }

	// RVA: 0x3CDEE08 Offset: 0x3CDEE08 VA: 0x3CDEE08
	private void ResetCurrencyTextScales() { }

	// RVA: 0x3CDE6A0 Offset: 0x3CDE6A0 VA: 0x3CDE6A0
	private void SetFloatingCoinAmountText(int amount, Vector3 position) { }

	// RVA: 0x3CDEF54 Offset: 0x3CDEF54 VA: 0x3CDEF54
	public int MapRewardToViewCount(int rewardCount, int minReward, int maxReward, int minViewCount, int maxViewCount) { }

	// RVA: 0x3CDE9E8 Offset: 0x3CDE9E8 VA: 0x3CDE9E8
	private List<CurrencyView> GetCoinCurrencyViews(int coinRewardAmount) { }

	// RVA: 0x3CDF068 Offset: 0x3CDF068 VA: 0x3CDF068
	private List<int> GetRewardsAmountsForCoins(int amount) { }

	// RVA: 0x3CDECAC Offset: 0x3CDECAC VA: 0x3CDECAC
	private void SetCoinSortOrders(List<CurrencyView> coinCurrencyViews, int sortOrder) { }

	// RVA: 0x3CDEB20 Offset: 0x3CDEB20 VA: 0x3CDEB20
	private void SetCoinPositions(List<CurrencyView> coinCurrencyViews, Vector3 startPosition) { }

	// RVA: 0x3CDD708 Offset: 0x3CDD708 VA: 0x3CDD708
	private void SetRewardAmountsText() { }

	// RVA: 0x3CDD528 Offset: 0x3CDD528 VA: 0x3CDD528
	private void SetRewardPositions() { }

	// RVA: 0x3CDF290 Offset: 0x3CDF290 VA: 0x3CDF290
	private void SetDynamicRewardPositions() { }

	// RVA: 0x3CDF560 Offset: 0x3CDF560 VA: 0x3CDF560
	private Vector3[] GetDynamicRewardPositions(int count, float maxWidth = 6, float maxHeight = 6) { }

	// RVA: 0x3CDD21C Offset: 0x3CDD21C VA: 0x3CDD21C
	private void GetCurrencyViews() { }

	// RVA: 0x3CDDA8C Offset: 0x3CDDA8C VA: 0x3CDDA8C
	private Tween BottomTextScaleIn() { }

	// RVA: 0x3CDDDF8 Offset: 0x3CDDDF8 VA: 0x3CDDDF8
	private Tween BottomTextScaleOut() { }

	// RVA: 0x3CDD81C Offset: 0x3CDD81C VA: 0x3CDD81C
	private Tween FadeInBackground() { }

	// RVA: 0x3CDDD0C Offset: 0x3CDDD0C VA: 0x3CDDD0C
	private Tween FadeOutBackground() { }

	// RVA: 0x3CDF7B4 Offset: 0x3CDF7B4 VA: 0x3CDF7B4
	private List<RewardModel> GetRandomRewards() { }

	// RVA: 0x3CDDBC0 Offset: 0x3CDDBC0 VA: 0x3CDDBC0
	private void StopAllParticles() { }

	// RVA: 0x3CDE8C8 Offset: 0x3CDE8C8 VA: 0x3CDE8C8
	private Tween ScaleCoinAmountText() { }

	// RVA: 0x3CDE9DC Offset: 0x3CDE9DC VA: 0x3CDE9DC
	private Tween FadeCoinAmountText(float alpha, float duration) { }

	// RVA: 0x3CDE794 Offset: 0x3CDE794 VA: 0x3CDE794
	private Tween CoinAmountMoveUp() { }

	// RVA: 0x3CDC7C8 Offset: 0x3CDC7C8 VA: 0x3CDC7C8
	private void UpdateOpenedCardPacks(CurrencyEarnReason currencyEarnReason) { }

	// RVA: 0x3CDBF30 Offset: 0x3CDBF30 VA: 0x3CDBF30
	private void StartCollectionPackOpeningSequence() { }

	// RVA: 0x3CDFEF8 Offset: 0x3CDFEF8 VA: 0x3CDFEF8
	private Tween PlayActiveCardPackOpenSequence() { }

	// RVA: 0x3CDFCCC Offset: 0x3CDFCCC VA: 0x3CDFCCC
	private List<CurrencyView> GetCurrencyViewsToScaleOut() { }

	// RVA: 0x3CE0200 Offset: 0x3CE0200 VA: 0x3CE0200
	private void OnClaimCardsButtonDown() { }

	// RVA: 0x3CE0480 Offset: 0x3CE0480 VA: 0x3CE0480
	private void OnSkipButtonDown() { }

	// RVA: 0x3CE068C Offset: 0x3CE068C VA: 0x3CE068C
	private void ResetCurrencyParents() { }

	// RVA: 0x3CE07EC Offset: 0x3CE07EC VA: 0x3CE07EC Slot: 5
	public void Dispose() { }

	// RVA: 0x3CE09A4 Offset: 0x3CE09A4 VA: 0x3CE09A4 Slot: 6
	public bool IsInterrupting() { }

	// RVA: 0x3CE09AC Offset: 0x3CE09AC VA: 0x3CE09AC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3CE0A84 Offset: 0x3CE0A84 VA: 0x3CE0A84
	private void <ShowRewardsAnimations>b__40_1() { }

	[CompilerGenerated]
	// RVA: 0x3CE0B1C Offset: 0x3CE0B1C VA: 0x3CE0B1C
	private void <OnClaimMoveCurrencies>b__42_0() { }

	[CompilerGenerated]
	// RVA: 0x3CE0C08 Offset: 0x3CE0C08 VA: 0x3CE0C08
	private void <BottomTextScaleOut>b__58_0() { }

	[CompilerGenerated]
	// RVA: 0x3CE0C34 Offset: 0x3CE0C34 VA: 0x3CE0C34
	private void <FadeOutBackground>b__60_0() { }

	[CompilerGenerated]
	// RVA: 0x3CE0C60 Offset: 0x3CE0C60 VA: 0x3CE0C60
	private void <CoinAmountMoveUp>b__65_0() { }

	[CompilerGenerated]
	// RVA: 0x3CE0C8C Offset: 0x3CE0C8C VA: 0x3CE0C8C
	private void <OnSkipButtonDown>b__71_0() { }

	[CompilerGenerated]
	// RVA: 0x3CE0CA4 Offset: 0x3CE0CA4 VA: 0x3CE0CA4
	private void <OnSkipButtonDown>b__71_1() { }
}

// Namespace: Modules.Contexts.Application.Reward.Scripts