public class DailyRewardCacheModel // TypeDefIndex: 4471
{
	// Fields
	[CompilerGenerated]
	private string <EventId>k__BackingField; // 0x10
	[CompilerGenerated]
	private string <Segment>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <StartTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <FinishTime>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x30
	[CompilerGenerated]
	private List<RewardModel> <DailyRewardPool>k__BackingField; // 0x38
	[CompilerGenerated]
	private List<DailyRewardSelectedRewardModel> <SelectedRewards>k__BackingField; // 0x40

	// Properties
	public string EventId { get; set; }
	public string Segment { get; set; }
	public long StartTime { get; set; }
	public long FinishTime { get; set; }
	public bool IsClaimed { get; set; }
	public List<RewardModel> DailyRewardPool { get; set; }
	public List<DailyRewardSelectedRewardModel> SelectedRewards { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x38CFED8 Offset: 0x38CFED8 VA: 0x38CFED8
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x38CFEE0 Offset: 0x38CFEE0 VA: 0x38CFEE0
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x38CFEE8 Offset: 0x38CFEE8 VA: 0x38CFEE8
	public string get_Segment() { }

	[CompilerGenerated]
	// RVA: 0x38CFEF0 Offset: 0x38CFEF0 VA: 0x38CFEF0
	public void set_Segment(string value) { }

	[CompilerGenerated]
	// RVA: 0x38CFEF8 Offset: 0x38CFEF8 VA: 0x38CFEF8
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x38CFF00 Offset: 0x38CFF00 VA: 0x38CFF00
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x38CFF08 Offset: 0x38CFF08 VA: 0x38CFF08
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x38CFF10 Offset: 0x38CFF10 VA: 0x38CFF10
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x38CFF18 Offset: 0x38CFF18 VA: 0x38CFF18
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x38CFF20 Offset: 0x38CFF20 VA: 0x38CFF20
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38CFF2C Offset: 0x38CFF2C VA: 0x38CFF2C
	public List<RewardModel> get_DailyRewardPool() { }

	[CompilerGenerated]
	// RVA: 0x38CFF34 Offset: 0x38CFF34 VA: 0x38CFF34
	public void set_DailyRewardPool(List<RewardModel> value) { }

	[CompilerGenerated]
	// RVA: 0x38CFF3C Offset: 0x38CFF3C VA: 0x38CFF3C
	public List<DailyRewardSelectedRewardModel> get_SelectedRewards() { }

	[CompilerGenerated]
	// RVA: 0x38CFF44 Offset: 0x38CFF44 VA: 0x38CFF44
	public void set_SelectedRewards(List<DailyRewardSelectedRewardModel> value) { }

	// RVA: 0x38CFF4C Offset: 0x38CFF4C VA: 0x38CFF4C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DailyReward.Scripts
[Serializable]