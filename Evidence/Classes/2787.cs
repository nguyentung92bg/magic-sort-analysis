public class SkyJumpInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2787
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

	// RVA: 0x2F1F28C Offset: 0x2F1F28C VA: 0x2F1F28C
	private void OnDestroy() { }

	// RVA: 0x2F1F2A4 Offset: 0x2F1F2A4 VA: 0x2F1F2A4
	private void SetActiveAll(bool active) { }

	// RVA: 0x2F1F414 Offset: 0x2F1F414 VA: 0x2F1F414
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2F1F7CC Offset: 0x2F1F7CC VA: 0x2F1F7CC
	private void SubscribeButton() { }

	// RVA: 0x2F1F858 Offset: 0x2F1F858 VA: 0x2F1F858
	private void UnsubscribeButton() { }

	// RVA: 0x2F1F8E4 Offset: 0x2F1F8E4 VA: 0x2F1F8E4
	private void ClosePopup() { }

	// RVA: 0x2F1F964 Offset: 0x2F1F964 VA: 0x2F1F964 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2F1F9D0 Offset: 0x2F1F9D0 VA: 0x2F1F9D0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F1FA9C Offset: 0x2F1FA9C VA: 0x2F1FA9C Slot: 6
	public Task Hide() { }

	// RVA: 0x2F1FB50 Offset: 0x2F1FB50 VA: 0x2F1FB50 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F1FB58 Offset: 0x2F1FB58 VA: 0x2F1FB58
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI