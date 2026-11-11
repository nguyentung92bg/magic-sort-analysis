public class TeamsAskCardInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2149
{
	// Fields
	[SerializeField]
	private Button _closeButton; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x28
	private Sequence _sequence; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38

	// Methods

	// RVA: 0x3450810 Offset: 0x3450810 VA: 0x3450810 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3450D4C Offset: 0x3450D4C VA: 0x3450D4C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3450E24 Offset: 0x3450E24 VA: 0x3450E24 Slot: 6
	public Task Hide() { }

	// RVA: 0x3450ED8 Offset: 0x3450ED8 VA: 0x3450ED8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3450EE0 Offset: 0x3450EE0 VA: 0x3450EE0
	private void OnDestroy() { }

	// RVA: 0x345082C Offset: 0x345082C VA: 0x345082C
	private void SetActiveAll(bool active) { }

	// RVA: 0x345099C Offset: 0x345099C VA: 0x345099C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3450F00 Offset: 0x3450F00 VA: 0x3450F00
	private void SubscribeButton() { }

	// RVA: 0x3450F8C Offset: 0x3450F8C VA: 0x3450F8C
	private void UnsubscribeButton() { }

	// RVA: 0x3451018 Offset: 0x3451018 VA: 0x3451018
	private void ClosePopup() { }

	// RVA: 0x34510A0 Offset: 0x34510A0 VA: 0x34510A0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI