public class FriendsLeaderboardController : MonoBehaviour // TypeDefIndex: 3014
{
	// Fields
	[SerializeField]
	private List<Tab> _tabs; // 0x18
	[SerializeField]
	private FriendsListView _friendsListView; // 0x20
	[SerializeField]
	private AddFriendView _addFriendView; // 0x28
	[SerializeField]
	private GameObject _enabledContainer; // 0x30
	[SerializeField]
	private GameObject _comingSoonContainer; // 0x38
	[SerializeField]
	private GameObject _noConnectionContainer; // 0x40
	[SerializeField]
	private GameObject _loadingContainer; // 0x48
	[SerializeField]
	private Button _facebookSignInButton; // 0x50
	[SerializeField]
	private GameObject _rewardContainer; // 0x58
	[SerializeField]
	private FacebookSignInRewardView _rewardView; // 0x60
	[SerializeField]
	private TMP_Text _facebookSignInRewardText; // 0x68
	[SerializeField]
	private RectTransform _signInTextContainer; // 0x70
	[SerializeField]
	private float _defaultWidth; // 0x78
	[SerializeField]
	private float _noRewardWidth; // 0x7C
	[SerializeField]
	private FriendsLeaderboardNotificationController _notificationController; // 0x80
	private Tab _currentTab; // 0x88
	private FriendsService _friendsService; // 0x90
	private bool _isShowed; // 0x98
	private DateTime _lostFocus; // 0xA0

	// Methods

	// RVA: 0x2AE8864 Offset: 0x2AE8864 VA: 0x2AE8864
	public void Initialize() { }

	// RVA: 0x2AE925C Offset: 0x2AE925C VA: 0x2AE925C
	public void Dispose() { }

	// RVA: 0x2AEDC68 Offset: 0x2AEDC68 VA: 0x2AEDC68
	private void OnFriendsInitializationStarted() { }

	// RVA: 0x2AEDC98 Offset: 0x2AEDC98 VA: 0x2AEDC98
	private void OnFriendsInitializationCompletedSignal() { }

	// RVA: 0x2AEA0D0 Offset: 0x2AEA0D0 VA: 0x2AEA0D0
	public void Show() { }

	// RVA: 0x2AE9FE4 Offset: 0x2AE9FE4 VA: 0x2AE9FE4
	public void Hide() { }

	// RVA: 0x2AEDEF4 Offset: 0x2AEDEF4 VA: 0x2AEDEF4
	private void OnSignInButtonSelected() { }

	// RVA: 0x2AEDCD4 Offset: 0x2AEDCD4 VA: 0x2AEDCD4
	private void OnTabSelected(Tab selectedTab) { }

	// RVA: 0x2AEDF70 Offset: 0x2AEDF70 VA: 0x2AEDF70
	private void ShowFriendsLeaderboard() { }

	// RVA: 0x2AEDFA8 Offset: 0x2AEDFA8 VA: 0x2AEDFA8
	private void ShowAddFriends() { }

	// RVA: 0x2AED844 Offset: 0x2AED844 VA: 0x2AED844
	private void InitializeRewardContainer() { }

	// RVA: 0x2AEE050 Offset: 0x2AEE050 VA: 0x2AEE050
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x2AEE130 Offset: 0x2AEE130 VA: 0x2AEE130
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI