public class TeamQuestLeaderboardModel // TypeDefIndex: 2272
{
	// Fields
	[JsonProperty("isClaimed")]
	public bool IsClaimed; // 0x10
	[JsonProperty("totalScore")]
	public int TotalScore; // 0x14
	[JsonProperty("elo")]
	public int Elo; // 0x18
	[JsonProperty("scoreAtUserJoin")]
	public int ScoreAtUserJoin; // 0x1C
	[JsonProperty("teamAdventureLeaderboard")]
	public List<TeamQuestLeaderboardPlayer> TeamQuestLeaderboard; // 0x20
	[JsonProperty("teamAdventureSteps")]
	public List<TeamQuestStep> TeamQuestSteps; // 0x28

	// Methods

	// RVA: 0x2DD49E8 Offset: 0x2DD49E8 VA: 0x2DD49E8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts