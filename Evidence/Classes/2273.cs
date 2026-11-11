public class TeamQuestStatusModel // TypeDefIndex: 2273
{
	// Fields
	[JsonProperty("tournamentID")]
	public string TournamentID; // 0x10
	[JsonProperty("teamID")]
	public string TeamID; // 0x18
	[JsonProperty("startTime")]
	public long StartTime; // 0x20
	[JsonProperty("finishTime")]
	public long FinishTime; // 0x28
	[JsonProperty("isFinished")]
	public bool IsFinished; // 0x30
	[JsonProperty("isJoined")]
	public bool IsJoined; // 0x31
	[JsonProperty("isJoinWindowEnded")]
	public bool IsJoinWindowEnded; // 0x32

	// Methods

	// RVA: 0x2DD49F0 Offset: 0x2DD49F0 VA: 0x2DD49F0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts