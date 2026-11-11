public class SkyJumpWithStageTryAgainCommand : ITryAgainCommand, ICommand // TypeDefIndex: 1025
{
	// Fields
	private bool _didPopupOpen; // 0x10
	private int _priority; // 0x14

	// Methods

	// RVA: 0x40EE31C Offset: 0x40EE31C VA: 0x40EE31C Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(SkyJumpWithStageTryAgainCommand.<ExecuteAsync>d__3))]
	// RVA: 0x40EE324 Offset: 0x40EE324 VA: 0x40EE324 Slot: 7
	public Task ExecuteAsync() { }

	// RVA: 0x40EE414 Offset: 0x40EE414 VA: 0x40EE414 Slot: 5
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x40EE41C Offset: 0x40EE41C VA: 0x40EE41C Slot: 6
	public int GetPriority() { }

	// RVA: 0x40EE424 Offset: 0x40EE424 VA: 0x40EE424 Slot: 8
	public void Dispose() { }

	// RVA: 0x40EE428 Offset: 0x40EE428 VA: 0x40EE428
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]