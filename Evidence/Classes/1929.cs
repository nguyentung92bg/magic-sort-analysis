public class WheelOfFortuneViewModel // TypeDefIndex: 1929
{
	// Fields
	[CompilerGenerated]
	private string <TournamentId>k__BackingField; // 0x10
	[CompilerGenerated]
	private List<WheelOfFortuneStageModel> <Stages>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <WheelOfFortuneCurrencyAmount>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <CurrentStageIndex>k__BackingField; // 0x24
	[CompilerGenerated]
	private int <CurrentStageProgress>k__BackingField; // 0x28
	[CompilerGenerated]
	private int <CurrentStageMaxProgress>k__BackingField; // 0x2C
	[CompilerGenerated]
	private int <LastSeenStageIndex>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <LastSeenStageProgress>k__BackingField; // 0x34
	[CompilerGenerated]
	private int <LastSeenStageMaxProgress>k__BackingField; // 0x38
	[CompilerGenerated]
	private DateTime <EndDate>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <IsProgressed>k__BackingField; // 0x48
	[CompilerGenerated]
	private bool <IsStageChanged>k__BackingField; // 0x49
	[CompilerGenerated]
	private int <MaxProgress>k__BackingField; // 0x4C
	[CompilerGenerated]
	private int <FirstShownStageIndex>k__BackingField; // 0x50
	[CompilerGenerated]
	private bool <ShouldPlayNextStageAnimationByCollectionReward>k__BackingField; // 0x54
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x55
	[CompilerGenerated]
	private List<WheelOfFortuneStageViewModel> <StageViewModels>k__BackingField; // 0x58
	[CompilerGenerated]
	private List<WheelOfFortuneTaskViewModel> <TaskViewModels>k__BackingField; // 0x60

	// Properties
	public string TournamentId { get; set; }
	public List<WheelOfFortuneStageModel> Stages { get; set; }
	public int WheelOfFortuneCurrencyAmount { get; set; }
	public int CurrentStageIndex { get; set; }
	public int CurrentStageProgress { get; set; }
	public int CurrentStageMaxProgress { get; set; }
	public int LastSeenStageIndex { get; set; }
	public int LastSeenStageProgress { get; set; }
	public int LastSeenStageMaxProgress { get; set; }
	public DateTime EndDate { get; set; }
	public bool IsProgressed { get; set; }
	public bool IsStageChanged { get; set; }
	public int MaxProgress { get; set; }
	public int FirstShownStageIndex { get; set; }
	public bool ShouldPlayNextStageAnimationByCollectionReward { get; set; }
	public bool IsClaimed { get; set; }
	public List<WheelOfFortuneStageViewModel> StageViewModels { get; set; }
	public List<WheelOfFortuneTaskViewModel> TaskViewModels { get; set; }
	public bool IsAllStagesCompleted { get; }
	public bool IsOnLastStage { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x31A7A94 Offset: 0x31A7A94 VA: 0x31A7A94
	public string get_TournamentId() { }

	[CompilerGenerated]
	// RVA: 0x31A7A9C Offset: 0x31A7A9C VA: 0x31A7A9C
	public void set_TournamentId(string value) { }

	[CompilerGenerated]
	// RVA: 0x31A7AA4 Offset: 0x31A7AA4 VA: 0x31A7AA4
	public List<WheelOfFortuneStageModel> get_Stages() { }

	[CompilerGenerated]
	// RVA: 0x31A7AAC Offset: 0x31A7AAC VA: 0x31A7AAC
	public void set_Stages(List<WheelOfFortuneStageModel> value) { }

	[CompilerGenerated]
	// RVA: 0x31A7AB4 Offset: 0x31A7AB4 VA: 0x31A7AB4
	public int get_WheelOfFortuneCurrencyAmount() { }

	[CompilerGenerated]
	// RVA: 0x31A7ABC Offset: 0x31A7ABC VA: 0x31A7ABC
	public void set_WheelOfFortuneCurrencyAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7AC4 Offset: 0x31A7AC4 VA: 0x31A7AC4
	public int get_CurrentStageIndex() { }

	[CompilerGenerated]
	// RVA: 0x31A7ACC Offset: 0x31A7ACC VA: 0x31A7ACC
	public void set_CurrentStageIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7AD4 Offset: 0x31A7AD4 VA: 0x31A7AD4
	public int get_CurrentStageProgress() { }

	[CompilerGenerated]
	// RVA: 0x31A7ADC Offset: 0x31A7ADC VA: 0x31A7ADC
	public void set_CurrentStageProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7AE4 Offset: 0x31A7AE4 VA: 0x31A7AE4
	public int get_CurrentStageMaxProgress() { }

	[CompilerGenerated]
	// RVA: 0x31A7AEC Offset: 0x31A7AEC VA: 0x31A7AEC
	public void set_CurrentStageMaxProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7AF4 Offset: 0x31A7AF4 VA: 0x31A7AF4
	public int get_LastSeenStageIndex() { }

	[CompilerGenerated]
	// RVA: 0x31A7AFC Offset: 0x31A7AFC VA: 0x31A7AFC
	public void set_LastSeenStageIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B04 Offset: 0x31A7B04 VA: 0x31A7B04
	public int get_LastSeenStageProgress() { }

	[CompilerGenerated]
	// RVA: 0x31A7B0C Offset: 0x31A7B0C VA: 0x31A7B0C
	public void set_LastSeenStageProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B14 Offset: 0x31A7B14 VA: 0x31A7B14
	public int get_LastSeenStageMaxProgress() { }

	[CompilerGenerated]
	// RVA: 0x31A7B1C Offset: 0x31A7B1C VA: 0x31A7B1C
	public void set_LastSeenStageMaxProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B24 Offset: 0x31A7B24 VA: 0x31A7B24
	public DateTime get_EndDate() { }

	[CompilerGenerated]
	// RVA: 0x31A7B2C Offset: 0x31A7B2C VA: 0x31A7B2C
	public void set_EndDate(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B34 Offset: 0x31A7B34 VA: 0x31A7B34
	public bool get_IsProgressed() { }

	[CompilerGenerated]
	// RVA: 0x31A7B3C Offset: 0x31A7B3C VA: 0x31A7B3C
	public void set_IsProgressed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B48 Offset: 0x31A7B48 VA: 0x31A7B48
	public bool get_IsStageChanged() { }

	[CompilerGenerated]
	// RVA: 0x31A7B50 Offset: 0x31A7B50 VA: 0x31A7B50
	public void set_IsStageChanged(bool value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B5C Offset: 0x31A7B5C VA: 0x31A7B5C
	public int get_MaxProgress() { }

	[CompilerGenerated]
	// RVA: 0x31A7B64 Offset: 0x31A7B64 VA: 0x31A7B64
	public void set_MaxProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B6C Offset: 0x31A7B6C VA: 0x31A7B6C
	public int get_FirstShownStageIndex() { }

	[CompilerGenerated]
	// RVA: 0x31A7B74 Offset: 0x31A7B74 VA: 0x31A7B74
	public void set_FirstShownStageIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B7C Offset: 0x31A7B7C VA: 0x31A7B7C
	public bool get_ShouldPlayNextStageAnimationByCollectionReward() { }

	[CompilerGenerated]
	// RVA: 0x31A7B84 Offset: 0x31A7B84 VA: 0x31A7B84
	public void set_ShouldPlayNextStageAnimationByCollectionReward(bool value) { }

	[CompilerGenerated]
	// RVA: 0x31A7B90 Offset: 0x31A7B90 VA: 0x31A7B90
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x31A7B98 Offset: 0x31A7B98 VA: 0x31A7B98
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x31A7BA4 Offset: 0x31A7BA4 VA: 0x31A7BA4
	public List<WheelOfFortuneStageViewModel> get_StageViewModels() { }

	[CompilerGenerated]
	// RVA: 0x31A7BAC Offset: 0x31A7BAC VA: 0x31A7BAC
	public void set_StageViewModels(List<WheelOfFortuneStageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x31A7BB4 Offset: 0x31A7BB4 VA: 0x31A7BB4
	public List<WheelOfFortuneTaskViewModel> get_TaskViewModels() { }

	[CompilerGenerated]
	// RVA: 0x31A7BBC Offset: 0x31A7BBC VA: 0x31A7BBC
	public void set_TaskViewModels(List<WheelOfFortuneTaskViewModel> value) { }

	// RVA: 0x31A2D88 Offset: 0x31A2D88 VA: 0x31A2D88
	public bool get_IsAllStagesCompleted() { }

	// RVA: 0x31A3454 Offset: 0x31A3454 VA: 0x31A3454
	public bool get_IsOnLastStage() { }

	// RVA: 0x31A7BC4 Offset: 0x31A7BC4 VA: 0x31A7BC4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI