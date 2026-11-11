public class TowerWinStreakInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2054
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30
	private Sequence _sequence; // 0x38

	// Methods

	// RVA: 0x359F570 Offset: 0x359F570 VA: 0x359F570
	private void OnDestroy() { }

	// RVA: 0x359F588 Offset: 0x359F588 VA: 0x359F588
	private void SetActiveAll(bool active) { }

	// RVA: 0x359F6F8 Offset: 0x359F6F8 VA: 0x359F6F8
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x359FAB0 Offset: 0x359FAB0 VA: 0x359FAB0
	private void SubscribeButton() { }

	// RVA: 0x359FB3C Offset: 0x359FB3C VA: 0x359FB3C
	private void UnsubscribeButton() { }

	// RVA: 0x359FBC8 Offset: 0x359FBC8 VA: 0x359FBC8
	private void ClosePopup() { }

	// RVA: 0x359FC48 Offset: 0x359FC48 VA: 0x359FC48 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x359FCB4 Offset: 0x359FCB4 VA: 0x359FCB4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x359FD80 Offset: 0x359FD80 VA: 0x359FD80 Slot: 6
	public Task Hide() { }

	// RVA: 0x359FE34 Offset: 0x359FE34 VA: 0x359FE34 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x359FE3C Offset: 0x359FE3C VA: 0x359FE3C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]