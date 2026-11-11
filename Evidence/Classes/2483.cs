public class StrikeShowEventPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2483
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20
	[SerializeField]
	private Button _infoButton; // 0x28
	[SerializeField]
	private StrikeShowLightAnimationController _lightAnimationController; // 0x30
	[SerializeField]
	private StrikeShowEventInProgressView _inProgressView; // 0x38
	[SerializeField]
	private StrikeShowEventResultView _resultView; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48
	private bool _isResultMode; // 0x50

	// Methods

	// RVA: 0x2AFA604 Offset: 0x2AFA604 VA: 0x2AFA604 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFAD00 Offset: 0x2AFAD00 VA: 0x2AFAD00 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFADDC Offset: 0x2AFADDC VA: 0x2AFADDC Slot: 6
	public Task Hide() { }

	// RVA: 0x2AFAEFC Offset: 0x2AFAEFC VA: 0x2AFAEFC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2AFAF04 Offset: 0x2AFAF04 VA: 0x2AFAF04
	private void Awake() { }

	// RVA: 0x2AFAFE4 Offset: 0x2AFAFE4 VA: 0x2AFAFE4
	private void OnDestroy() { }

	// RVA: 0x2AFB0C4 Offset: 0x2AFB0C4 VA: 0x2AFB0C4
	private void OnCloseButtonSelected() { }

	// RVA: 0x2AFB380 Offset: 0x2AFB380 VA: 0x2AFB380
	private void OnInfoButtonSelected() { }

	// RVA: 0x2AFB444 Offset: 0x2AFB444 VA: 0x2AFB444
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI