public class MagicPassRewardElementView : MagicPassElementView // TypeDefIndex: 3938
{
	// Fields
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x28
	[SerializeField]
	private Transform _freeRewardParent; // 0x30
	[SerializeField]
	private Transform _freeClaimedIcon; // 0x38
	[SerializeField]
	private Transform _freeClaimButtonParent; // 0x40
	[SerializeField]
	private Transform _paidRewardParent; // 0x48
	[SerializeField]
	private Transform _paidClaimedIcon; // 0x50
	[SerializeField]
	private Transform _paidClaimButtonParent; // 0x58
	[SerializeField]
	private Transform _paidLockedIcon; // 0x60
	[SerializeField]
	private Transform _separator; // 0x68
	[SerializeField]
	private Transform _unlockedStepImage; // 0x70
	[SerializeField]
	private Transform _lockedStepImage; // 0x78
	[SerializeField]
	private Transform _initialStepImage; // 0x80
	[SerializeField]
	private Button _freeClaimButton; // 0x88
	[SerializeField]
	private Button _paidClaimButton; // 0x90
	[SerializeField]
	private ToolbarButton _freeToolbarButton; // 0x98
	[SerializeField]
	private ToolbarButton _paidToolbarButton; // 0xA0
	[SerializeField]
	private TextMeshPro _unlockedStepText; // 0xA8
	[SerializeField]
	private TextMeshPro _lockedStepText; // 0xB0
	private CurrencyView _freeRewardCurrencyView; // 0xB8
	private CurrencyView _paidRewardCurrencyView; // 0xC0
	private ChestView _freeChestView; // 0xC8
	private ChestView _paidChestView; // 0xD0
	private MagicPassRewardElementViewModel _viewModel; // 0xD8
	private const string localization_collected_term = "MagicPassTooltipAlreadyCollected";
	private const string localization_collect_more_term = "MagicPassTooltipCollectMore";
	private const string localization_collect_more_paid_term = "MagicPassTooltipCollectMorePaid";
	private const string localization_activate_term = "MagicPassTooltipActivate";

	// Methods

	// RVA: 0x38E8454 Offset: 0x38E8454 VA: 0x38E8454
	public void Initialize(MagicPassRewardElementViewModel viewModel) { }

	// RVA: 0x38E8480 Offset: 0x38E8480 VA: 0x38E8480
	private void InitializeStepView() { }

	// RVA: 0x38E8624 Offset: 0x38E8624 VA: 0x38E8624
	private void InitializeFreeReward() { }

	// RVA: 0x38E8800 Offset: 0x38E8800 VA: 0x38E8800
	private void InitializePaidReward() { }

	// RVA: 0x38E8BFC Offset: 0x38E8BFC VA: 0x38E8BFC
	private void InitializeFreeToolbarButton() { }

	// RVA: 0x38E8D1C Offset: 0x38E8D1C VA: 0x38E8D1C
	private void InitializePaidToolbarButton() { }

	// RVA: 0x38E8F20 Offset: 0x38E8F20 VA: 0x38E8F20
	private void OnEnable() { }

	// RVA: 0x38E904C Offset: 0x38E904C VA: 0x38E904C
	private void OnDisable() { }

	// RVA: 0x38E9178 Offset: 0x38E9178 VA: 0x38E9178
	private void OnFreeClaimButtonClicked() { }

	// RVA: 0x38E9378 Offset: 0x38E9378 VA: 0x38E9378
	private void OnPaidClaimButtonClicked() { }

	// RVA: 0x38E947C Offset: 0x38E947C VA: 0x38E947C
	private void OnPaidToolbarButtonClicked() { }

	// RVA: 0x38E927C Offset: 0x38E927C VA: 0x38E927C
	private void PlayRevealAnimation(CurrencyView currencyView, RewardModel rewardModel) { }

	// RVA: 0x38E8B04 Offset: 0x38E8B04 VA: 0x38E8B04
	public Tween SetClaimButtonsScale(Vector3 scale, float duration = 0) { }

	// RVA: 0x38E8A3C Offset: 0x38E8A3C VA: 0x38E8A3C
	public void SetStepImage(bool isUnlocked) { }

	// RVA: 0x38E95C0 Offset: 0x38E95C0 VA: 0x38E95C0
	private void OpenBuyPopUp() { }

	// RVA: 0x38E96E8 Offset: 0x38E96E8 VA: 0x38E96E8 Slot: 8
	public override void Recycle() { }

	// RVA: 0x38E9914 Offset: 0x38E9914 VA: 0x38E9914
	public void UpdateIcon() { }

	// RVA: 0x38E9954 Offset: 0x38E9954 VA: 0x38E9954
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38E995C Offset: 0x38E995C VA: 0x38E995C
	private void <OnPaidToolbarButtonClicked>b__37_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]