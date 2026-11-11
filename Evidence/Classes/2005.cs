public class TowerWinStreakConfigModel : IRemoteConfigValidatable // TypeDefIndex: 2005
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <EventType>k__BackingField; // 0x14
	[CompilerGenerated]
	private bool <ShouldShowInLevelIcon>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x1C
	[CompilerGenerated]
	private List<TowerWinStreakStepConfigModel> <Steps>k__BackingField; // 0x20

	// Properties
	public bool IsEnabled { get; set; }
	public int EventType { get; set; }
	public bool ShouldShowInLevelIcon { get; set; }
	public int FirstLevelToShow { get; set; }
	public List<TowerWinStreakStepConfigModel> Steps { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32E05E4 Offset: 0x32E05E4 VA: 0x32E05E4
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x32E05EC Offset: 0x32E05EC VA: 0x32E05EC
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x32E05F8 Offset: 0x32E05F8 VA: 0x32E05F8
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x32E0600 Offset: 0x32E0600 VA: 0x32E0600
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x32E0608 Offset: 0x32E0608 VA: 0x32E0608
	public bool get_ShouldShowInLevelIcon() { }

	[CompilerGenerated]
	// RVA: 0x32E0610 Offset: 0x32E0610 VA: 0x32E0610
	public void set_ShouldShowInLevelIcon(bool value) { }

	[CompilerGenerated]
	// RVA: 0x32E061C Offset: 0x32E061C VA: 0x32E061C
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x32E0624 Offset: 0x32E0624 VA: 0x32E0624
	public void set_FirstLevelToShow(int value) { }

	[CompilerGenerated]
	// RVA: 0x32E062C Offset: 0x32E062C VA: 0x32E062C
	public List<TowerWinStreakStepConfigModel> get_Steps() { }

	[CompilerGenerated]
	// RVA: 0x32E0634 Offset: 0x32E0634 VA: 0x32E0634
	public void set_Steps(List<TowerWinStreakStepConfigModel> value) { }

	// RVA: 0x32E063C Offset: 0x32E063C VA: 0x32E063C Slot: 4
	public bool IsValid() { }

	// RVA: 0x32E0690 Offset: 0x32E0690 VA: 0x32E0690
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts
[Serializable]