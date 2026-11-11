private sealed class MagicLabDataService.<>c // TypeDefIndex: 3976
{
	// Fields
	public static readonly MagicLabDataService.<>c <>9; // 0x0
	public static Converter<MagicLabRemoteTaskModel, MagicLabTaskModel> <>9__8_1; // 0x8
	public static Func<MagicLabTaskModel, bool> <>9__15_1; // 0x10
	public static Func<MagicLabTaskModel, bool> <>9__17_1; // 0x18
	public static Func<MagicLabTaskModel, bool> <>9__22_0; // 0x20
	public static Func<MagicLabStage, int> <>9__39_1; // 0x28
	public static Func<MagicLabTaskModel, bool> <>9__41_1; // 0x30
	public static Func<MagicLabTaskModel, bool> <>9__42_1; // 0x38
	public static Func<MagicLabTaskModel, bool> <>9__43_1; // 0x40
	public static Func<MagicLabTaskModel, bool> <>9__44_1; // 0x48
	public static Func<MagicLabTaskModel, bool> <>9__45_0; // 0x50

	// Methods

	// RVA: 0x3751E94 Offset: 0x3751E94 VA: 0x3751E94
	private static void .cctor() { }

	// RVA: 0x3751F04 Offset: 0x3751F04 VA: 0x3751F04
	public void .ctor() { }

	// RVA: 0x3751F0C Offset: 0x3751F0C VA: 0x3751F0C
	internal MagicLabTaskModel <StartNewEvent>b__8_1(MagicLabRemoteTaskModel task) { }

	// RVA: 0x3751F80 Offset: 0x3751F80 VA: 0x3751F80
	internal bool <SyncLastSeen>b__15_1(MagicLabTaskModel task) { }

	// RVA: 0x3751FA0 Offset: 0x3751FA0 VA: 0x3751FA0
	internal bool <IsAllTaskCompletedInStage>b__17_1(MagicLabTaskModel task) { }

	// RVA: 0x3751FC0 Offset: 0x3751FC0 VA: 0x3751FC0
	internal bool <IsAllTasksCompletedInStage>b__22_0(MagicLabTaskModel task) { }

	// RVA: 0x3751FE0 Offset: 0x3751FE0 VA: 0x3751FE0
	internal int <TryGetClaimableStages>b__39_1(MagicLabStage s) { }

	// RVA: 0x3751FF8 Offset: 0x3751FF8 VA: 0x3751FF8
	internal bool <HasAnyTaskCompletedInLastSeenStage>b__41_1(MagicLabTaskModel task) { }

	// RVA: 0x375202C Offset: 0x375202C VA: 0x375202C
	internal bool <ShouldShowTwoTasksCompletedForcePopUp>b__42_1(MagicLabTaskModel task) { }

	// RVA: 0x375204C Offset: 0x375204C VA: 0x375204C
	internal bool <GetRemainingTaskInStage>b__43_1(MagicLabTaskModel task) { }

	// RVA: 0x375206C Offset: 0x375206C VA: 0x375206C
	internal bool <GetCompletedTaskCountInStage>b__44_1(MagicLabTaskModel task) { }

	// RVA: 0x375208C Offset: 0x375208C VA: 0x375208C
	internal bool <GetCompletedStageCount>b__45_0(MagicLabTaskModel task) { }
}

// Namespace: 
[CompilerGenerated]