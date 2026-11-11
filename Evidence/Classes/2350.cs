public class TeamArenaTeamData // TypeDefIndex: 2350
{
	// Fields
	[JsonProperty("name")]
	public string Name; // 0x10
	[JsonProperty("teamID")]
	public string Id; // 0x18
	[JsonProperty("badge")]
	public int BadgeId; // 0x20
	[JsonProperty("memberCount")]
	public int MemberCount; // 0x24
	[JsonProperty("activityType")]
	public int ActivityType; // 0x28
	[JsonProperty("score")]
	public int Score; // 0x2C

	// Methods

	// RVA: 0x2DE4054 Offset: 0x2DE4054 VA: 0x2DE4054
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena