public class TeamQuestResponseModel // TypeDefIndex: 2271
{
	// Fields
	[JsonProperty("eventStatusResponse")]
	public TeamQuestStatusModel TeamQuestStatus; // 0x10
	[JsonProperty("eventLeaderboardResponse")]
	public TeamQuestLeaderboardModel TeamQuestLeaderboard; // 0x18
	[JsonProperty("custom_error")]
	public int CustomError; // 0x20
	[JsonProperty("message")]
	public string Message; // 0x28

	// Methods

	// RVA: 0x2DD49E0 Offset: 0x2DD49E0 VA: 0x2DD49E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts