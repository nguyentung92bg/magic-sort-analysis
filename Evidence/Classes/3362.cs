public class EndlessPortalResponse // TypeDefIndex: 3362
{
	// Fields
	[JsonProperty("event_id")]
	public string EventId; // 0x10
	[JsonProperty("event_start_time")]
	public long StartTime; // 0x18
	[JsonProperty("event_end_time")]
	public long FinishTime; // 0x20
	[JsonProperty("is_finished")]
	public bool IsFinished; // 0x28
	[JsonProperty("segment")]
	public string Segment; // 0x30
	[CompilerGenerated]
	private List<EndlessPortalRewardStepModel> <Steps>k__BackingField; // 0x38

	// Properties
	[JsonProperty("steps")]
	public List<EndlessPortalRewardStepModel> Steps { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x34681A0 Offset: 0x34681A0 VA: 0x34681A0
	public List<EndlessPortalRewardStepModel> get_Steps() { }

	[CompilerGenerated]
	// RVA: 0x34681A8 Offset: 0x34681A8 VA: 0x34681A8
	public void set_Steps(List<EndlessPortalRewardStepModel> value) { }

	// RVA: 0x34681B0 Offset: 0x34681B0 VA: 0x34681B0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]