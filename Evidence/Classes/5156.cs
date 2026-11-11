public class CurrencyView : BasicView // TypeDefIndex: 5156
{
	// Fields
	[SerializeField]
	private CurrencyAnimationConfig _currencyAnimationConfig; // 0x28
	[SerializeField]
	private CurrencyRevealAnimationConfig _currencyRevealAnimationConfig; // 0x30
	[SerializeField]
	private BulkCurrencyAnimationConfig _bulkCurrencyAnimationConfig; // 0x38
	[SerializeField]
	private TextMeshPro _amountText; // 0x40
	[SerializeField]
	private Animator _animator; // 0x48
	[SerializeField]
	private string _loopingAnimationKey; // 0x50
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x58
	[SerializeField]
	private List<SpriteRenderer> _otherSpriteRenderers; // 0x60
	[SerializeField]
	private ParticleSystem _revealParticle; // 0x68
	[SerializeField]
	private ParticleSystem _bulkRewardRevealParticle; // 0x70
	[SerializeField]
	private SpriteRenderer _banner; // 0x78
	[SerializeField]
	private RevealAnimationView _revealAnimationView; // 0x80
	[SerializeField]
	private SpriteRenderer _checkMark; // 0x88
	[SerializeField]
	private CurrencyShineView _shineView; // 0x90
	[SerializeField]
	[Header("Token")]
	private ProfileSpriteConfig _profileSpriteConfig; // 0x98
	private GameObject _tokenModel; // 0xA0
	[Header("Collection")]
	[SerializeField]
	private CollectionCardPackVisualsConfig _packVisuals; // 0xA8
	[SerializeField]
	private CollectionPackOpeningAnimationHandler _packAnimationHandler; // 0xB0
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0xB8
	[SerializeField]
	private TextMeshPro _cardCountText; // 0xC0
	[SerializeField]
	private Transform _cardCountIcon; // 0xC8
	[SerializeField]
	private Transform _newCardIcon; // 0xD0
	[SerializeField]
	private SpriteRenderer _cardCountBgSpriteRenderer; // 0xD8
	[SerializeField]
	private SpriteRenderer _newCardIconSpriteRenderer; // 0xE0
	[SerializeField]
	private TextMeshPro _newCardText; // 0xE8
	public int _id; // 0xF0
	private Transform _targetTransform; // 0xF8
	private int _initialSortingOrder; // 0x100
	private Tween _scaleTween; // 0x108

	// Properties
	public TextMeshPro AmountText { get; }
	public SpriteRenderer Checkmark { get; }
	public CurrencyShineView ShineView { get; }
	public override int Id { get; set; }

	// Methods

	// RVA: 0x1381BA8 Offset: 0x1381BA8 VA: 0x1381BA8
	public TextMeshPro get_AmountText() { }

	// RVA: 0x1381BB0 Offset: 0x1381BB0 VA: 0x1381BB0
	public SpriteRenderer get_Checkmark() { }

	// RVA: 0x1381BB8 Offset: 0x1381BB8 VA: 0x1381BB8
	public CurrencyShineView get_ShineView() { }

	// RVA: 0x1381BC0 Offset: 0x1381BC0 VA: 0x1381BC0 Slot: 5
	public override int get_Id() { }

	// RVA: 0x1381BC8 Offset: 0x1381BC8 VA: 0x1381BC8 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x1381BD0 Offset: 0x1381BD0 VA: 0x1381BD0
	public void Awake() { }

	// RVA: 0x1381C54 Offset: 0x1381C54 VA: 0x1381C54 Slot: 7
	public override void Initialize() { }

	// RVA: 0x1381C58 Offset: 0x1381C58 VA: 0x1381C58
	public void SetAmountOrDurationWithSign(RewardModel rewardModel) { }

	// RVA: 0x1381D84 Offset: 0x1381D84 VA: 0x1381D84
	public void SetAmountText(string text) { }

	// RVA: 0x1381E24 Offset: 0x1381E24 VA: 0x1381E24
	public void SetAmount(int amount) { }

	// RVA: 0x1381EB0 Offset: 0x1381EB0 VA: 0x1381EB0
	public void SetDuration(TimeSpan timeSpan) { }

	// RVA: 0x1381F48 Offset: 0x1381F48 VA: 0x1381F48
	public void SetTarget(Transform transform) { }

	// RVA: 0x1381F50 Offset: 0x1381F50 VA: 0x1381F50
	public int GetInitialSortingOrder() { }

	// RVA: 0x1381F58 Offset: 0x1381F58 VA: 0x1381F58
	private Tween PlayMoveToCurrencyDisplayerAnimation(int sortOrder, Vector3 spawnPoint, Action callback) { }

	// RVA: 0x138266C Offset: 0x138266C VA: 0x138266C
	public Tween PlayMoveToCurrencyDisplayerAnimationWithSpawnPosition(int sortOrder, Vector3 spawnPosition, Action callback) { }

	// RVA: 0x1382670 Offset: 0x1382670 VA: 0x1382670
	public Tween PlayMoveToCurrencyDisplayerAnimationWithDefaultSpawnPosition(int sortOrder, Action callback) { }

	// RVA: 0x1382644 Offset: 0x1382644 VA: 0x1382644
	private int TriangularWave(int index) { }

	// RVA: 0x1382690 Offset: 0x1382690 VA: 0x1382690
	public Sequence PlayRevealAnimationsWithNewCurrencyView(bool shouldParent = False, RewardModel rewardModel) { }

	// RVA: 0x1382724 Offset: 0x1382724 VA: 0x1382724
	public Sequence FadeTextAndImage(float duration, float target) { }

	// RVA: 0x1382854 Offset: 0x1382854 VA: 0x1382854
	public Sequence FadeTextAndImageAndBanner(float duration, float target) { }

	// RVA: 0x13829D4 Offset: 0x13829D4 VA: 0x13829D4
	public Sequence FadeTextAndImageAndBannerAndCardCount(float duration, float target) { }

	// RVA: 0x1382B88 Offset: 0x1382B88 VA: 0x1382B88
	public Tween RevealSequence(CurrencyRevealAnimationConfig currencyRevealAnimationConfig) { }

	// RVA: 0x1383250 Offset: 0x1383250 VA: 0x1383250
	public void SetColor(Color color) { }

	// RVA: 0x13830A0 Offset: 0x13830A0 VA: 0x13830A0
	private void ResetColor() { }

	// RVA: 0x1383334 Offset: 0x1383334 VA: 0x1383334
	public Tween RewardMoveBezier(Vector3 targetPosition, Action callback) { }

	// RVA: 0x1383640 Offset: 0x1383640 VA: 0x1383640
	public Sequence RewardMoveSequenced(Vector3 targetPosition, Action callback) { }

	// RVA: 0x1383840 Offset: 0x1383840 VA: 0x1383840
	public Tween ScaleIn() { }

	// RVA: 0x138390C Offset: 0x138390C VA: 0x138390C
	public Tween ScaleOut() { }

	// RVA: 0x1383A2C Offset: 0x1383A2C VA: 0x1383A2C
	public Tween ScaleOutWithoutRecycle() { }

	// RVA: 0x1383AE0 Offset: 0x1383AE0 VA: 0x1383AE0
	public Tween CoinMove(Vector3 targetPosition, Action callback) { }

	// RVA: 0x1383E38 Offset: 0x1383E38 VA: 0x1383E38
	public Tween CoinMoveTriangularWave(int sortOrder, Vector3 targetPosition, Action callback) { }

	// RVA: 0x138443C Offset: 0x138443C VA: 0x138443C
	public Tween CoinScaleIn() { }

	// RVA: 0x13844B4 Offset: 0x13844B4 VA: 0x13844B4
	public void PlayBulkRewardRevealParticle() { }

	// RVA: 0x13844D0 Offset: 0x13844D0 VA: 0x13844D0
	public void StopBulkRewardRevealParticle() { }

	// RVA: 0x13844F4 Offset: 0x13844F4 VA: 0x13844F4
	public Tween TextScaleOut() { }

	// RVA: 0x1384678 Offset: 0x1384678 VA: 0x1384678
	public void SetCheckMark(bool value) { }

	// RVA: 0x1384860 Offset: 0x1384860 VA: 0x1384860
	public void ResetTextScale() { }

	// RVA: 0x1384930 Offset: 0x1384930 VA: 0x1384930
	public void SetSortOrder(int order) { }

	// RVA: 0x1384AAC Offset: 0x1384AAC VA: 0x1384AAC
	public void OnDestroy() { }

	// RVA: 0x1384AB8 Offset: 0x1384AB8 VA: 0x1384AB8 Slot: 8
	public override void Recycle() { }

	// RVA: 0x1384BF4 Offset: 0x1384BF4 VA: 0x1384BF4
	public void SetPackType(int packId) { }

	// RVA: 0x1384E1C Offset: 0x1384E1C VA: 0x1384E1C
	public void SetCardCountText(int cardCount) { }

	// RVA: 0x1384EC0 Offset: 0x1384EC0 VA: 0x1384EC0
	public Tween PlayCardPackOpenSequence(OpenedCardPackData openedCardPack, List<Transform> layoutParent) { }

	// RVA: 0x1384ED4 Offset: 0x1384ED4 VA: 0x1384ED4
	public Tween PlayCardPackClaimSequence(Transform duplicatedStarsMoveTransform) { }

	// RVA: 0x1384EE8 Offset: 0x1384EE8 VA: 0x1384EE8
	public Tween PlayInstantCardRevealAnimation() { }

	// RVA: 0x1384EFC Offset: 0x1384EFC VA: 0x1384EFC
	public Tween CompleteOpenPackAnimInstant() { }

	// RVA: 0x1384F10 Offset: 0x1384F10 VA: 0x1384F10
	public bool IsTokenCurrency() { }

	// RVA: 0x1384F70 Offset: 0x1384F70 VA: 0x1384F70
	public void SetTokenSprite(string tokenId) { }

	// RVA: 0x13850D0 Offset: 0x13850D0 VA: 0x13850D0
	public GameObject InstantiateTokenModel(string tokenId, Vector3 positionOffset) { }

	// RVA: 0x13852E0 Offset: 0x13852E0 VA: 0x13852E0
	public GameObject InstantiateStaticTokenModel(string tokenId, Vector3 positionOffset) { }

	// RVA: 0x1385520 Offset: 0x1385520 VA: 0x1385520
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1385528 Offset: 0x1385528 VA: 0x1385528
	private void <RevealSequence>b__54_0() { }

	[CompilerGenerated]
	// RVA: 0x138554C Offset: 0x138554C VA: 0x138554C
	private void <RevealSequence>b__54_1() { }

	[CompilerGenerated]
	// RVA: 0x13855D0 Offset: 0x13855D0 VA: 0x13855D0
	private void <RevealSequence>b__54_2() { }

	[CompilerGenerated]
	// RVA: 0x13855F4 Offset: 0x13855F4 VA: 0x13855F4
	private void <TextScaleOut>b__67_0() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI