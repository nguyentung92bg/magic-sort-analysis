public class JetpackRaceWithStageTryAgainCommand : ITryAgainCommand, ICommand // TypeDefIndex: 1020
{
	// Fields
	private bool _didPopupOpen; // 0x10
	private int _priority; // 0x14

	// Methods

	// RVA: 0x40ED5A0 Offset: 0x40ED5A0 VA: 0x40ED5A0 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageTryAgainCommand.<ExecuteAsync>d__3))]
	// RVA: 0x40ED5A8 Offset: 0x40ED5A8 VA: 0x40ED5A8 Slot: 7
	public Task ExecuteAsync() { }

	// RVA: 0x40ED694 Offset: 0x40ED694 VA: 0x40ED694 Slot: 5
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x40ED69C Offset: 0x40ED69C VA: 0x40ED69C Slot: 6
	public int GetPriority() { }

	// RVA: 0x40ED6A4 Offset: 0x40ED6A4 VA: 0x40ED6A4 Slot: 8
	public void Dispose() { }

	// RVA: 0x40ED6A8 Offset: 0x40ED6A8 VA: 0x40ED6A8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.TryAgainPopUpNs.Scripts