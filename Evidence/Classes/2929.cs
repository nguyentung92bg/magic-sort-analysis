public class EditProfilePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2929
{
	// Fields
	[SerializeField]
	private ProfileSpriteSelectionContainer _profileSpriteSelectionContainer; // 0x18
	[SerializeField]
	private ProfileTokenSelectionContainer _profileTokenSelectionContainer; // 0x20
	[SerializeField]
	private ProfileFrameSelectionContainer _profileFrameSelectionContainer; // 0x28
	[SerializeField]
	private ProfileNameStyleSelectionContainer _profileNameStyleSelectionContainer; // 0x30
	[SerializeField]
	private Transform _closeButtonParent; // 0x38
	[SerializeField]
	private Button _activeSaveButton; // 0x40
	[SerializeField]
	private Button _deactiveSaveButton; // 0x48
	[SerializeField]
	private Button _avatarButton; // 0x50
	[SerializeField]
	private Transform _avatarTabParent; // 0x58
	[SerializeField]
	private Button _tokenButton; // 0x60
	[SerializeField]
	private Transform _tokenTabParent; // 0x68
	[SerializeField]
	private Button _frameButton; // 0x70
	[SerializeField]
	private Transform _frameTabParent; // 0x78
	[SerializeField]
	private Button _nameButton; // 0x80
	[SerializeField]
	private Transform _nameTabParent; // 0x88
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x90
	private bool _isForceEnter; // 0x98
	private bool _isFirstForce; // 0x99

	// Methods

	// RVA: 0x29873CC Offset: 0x29873CC VA: 0x29873CC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2988504 Offset: 0x2988504 VA: 0x2988504
	private void OnProfileSpriteSelected(string id) { }

	// RVA: 0x29883EC Offset: 0x29883EC VA: 0x29883EC
	private void SetSaveButtonActive(bool isActive) { }

	// RVA: 0x298844C Offset: 0x298844C VA: 0x298844C
	private void OnAvatarTabSelected() { }

	// RVA: 0x2988670 Offset: 0x2988670 VA: 0x2988670
	private void OnTokenTabSelected() { }

	// RVA: 0x2988678 Offset: 0x2988678 VA: 0x2988678
	private void OnFrameTabSelected() { }

	// RVA: 0x2988680 Offset: 0x2988680 VA: 0x2988680
	private void OnNameTabSelected() { }

	// RVA: 0x298852C Offset: 0x298852C VA: 0x298852C
	private void ActivateTab(Transform tabParent) { }

	// RVA: 0x2988384 Offset: 0x2988384 VA: 0x2988384
	private void UpdateCloseButtonVisibility() { }

	// RVA: 0x2988688 Offset: 0x2988688 VA: 0x2988688
	private bool HasInternetConnection() { }

	// RVA: 0x29886A4 Offset: 0x29886A4 VA: 0x29886A4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2988780 Offset: 0x2988780 VA: 0x2988780 Slot: 6
	public Task Hide() { }

	// RVA: 0x2988B14 Offset: 0x2988B14 VA: 0x2988B14 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2988B1C Offset: 0x2988B1C VA: 0x2988B1C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts