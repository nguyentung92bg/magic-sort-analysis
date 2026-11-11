public class SuperChargerInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2442
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20
	[SerializeField]
	private List<SuperChargerInfoPopUpVariant> _variants; // 0x28
	private SuperChargerInfoPopUpVariant _currentVariant; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private Sequence _sequence; // 0x40
	private const string SuperChargerInfoText1Key = "SuperChargerInfoText1";
	private const string SuperChargerInfoText3WithMoveKey = "SuperChargerInfoText3WithMove";
	private const string SuperChargerInfoText3WithMatchKey = "SuperChargerInfoText3WithMatch";

	// Methods

	// RVA: 0x2972218 Offset: 0x2972218 VA: 0x2972218 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x29724BC Offset: 0x29724BC VA: 0x29724BC
	private void SetVariant(SuperChargerType type) { }

	// RVA: 0x2972C80 Offset: 0x2972C80 VA: 0x2972C80 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2972748 Offset: 0x2972748 VA: 0x2972748
	private void SetActiveAll(bool active) { }

	// RVA: 0x29728C0 Offset: 0x29728C0 VA: 0x29728C0
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2972D54 Offset: 0x2972D54 VA: 0x2972D54
	private void SubscribeButton() { }

	// RVA: 0x2972DE0 Offset: 0x2972DE0 VA: 0x2972DE0
	private void UnsubscribeButton() { }

	// RVA: 0x2972E6C Offset: 0x2972E6C VA: 0x2972E6C
	private void ClosePopup() { }

	// RVA: 0x2972EEC Offset: 0x2972EEC VA: 0x2972EEC Slot: 6
	public Task Hide() { }

	// RVA: 0x2972FA0 Offset: 0x2972FA0 VA: 0x2972FA0 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2972FA8 Offset: 0x2972FA8 VA: 0x2972FA8
	private void OnDestroy() { }

	// RVA: 0x2972FC0 Offset: 0x2972FC0 VA: 0x2972FC0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI