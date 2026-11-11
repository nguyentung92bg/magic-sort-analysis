public class DailyRewardConfigModelV2 : IRemoteConfigValidatable // TypeDefIndex: 4464
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <EventType>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x18
	public List<DailyRewardProbabilityRewardModelV2> DayOneProbabilities; // 0x20
	public List<DailyRewardProbabilityRewardModelV2> HardLevelOrNoLifeProbabilities; // 0x28
	public List<DailyRewardProbabilityRewardModelV2> OthersProbabilities; // 0x30
	public List<DailyRewardProbabilityRewardModelV2> DayOneProbabilitiesWithCollection; // 0x38
	public List<DailyRewardProbabilityRewardModelV2> HardLevelOrNoLifeProbabilitiesWithCollection; // 0x40
	public List<DailyRewardProbabilityRewardModelV2> OthersProbabilitiesWithCollection; // 0x48

	// Properties
	public bool IsEnabled { get; set; }
	public int EventType { get; set; }
	public int FirstLevelToShow { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x38CFC48 Offset: 0x38CFC48 VA: 0x38CFC48
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x38CFC50 Offset: 0x38CFC50 VA: 0x38CFC50
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38CFC5C Offset: 0x38CFC5C VA: 0x38CFC5C
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x38CFC64 Offset: 0x38CFC64 VA: 0x38CFC64
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x38CFC6C Offset: 0x38CFC6C VA: 0x38CFC6C
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x38CFC74 Offset: 0x38CFC74 VA: 0x38CFC74
	public void set_FirstLevelToShow(int value) { }

	// RVA: 0x38CFC7C Offset: 0x38CFC7C VA: 0x38CFC7C Slot: 4
	public bool IsValid() { }

	// RVA: 0x38CFD28 Offset: 0x38CFD28 VA: 0x38CFD28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DailyReward.Scripts
[Serializable]