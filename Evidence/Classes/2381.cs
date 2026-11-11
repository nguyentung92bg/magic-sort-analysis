public class TeamArenaEventPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2381
{
	// Fields
	[SerializeField]
	private Button _infoButton; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private TeamArenaEventInProgressController _inProgressController; // 0x28
	[SerializeField]
	private TeamArenaEventResultController _resultController; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private IPopUpService _popUpService; // 0x40
	private TeamArenaService _teamArenaService; // 0x48

	// Methods

	[AsyncStateMachine(typeof(TeamArenaEventPopup.<Show>d__7))]
	// RVA: 0x2965DB0 Offset: 0x2965DB0 VA: 0x2965DB0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2965E84 Offset: 0x2965E84 VA: 0x2965E84 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2965F38 Offset: 0x2965F38 VA: 0x2965F38 Slot: 6
	public Task Hide() { }

	// RVA: 0x2966040 Offset: 0x2966040 VA: 0x2966040 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2966048 Offset: 0x2966048 VA: 0x2966048
	private void UpdateView(TeamArenaEventPopupArgs args) { }

	// RVA: 0x2966228 Offset: 0x2966228 VA: 0x2966228
	private void Awake() { }

	// RVA: 0x2966354 Offset: 0x2966354 VA: 0x2966354
	private void OnDestroy() { }

	// RVA: 0x29663E0 Offset: 0x29663E0 VA: 0x29663E0
	private void OnInfoButtonSelected() { }

	// RVA: 0x2966014 Offset: 0x2966014 VA: 0x2966014
	private void Dispose() { }

	// RVA: 0x296650C Offset: 0x296650C VA: 0x296650C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]