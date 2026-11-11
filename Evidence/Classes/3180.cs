public class TreasureDrillInfoResponse // TypeDefIndex: 3180
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
	private int <WeeklyScore>k__BackingField; // 0x38
	[CompilerGenerated]
	private List<TreasureDrillRemoteStepModel> <Steps>k__BackingField; // 0x40
	[CompilerGenerated]
	private List<TreasureDrillRemoteStepModelV2> <StepsV2>k__BackingField; // 0x48

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
	[JsonProperty("weeklyScoreBinary")]
	public int WeeklyScore { get; set; }
	[JsonProperty("stages")]
	public List<TreasureDrillRemoteStepModel> Steps { get; set; }
	[JsonProperty("stagesV2")]
	public List<TreasureDrillRemoteStepModelV2> StepsV2 { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3302BAC Offset: 0x3302BAC VA: 0x3302BAC
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x3302BB4 Offset: 0x3302BB4 VA: 0x3302BB4
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x3302BBC Offset: 0x3302BBC VA: 0x3302BBC
	public int get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x3302BC4 Offset: 0x3302BC4 VA: 0x3302BC4
	public void set_TournamentType(int value) { }

	[CompilerGenerated]
	// RVA: 0x3302BCC Offset: 0x3302BCC VA: 0x3302BCC
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x3302BD4 Offset: 0x3302BD4 VA: 0x3302BD4
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3302BDC Offset: 0x3302BDC VA: 0x3302BDC
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x3302BE4 Offset: 0x3302BE4 VA: 0x3302BE4
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3302BEC Offset: 0x3302BEC VA: 0x3302BEC
	public string get_Segment() { }

	[CompilerGenerated]
	// RVA: 0x3302BF4 Offset: 0x3302BF4 VA: 0x3302BF4
	public void set_Segment(string value) { }

	[CompilerGenerated]
	// RVA: 0x3302BFC Offset: 0x3302BFC VA: 0x3302BFC
	public int get_WeeklyScore() { }

	[CompilerGenerated]
	// RVA: 0x3302C04 Offset: 0x3302C04 VA: 0x3302C04
	public void set_WeeklyScore(int value) { }

	[CompilerGenerated]
	// RVA: 0x3302C0C Offset: 0x3302C0C VA: 0x3302C0C
	public List<TreasureDrillRemoteStepModel> get_Steps() { }

	[CompilerGenerated]
	// RVA: 0x3302C14 Offset: 0x3302C14 VA: 0x3302C14
	public void set_Steps(List<TreasureDrillRemoteStepModel> value) { }

	[CompilerGenerated]
	// RVA: 0x3302C1C Offset: 0x3302C1C VA: 0x3302C1C
	public List<TreasureDrillRemoteStepModelV2> get_StepsV2() { }

	[CompilerGenerated]
	// RVA: 0x3302C24 Offset: 0x3302C24 VA: 0x3302C24
	public void set_StepsV2(List<TreasureDrillRemoteStepModelV2> value) { }

	// RVA: 0x3302C2C Offset: 0x3302C2C VA: 0x3302C2C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts