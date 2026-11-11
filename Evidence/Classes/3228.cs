public class TreasureDrillStepElementView : BasicView // TypeDefIndex: 3228
{
	// Fields
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private TreasureDrillSpriteConfig _spriteConfig; // 0x30
	[SerializeField]
	private SpriteRenderer _backgroundRenderer; // 0x38
	[SerializeField]
	private Button _claimButton; // 0x40
	[SerializeField]
	private TreasureDrillProgressBar _treasureDrillProgressBarPostPurchase; // 0x48
	[SerializeField]
	private TextMeshPro _notCompletedInfoTextPostPurchase; // 0x50
	[SerializeField]
	private TextMeshPro _claimTextPostPurchase; // 0x58
	[SerializeField]
	private TextMeshPro _completedInfoTextPostPurchase; // 0x60
	[SerializeField]
	private TextMeshPro _completedTextPostPurchase; // 0x68
	[SerializeField]
	private TreasureDrillProgressBar _treasureDrillProgressBarPrePurchase; // 0x70
	[SerializeField]
	private TextMeshPro _notCompletedInfoTextPrePurchase; // 0x78
	[SerializeField]
	private TextMeshPro _completedInfoTextPrePurchase; // 0x80
	[SerializeField]
	private TextMeshPro _completedTextPrePurchase; // 0x88
	[SerializeField]
	private TextMeshPro _claimTextPrePurchase; // 0x90
	[SerializeField]
	private Transform _taskContainerBeforeBuy; // 0x98
	[SerializeField]
	private Transform _taskContainerAfterBuy; // 0xA0
	[SerializeField]
	private TreasureDrillPopUpConfig _treasureDrillPopUpConfig; // 0xA8
	[SerializeField]
	private TreasureDrillAnimationConfig _animationConfig; // 0xB0
	[SerializeField]
	private TreasureDrillLockAnimationView _lockAnimationView; // 0xB8
	[SerializeField]
	private TreasureDrillRewardContainer _rewardContainer; // 0xC0
	[SerializeField]
	private UIElementScaler _scaler; // 0xC8
	[SerializeField]
	private ParticleSystem _claimParticle; // 0xD0
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0xD8
	private TreasureDrillProgressBar _treasureDrillProgressBar; // 0xE0
	private TextMeshPro _notCompletedInfoText; // 0xE8
	private TextMeshPro _claimText; // 0xF0
	private TextMeshPro _completedInfoText; // 0xF8
	private TextMeshPro _completedText; // 0x100
	private TreasureDrillStepViewModel _stepViewModel; // 0x108
	private bool _isReadyToClaim; // 0x110
	private bool _lockShakeAnimationIsPlaying; // 0x111
	private Sequence _lockShakeSequence; // 0x118

	// Properties
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3586298 Offset: 0x3586298 VA: 0x3586298 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x35862A0 Offset: 0x35862A0 VA: 0x35862A0 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x35862A8 Offset: 0x35862A8 VA: 0x35862A8 Slot: 7
	public override void Initialize() { }

	// RVA: 0x35862AC Offset: 0x35862AC VA: 0x35862AC Slot: 8
	public override void Recycle() { }

	// RVA: 0x35864F4 Offset: 0x35864F4 VA: 0x35864F4
	public void SetModel(TreasureDrillStepViewModel viewModel) { }

	// RVA: 0x3586CA4 Offset: 0x3586CA4 VA: 0x3586CA4
	public int GetStepIndex() { }

	// RVA: 0x3586CBC Offset: 0x3586CBC VA: 0x3586CBC
	public void OnClaimStep(TreasureDrillStepViewModel stepViewModel) { }

	// RVA: 0x3586CCC Offset: 0x3586CCC VA: 0x3586CCC
	public void OnUnlocked(TreasureDrillStepViewModel stepViewModel) { }

	// RVA: 0x3586CDC Offset: 0x3586CDC VA: 0x3586CDC
	public void OnProgressbarAnimation(TreasureDrillStepViewModel stepViewModel) { }

	// RVA: 0x35868C0 Offset: 0x35868C0 VA: 0x35868C0
	private void SetReadyToClaim(TreasureDrillStepViewModel treasureDrillStepViewModel) { }

	// RVA: 0x35866A4 Offset: 0x35866A4 VA: 0x35866A4
	private void SetClaimed(TreasureDrillStepViewModel treasureDrillStepViewModel) { }

	// RVA: 0x3586AC0 Offset: 0x3586AC0 VA: 0x3586AC0
	private void SetInProgress(TreasureDrillStepViewModel treasureDrillStepViewModel) { }

	// RVA: 0x358660C Offset: 0x358660C VA: 0x358660C
	private void SetupViewBasedOnPurchaseState(bool isLocked) { }

	// RVA: 0x3586D94 Offset: 0x3586D94 VA: 0x3586D94
	private void DeactivateAllUIElements() { }

	// RVA: 0x3586CEC Offset: 0x3586CEC VA: 0x3586CEC
	private void SetActiveUIReferences(bool isLocked) { }

	// RVA: 0x3586E54 Offset: 0x3586E54 VA: 0x3586E54
	public bool ShouldPlayProgressBarAnimation() { }

	// RVA: 0x3586E88 Offset: 0x3586E88 VA: 0x3586E88
	public Sequence PlayProgressBarAnimation(float duration) { }

	// RVA: 0x3586EAC Offset: 0x3586EAC VA: 0x3586EAC
	public bool ShouldPlayTaskCompleteAnimation() { }

	// RVA: 0x3586EE8 Offset: 0x3586EE8 VA: 0x3586EE8
	public Sequence PlayTaskCompleteAnimation() { }

	[Button]
	// RVA: 0x35872D0 Offset: 0x35872D0 VA: 0x35872D0
	public Sequence PlayClaimAnimation() { }

	// RVA: 0x35876B0 Offset: 0x35876B0 VA: 0x35876B0
	private void PrepareClaimView() { }

	// RVA: 0x35873A8 Offset: 0x35873A8 VA: 0x35873A8
	private Sequence PlayRewardRevealAnimation() { }

	// RVA: 0x3587888 Offset: 0x3587888 VA: 0x3587888
	public Sequence PlayLockFallAnimation() { }

	// RVA: 0x35878A4 Offset: 0x35878A4 VA: 0x35878A4
	private void OnClaimButtonClicked() { }

	// RVA: 0x3587A64 Offset: 0x3587A64 VA: 0x3587A64
	private void ShowClaimInfoTextOnNotPurchased() { }

	// RVA: 0x3587CD4 Offset: 0x3587CD4 VA: 0x3587CD4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3587CDC Offset: 0x3587CDC VA: 0x3587CDC
	private void <PlayTaskCompleteAnimation>b__51_0() { }

	[CompilerGenerated]
	// RVA: 0x3587FB4 Offset: 0x3587FB4 VA: 0x3587FB4
	private void <PlayTaskCompleteAnimation>b__51_1() { }

	[CompilerGenerated]
	// RVA: 0x3587FF0 Offset: 0x3587FF0 VA: 0x3587FF0
	private void <PlayTaskCompleteAnimation>b__51_2() { }

	[CompilerGenerated]
	// RVA: 0x358800C Offset: 0x358800C VA: 0x358800C
	private void <PlayRewardRevealAnimation>b__54_0() { }

	[CompilerGenerated]
	// RVA: 0x35880A0 Offset: 0x35880A0 VA: 0x35880A0
	private void <PlayRewardRevealAnimation>b__54_1() { }

	[CompilerGenerated]
	// RVA: 0x35880EC Offset: 0x35880EC VA: 0x35880EC
	private void <PlayRewardRevealAnimation>b__54_2() { }

	[CompilerGenerated]
	// RVA: 0x3588108 Offset: 0x3588108 VA: 0x3588108
	private void <ShowClaimInfoTextOnNotPurchased>b__57_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI
[CreateAssetMenu(fileName = "TreasureDrillStepFactory", menuName = "Factory/TreasureDrillStepFactory")]