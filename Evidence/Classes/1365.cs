public class SwipeToDailyPageCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1365
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private LevelAndLevelConfigModel _lastWinLevelAndLevelConfigModel; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F160C0 Offset: 0x1F160C0 VA: 0x1F160C0 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F160C8 Offset: 0x1F160C8 VA: 0x1F160C8 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F160D0 Offset: 0x1F160D0 VA: 0x1F160D0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F160D8 Offset: 0x1F160D8 VA: 0x1F160D8
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F160E4 Offset: 0x1F160E4 VA: 0x1F160E4 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F160F4 Offset: 0x1F160F4 VA: 0x1F160F4 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F160F8 Offset: 0x1F160F8 VA: 0x1F160F8 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F16100 Offset: 0x1F16100 VA: 0x1F16100 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(SwipeToDailyPageCommand.<ExecuteAsync>d__13))]
	// RVA: 0x1F16108 Offset: 0x1F16108 VA: 0x1F16108 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(SwipeToDailyPageCommand.<SwipeToDailyPage>d__14))]
	// RVA: 0x1F161F4 Offset: 0x1F161F4 VA: 0x1F161F4
	private Task SwipeToDailyPage() { }

	// RVA: 0x1F162E0 Offset: 0x1F162E0 VA: 0x1F162E0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]