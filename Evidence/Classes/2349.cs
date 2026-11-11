public class TeamArenaTournamentData // TypeDefIndex: 2349
{
	// Fields
	[JsonProperty("isClaimed")]
	public bool IsClaimed; // 0x10
	[JsonProperty("totalScore")]
	public int TotalScore; // 0x14
	[JsonProperty("canContribute")]
	public bool CanContribute; // 0x18
	[JsonProperty("teamRank")]
	public int TeamRank; // 0x1C
	[JsonProperty("previousElo")]
	public long PreviousElo; // 0x20
	[JsonProperty("elo")]
	public long CurrentElo; // 0x28
	[JsonProperty("teamCompetitionLeaderboard")]
	public List<TeamArenaTeamData> TeamLeaderboard; // 0x30
	[JsonProperty("teamCompetitionUserLeaderboard")]
	public List<TeamArenaUserData> UserLeaderboard; // 0x38

	// Methods

	// RVA: 0x2DE404C Offset: 0x2DE404C VA: 0x2DE404C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena