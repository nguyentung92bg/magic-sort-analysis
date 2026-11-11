public class TeamQuestStep // TypeDefIndex: 2275
{
	// Fields
	[JsonProperty("chestID")]
	public int ChestID; // 0x10
	[JsonProperty("reward")]
	public RewardModel Reward; // 0x18
	[JsonProperty("rewardWithCollection")]
	public RewardModel RewardWithCollection; // 0x20
	[JsonProperty("requiredTeamScore")]
	public int RequiredTeamScore; // 0x28

	// Methods

	// RVA: 0x2DD4A00 Offset: 0x2DD4A00 VA: 0x2DD4A00
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts