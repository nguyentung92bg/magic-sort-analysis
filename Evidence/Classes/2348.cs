public class TeamArenaEventStatusData // TypeDefIndex: 2348
{
	// Fields
	[JsonProperty("tournamentID")]
	public string TournamentId; // 0x10
	[JsonProperty("teamID")]
	public string TeamId; // 0x18
	[JsonProperty("startTime")]
	public long StartTime; // 0x20
	[JsonProperty("finishTime")]
	public long EndTime; // 0x28
	[JsonProperty("isFinished")]
	public bool IsFinished; // 0x30
	[JsonProperty("isJoined")]
	public bool IsJoined; // 0x31
	[JsonProperty("isJoinWindowEnded")]
	public bool IsJoinWindowEnded; // 0x32

	// Methods

	// RVA: 0x2DE4044 Offset: 0x2DE4044 VA: 0x2DE4044
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena