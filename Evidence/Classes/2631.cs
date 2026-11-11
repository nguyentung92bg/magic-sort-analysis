public class TryPlaySnitchActivationCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2631
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private SnitchService _snitchService; // 0x18
	private LevelAndLevelConfigModel _lastWinLevelAndLevelConfig; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2471470 Offset: 0x2471470 VA: 0x2471470 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2471478 Offset: 0x2471478 VA: 0x2471478 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2471480 Offset: 0x2471480 VA: 0x2471480 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2471488 Offset: 0x2471488 VA: 0x2471488
	private void set_IsShowed(bool value) { }

	// RVA: 0x2471494 Offset: 0x2471494 VA: 0x2471494 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x2471538 Offset: 0x2471538 VA: 0x2471538 Slot: 11
	public void Dispose() { }

	// RVA: 0x247153C Offset: 0x247153C VA: 0x247153C
	private bool ShouldOpenActivationPopup() { }

	[AsyncStateMachine(typeof(TryPlaySnitchActivationCommand.<ExecuteAsync>d__13))]
	// RVA: 0x2471570 Offset: 0x2471570 VA: 0x2471570 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x247165C Offset: 0x247165C VA: 0x247165C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2471674 Offset: 0x2471674 VA: 0x2471674 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x247167C Offset: 0x247167C VA: 0x247167C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]