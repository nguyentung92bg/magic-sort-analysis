public class TryShowSkyJumpHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 2764
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2F19978 Offset: 0x2F19978 VA: 0x2F19978 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2F19980 Offset: 0x2F19980 VA: 0x2F19980 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2F19988 Offset: 0x2F19988 VA: 0x2F19988
	private void set_IsShowed(bool value) { }

	// RVA: 0x2F19994 Offset: 0x2F19994 VA: 0x2F19994 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowSkyJumpHomeWelcomingCommand.<ExecuteAsync>d__7))]
	// RVA: 0x2F19998 Offset: 0x2F19998 VA: 0x2F19998 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x2F19A88 Offset: 0x2F19A88 VA: 0x2F19A88 Slot: 10
	public void Dispose() { }

	// RVA: 0x2F19A8C Offset: 0x2F19A8C VA: 0x2F19A8C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2F19A94 Offset: 0x2F19A94 VA: 0x2F19A94 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2F19A9C Offset: 0x2F19A9C VA: 0x2F19A9C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]