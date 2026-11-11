public class DuckFestivalResponse // TypeDefIndex: 4382
{
	// Fields
	[JsonProperty("tournamentID")]
	public string TournamentID; // 0x10
	[JsonProperty("leaderboardID")]
	public string LeaderboardID; // 0x18
	[JsonProperty("players")]
	public List<DuckFestivalLeaderboardPlayer> Players; // 0x20
	[JsonProperty("startTime")]
	public long StartTime; // 0x28
	[JsonProperty("finishTime")]
	public long FinishTime; // 0x30
	[JsonProperty("joinWindowEndEpoch")]
	public long JoinWindowEndEpoch; // 0x38
	[JsonProperty("capacity")]
	public int Capacity; // 0x40
	[JsonProperty("isClaimed")]
	public bool IsClaimed; // 0x44
	[JsonProperty("isFinished")]
	public bool IsFinished; // 0x45
	[JsonProperty("isJoinWindowEnded")]
	public bool IsJoinWindowEnded; // 0x46
	[JsonProperty("preJoinScore")]
	public long PreJoinScore; // 0x48
	[JsonProperty("avgProgress")]
	public long AvgProgress; // 0x50
	[JsonProperty("elo")]
	public int Elo; // 0x58
	[JsonProperty("previousElo")]
	public int PreviousElo; // 0x5C

	// Methods

	// RVA: 0x1B94A7C Offset: 0x1B94A7C VA: 0x1B94A7C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts