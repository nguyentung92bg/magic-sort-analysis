public class TeamKickPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2208
{
	// Fields
	[SerializeField]
	private Button _yesButton; // 0x18
	[SerializeField]
	private Button _noButton; // 0x20
	[SerializeField]
	private Button[] _closeButtons; // 0x28
	[SerializeField]
	private TMP_Text _sureText; // 0x30
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x38
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x40
	private TeamKickPopupArguments _arguments; // 0x48

	// Methods

	// RVA: 0x2EFF288 Offset: 0x2EFF288 VA: 0x2EFF288 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFF3DC Offset: 0x2EFF3DC VA: 0x2EFF3DC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFF480 Offset: 0x2EFF480 VA: 0x2EFF480 Slot: 6
	public Task Hide() { }

	// RVA: 0x2EFF52C Offset: 0x2EFF52C VA: 0x2EFF52C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2EFF534 Offset: 0x2EFF534 VA: 0x2EFF534
	private void Awake() { }

	// RVA: 0x2EFF690 Offset: 0x2EFF690 VA: 0x2EFF690
	private void OnDestroy() { }

	// RVA: 0x2EFF7EC Offset: 0x2EFF7EC VA: 0x2EFF7EC
	private void OnYesButtonSelected() { }

	// RVA: 0x2EFF848 Offset: 0x2EFF848 VA: 0x2EFF848
	private void OnNoButtonSelected() { }

	// RVA: 0x2EFF8A4 Offset: 0x2EFF8A4 VA: 0x2EFF8A4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI