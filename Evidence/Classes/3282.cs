public class SpecialOfferConfigModel : IRemoteConfigValidatable // TypeDefIndex: 3282
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnable>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <EventType>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <ShowFrequency>k__BackingField; // 0x1C
	[CompilerGenerated]
	private int <MaxShowCount>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <ShouldShowEgoOffer>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <ShouldGivePlayOnAtEgo>k__BackingField; // 0x25
	[CompilerGenerated]
	private bool <ShouldLimitEgoPlayOnToFirstStuck>k__BackingField; // 0x26
	[CompilerGenerated]
	private List<IAPConfigModel> <IAPConfigModels>k__BackingField; // 0x28
	[CompilerGenerated]
	private List<RewardModel> <FallBackRewardModels>k__BackingField; // 0x30

	// Properties
	public bool IsEnable { get; set; }
	public int FirstLevelToShow { get; set; }
	public int EventType { get; set; }
	public int ShowFrequency { get; set; }
	public int MaxShowCount { get; set; }
	public bool ShouldShowEgoOffer { get; set; }
	public bool ShouldGivePlayOnAtEgo { get; set; }
	public bool ShouldLimitEgoPlayOnToFirstStuck { get; set; }
	public List<IAPConfigModel> IAPConfigModels { get; set; }
	public List<RewardModel> FallBackRewardModels { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3593B50 Offset: 0x3593B50 VA: 0x3593B50
	public bool get_IsEnable() { }

	[CompilerGenerated]
	// RVA: 0x3593B58 Offset: 0x3593B58 VA: 0x3593B58
	public void set_IsEnable(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3593B64 Offset: 0x3593B64 VA: 0x3593B64
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x3593B6C Offset: 0x3593B6C VA: 0x3593B6C
	public void set_FirstLevelToShow(int value) { }

	[CompilerGenerated]
	// RVA: 0x3593B74 Offset: 0x3593B74 VA: 0x3593B74
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x3593B7C Offset: 0x3593B7C VA: 0x3593B7C
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x3593B84 Offset: 0x3593B84 VA: 0x3593B84
	public int get_ShowFrequency() { }

	[CompilerGenerated]
	// RVA: 0x3593B8C Offset: 0x3593B8C VA: 0x3593B8C
	public void set_ShowFrequency(int value) { }

	[CompilerGenerated]
	// RVA: 0x3593B94 Offset: 0x3593B94 VA: 0x3593B94
	public int get_MaxShowCount() { }

	[CompilerGenerated]
	// RVA: 0x3593B9C Offset: 0x3593B9C VA: 0x3593B9C
	public void set_MaxShowCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x3593BA4 Offset: 0x3593BA4 VA: 0x3593BA4
	public bool get_ShouldShowEgoOffer() { }

	[CompilerGenerated]
	// RVA: 0x3593BAC Offset: 0x3593BAC VA: 0x3593BAC
	public void set_ShouldShowEgoOffer(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3593BB8 Offset: 0x3593BB8 VA: 0x3593BB8
	public bool get_ShouldGivePlayOnAtEgo() { }

	[CompilerGenerated]
	// RVA: 0x3593BC0 Offset: 0x3593BC0 VA: 0x3593BC0
	public void set_ShouldGivePlayOnAtEgo(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3593BCC Offset: 0x3593BCC VA: 0x3593BCC
	public bool get_ShouldLimitEgoPlayOnToFirstStuck() { }

	[CompilerGenerated]
	// RVA: 0x3593BD4 Offset: 0x3593BD4 VA: 0x3593BD4
	public void set_ShouldLimitEgoPlayOnToFirstStuck(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3593BE0 Offset: 0x3593BE0 VA: 0x3593BE0
	public List<IAPConfigModel> get_IAPConfigModels() { }

	[CompilerGenerated]
	// RVA: 0x3593BE8 Offset: 0x3593BE8 VA: 0x3593BE8
	public void set_IAPConfigModels(List<IAPConfigModel> value) { }

	[CompilerGenerated]
	// RVA: 0x3593BF0 Offset: 0x3593BF0 VA: 0x3593BF0
	public List<RewardModel> get_FallBackRewardModels() { }

	[CompilerGenerated]
	// RVA: 0x3593BF8 Offset: 0x3593BF8 VA: 0x3593BF8
	public void set_FallBackRewardModels(List<RewardModel> value) { }

	// RVA: 0x3593C00 Offset: 0x3593C00 VA: 0x3593C00 Slot: 4
	public bool IsValid() { }

	// RVA: 0x3593C80 Offset: 0x3593C80 VA: 0x3593C80
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts
[Serializable]