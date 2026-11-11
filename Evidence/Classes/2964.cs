public class SaveProfileButtonHandler : MonoBehaviour // TypeDefIndex: 2964
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private ProfileSpriteSelectionContainer _spriteSelectionContainer; // 0x20
	[SerializeField]
	private ProfileTokenSelectionContainer _tokenSelectionContainer; // 0x28
	[SerializeField]
	private ProfileFrameSelectionContainer _frameSelectionContainer; // 0x30
	[SerializeField]
	private ProfileNameStyleSelectionContainer _nameStyleSelectionContainer; // 0x38
	[SerializeField]
	private TMP_InputField _inputField; // 0x40
	private const string profile_name_warning_localization_term = "ProfileNameWarning";
	private const string profile_picture_warning_localization_term = "ProfilePictureWarning";

	// Methods

	// RVA: 0x2ADE7E8 Offset: 0x2ADE7E8 VA: 0x2ADE7E8
	private void Awake() { }

	// RVA: 0x2ADE874 Offset: 0x2ADE874 VA: 0x2ADE874
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(SaveProfileButtonHandler.<OnButtonClick>d__10))]
	// RVA: 0x2ADE900 Offset: 0x2ADE900 VA: 0x2ADE900
	private void OnButtonClick() { }

	// RVA: 0x2ADE9C0 Offset: 0x2ADE9C0 VA: 0x2ADE9C0
	private bool IsNameInputValid(string name) { }

	// RVA: 0x2ADEAAC Offset: 0x2ADEAAC VA: 0x2ADEAAC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts