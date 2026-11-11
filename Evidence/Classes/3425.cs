public class GetCompensationResponse // TypeDefIndex: 3425
{
	// Fields
	[CompilerGenerated]
	private string <CompensationId>k__BackingField; // 0x10
	[CompilerGenerated]
	private List<RewardModel> <RewardModels>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <IsSuperChargerCompensation>k__BackingField; // 0x21

	// Properties
	[JsonProperty("compensation_id")]
	public string CompensationId { get; set; }
	[JsonProperty("rewards")]
	public List<RewardModel> RewardModels { get; set; }
	[JsonProperty("is_claimed")]
	public bool IsClaimed { get; set; }
	[JsonProperty("is_super_charger_compensation")]
	public bool IsSuperChargerCompensation { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x20A88F4 Offset: 0x20A88F4 VA: 0x20A88F4
	public string get_CompensationId() { }

	[CompilerGenerated]
	// RVA: 0x20A88FC Offset: 0x20A88FC VA: 0x20A88FC
	public void set_CompensationId(string value) { }

	[CompilerGenerated]
	// RVA: 0x20A8904 Offset: 0x20A8904 VA: 0x20A8904
	public List<RewardModel> get_RewardModels() { }

	[CompilerGenerated]
	// RVA: 0x20A890C Offset: 0x20A890C VA: 0x20A890C
	public void set_RewardModels(List<RewardModel> value) { }

	[CompilerGenerated]
	// RVA: 0x20A8914 Offset: 0x20A8914 VA: 0x20A8914
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x20A891C Offset: 0x20A891C VA: 0x20A891C
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x20A8928 Offset: 0x20A8928 VA: 0x20A8928
	public bool get_IsSuperChargerCompensation() { }

	[CompilerGenerated]
	// RVA: 0x20A8930 Offset: 0x20A8930 VA: 0x20A8930
	public void set_IsSuperChargerCompensation(bool value) { }

	// RVA: 0x20A893C Offset: 0x20A893C VA: 0x20A893C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.Compensation.Scripts