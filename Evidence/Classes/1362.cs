public class OpenDailyPageCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1362
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F15A04 Offset: 0x1F15A04 VA: 0x1F15A04 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F15A0C Offset: 0x1F15A0C VA: 0x1F15A0C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F15A14 Offset: 0x1F15A14 VA: 0x1F15A14 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F15A1C Offset: 0x1F15A1C VA: 0x1F15A1C
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F15A28 Offset: 0x1F15A28 VA: 0x1F15A28 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F15A30 Offset: 0x1F15A30 VA: 0x1F15A30 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F15A34 Offset: 0x1F15A34 VA: 0x1F15A34 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F15A3C Offset: 0x1F15A3C VA: 0x1F15A3C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(OpenDailyPageCommand.<ExecuteAsync>d__12))]
	// RVA: 0x1F15A44 Offset: 0x1F15A44 VA: 0x1F15A44 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(OpenDailyPageCommand.<OpenDailyPage>d__13))]
	// RVA: 0x1F15B30 Offset: 0x1F15B30 VA: 0x1F15B30
	private Task OpenDailyPage() { }

	// RVA: 0x1F15C1C Offset: 0x1F15C1C VA: 0x1F15C1C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]