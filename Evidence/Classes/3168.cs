public class TreasureDrillConfigModel : IRemoteConfigValidatable // TypeDefIndex: 3168
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <EventType>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <ShouldShowEgo>k__BackingField; // 0x1C
	[CompilerGenerated]
	private bool <ShouldLimitEgoPlayOnToFirstStuck>k__BackingField; // 0x1D
	[CompilerGenerated]
	private Dictionary<string, IAPConfigModel> <SegmentedIAPModel>k__BackingField; // 0x20

	// Properties
	public bool IsEnabled { get; set; }
	public int EventType { get; set; }
	public int FirstLevelToShow { get; set; }
	public bool ShouldShowEgo { get; set; }
	public bool ShouldLimitEgoPlayOnToFirstStuck { get; set; }
	public Dictionary<string, IAPConfigModel> SegmentedIAPModel { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x33009DC Offset: 0x33009DC VA: 0x33009DC
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x33009E4 Offset: 0x33009E4 VA: 0x33009E4
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x33009F0 Offset: 0x33009F0 VA: 0x33009F0
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x33009F8 Offset: 0x33009F8 VA: 0x33009F8
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x3300A00 Offset: 0x3300A00 VA: 0x3300A00
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x3300A08 Offset: 0x3300A08 VA: 0x3300A08
	public void set_FirstLevelToShow(int value) { }

	[CompilerGenerated]
	// RVA: 0x3300A10 Offset: 0x3300A10 VA: 0x3300A10
	public bool get_ShouldShowEgo() { }

	[CompilerGenerated]
	// RVA: 0x3300A18 Offset: 0x3300A18 VA: 0x3300A18
	public void set_ShouldShowEgo(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3300A24 Offset: 0x3300A24 VA: 0x3300A24
	public bool get_ShouldLimitEgoPlayOnToFirstStuck() { }

	[CompilerGenerated]
	// RVA: 0x3300A2C Offset: 0x3300A2C VA: 0x3300A2C
	public void set_ShouldLimitEgoPlayOnToFirstStuck(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3300A38 Offset: 0x3300A38 VA: 0x3300A38
	public Dictionary<string, IAPConfigModel> get_SegmentedIAPModel() { }

	[CompilerGenerated]
	// RVA: 0x3300A40 Offset: 0x3300A40 VA: 0x3300A40
	public void set_SegmentedIAPModel(Dictionary<string, IAPConfigModel> value) { }

	// RVA: 0x3300A48 Offset: 0x3300A48 VA: 0x3300A48 Slot: 4
	public bool IsValid() { }

	// RVA: 0x3300BD0 Offset: 0x3300BD0 VA: 0x3300BD0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts
[Serializable]