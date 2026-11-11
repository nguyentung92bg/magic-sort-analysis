public class MagicPassEventInfoResponse // TypeDefIndex: 3896
{
	// Fields
	[CompilerGenerated]
	private string <EventId>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <EventType>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <StartTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <FinishTime>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <Segment>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <IsFinished>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x39
	[CompilerGenerated]
	private List<MagicPassStepModel> <Steps>k__BackingField; // 0x40

	// Properties
	[JsonProperty("event_id")]
	public string EventId { get; set; }
	[JsonProperty("event_type")]
	public int EventType { get; set; }
	[JsonProperty("event_start_time")]
	public long StartTime { get; set; }
	[JsonProperty("event_end_time")]
	public long FinishTime { get; set; }
	[JsonProperty("segment")]
	public string Segment { get; set; }
	[JsonProperty("is_finished")]
	public bool IsFinished { get; set; }
	[JsonProperty("is_claimed")]
	public bool IsClaimed { get; set; }
	[JsonProperty("steps")]
	public List<MagicPassStepModel> Steps { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D02ADC Offset: 0x3D02ADC VA: 0x3D02ADC
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x3D02AE4 Offset: 0x3D02AE4 VA: 0x3D02AE4
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x3D02AEC Offset: 0x3D02AEC VA: 0x3D02AEC
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x3D02AF4 Offset: 0x3D02AF4 VA: 0x3D02AF4
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x3D02AFC Offset: 0x3D02AFC VA: 0x3D02AFC
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x3D02B04 Offset: 0x3D02B04 VA: 0x3D02B04
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3D02B0C Offset: 0x3D02B0C VA: 0x3D02B0C
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x3D02B14 Offset: 0x3D02B14 VA: 0x3D02B14
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3D02B1C Offset: 0x3D02B1C VA: 0x3D02B1C
	public string get_Segment() { }

	[CompilerGenerated]
	// RVA: 0x3D02B24 Offset: 0x3D02B24 VA: 0x3D02B24
	public void set_Segment(string value) { }

	[CompilerGenerated]
	// RVA: 0x3D02B2C Offset: 0x3D02B2C VA: 0x3D02B2C
	public bool get_IsFinished() { }

	[CompilerGenerated]
	// RVA: 0x3D02B34 Offset: 0x3D02B34 VA: 0x3D02B34
	public void set_IsFinished(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3D02B40 Offset: 0x3D02B40 VA: 0x3D02B40
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x3D02B48 Offset: 0x3D02B48 VA: 0x3D02B48
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3D02B54 Offset: 0x3D02B54 VA: 0x3D02B54
	public List<MagicPassStepModel> get_Steps() { }

	[CompilerGenerated]
	// RVA: 0x3D02B5C Offset: 0x3D02B5C VA: 0x3D02B5C
	public void set_Steps(List<MagicPassStepModel> value) { }

	// RVA: 0x3D02B64 Offset: 0x3D02B64 VA: 0x3D02B64
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts