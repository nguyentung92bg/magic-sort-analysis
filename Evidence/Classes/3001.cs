public class LeaderboardController : MonoBehaviour // TypeDefIndex: 3001
{
	// Fields
	[SerializeField]
	private List<Tab> _tabs; // 0x18
	[SerializeField]
	private WeeklyTournamentLeaderboardController _weeklyTournamentLeaderboardController; // 0x20
	[SerializeField]
	private PlayersLeaderboardController _playersLeaderboardController; // 0x28
	[SerializeField]
	private TeamsLeaderboardController _teamsLeaderboardController; // 0x30
	[SerializeField]
	private FriendsLeaderboardController _friendsLeaderboardController; // 0x38
	private Tab _currentTab; // 0x40
	[SerializeField]
	private GameObject _lockedGameObject; // 0x48
	[SerializeField]
	private GameObject _unlockedGameObject; // 0x50
	private WeeklyTournamentService _weeklyTournamentService; // 0x58

	// Methods

	// RVA: 0x2AE8150 Offset: 0x2AE8150 VA: 0x2AE8150
	public void Initialize() { }

	// RVA: 0x2AE8BFC Offset: 0x2AE8BFC VA: 0x2AE8BFC
	public void Dispose() { }

	// RVA: 0x2AE95A0 Offset: 0x2AE95A0 VA: 0x2AE95A0
	public void Show() { }

	// RVA: 0x2AE972C Offset: 0x2AE972C VA: 0x2AE972C
	public void Hide() { }

	// RVA: 0x2AE9928 Offset: 0x2AE9928 VA: 0x2AE9928
	public bool WeeklyTabSelected() { }

	// RVA: 0x2AE99BC Offset: 0x2AE99BC VA: 0x2AE99BC
	private void OnPageSelected(PageType pageType) { }

	// RVA: 0x2AE9B38 Offset: 0x2AE9B38 VA: 0x2AE9B38
	private void OnWeeklyTournamentSeenByUser() { }

	// RVA: 0x2AE95D0 Offset: 0x2AE95D0 VA: 0x2AE95D0
	private void UpdateView() { }

	// RVA: 0x2AE9E6C Offset: 0x2AE9E6C VA: 0x2AE9E6C
	private void SelectWeeklyTournamentTab() { }

	// RVA: 0x2AE9A78 Offset: 0x2AE9A78 VA: 0x2AE9A78
	private void OnTabSelectedByUser(Tab selectedTab) { }

	// RVA: 0x2AE9B54 Offset: 0x2AE9B54 VA: 0x2AE9B54
	private void OnTabSelected(Tab selectedTab) { }

	// RVA: 0x2AEA2F8 Offset: 0x2AEA2F8 VA: 0x2AEA2F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts
[Serializable]