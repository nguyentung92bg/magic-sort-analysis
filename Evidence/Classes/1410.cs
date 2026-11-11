public class GrandRemoteDailyLevelsConfig // TypeDefIndex: 1410
{
	// Fields
	[CompilerGenerated]
	private int <PlayOnDurationInSeconds>k__BackingField; // 0x10
	[CompilerGenerated]
	private DailyLevelConfigModel <TutorialLevel>k__BackingField; // 0x18
	[CompilerGenerated]
	private List<DailyLevelConfigModel> <CurrentMonthDailyLevels>k__BackingField; // 0x20
	[CompilerGenerated]
	private List<DailyLevelConfigModel> <PreviousMonthDailyLevels>k__BackingField; // 0x28
	[CompilerGenerated]
	private string <ApplicationVersion>k__BackingField; // 0x30

	// Properties
	public int PlayOnDurationInSeconds { get; set; }
	[JsonProperty("tutorial_level")]
	public DailyLevelConfigModel TutorialLevel { get; set; }
	public List<DailyLevelConfigModel> CurrentMonthDailyLevels { get; set; }
	public List<DailyLevelConfigModel> PreviousMonthDailyLevels { get; set; }
	public string ApplicationVersion { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1E8D310 Offset: 0x1E8D310 VA: 0x1E8D310
	public int get_PlayOnDurationInSeconds() { }

	[CompilerGenerated]
	// RVA: 0x1E8D318 Offset: 0x1E8D318 VA: 0x1E8D318
	public void set_PlayOnDurationInSeconds(int value) { }

	[CompilerGenerated]
	// RVA: 0x1E8D320 Offset: 0x1E8D320 VA: 0x1E8D320
	public DailyLevelConfigModel get_TutorialLevel() { }

	[CompilerGenerated]
	// RVA: 0x1E8D328 Offset: 0x1E8D328 VA: 0x1E8D328
	public void set_TutorialLevel(DailyLevelConfigModel value) { }

	[CompilerGenerated]
	// RVA: 0x1E8D330 Offset: 0x1E8D330 VA: 0x1E8D330
	public List<DailyLevelConfigModel> get_CurrentMonthDailyLevels() { }

	[CompilerGenerated]
	// RVA: 0x1E8D338 Offset: 0x1E8D338 VA: 0x1E8D338
	public void set_CurrentMonthDailyLevels(List<DailyLevelConfigModel> value) { }

	[CompilerGenerated]
	// RVA: 0x1E8D340 Offset: 0x1E8D340 VA: 0x1E8D340
	public List<DailyLevelConfigModel> get_PreviousMonthDailyLevels() { }

	[CompilerGenerated]
	// RVA: 0x1E8D348 Offset: 0x1E8D348 VA: 0x1E8D348
	public void set_PreviousMonthDailyLevels(List<DailyLevelConfigModel> value) { }

	[CompilerGenerated]
	// RVA: 0x1E8D350 Offset: 0x1E8D350 VA: 0x1E8D350
	public string get_ApplicationVersion() { }

	[CompilerGenerated]
	// RVA: 0x1E8D358 Offset: 0x1E8D358 VA: 0x1E8D358
	public void set_ApplicationVersion(string value) { }

	// RVA: 0x1E8D360 Offset: 0x1E8D360 VA: 0x1E8D360
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService
[Serializable]