public class GetWelcomeBackResponse // TypeDefIndex: 3041
{
	// Fields
	[CompilerGenerated]
	private string <WelcomeBackId>k__BackingField; // 0x10
	[CompilerGenerated]
	private List<RewardModel> <RewardModels>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x20

	// Properties
	[JsonProperty("welcome_back_id")]
	public string WelcomeBackId { get; set; }
	[JsonProperty("rewards")]
	public List<RewardModel> RewardModels { get; set; }
	[JsonProperty("is_claimed")]
	public bool IsClaimed { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x315DF58 Offset: 0x315DF58 VA: 0x315DF58
	public string get_WelcomeBackId() { }

	[CompilerGenerated]
	// RVA: 0x315DF60 Offset: 0x315DF60 VA: 0x315DF60
	public void set_WelcomeBackId(string value) { }

	[CompilerGenerated]
	// RVA: 0x315DF68 Offset: 0x315DF68 VA: 0x315DF68
	public List<RewardModel> get_RewardModels() { }

	[CompilerGenerated]
	// RVA: 0x315DF70 Offset: 0x315DF70 VA: 0x315DF70
	public void set_RewardModels(List<RewardModel> value) { }

	[CompilerGenerated]
	// RVA: 0x315DF78 Offset: 0x315DF78 VA: 0x315DF78
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x315DF80 Offset: 0x315DF80 VA: 0x315DF80
	public void set_IsClaimed(bool value) { }

	// RVA: 0x315DF8C Offset: 0x315DF8C VA: 0x315DF8C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WelcomeBack.Scripts