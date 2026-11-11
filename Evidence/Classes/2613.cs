public class SnitchActivationPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2613
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

	// RVA: 0x246D9B0 Offset: 0x246D9B0 VA: 0x246D9B0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x246DB8C Offset: 0x246DB8C VA: 0x246DB8C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x246DF44 Offset: 0x246DF44 VA: 0x246DF44
	private void SubscribeButton() { }

	// RVA: 0x246DFD0 Offset: 0x246DFD0 VA: 0x246DFD0
	private void UnsubscribeButton() { }

	// RVA: 0x246E05C Offset: 0x246E05C VA: 0x246E05C
	private void ClosePopup() { }

	// RVA: 0x246DA1C Offset: 0x246DA1C VA: 0x246DA1C
	private void SetActiveAll(bool active) { }

	// RVA: 0x246E0DC Offset: 0x246E0DC VA: 0x246E0DC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x246E1A8 Offset: 0x246E1A8 VA: 0x246E1A8 Slot: 6
	public Task Hide() { }

	// RVA: 0x246E25C Offset: 0x246E25C VA: 0x246E25C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x246E264 Offset: 0x246E264 VA: 0x246E264
	private void OnDestroy() { }

	// RVA: 0x246E27C Offset: 0x246E27C VA: 0x246E27C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]