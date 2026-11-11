public class SkyJumpTryAgainCommand : ITryAgainCommand, ICommand // TypeDefIndex: 1023
{
	// Fields
	private bool _didPopupOpen; // 0x10
	private int _priority; // 0x14

	// Methods

	// RVA: 0x40EDD90 Offset: 0x40EDD90 VA: 0x40EDD90 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(SkyJumpTryAgainCommand.<ExecuteAsync>d__3))]
	// RVA: 0x40EDD98 Offset: 0x40EDD98 VA: 0x40EDD98 Slot: 7
	public Task ExecuteAsync() { }

	// RVA: 0x40EDE88 Offset: 0x40EDE88 VA: 0x40EDE88 Slot: 5
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x40EDE90 Offset: 0x40EDE90 VA: 0x40EDE90 Slot: 6
	public int GetPriority() { }

	// RVA: 0x40EDE98 Offset: 0x40EDE98 VA: 0x40EDE98 Slot: 8
	public void Dispose() { }

	// RVA: 0x40EDE9C Offset: 0x40EDE9C VA: 0x40EDE9C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]