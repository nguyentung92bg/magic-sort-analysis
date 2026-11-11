public class DeleteAccountCommand : ICommand // TypeDefIndex: 5396
{
	// Fields
	private AccountDeleteService _service; // 0x10
	private IPopUpService _popupService; // 0x18

	// Methods

	// RVA: 0x1860C64 Offset: 0x1860C64 VA: 0x1860C64
	public void .ctor() { }

	[AsyncStateMachine(typeof(DeleteAccountCommand.<ExecuteAsync>d__3))]
	// RVA: 0x1860D38 Offset: 0x1860D38 VA: 0x1860D38 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x1860E34 Offset: 0x1860E34 VA: 0x1860E34 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]