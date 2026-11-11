public class BoatRushTierData // TypeDefIndex: 4820
{
	// Fields
	[JsonProperty("tierIndex")]
	public int TierIndex; // 0x10
	[JsonProperty("stages")]
	public List<BoatRushStageResponse> Stages; // 0x18
	[JsonProperty("reward")]
	public BoatRushTierReward TierReward; // 0x20

	// Methods

	// RVA: 0x3FCC204 Offset: 0x3FCC204 VA: 0x3FCC204
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts