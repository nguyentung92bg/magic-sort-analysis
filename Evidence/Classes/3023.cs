public class TeamsLeaderboardController : MonoBehaviour // TypeDefIndex: 3023
{
	// Fields
	[SerializeField]
	private List<Tab> _tabs; // 0x18
	[SerializeField]
	private GameObject _leaderboardGameObject; // 0x20
	[SerializeField]
	private GameObject _noInternetGameObject; // 0x28
	[SerializeField]
	private ScrollBar _scrollBar; // 0x30
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x38
	[SerializeField]
	private TeamLeaderboardViewAdapter _viewAdapter; // 0x40
	[SerializeField]
	private StickyScrollElementsController _stickyElements; // 0x48
	[SerializeField]
	private GameObject _comingSoonHolder; // 0x50
	private TeamsService _teamsService; // 0x58
	private Tab _currentTab; // 0x60

	// Methods

	// RVA: 0x2AE8608 Offset: 0x2AE8608 VA: 0x2AE8608
	public void Initialize() { }

	// RVA: 0x2AE905C Offset: 0x2AE905C VA: 0x2AE905C
	public void Dispose() { }

	// RVA: 0x2AEA00C Offset: 0x2AEA00C VA: 0x2AEA00C
	public void Show() { }

	// RVA: 0x2AE9904 Offset: 0x2AE9904 VA: 0x2AE9904
	public void Hide() { }

	// RVA: 0x2AF003C Offset: 0x2AF003C VA: 0x2AF003C
	private void OnTabSelected(Tab selectedTab) { }

	// RVA: 0x2AF029C Offset: 0x2AF029C VA: 0x2AF029C
	private void ShowWorldLeaderboard() { }

	// RVA: 0x2AF035C Offset: 0x2AF035C VA: 0x2AF035C
	private void ShowCountryLeaderboard() { }

	// RVA: 0x2AF041C Offset: 0x2AF041C VA: 0x2AF041C
	private void Initialize(List<LeaderboardTeam> leaderboard) { }

	// RVA: 0x2AF05EC Offset: 0x2AF05EC VA: 0x2AF05EC
	private void OnUserTeamDataUpdated() { }

	// RVA: 0x2AF04DC Offset: 0x2AF04DC VA: 0x2AF04DC
	private int GetUserTeamIndex(List<LeaderboardTeam> leaderboard) { }

	// RVA: 0x2AF05B4 Offset: 0x2AF05B4 VA: 0x2AF05B4
	private void InitializeStickyElements(LeaderboardTeam userTeamData, int userTeamIndex) { }

	// RVA: 0x2AF06B4 Offset: 0x2AF06B4 VA: 0x2AF06B4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]