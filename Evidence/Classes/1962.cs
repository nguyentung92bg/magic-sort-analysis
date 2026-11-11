public class WeeklyGetLeaderboardResponse // TypeDefIndex: 1962
{
	// Fields
	[JsonProperty("tournamentID")]
	public string TournamentId; // 0x10
	[JsonProperty("Players")]
	public List<WeeklyLeaderBoardPlayer> Players; // 0x18
	[JsonProperty("startTime")]
	public long StartTime; // 0x20
	[JsonProperty("finishTime")]
	public long FinishTime; // 0x28
	[JsonProperty("isClaimed")]
	public bool IsClaimed; // 0x30
	[JsonProperty("isFinished")]
	public bool IsFinished; // 0x31

	// Methods

	// RVA: 0x32D6DAC Offset: 0x32D6DAC VA: 0x32D6DAC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts