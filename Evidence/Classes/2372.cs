public class TeamArenaEventResultViewModel // TypeDefIndex: 2372
{
	// Fields
	public int TeamRank; // 0x10
	public int PlayerRank; // 0x14
	public RewardModel TeamLeaderboardReward; // 0x18
	public RewardModel PlayerLeaderboardReward; // 0x20
	public List<ITeamArenaLeaderboardViewModel> TeamLeaderboard; // 0x28
	public List<ITeamArenaLeaderboardViewModel> PlayersLeaderboard; // 0x30
	public bool ShowNoContribution; // 0x38

	// Methods

	// RVA: 0x2964B4C Offset: 0x2964B4C VA: 0x2964B4C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena