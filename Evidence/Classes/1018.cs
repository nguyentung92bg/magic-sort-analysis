public class JetpackRaceTryAgainCommand : ITryAgainCommand, ICommand // TypeDefIndex: 1018
{
	// Fields
	private bool _didPopupOpen; // 0x10
	private int _priority; // 0x14

	// Methods

	// RVA: 0x40ED044 Offset: 0x40ED044 VA: 0x40ED044 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(JetpackRaceTryAgainCommand.<ExecuteAsync>d__3))]
	// RVA: 0x40ED04C Offset: 0x40ED04C VA: 0x40ED04C Slot: 7
	public Task ExecuteAsync() { }

	// RVA: 0x40ED138 Offset: 0x40ED138 VA: 0x40ED138 Slot: 5
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x40ED140 Offset: 0x40ED140 VA: 0x40ED140 Slot: 6
	public int GetPriority() { }

	// RVA: 0x40ED148 Offset: 0x40ED148 VA: 0x40ED148 Slot: 8
	public void Dispose() { }

	// RVA: 0x40ED14C Offset: 0x40ED14C VA: 0x40ED14C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]