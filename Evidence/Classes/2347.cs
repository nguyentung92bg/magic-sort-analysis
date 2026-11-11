public class TeamArenaEventResponse // TypeDefIndex: 2347
{
	// Fields
	[JsonProperty("eventStatusResponse")]
	public TeamArenaEventStatusData Status; // 0x10
	[JsonProperty("eventLeaderboardResponse")]
	public TeamArenaTournamentData TournamentData; // 0x18
	[JsonProperty("custom_error")]
	public int ErrorCode; // 0x20
	[JsonProperty("message")]
	public string ErrorMessage; // 0x28

	// Methods

	// RVA: 0x2DE403C Offset: 0x2DE403C VA: 0x2DE403C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena