public class MagicLabEventInfoResponse // TypeDefIndex: 3990
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
	private List<MagicLabRemoteStageModel> <Stages>k__BackingField; // 0x38

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
	[JsonProperty("stages")]
	public List<MagicLabRemoteStageModel> Stages { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3752280 Offset: 0x3752280 VA: 0x3752280
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x3752288 Offset: 0x3752288 VA: 0x3752288
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x3752290 Offset: 0x3752290 VA: 0x3752290
	public int get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x3752298 Offset: 0x3752298 VA: 0x3752298
	public void set_TournamentType(int value) { }

	[CompilerGenerated]
	// RVA: 0x37522A0 Offset: 0x37522A0 VA: 0x37522A0
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x37522A8 Offset: 0x37522A8 VA: 0x37522A8
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x37522B0 Offset: 0x37522B0 VA: 0x37522B0
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x37522B8 Offset: 0x37522B8 VA: 0x37522B8
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x37522C0 Offset: 0x37522C0 VA: 0x37522C0
	public string get_Segment() { }

	[CompilerGenerated]
	// RVA: 0x37522C8 Offset: 0x37522C8 VA: 0x37522C8
	public void set_Segment(string value) { }

	[CompilerGenerated]
	// RVA: 0x37522D0 Offset: 0x37522D0 VA: 0x37522D0
	public List<MagicLabRemoteStageModel> get_Stages() { }

	[CompilerGenerated]
	// RVA: 0x37522D8 Offset: 0x37522D8 VA: 0x37522D8
	public void set_Stages(List<MagicLabRemoteStageModel> value) { }

	// RVA: 0x37522E0 Offset: 0x37522E0 VA: 0x37522E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts