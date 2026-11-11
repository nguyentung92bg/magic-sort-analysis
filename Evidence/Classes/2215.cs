public class TeamsController : MonoBehaviour // TypeDefIndex: 2215
{
	// Fields
	[SerializeField]
	private GameObject _disabledView; // 0x18
	[SerializeField]
	private GameObject _lockedView; // 0x20
	[SerializeField]
	private GameObject _navigationView; // 0x28
	[SerializeField]
	private GameObject _loadingView; // 0x30
	[SerializeField]
	private GameObject _noConnectionView; // 0x38
	[SerializeField]
	private GameObject _teamChatView; // 0x40
	[SerializeField]
	private GameObject _joinView; // 0x48
	[SerializeField]
	private TeamsNavigationController _teamNavigationController; // 0x50
	[SerializeField]
	private TeamChatController _teamChatController; // 0x58
	[SerializeField]
	private TeamsLobbyButtonController _teamsLobbyButton; // 0x60
	[SerializeField]
	private TMP_Text _lockedText; // 0x68
	private bool _isShown; // 0x70
	private bool _firstShow; // 0x71
	private DateTime _lostFocus; // 0x78
	private WebSocketManager _socketManager; // 0x80
	private TeamsService _teamsService; // 0x88

	// Methods

	// RVA: 0x2F00958 Offset: 0x2F00958 VA: 0x2F00958
	public void Show() { }

	// RVA: 0x2F00C9C Offset: 0x2F00C9C VA: 0x2F00C9C
	public void Hide() { }

	// RVA: 0x2F00CD0 Offset: 0x2F00CD0 VA: 0x2F00CD0
	public void Initialize() { }

	// RVA: 0x2F010E4 Offset: 0x2F010E4 VA: 0x2F010E4
	public void Dispose() { }

	// RVA: 0x2F009B0 Offset: 0x2F009B0 VA: 0x2F009B0
	private void UpdateView() { }

	// RVA: 0x2F015D4 Offset: 0x2F015D4 VA: 0x2F015D4
	private bool CanRefreshTeams() { }

	// RVA: 0x2F00C70 Offset: 0x2F00C70 VA: 0x2F00C70
	private void TryInitializeTeams() { }

	// RVA: 0x2F01630 Offset: 0x2F01630 VA: 0x2F01630
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x2F0177C Offset: 0x2F0177C VA: 0x2F0177C
	private void OnApplicationPause(bool pauseStatus) { }

	// RVA: 0x2F014BC Offset: 0x2F014BC VA: 0x2F014BC
	private void DisableAllViews() { }

	// RVA: 0x2F018C8 Offset: 0x2F018C8 VA: 0x2F018C8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI