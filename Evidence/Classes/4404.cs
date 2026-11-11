public class DuckFestivalInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4404
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

	// RVA: 0x1B9A2A4 Offset: 0x1B9A2A4 VA: 0x1B9A2A4
	private void OnDestroy() { }

	// RVA: 0x1B9A35C Offset: 0x1B9A35C VA: 0x1B9A35C
	private void SetActiveAll(bool active) { }

	// RVA: 0x1B9A4CC Offset: 0x1B9A4CC VA: 0x1B9A4CC
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x1B9A884 Offset: 0x1B9A884 VA: 0x1B9A884
	private void SubscribeButton() { }

	// RVA: 0x1B9A2D0 Offset: 0x1B9A2D0 VA: 0x1B9A2D0
	private void UnsubscribeButton() { }

	// RVA: 0x1B9A910 Offset: 0x1B9A910 VA: 0x1B9A910
	private void ClosePopup() { }

	// RVA: 0x1B9A984 Offset: 0x1B9A984 VA: 0x1B9A984 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1B9AA5C Offset: 0x1B9AA5C VA: 0x1B9AA5C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1B9AB38 Offset: 0x1B9AB38 VA: 0x1B9AB38 Slot: 6
	public Task Hide() { }

	// RVA: 0x1B9ABEC Offset: 0x1B9ABEC VA: 0x1B9ABEC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1B9ABF4 Offset: 0x1B9ABF4 VA: 0x1B9ABF4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI