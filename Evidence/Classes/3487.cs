public class MiniGameEventInfoResponse // TypeDefIndex: 3487
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
	private MiniGameOfferResponseModel <Offer>k__BackingField; // 0x38

	// Properties
	[JsonProperty("eventID")]
	public string EventId { get; set; }
	[JsonProperty("eventType")]
	public int EventType { get; set; }
	[JsonProperty("startTime")]
	public long StartTime { get; set; }
	[JsonProperty("finishTime")]
	public long FinishTime { get; set; }
	[JsonProperty("segment")]
	public string Segment { get; set; }
	[JsonProperty("offer")]
	public MiniGameOfferResponseModel Offer { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x20B4798 Offset: 0x20B4798 VA: 0x20B4798
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x20B47A0 Offset: 0x20B47A0 VA: 0x20B47A0
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x20B47A8 Offset: 0x20B47A8 VA: 0x20B47A8
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x20B47B0 Offset: 0x20B47B0 VA: 0x20B47B0
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x20B47B8 Offset: 0x20B47B8 VA: 0x20B47B8
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x20B47C0 Offset: 0x20B47C0 VA: 0x20B47C0
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x20B47C8 Offset: 0x20B47C8 VA: 0x20B47C8
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x20B47D0 Offset: 0x20B47D0 VA: 0x20B47D0
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x20B47D8 Offset: 0x20B47D8 VA: 0x20B47D8
	public string get_Segment() { }

	[CompilerGenerated]
	// RVA: 0x20B47E0 Offset: 0x20B47E0 VA: 0x20B47E0
	public void set_Segment(string value) { }

	[CompilerGenerated]
	// RVA: 0x20B47E8 Offset: 0x20B47E8 VA: 0x20B47E8
	public MiniGameOfferResponseModel get_Offer() { }

	[CompilerGenerated]
	// RVA: 0x20B47F0 Offset: 0x20B47F0 VA: 0x20B47F0
	public void set_Offer(MiniGameOfferResponseModel value) { }

	// RVA: 0x20B47F8 Offset: 0x20B47F8 VA: 0x20B47F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts