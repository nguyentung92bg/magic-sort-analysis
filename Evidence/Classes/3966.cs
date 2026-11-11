public class TryShowMagicPassFinishedHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3966
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MagicPassService _service; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x38EDEBC Offset: 0x38EDEBC VA: 0x38EDEBC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x38EDEC4 Offset: 0x38EDEC4 VA: 0x38EDEC4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38EDECC Offset: 0x38EDECC VA: 0x38EDECC
	private void set_IsShowed(bool value) { }

	// RVA: 0x38EDED8 Offset: 0x38EDED8 VA: 0x38EDED8 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x38EDF64 Offset: 0x38EDF64 VA: 0x38EDF64 Slot: 10
	public void Dispose() { }

	// RVA: 0x38EDF68 Offset: 0x38EDF68 VA: 0x38EDF68 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x38EDF8C Offset: 0x38EDF8C VA: 0x38EDF8C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowMagicPassFinishedHomeWelcomingCommand.<ExecuteAsync>d__11))]
	// RVA: 0x38EDF94 Offset: 0x38EDF94 VA: 0x38EDF94 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x38EE064 Offset: 0x38EE064 VA: 0x38EE064
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]