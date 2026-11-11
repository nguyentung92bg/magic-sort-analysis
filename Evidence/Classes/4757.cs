public class BroomStreakHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4757
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private BroomStreakService _service; // 0x18
	private BroomStreakStateService _BroomStreakStateService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3FBBCAC Offset: 0x3FBBCAC VA: 0x3FBBCAC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3FBBCF8 Offset: 0x3FBBCF8 VA: 0x3FBBCF8 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3FBBD00 Offset: 0x3FBBD00 VA: 0x3FBBD00
	public void set_IsShowed(bool value) { }

	// RVA: 0x3FBBD0C Offset: 0x3FBBD0C VA: 0x3FBBD0C Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(BroomStreakHomeWelcomingCommand.<ExecuteAsync>d__9))]
	// RVA: 0x3FBBDC4 Offset: 0x3FBBDC4 VA: 0x3FBBDC4 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3FBBEB0 Offset: 0x3FBBEB0 VA: 0x3FBBEB0 Slot: 10
	public void Dispose() { }

	// RVA: 0x3FBBEB4 Offset: 0x3FBBEB4 VA: 0x3FBBEB4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3FBBEBC Offset: 0x3FBBEBC VA: 0x3FBBEBC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3FBBEC4 Offset: 0x3FBBEC4 VA: 0x3FBBEC4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts