public class BoatRushResponse // TypeDefIndex: 4816
{
	// Fields
	[JsonProperty("tournamentID")]
	public string TournamentID; // 0x10
	[JsonProperty("tournamentType")]
	public int TournamentType; // 0x18
	[JsonProperty("startTime")]
	public long StartTime; // 0x20
	[JsonProperty("finishTime")]
	public long FinishTime; // 0x28
	[JsonProperty("hasUsedLimitlessLife")]
	public bool HasUsedLimitlessLife; // 0x30
	[JsonProperty("isClaimed")]
	public bool IsClaimed; // 0x31
	[JsonProperty("isFinished")]
	public bool IsFinished; // 0x32
	[JsonProperty("currentTier")]
	public int CurrentTierIndex; // 0x34
	[JsonProperty("currentStage")]
	public int LocalStageIndex; // 0x38
	[JsonProperty("eventLeaderboard")]
	public BoatRushRaceResponse RaceData; // 0x40
	[JsonProperty("tiersData")]
	public BoatRushTierResponse TiersData; // 0x48

	// Methods

	// RVA: 0x3FCC14C Offset: 0x3FCC14C VA: 0x3FCC14C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts