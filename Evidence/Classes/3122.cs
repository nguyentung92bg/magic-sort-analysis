public class WatchAndWinConfigModel : IRemoteConfigValidatable // TypeDefIndex: 3122
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <EventType>k__BackingField; // 0x18
	[CompilerGenerated]
	private List<int> <RequiredAdCountsToWatch>k__BackingField; // 0x20
	[CompilerGenerated]
	private List<RewardModel> <Rewards>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <IsDynamicStagesEnabled>k__BackingField; // 0x30
	[CompilerGenerated]
	private List<WatchAndWinStep> <DynamicStages>k__BackingField; // 0x38

	// Properties
	public bool IsEnabled { get; set; }
	public int FirstLevelToShow { get; set; }
	public int EventType { get; set; }
	public List<int> RequiredAdCountsToWatch { get; set; }
	public List<RewardModel> Rewards { get; set; }
	public bool IsDynamicStagesEnabled { get; set; }
	public List<WatchAndWinStep> DynamicStages { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x31703CC Offset: 0x31703CC VA: 0x31703CC
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x31703D4 Offset: 0x31703D4 VA: 0x31703D4
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x31703E0 Offset: 0x31703E0 VA: 0x31703E0
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x31703E8 Offset: 0x31703E8 VA: 0x31703E8
	public void set_FirstLevelToShow(int value) { }

	[CompilerGenerated]
	// RVA: 0x31703F0 Offset: 0x31703F0 VA: 0x31703F0
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x31703F8 Offset: 0x31703F8 VA: 0x31703F8
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x3170400 Offset: 0x3170400 VA: 0x3170400
	public List<int> get_RequiredAdCountsToWatch() { }

	[CompilerGenerated]
	// RVA: 0x3170408 Offset: 0x3170408 VA: 0x3170408
	public void set_RequiredAdCountsToWatch(List<int> value) { }

	[CompilerGenerated]
	// RVA: 0x3170410 Offset: 0x3170410 VA: 0x3170410
	public List<RewardModel> get_Rewards() { }

	[CompilerGenerated]
	// RVA: 0x3170418 Offset: 0x3170418 VA: 0x3170418
	public void set_Rewards(List<RewardModel> value) { }

	[CompilerGenerated]
	// RVA: 0x3170420 Offset: 0x3170420 VA: 0x3170420
	public bool get_IsDynamicStagesEnabled() { }

	[CompilerGenerated]
	// RVA: 0x3170428 Offset: 0x3170428 VA: 0x3170428
	public void set_IsDynamicStagesEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3170434 Offset: 0x3170434 VA: 0x3170434
	public List<WatchAndWinStep> get_DynamicStages() { }

	[CompilerGenerated]
	// RVA: 0x317043C Offset: 0x317043C VA: 0x317043C
	public void set_DynamicStages(List<WatchAndWinStep> value) { }

	// RVA: 0x3170444 Offset: 0x3170444 VA: 0x3170444 Slot: 4
	public bool IsValid() { }

	// RVA: 0x31704A8 Offset: 0x31704A8 VA: 0x31704A8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts