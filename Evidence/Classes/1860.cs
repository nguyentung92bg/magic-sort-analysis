public class WheelOfFortuneInfoResponse // TypeDefIndex: 1860
{
	// Fields
	[CompilerGenerated]
	private string <EventId>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <TournamentType>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <StartTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <FinishTime>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <Segment>k__BackingField; // 0x30
	[CompilerGenerated]
	private WheelOfFortuneEventData <EventData>k__BackingField; // 0x38

	// Properties
	[JsonProperty("eventID")]
	public string EventId { get; set; }
	[JsonProperty("eventType")]
	public int TournamentType { get; set; }
	[JsonProperty("startTime")]
	public long StartTime { get; set; }
	[JsonProperty("finishTime")]
	public long FinishTime { get; set; }
	[JsonProperty("segment")]
	public string Segment { get; set; }
	[JsonProperty("segmentConfig")]
	public WheelOfFortuneEventData EventData { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2DA4144 Offset: 0x2DA4144 VA: 0x2DA4144
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x2DA414C Offset: 0x2DA414C VA: 0x2DA414C
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x2DA4154 Offset: 0x2DA4154 VA: 0x2DA4154
	public int get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x2DA415C Offset: 0x2DA415C VA: 0x2DA415C
	public void set_TournamentType(int value) { }

	[CompilerGenerated]
	// RVA: 0x2DA4164 Offset: 0x2DA4164 VA: 0x2DA4164
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x2DA416C Offset: 0x2DA416C VA: 0x2DA416C
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x2DA4174 Offset: 0x2DA4174 VA: 0x2DA4174
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x2DA417C Offset: 0x2DA417C VA: 0x2DA417C
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x2DA4184 Offset: 0x2DA4184 VA: 0x2DA4184
	public string get_Segment() { }

	[CompilerGenerated]
	// RVA: 0x2DA418C Offset: 0x2DA418C VA: 0x2DA418C
	public void set_Segment(string value) { }

	[CompilerGenerated]
	// RVA: 0x2DA4194 Offset: 0x2DA4194 VA: 0x2DA4194
	public WheelOfFortuneEventData get_EventData() { }

	[CompilerGenerated]
	// RVA: 0x2DA419C Offset: 0x2DA419C VA: 0x2DA419C
	public void set_EventData(WheelOfFortuneEventData value) { }

	// RVA: 0x2DA41A4 Offset: 0x2DA41A4 VA: 0x2DA41A4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune