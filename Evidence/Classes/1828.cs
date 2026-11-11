public class WindQuestResponseModel // TypeDefIndex: 1828
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
	private bool <IsClaimed>k__BackingField; // 0x30
	[CompilerGenerated]
	private float <ActiveSegmentScore>k__BackingField; // 0x34
	[CompilerGenerated]
	private WindQuestTaskModel <Task>k__BackingField; // 0x38

	// Properties
	[JsonProperty("eventID")]
	public string EventId { get; set; }
	[JsonProperty("eventType")]
	public int EventType { get; set; }
	[JsonProperty("startTime")]
	public long StartTime { get; set; }
	[JsonProperty("finishTime")]
	public long FinishTime { get; set; }
	[JsonProperty("isClaimed")]
	public bool IsClaimed { get; set; }
	[JsonProperty("activeSegmentScore")]
	public float ActiveSegmentScore { get; set; }
	[JsonProperty("task")]
	public WindQuestTaskModel Task { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2D9C710 Offset: 0x2D9C710 VA: 0x2D9C710
	public string get_EventId() { }

	[CompilerGenerated]
	// RVA: 0x2D9C718 Offset: 0x2D9C718 VA: 0x2D9C718
	public void set_EventId(string value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C720 Offset: 0x2D9C720 VA: 0x2D9C720
	public int get_EventType() { }

	[CompilerGenerated]
	// RVA: 0x2D9C728 Offset: 0x2D9C728 VA: 0x2D9C728
	public void set_EventType(int value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C730 Offset: 0x2D9C730 VA: 0x2D9C730
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x2D9C738 Offset: 0x2D9C738 VA: 0x2D9C738
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C740 Offset: 0x2D9C740 VA: 0x2D9C740
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x2D9C748 Offset: 0x2D9C748 VA: 0x2D9C748
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C750 Offset: 0x2D9C750 VA: 0x2D9C750
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x2D9C758 Offset: 0x2D9C758 VA: 0x2D9C758
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C764 Offset: 0x2D9C764 VA: 0x2D9C764
	public float get_ActiveSegmentScore() { }

	[CompilerGenerated]
	// RVA: 0x2D9C76C Offset: 0x2D9C76C VA: 0x2D9C76C
	public void set_ActiveSegmentScore(float value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C774 Offset: 0x2D9C774 VA: 0x2D9C774
	public WindQuestTaskModel get_Task() { }

	[CompilerGenerated]
	// RVA: 0x2D9C77C Offset: 0x2D9C77C VA: 0x2D9C77C
	public void set_Task(WindQuestTaskModel value) { }

	// RVA: 0x2D9C784 Offset: 0x2D9C784 VA: 0x2D9C784
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts