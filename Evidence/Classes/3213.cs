public class TreasureDrillPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3213
{
	// Fields
	[SerializeField]
	private TreasureDrillController _treasureDrillController; // 0x18
	[SerializeField]
	private TreasureDrillTimer _timer; // 0x20
	[SerializeField]
	private TreasureDrillHeader _header; // 0x28
	[SerializeField]
	private TextMeshPro _grandPrizeText; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private TreasureDrillService _service; // 0x40
	private TreasureDrillViewModel _viewModel; // 0x48

	// Methods

	// RVA: 0x330BA28 Offset: 0x330BA28 VA: 0x330BA28 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(TreasureDrillPopup.<OnPurchase>d__8))]
	// RVA: 0x330BE64 Offset: 0x330BE64 VA: 0x330BE64
	private void OnPurchase() { }

	// RVA: 0x330BF1C Offset: 0x330BF1C VA: 0x330BF1C
	private void ClaimStep(int index) { }

	[AsyncStateMachine(typeof(TreasureDrillPopup.<PlayFirstShowEverAnimations>d__10))]
	// RVA: 0x330BD10 Offset: 0x330BD10 VA: 0x330BD10
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(TreasureDrillPopup.<OpenAutomaticallyInfoPopUp>d__11))]
	// RVA: 0x330BF64 Offset: 0x330BF64 VA: 0x330BF64
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x330C034 Offset: 0x330C034 VA: 0x330C034 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x330C100 Offset: 0x330C100 VA: 0x330C100 Slot: 6
	public Task Hide() { }

	// RVA: 0x330C32C Offset: 0x330C32C VA: 0x330C32C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x330BDC8 Offset: 0x330BDC8 VA: 0x330BDC8
	private void SetGrandPrize() { }

	// RVA: 0x330C334 Offset: 0x330C334 VA: 0x330C334
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI