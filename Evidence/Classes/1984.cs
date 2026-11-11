public class WeeklyTournamentInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 1984
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x30
	private Sequence _sequence; // 0x38

	// Methods

	// RVA: 0x32DC19C Offset: 0x32DC19C VA: 0x32DC19C
	private void OnDestroy() { }

	// RVA: 0x32DC1B4 Offset: 0x32DC1B4 VA: 0x32DC1B4
	private void SetActiveAll(bool active) { }

	// RVA: 0x32DC324 Offset: 0x32DC324 VA: 0x32DC324
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x32DC6DC Offset: 0x32DC6DC VA: 0x32DC6DC
	private void SubscribeButton() { }

	// RVA: 0x32DC768 Offset: 0x32DC768 VA: 0x32DC768
	private void UnsubscribeButton() { }

	// RVA: 0x32DC7F4 Offset: 0x32DC7F4 VA: 0x32DC7F4
	private void ClosePopup() { }

	// RVA: 0x32DC874 Offset: 0x32DC874 VA: 0x32DC874 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x32DC904 Offset: 0x32DC904 VA: 0x32DC904 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x32DC9D0 Offset: 0x32DC9D0 VA: 0x32DC9D0 Slot: 6
	public Task Hide() { }

	// RVA: 0x32DCA84 Offset: 0x32DCA84 VA: 0x32DCA84 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x32DCA8C Offset: 0x32DCA8C VA: 0x32DCA8C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]