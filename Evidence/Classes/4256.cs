public class JetpackRaceInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4256
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private TextMeshPro _infoText1; // 0x30
	[SerializeField]
	private TextMeshPro _infoText2; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40
	private Sequence _sequence; // 0x48

	// Methods

	// RVA: 0x1C69CF4 Offset: 0x1C69CF4 VA: 0x1C69CF4
	private void OnDestroy() { }

	// RVA: 0x1C69D0C Offset: 0x1C69D0C VA: 0x1C69D0C
	private void SetActiveAll(bool active) { }

	// RVA: 0x1C69E7C Offset: 0x1C69E7C VA: 0x1C69E7C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x1C6A234 Offset: 0x1C6A234 VA: 0x1C6A234
	private void SubscribeButton() { }

	// RVA: 0x1C6A2C0 Offset: 0x1C6A2C0 VA: 0x1C6A2C0
	private void UnsubscribeButton() { }

	// RVA: 0x1C6A34C Offset: 0x1C6A34C VA: 0x1C6A34C
	private void ClosePopup() { }

	// RVA: 0x1C6A3CC Offset: 0x1C6A3CC VA: 0x1C6A3CC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1C6A5DC Offset: 0x1C6A5DC VA: 0x1C6A5DC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1C6A6A8 Offset: 0x1C6A6A8 VA: 0x1C6A6A8 Slot: 6
	public Task Hide() { }

	// RVA: 0x1C6A75C Offset: 0x1C6A75C VA: 0x1C6A75C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1C6A440 Offset: 0x1C6A440 VA: 0x1C6A440
	public void SetInfoTextLevelCount() { }

	// RVA: 0x1C6A764 Offset: 0x1C6A764 VA: 0x1C6A764
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]