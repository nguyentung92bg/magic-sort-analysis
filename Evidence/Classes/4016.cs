public class MagicLabInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4016
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

	// RVA: 0x3759284 Offset: 0x3759284 VA: 0x3759284
	private void OnDestroy() { }

	// RVA: 0x375929C Offset: 0x375929C VA: 0x375929C
	private void SetActiveAll(bool active) { }

	// RVA: 0x375940C Offset: 0x375940C VA: 0x375940C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x37597C4 Offset: 0x37597C4 VA: 0x37597C4
	private void SubscribeButton() { }

	// RVA: 0x3759850 Offset: 0x3759850 VA: 0x3759850
	private void UnsubscribeButton() { }

	// RVA: 0x37598DC Offset: 0x37598DC VA: 0x37598DC
	private void ClosePopup() { }

	// RVA: 0x375995C Offset: 0x375995C VA: 0x375995C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x37599BC Offset: 0x37599BC VA: 0x37599BC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3759A88 Offset: 0x3759A88 VA: 0x3759A88 Slot: 6
	public Task Hide() { }

	// RVA: 0x3759B3C Offset: 0x3759B3C VA: 0x3759B3C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3759B44 Offset: 0x3759B44 VA: 0x3759B44
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]