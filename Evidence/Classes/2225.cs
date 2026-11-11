public class TeamUpdateMemberRolePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2225
{
	// Fields
	[SerializeField]
	private Button _yesButton; // 0x18
	[SerializeField]
	private Button _noButton; // 0x20
	[SerializeField]
	private Button[] _closeButtons; // 0x28
	[SerializeField]
	private TMP_Text _titleText; // 0x30
	[SerializeField]
	private TMP_Text _sureText; // 0x38
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x40
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x48
	[SerializeField]
	private GameObject _demoteImage; // 0x50
	private TeamUpdateMemberRolePopupArguments _arguments; // 0x58

	// Methods

	// RVA: 0x2F02C14 Offset: 0x2F02C14 VA: 0x2F02C14 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2F02E44 Offset: 0x2F02E44 VA: 0x2F02E44 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F02EE8 Offset: 0x2F02EE8 VA: 0x2F02EE8 Slot: 6
	public Task Hide() { }

	// RVA: 0x2F02F94 Offset: 0x2F02F94 VA: 0x2F02F94 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F02CBC Offset: 0x2F02CBC VA: 0x2F02CBC
	private void InitializeVisuals() { }

	// RVA: 0x2F02F9C Offset: 0x2F02F9C VA: 0x2F02F9C
	private void Awake() { }

	// RVA: 0x2F030F8 Offset: 0x2F030F8 VA: 0x2F030F8
	private void OnDestroy() { }

	// RVA: 0x2F03254 Offset: 0x2F03254 VA: 0x2F03254
	private void OnYesButtonSelected() { }

	// RVA: 0x2F032B0 Offset: 0x2F032B0 VA: 0x2F032B0
	private void OnNoButtonSelected() { }

	// RVA: 0x2F0330C Offset: 0x2F0330C VA: 0x2F0330C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI