public class TeamInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2203
{
	// Fields
	[SerializeField]
	private TMP_Text _nameText; // 0x18
	[SerializeField]
	private TMP_Text _descriptionText; // 0x20
	[SerializeField]
	private TMP_Text _activityText; // 0x28
	[SerializeField]
	private TMP_Text _scoreText; // 0x30
	[SerializeField]
	private TMP_Text _requiredLevelText; // 0x38
	[SerializeField]
	private TMP_Text _capacityText; // 0x40
	[SerializeField]
	private TMP_Text _typeText; // 0x48
	[SerializeField]
	private SpriteRenderer _activityIcon; // 0x50
	[SerializeField]
	private SpriteRenderer _teamBadge; // 0x58
	[SerializeField]
	private ScrollBar _scrollBar; // 0x60
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x68
	[SerializeField]
	private UserSummaryViewAdapter _userViewAdapter; // 0x70
	[SerializeField]
	private GameObject _pendingContainer; // 0x78
	[SerializeField]
	private Button _joinButton; // 0x80
	[SerializeField]
	private Button _editButon; // 0x88
	[SerializeField]
	private Button _requestsButton; // 0x90
	[SerializeField]
	private Button _leaveButton; // 0x98
	[SerializeField]
	private GameObject _joinButtonHolder; // 0xA0
	[SerializeField]
	private GameObject _editButtonHolder; // 0xA8
	[SerializeField]
	private GameObject _requestsButtonHolder; // 0xB0
	[SerializeField]
	private GameObject _leaveButtonHolder; // 0xB8
	[SerializeField]
	private TeamInfoTooltip _tooltip; // 0xC0
	[SerializeField]
	private TeamInfoPopup.TeamActivitySettings[] _activitySettings; // 0xC8
	[SerializeField]
	private TeamsBadgeConfig _teamsBadgeConfig; // 0xD0
	[SerializeField]
	private TeamJoinRequestsView _view; // 0xD8
	[SerializeField]
	private GameObject _requestCountHolder; // 0xE0
	[SerializeField]
	private TMP_Text _requestCountText; // 0xE8
	private TeamInfoPopupArguments _arguments; // 0xF0
	private TeamsService _teamsService; // 0xF8
	private TeamViewModel _team; // 0x100
	private List<TeamMemberViewModel> _members; // 0x108
	private bool _userBelongTeam; // 0x110
	private MemberRole _userRole; // 0x114

	// Methods

	// RVA: 0x2EFC1F0 Offset: 0x2EFC1F0 VA: 0x2EFC1F0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFC748 Offset: 0x2EFC748 VA: 0x2EFC748 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFC7EC Offset: 0x2EFC7EC VA: 0x2EFC7EC Slot: 6
	public Task Hide() { }

	// RVA: 0x2EFC898 Offset: 0x2EFC898 VA: 0x2EFC898 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2EFC8A0 Offset: 0x2EFC8A0 VA: 0x2EFC8A0
	public void UpdateTeamData(TeamDetailsViewModel teamDetails) { }

	// RVA: 0x2EFC384 Offset: 0x2EFC384 VA: 0x2EFC384
	private void RefreshUserInfo() { }

	// RVA: 0x2EFC8F0 Offset: 0x2EFC8F0 VA: 0x2EFC8F0
	private void Awake() { }

	// RVA: 0x2EFCC50 Offset: 0x2EFCC50 VA: 0x2EFCC50
	private void OnDestroy() { }

	[AsyncStateMachine(typeof(TeamInfoPopup.<OnEditButtonSelected>d__42))]
	// RVA: 0x2EFCFB0 Offset: 0x2EFCFB0 VA: 0x2EFCFB0
	private void OnEditButtonSelected() { }

	// RVA: 0x2EFD068 Offset: 0x2EFD068 VA: 0x2EFD068
	private void OnRequestsButtonSelected() { }

	// RVA: 0x2EFD208 Offset: 0x2EFD208 VA: 0x2EFD208
	private void OnLeaveButtonSelected() { }

	// RVA: 0x2EFD39C Offset: 0x2EFD39C VA: 0x2EFD39C
	private void OnJoinButtonSelected() { }

	// RVA: 0x2EFC404 Offset: 0x2EFC404 VA: 0x2EFC404
	private void UpdateViews() { }

	// RVA: 0x2EFD79C Offset: 0x2EFD79C VA: 0x2EFD79C
	public void UpdateTeamData(EditTeamRequestModel teamDetails) { }

	// RVA: 0x2EFD53C Offset: 0x2EFD53C VA: 0x2EFD53C
	private void SetActivityText(long activity) { }

	// RVA: 0x2EFD644 Offset: 0x2EFD644 VA: 0x2EFD644
	private void InitializeButtons() { }

	// RVA: 0x2EFD7F8 Offset: 0x2EFD7F8 VA: 0x2EFD7F8
	private void OnShowToolTip(TeamMemberViewModel userData, Transform tooltipHolder) { }

	// RVA: 0x2EFD960 Offset: 0x2EFD960 VA: 0x2EFD960
	private bool ShouldReversedTooltip(TeamMemberViewModel userData) { }

	// RVA: 0x2EFDE0C Offset: 0x2EFDE0C VA: 0x2EFDE0C
	private void RemoveJoinRequest(string requestId) { }

	// RVA: 0x2EFDF54 Offset: 0x2EFDF54 VA: 0x2EFDF54
	private void UserRoleUpdated(string userId, MemberRole newRole) { }

	// RVA: 0x2EFD9D4 Offset: 0x2EFD9D4 VA: 0x2EFD9D4
	private int GetColeaderCountInCurrentTeam() { }

	// RVA: 0x2EFE188 Offset: 0x2EFE188 VA: 0x2EFE188
	public void ShowPendingButton() { }

	// RVA: 0x2EFE1CC Offset: 0x2EFE1CC VA: 0x2EFE1CC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI