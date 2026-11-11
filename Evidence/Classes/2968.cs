public class FriendProfileController : MonoBehaviour // TypeDefIndex: 2968
{
	// Fields
	[SerializeField]
	private GameObject _addFriendContainer; // 0x18
	[SerializeField]
	private GameObject _removeFriendContainer; // 0x20
	[SerializeField]
	private GameObject _acceptFriendRequestContainer; // 0x28
	[SerializeField]
	private Button _addFriendButton; // 0x30
	[SerializeField]
	private Button _acceptRequestButton; // 0x38
	[SerializeField]
	private Button _removeFriendButton; // 0x40
	[SerializeField]
	private GameObject _pendingRequestsContainer; // 0x48
	private FriendsService _friendsService; // 0x50
	private int _popupSource; // 0x58
	private bool _isMyFriend; // 0x5C
	private UserProfileModel _model; // 0x60

	// Methods

	// RVA: 0x2AE0344 Offset: 0x2AE0344 VA: 0x2AE0344
	public void Initialize(UserProfileModel profileModel, int popupSource) { }

	// RVA: 0x2AE0420 Offset: 0x2AE0420 VA: 0x2AE0420
	private void UpdateView() { }

	// RVA: 0x2AE0578 Offset: 0x2AE0578 VA: 0x2AE0578
	private void OnEnable() { }

	// RVA: 0x2AE06A4 Offset: 0x2AE06A4 VA: 0x2AE06A4
	private void OnDisable() { }

	// RVA: 0x2AE07D0 Offset: 0x2AE07D0 VA: 0x2AE07D0
	private void OnAddFriendButtonSelected() { }

	[AsyncStateMachine(typeof(FriendProfileController.<OnRemoveFriendSelected>d__16))]
	// RVA: 0x2AE0AB4 Offset: 0x2AE0AB4 VA: 0x2AE0AB4
	private void OnRemoveFriendSelected() { }

	// RVA: 0x2AE0B6C Offset: 0x2AE0B6C VA: 0x2AE0B6C
	private void OnFriendRequestAccepted() { }

	// RVA: 0x2AE09C4 Offset: 0x2AE09C4 VA: 0x2AE09C4
	private FriendUserViewModel MapToFriendUser(UserProfileModel model) { }

	// RVA: 0x2AE0D00 Offset: 0x2AE0D00 VA: 0x2AE0D00
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Profile.Scripts