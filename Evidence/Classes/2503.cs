public class StrikeShowInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2503
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20
	[SerializeField]
	private List<StrikeShowInfoPopUpVariant> _variants; // 0x28
	private StrikeShowInfoPopUpVariant _currentVariant; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private Sequence _sequence; // 0x40

	// Methods

	// RVA: 0x2AFD068 Offset: 0x2AFD068 VA: 0x2AFD068 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFD1F0 Offset: 0x2AFD1F0 VA: 0x2AFD1F0
	private void SetVariant(StrikeShowInfoPopUpVariantType type) { }

	// RVA: 0x2AFD968 Offset: 0x2AFD968 VA: 0x2AFD968 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFD430 Offset: 0x2AFD430 VA: 0x2AFD430
	private void SetActiveAll(bool active) { }

	// RVA: 0x2AFD5A8 Offset: 0x2AFD5A8 VA: 0x2AFD5A8
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2AFD3A4 Offset: 0x2AFD3A4 VA: 0x2AFD3A4
	private void SubscribeButton() { }

	// RVA: 0x2AFDA4C Offset: 0x2AFDA4C VA: 0x2AFDA4C
	private void UnsubscribeButton() { }

	// RVA: 0x2AFDAD8 Offset: 0x2AFDAD8 VA: 0x2AFDAD8
	private void ClosePopup() { }

	// RVA: 0x2AFDB58 Offset: 0x2AFDB58 VA: 0x2AFDB58 Slot: 6
	public Task Hide() { }

	// RVA: 0x2AFDC0C Offset: 0x2AFDC0C VA: 0x2AFDC0C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2AFDC14 Offset: 0x2AFDC14 VA: 0x2AFDC14
	private void OnDestroy() { }

	// RVA: 0x2AFDC2C Offset: 0x2AFDC2C VA: 0x2AFDC2C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI