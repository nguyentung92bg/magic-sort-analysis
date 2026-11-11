public class MiniGameOfferConfigModel : IRemoteConfigValidatable // TypeDefIndex: 3482
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <ShouldShowOfferOnLastHit>k__BackingField; // 0x11
	[CompilerGenerated]
	private bool <IsOfferInitiallyVisible>k__BackingField; // 0x12
	[CompilerGenerated]
	private MiniGameIAPConfigModel <DefaultIAPConfigModel>k__BackingField; // 0x18
	[CompilerGenerated]
	private Dictionary<string, MiniGameIAPConfigModel> <SegmentedIAPConfigModels>k__BackingField; // 0x20

	// Properties
	public bool IsEnabled { get; set; }
	public bool ShouldShowOfferOnLastHit { get; set; }
	public bool IsOfferInitiallyVisible { get; set; }
	public MiniGameIAPConfigModel DefaultIAPConfigModel { get; set; }
	public Dictionary<string, MiniGameIAPConfigModel> SegmentedIAPConfigModels { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x20B326C Offset: 0x20B326C VA: 0x20B326C
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x20B3274 Offset: 0x20B3274 VA: 0x20B3274
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x20B3280 Offset: 0x20B3280 VA: 0x20B3280
	public bool get_ShouldShowOfferOnLastHit() { }

	[CompilerGenerated]
	// RVA: 0x20B3288 Offset: 0x20B3288 VA: 0x20B3288
	public void set_ShouldShowOfferOnLastHit(bool value) { }

	[CompilerGenerated]
	// RVA: 0x20B3294 Offset: 0x20B3294 VA: 0x20B3294
	public bool get_IsOfferInitiallyVisible() { }

	[CompilerGenerated]
	// RVA: 0x20B329C Offset: 0x20B329C VA: 0x20B329C
	public void set_IsOfferInitiallyVisible(bool value) { }

	[CompilerGenerated]
	// RVA: 0x20B32A8 Offset: 0x20B32A8 VA: 0x20B32A8
	public MiniGameIAPConfigModel get_DefaultIAPConfigModel() { }

	[CompilerGenerated]
	// RVA: 0x20B32B0 Offset: 0x20B32B0 VA: 0x20B32B0
	public void set_DefaultIAPConfigModel(MiniGameIAPConfigModel value) { }

	[CompilerGenerated]
	// RVA: 0x20B32B8 Offset: 0x20B32B8 VA: 0x20B32B8
	public Dictionary<string, MiniGameIAPConfigModel> get_SegmentedIAPConfigModels() { }

	[CompilerGenerated]
	// RVA: 0x20B32C0 Offset: 0x20B32C0 VA: 0x20B32C0
	public void set_SegmentedIAPConfigModels(Dictionary<string, MiniGameIAPConfigModel> value) { }

	// RVA: 0x20B32C8 Offset: 0x20B32C8 VA: 0x20B32C8 Slot: 4
	public bool IsValid() { }

	// RVA: 0x20B3434 Offset: 0x20B3434 VA: 0x20B3434
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts
[Serializable]