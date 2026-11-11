public abstract class TeamsCommandBase : ICommand // TypeDefIndex: 2258
{
	// Methods

	// RVA: 0x2F061A0 Offset: 0x2F061A0 VA: 0x2F061A0
	protected void .ctor() { }

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Task ExecuteAsync();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Dispose();

	// RVA: 0x2F06A1C Offset: 0x2F06A1C VA: 0x2F06A1C
	protected void ProcessErrorCode(int errorCode) { }

	// RVA: 0x2F0D8CC Offset: 0x2F0D8CC VA: 0x2F0D8CC
	private void ShowErrorPopup(int errorCode) { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI.Commands