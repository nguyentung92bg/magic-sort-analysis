public class DailyRewardConfigModel : IRemoteConfigValidatable // TypeDefIndex: 4466
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <EventType>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x18
	[CompilerGenerated]
	private DailyRewardProbabilityModel <ProbabilityModel>k__BackingField; // 0x20

	// Properties
	public bool IsEnabled { get; set; }
	public int EventType { get; set; }
	public int FirstLevelToShow { get; set; }
	public DailyRewardProbabilityModel ProbabilityModel { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x38CFD58 Offset: 0x38CFD58 VA: 0x38CFD58
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x38CFD60 Offset: 0x38CFD60 VA: 0x38CFD60
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38CFD6C Offset: 0x38CFD6C VA: 0x38CFD6C
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x38CFD74 Offset: 0x38CFD74 VA: 0x38CFD74
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x38CFD7C Offset: 0x38CFD7C VA: 0x38CFD7C
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x38CFD84 Offset: 0x38CFD84 VA: 0x38CFD84
	public void set_FirstLevelToShow(int value) { }

	[CompilerGenerated]
	// RVA: 0x38CFD8C Offset: 0x38CFD8C VA: 0x38CFD8C
	public DailyRewardProbabilityModel get_ProbabilityModel() { }

	[CompilerGenerated]
	// RVA: 0x38CFD94 Offset: 0x38CFD94 VA: 0x38CFD94
	public void set_ProbabilityModel(DailyRewardProbabilityModel value) { }

	// RVA: 0x38CFD9C Offset: 0x38CFD9C VA: 0x38CFD9C Slot: 4
	public bool IsValid() { }

	// RVA: 0x38CFDAC Offset: 0x38CFDAC VA: 0x38CFDAC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DailyReward.Scripts
[Serializable]