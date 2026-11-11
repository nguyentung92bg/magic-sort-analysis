public class DailyConfigModel : IRemoteConfigValidatable // TypeDefIndex: 4904
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnable>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x14
	[CompilerGenerated]
	private RewardModel <DailyLevelRewardModel>k__BackingField; // 0x18
	[CompilerGenerated]
	private List<RewardModel> <ProgressBarRewards>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <IsNotificationEnabled>k__BackingField; // 0x28

	// Properties
	public bool IsEnable { get; set; }
	public int FirstLevelToShow { get; set; }
	public RewardModel DailyLevelRewardModel { get; set; }
	public List<RewardModel> ProgressBarRewards { get; set; }
	public bool IsNotificationEnabled { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x4102EB4 Offset: 0x4102EB4 VA: 0x4102EB4
	public bool get_IsEnable() { }

	[CompilerGenerated]
	// RVA: 0x4102EBC Offset: 0x4102EBC VA: 0x4102EBC
	public void set_IsEnable(bool value) { }

	[CompilerGenerated]
	// RVA: 0x4102EC8 Offset: 0x4102EC8 VA: 0x4102EC8
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x4102ED0 Offset: 0x4102ED0 VA: 0x4102ED0
	public void set_FirstLevelToShow(int value) { }

	[CompilerGenerated]
	// RVA: 0x4102ED8 Offset: 0x4102ED8 VA: 0x4102ED8
	public RewardModel get_DailyLevelRewardModel() { }

	[CompilerGenerated]
	// RVA: 0x4102EE0 Offset: 0x4102EE0 VA: 0x4102EE0
	public void set_DailyLevelRewardModel(RewardModel value) { }

	[CompilerGenerated]
	// RVA: 0x4102EE8 Offset: 0x4102EE8 VA: 0x4102EE8
	public List<RewardModel> get_ProgressBarRewards() { }

	[CompilerGenerated]
	// RVA: 0x4102EF0 Offset: 0x4102EF0 VA: 0x4102EF0
	public void set_ProgressBarRewards(List<RewardModel> value) { }

	[CompilerGenerated]
	// RVA: 0x4102EF8 Offset: 0x4102EF8 VA: 0x4102EF8
	public bool get_IsNotificationEnabled() { }

	[CompilerGenerated]
	// RVA: 0x4102F00 Offset: 0x4102F00 VA: 0x4102F00
	public void set_IsNotificationEnabled(bool value) { }

	// RVA: 0x4102F0C Offset: 0x4102F0C VA: 0x4102F0C Slot: 4
	public bool IsValid() { }

	// RVA: 0x4102F70 Offset: 0x4102F70 VA: 0x4102F70
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts
[Serializable]