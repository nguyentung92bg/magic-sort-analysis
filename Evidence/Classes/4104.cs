public class JourneyRewardElementView : JourneyElementView // TypeDefIndex: 4104
{
	// Fields
	[SerializeField]
	private List<RewardCountPositionSettings> _rewardHolderPositions; // 0x58
	[SerializeField]
	private TextMeshPro _levelText; // 0x60
	[SerializeField]
	private SpriteRenderer _claimedSpriteRenderer; // 0x68
	[SerializeField]
	private SpriteRenderer _claimableSpriteRenderer; // 0x70
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x78
	[SerializeField]
	private Transform _revealAnimationParent; // 0x80
	[SerializeField]
	private Transform _maskTransform; // 0x88
	[SerializeField]
	private RevealAnimationView _revealAnimationView; // 0x90
	private List<CurrencyView> _currencyViews; // 0x98
	private RewardViewModel _rewardViewModel; // 0xA0
	[Header("RewardView")]
	[SerializeField]
	private Vector3Options _rewardViewStartScaleOptions; // 0xA8
	[SerializeField]
	private Vector3Options _rewardViewLandScaleOptions; // 0xB0
	[SerializeField]
	private PunchOptions _rewardViewLandPunchOptions; // 0xB8
	[Header("Checkmark")]
	[SerializeField]
	private Vector3Options _checkmarkStartScaleOptions; // 0xC0
	[Header("Mask")]
	[SerializeField]
	private FloatOptions _maskMoveYOptions; // 0xC8
	[SerializeField]
	private FloatOptions _maskScaleYOptions; // 0xD0

	// Methods

	// RVA: 0x3A80A20 Offset: 0x3A80A20 VA: 0x3A80A20 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3A80A24 Offset: 0x3A80A24 VA: 0x3A80A24 Slot: 9
	public override void SetModel(IJourneyItemViewModel journeyItemViewModel) { }

	// RVA: 0x3A80AA8 Offset: 0x3A80AA8 VA: 0x3A80AA8
	private void SetModelInternal(RewardViewModel journeyItemViewModel) { }

	// RVA: 0x3A7DE48 Offset: 0x3A7DE48 VA: 0x3A7DE48
	public void SetUnclaimed() { }

	// RVA: 0x3A80B24 Offset: 0x3A80B24 VA: 0x3A80B24
	private void PrepareRewards(RewardViewModel journeyItemViewModel) { }

	// RVA: 0x3A80F04 Offset: 0x3A80F04 VA: 0x3A80F04
	private List<Transform> GetProperHolderForRewards(int rewardCount) { }

	// RVA: 0x3A810A0 Offset: 0x3A810A0 VA: 0x3A810A0 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3A80E24 Offset: 0x3A80E24 VA: 0x3A80E24
	private void SetClaimedState(bool isClaimed) { }

	[Button]
	// RVA: 0x3A7E01C Offset: 0x3A7E01C VA: 0x3A7E01C
	public Tween PlayClaimAnimations() { }

	// RVA: 0x3A810B8 Offset: 0x3A810B8 VA: 0x3A810B8
	private void RecycleCurrencyViews() { }

	// RVA: 0x3A81248 Offset: 0x3A81248 VA: 0x3A81248
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A812D0 Offset: 0x3A812D0 VA: 0x3A812D0
	private void <PlayClaimAnimations>b__24_0() { }

	[CompilerGenerated]
	// RVA: 0x3A8130C Offset: 0x3A8130C VA: 0x3A8130C
	private void <PlayClaimAnimations>b__24_1() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI
[Serializable]