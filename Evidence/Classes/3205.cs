public class TreasureDrillInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3205
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

	// RVA: 0x330A384 Offset: 0x330A384 VA: 0x330A384
	private void SetActiveAll(bool active) { }

	// RVA: 0x330A4F4 Offset: 0x330A4F4 VA: 0x330A4F4 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x330A510 Offset: 0x330A510 VA: 0x330A510
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x330A8C8 Offset: 0x330A8C8 VA: 0x330A8C8
	private void OnDestroy() { }

	// RVA: 0x330A97C Offset: 0x330A97C VA: 0x330A97C
	private void SubscribeButton() { }

	// RVA: 0x330A8F0 Offset: 0x330A8F0 VA: 0x330A8F0
	private void UnsubscribeButton() { }

	// RVA: 0x330AA08 Offset: 0x330AA08 VA: 0x330AA08
	private void ClosePopup() { }

	// RVA: 0x330AA7C Offset: 0x330AA7C VA: 0x330AA7C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x330AB54 Offset: 0x330AB54 VA: 0x330AB54 Slot: 6
	public Task Hide() { }

	// RVA: 0x330AC08 Offset: 0x330AC08 VA: 0x330AC08 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x330AC10 Offset: 0x330AC10 VA: 0x330AC10
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]