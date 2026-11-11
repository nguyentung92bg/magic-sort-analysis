public class SuperChargerActivationPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2434
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20
	[SerializeField]
	private List<SuperChargerActivationVariant> _variants; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30
	private Sequence _sequence; // 0x38
	private SuperChargerActivationVariant _currentVariant; // 0x40

	// Methods

	// RVA: 0x2970E00 Offset: 0x2970E00 VA: 0x2970E00 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2970F24 Offset: 0x2970F24 VA: 0x2970F24
	private void SetVariant(SuperChargerType chargerType) { }

	// RVA: 0x29711B0 Offset: 0x29711B0 VA: 0x29711B0
	private void SetActiveAll(bool active) { }

	// RVA: 0x29713B4 Offset: 0x29713B4 VA: 0x29713B4
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2971328 Offset: 0x2971328 VA: 0x2971328
	private void SubscribeButton() { }

	// RVA: 0x297175C Offset: 0x297175C VA: 0x297175C
	private void UnsubscribeButton() { }

	// RVA: 0x29717E8 Offset: 0x29717E8 VA: 0x29717E8
	private void ClosePopup() { }

	// RVA: 0x2971868 Offset: 0x2971868 VA: 0x2971868 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2971944 Offset: 0x2971944 VA: 0x2971944 Slot: 6
	public Task Hide() { }

	// RVA: 0x29719F8 Offset: 0x29719F8 VA: 0x29719F8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2971A00 Offset: 0x2971A00 VA: 0x2971A00
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI
[Serializable]