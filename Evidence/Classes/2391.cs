public class TeamArenaLeaderboardController : MonoBehaviour // TypeDefIndex: 2391
{
	// Fields
	[SerializeField]
	private Tab[] _tabs; // 0x18
	[SerializeField]
	private GameObject _teamsLeaderboardContainer; // 0x20
	[SerializeField]
	private GameObject _playersLeaderboardContainer; // 0x28
	[SerializeField]
	private ScrollBar _playersLeaderboardScrollBar; // 0x30
	[SerializeField]
	private BasicScrollAdapter _playersScrollAdapter; // 0x38
	[SerializeField]
	private TeamArenaPlayerLeaderboardViewAdapter _playersLeaderboardViewAdapter; // 0x40
	[SerializeField]
	private ScrollBar _teamsLeaderboardScrollBar; // 0x48
	[SerializeField]
	private BasicScrollAdapter _teamsScrollAdapter; // 0x50
	[SerializeField]
	private TeamArenaTeamLeaderboardViewAdapter _teamsLeaderboardViewAdapter; // 0x58
	private Tab _currentTab; // 0x60
	[CompilerGenerated]
	private Action<string> OnTabSelectedEvent; // 0x68

	// Methods

	[CompilerGenerated]
	// RVA: 0x2967A2C Offset: 0x2967A2C VA: 0x2967A2C
	public void add_OnTabSelectedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x2967BCC Offset: 0x2967BCC VA: 0x2967BCC
	public void remove_OnTabSelectedEvent(Action<string> value) { }

	// RVA: 0x296545C Offset: 0x296545C VA: 0x296545C
	public void Initialize(List<ITeamArenaLeaderboardViewModel> playerLeaderboard, List<ITeamArenaLeaderboardViewModel> teamsLeaderboard) { }

	// RVA: 0x29656D0 Offset: 0x29656D0 VA: 0x29656D0
	public void Dispose() { }

	// RVA: 0x2969894 Offset: 0x2969894 VA: 0x2969894
	private void OnTabSelected(Tab selectedTab) { }

	// RVA: 0x29699FC Offset: 0x29699FC VA: 0x29699FC
	private void ShowTeamsLeaderboard() { }

	// RVA: 0x2969A34 Offset: 0x2969A34 VA: 0x2969A34
	private void ShowPlayersLeaderboard() { }

	// RVA: 0x2969774 Offset: 0x2969774 VA: 0x2969774
	private void SetPlayersLeaderboard(List<ITeamArenaLeaderboardViewModel> viewModels) { }

	// RVA: 0x2969804 Offset: 0x2969804 VA: 0x2969804
	private void SetTeamsLeaderboard(List<ITeamArenaLeaderboardViewModel> viewModels) { }

	// RVA: 0x2969A6C Offset: 0x2969A6C VA: 0x2969A6C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups