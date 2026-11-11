public class ProfileEnterNamePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2932
{
	// Fields
	[SerializeField]
	private TMP_InputField _inputField; // 0x18
	[SerializeField]
	private EditProfileNamePlaceHolder _inputNamePlaceHolder; // 0x20
	[SerializeField]
	private Transform _enterHeaderParent; // 0x28
	[SerializeField]
	private Transform _enterInfoParent; // 0x30
	[SerializeField]
	private Transform _changeHeaderParent; // 0x38
	[SerializeField]
	private Transform _changeInfoParent; // 0x40
	[SerializeField]
	private Button _greenButton; // 0x48
	[SerializeField]
	private Button _grayButton; // 0x50
	[SerializeField]
	private Transform _closeButtonParent; // 0x58
	private bool _isForceEnter; // 0x60
	private bool _isFirstForce; // 0x61
	private bool _savingNameFailed; // 0x62
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x68

	// Methods

	// RVA: 0x2988E3C Offset: 0x2988E3C VA: 0x2988E3C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x29892F4 Offset: 0x29892F4 VA: 0x29892F4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x29893D0 Offset: 0x29893D0 VA: 0x29893D0 Slot: 6
	public Task Hide() { }

	// RVA: 0x2989690 Offset: 0x2989690 VA: 0x2989690 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2989214 Offset: 0x2989214 VA: 0x2989214
	private void UpdateContinueButtonVisual(string name) { }

	// RVA: 0x29891A4 Offset: 0x29891A4 VA: 0x29891A4
	private void UpdateCloseButtonVisibility() { }

	// RVA: 0x29897B8 Offset: 0x29897B8 VA: 0x29897B8
	private bool HasInternetConnection() { }

	// RVA: 0x2989698 Offset: 0x2989698 VA: 0x2989698
	private bool IsNameInputValid(string name) { }

	// RVA: 0x29897D4 Offset: 0x29897D4 VA: 0x29897D4
	private void OnProfileInfoSaveFailed() { }

	// RVA: 0x29897E0 Offset: 0x29897E0 VA: 0x29897E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts