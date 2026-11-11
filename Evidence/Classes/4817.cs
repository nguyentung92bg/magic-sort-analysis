public class BoatRushRaceResponse // TypeDefIndex: 4817
{
	// Fields
	[JsonProperty("leaderboardID")]
	public string LeaderboardID; // 0x10
	[JsonProperty("winnerCount")]
	public int WinnerCount; // 0x18
	[JsonProperty("maxCompetitorCount")]
	public int MaxCompetitorCount; // 0x1C
	[JsonProperty("userScore")]
	public int UserScore; // 0x20
	[CompilerGenerated]
	private int <MaxReachableScore>k__BackingField; // 0x24
	[JsonProperty("isClaimed")]
	public bool IsClaimed; // 0x28
	[JsonProperty("isFinished")]
	public bool IsFinished; // 0x29
	[JsonProperty("players")]
	public List<BoatRushLeaderboardPlayer> Players; // 0x30

	// Properties
	[JsonProperty("maxReachableStageScore")]
	public int MaxReachableScore { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3FCC154 Offset: 0x3FCC154 VA: 0x3FCC154
	public int get_MaxReachableScore() { }

	[CompilerGenerated]
	// RVA: 0x3FCC15C Offset: 0x3FCC15C VA: 0x3FCC15C
	public void set_MaxReachableScore(int value) { }

	// RVA: 0x3FCC164 Offset: 0x3FCC164 VA: 0x3FCC164
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts