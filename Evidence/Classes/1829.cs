public class WindQuestTaskModel // TypeDefIndex: 1829
{
	// Fields
	[CompilerGenerated]
	private WindQuestTaskType <TaskTaskType>k__BackingField; // 0x10
	[CompilerGenerated]
	private long <DurationInSeconds>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <UnlockLevelRequirement>k__BackingField; // 0x20
	[CompilerGenerated]
	private List<WindQuestGoalModel> <Goals>k__BackingField; // 0x28

	// Properties
	[JsonProperty("TaskType")]
	public WindQuestTaskType TaskTaskType { get; set; }
	[JsonProperty("DurationInSeconds")]
	public long DurationInSeconds { get; set; }
	[JsonProperty("UnlockLevelRequirement")]
	public int UnlockLevelRequirement { get; set; }
	[JsonProperty("Goals")]
	public List<WindQuestGoalModel> Goals { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2D9C78C Offset: 0x2D9C78C VA: 0x2D9C78C
	public WindQuestTaskType get_TaskTaskType() { }

	[CompilerGenerated]
	// RVA: 0x2D9C794 Offset: 0x2D9C794 VA: 0x2D9C794
	public void set_TaskTaskType(WindQuestTaskType value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C79C Offset: 0x2D9C79C VA: 0x2D9C79C
	public long get_DurationInSeconds() { }

	[CompilerGenerated]
	// RVA: 0x2D9C7A4 Offset: 0x2D9C7A4 VA: 0x2D9C7A4
	public void set_DurationInSeconds(long value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C7AC Offset: 0x2D9C7AC VA: 0x2D9C7AC
	public int get_UnlockLevelRequirement() { }

	[CompilerGenerated]
	// RVA: 0x2D9C7B4 Offset: 0x2D9C7B4 VA: 0x2D9C7B4
	public void set_UnlockLevelRequirement(int value) { }

	[CompilerGenerated]
	// RVA: 0x2D9C7BC Offset: 0x2D9C7BC VA: 0x2D9C7BC
	public List<WindQuestGoalModel> get_Goals() { }

	[CompilerGenerated]
	// RVA: 0x2D9C7C4 Offset: 0x2D9C7C4 VA: 0x2D9C7C4
	public void set_Goals(List<WindQuestGoalModel> value) { }

	// RVA: 0x2D9C7CC Offset: 0x2D9C7CC VA: 0x2D9C7CC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts