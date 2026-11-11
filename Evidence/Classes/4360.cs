public class FindFriendPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4360
{
	// Fields
	[SerializeField]
	private Button _searchButton; // 0x18
	[SerializeField]
	private Button _copyIdButton; // 0x20
	[SerializeField]
	private Button _inputButton; // 0x28
	[SerializeField]
	private Button _clearInputButton; // 0x30
	[SerializeField]
	private Button _inviteButton; // 0x38
	[SerializeField]
	private Button _pendingButton; // 0x40
	[SerializeField]
	private Button _addedButton; // 0x48
	[SerializeField]
	private TMP_Text _publicId; // 0x50
	[SerializeField]
	private TMP_Text _searchText; // 0x58
	[SerializeField]
	private GameObject _searchResultContainer; // 0x60
	[SerializeField]
	private Button _addButton; // 0x68
	[SerializeField]
	private UserProfileView _userProfileView; // 0x70
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x78
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x80
	private FriendsService _friendsService; // 0x88
	private IPlayerService _playerService; // 0x90
	private KeyboardService _keyboardService; // 0x98
	private ReferralService _referralService; // 0xA0
	private string _searchTerm; // 0xA8
	private FriendUserViewModel _friendUserViewModel; // 0xB0
	private const int _maxSearchTermLength = 11;

	// Methods

	// RVA: 0x1B8D324 Offset: 0x1B8D324 VA: 0x1B8D324 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1B8DA08 Offset: 0x1B8DA08 VA: 0x1B8DA08 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1B8DA9C Offset: 0x1B8DA9C VA: 0x1B8DA9C Slot: 6
	public Task Hide() { }

	// RVA: 0x1B8DF00 Offset: 0x1B8DF00 VA: 0x1B8DF00 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1B8D408 Offset: 0x1B8D408 VA: 0x1B8D408
	private void Initialize() { }

	// RVA: 0x1B8DB60 Offset: 0x1B8DB60 VA: 0x1B8DB60
	private void Dispose() { }

	[AsyncStateMachine(typeof(FindFriendPopup.<OnSearchButtonSelected>d__27))]
	// RVA: 0x1B8DF08 Offset: 0x1B8DF08 VA: 0x1B8DF08
	private void OnSearchButtonSelected() { }

	// RVA: 0x1B8DFC0 Offset: 0x1B8DFC0 VA: 0x1B8DFC0
	private void OnCopyButtonSelected() { }

	// RVA: 0x1B8E18C Offset: 0x1B8E18C VA: 0x1B8E18C
	private void OnInputButtonSelected() { }

	// RVA: 0x1B8E244 Offset: 0x1B8E244 VA: 0x1B8E244
	private void OnInputCanceled(string obj) { }

	// RVA: 0x1B8E260 Offset: 0x1B8E260 VA: 0x1B8E260
	private void OnInputChanged(string keyword) { }

	// RVA: 0x1B8E2E8 Offset: 0x1B8E2E8 VA: 0x1B8E2E8
	private void OnInputSubmitted(string keyword) { }

	// RVA: 0x1B8E314 Offset: 0x1B8E314 VA: 0x1B8E314
	private void OnAddButtonSelected() { }

	// RVA: 0x1B8E4B8 Offset: 0x1B8E4B8 VA: 0x1B8E4B8
	private void OnClearInputButtonSelected() { }

	// RVA: 0x1B8E54C Offset: 0x1B8E54C VA: 0x1B8E54C
	private void OnInviteButtonSelected() { }

	// RVA: 0x1B8E5A0 Offset: 0x1B8E5A0 VA: 0x1B8E5A0
	private void OnAddedButtonSelected() { }

	// RVA: 0x1B8E6B8 Offset: 0x1B8E6B8 VA: 0x1B8E6B8
	private void OnPendingButtonSelected() { }

	[Button]
	// RVA: 0x1B8E7D0 Offset: 0x1B8E7D0 VA: 0x1B8E7D0
	private void InputDebug(string searchKey) { }

	// RVA: 0x1B8E7D4 Offset: 0x1B8E7D4 VA: 0x1B8E7D4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts.UI