public class MagicStreakTournamentResponse // TypeDefIndex: 3721
{
	// Fields
	[JsonProperty("TournamentId")]
	public string TournamentId; // 0x10
	[JsonProperty("TournamentType")]
	public int TournamentType; // 0x18
	[JsonProperty("Players")]
	public List<MagicStreakTournamentLeaderBoardPlayer> Players; // 0x20
	[JsonProperty("startTime")]
	public long StartTime; // 0x28
	[JsonProperty("finishTime")]
	public long FinishTime; // 0x30
	[JsonProperty("isClaimed")]
	public bool IsClaimed; // 0x38
	[JsonProperty("isFinished")]
	public bool IsFinished; // 0x39
	[JsonProperty("userScore")]
	public int Score; // 0x3C

	// Methods

	// RVA: 0x411C2DC Offset: 0x411C2DC VA: 0x411C2DC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts