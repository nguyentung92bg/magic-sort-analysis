public class MagicPassVaultElementView : MagicPassElementView // TypeDefIndex: 3947
{
	// Fields
	[SerializeField]
	private MagicPassVaultProgressBarView _progressBarView; // 0x28
	[SerializeField]
	private ToolbarButton _lockedIconToolbarButton; // 0x30
	[SerializeField]
	private Transform _vaultLockedInfo; // 0x38
	[SerializeField]
	private Transform _vaultInProgressInfo; // 0x40
	[SerializeField]
	private Transform _vaultFullInfo; // 0x48
	private MagicPassVaultElementView.VaultState _vaultState; // 0x50
	private const string localization_activate_term = "MagicPassTooltipActivate";

	// Methods

	// RVA: 0x38EAD78 Offset: 0x38EAD78 VA: 0x38EAD78
	public void Initialize(MagicPassViewModel viewModel) { }

	// RVA: 0x38EB308 Offset: 0x38EB308 VA: 0x38EB308
	private void OnEnable() { }

	// RVA: 0x38EB394 Offset: 0x38EB394 VA: 0x38EB394
	private void OnDisable() { }

	// RVA: 0x38EB420 Offset: 0x38EB420 VA: 0x38EB420
	private void OnToolbarButtonClicked() { }

	// RVA: 0x38EB2D4 Offset: 0x38EB2D4 VA: 0x38EB2D4
	private MagicPassVaultElementView.VaultState GetVaultState(MagicPassViewModel viewModel) { }

	// RVA: 0x38EA35C Offset: 0x38EA35C VA: 0x38EA35C
	public Tween UpdateFillAmountByCurrentStep() { }

	// RVA: 0x38EB690 Offset: 0x38EB690 VA: 0x38EB690
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38EB698 Offset: 0x38EB698 VA: 0x38EB698
	private void <OnToolbarButtonClicked>b__11_0() { }
}

// Namespace: 
[CompilerGenerated]