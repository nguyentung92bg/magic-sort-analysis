public class TeamLeavePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2210
{
	// Fields
	[SerializeField]
	private Button _leaveButton; // 0x18
	[SerializeField]
	private Button _cancelButton; // 0x20
	[SerializeField]
	private Button[] _closeButtons; // 0x28
	[SerializeField]
	private SpriteRenderer _teamBadge; // 0x30
	[SerializeField]
	private float _defaultHeight; // 0x38
	[SerializeField]
	private float _heightWithWarning; // 0x3C
	[SerializeField]
	private GameObject _warningContainer; // 0x40
	[SerializeField]
	private TeamPopupHeightAdjuster _heightAdjuster; // 0x48
	private TeamLeavePopupArguments _args; // 0x50

	// Methods

	// RVA: 0x2EFF8CC Offset: 0x2EFF8CC VA: 0x2EFF8CC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFFA20 Offset: 0x2EFFA20 VA: 0x2EFFA20 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFFAC4 Offset: 0x2EFFAC4 VA: 0x2EFFAC4 Slot: 6
	public Task Hide() { }

	// RVA: 0x2EFFB70 Offset: 0x2EFFB70 VA: 0x2EFFB70 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2EFFB78 Offset: 0x2EFFB78 VA: 0x2EFFB78
	private void Awake() { }

	// RVA: 0x2EFFCD4 Offset: 0x2EFFCD4 VA: 0x2EFFCD4
	private void OnDestroy() { }

	// RVA: 0x2EFFE30 Offset: 0x2EFFE30 VA: 0x2EFFE30
	private void OnLeaveButtonSelected() { }

	// RVA: 0x2EFFEC4 Offset: 0x2EFFEC4 VA: 0x2EFFEC4
	private void OnCancelButtonSelected() { }

	// RVA: 0x2EFFF38 Offset: 0x2EFFF38 VA: 0x2EFFF38
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI