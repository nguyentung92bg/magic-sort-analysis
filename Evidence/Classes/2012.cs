public class TowerWinStreakHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 2012
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private TowerWinStreakStateService _towerWinStreakStateService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x32E13F8 Offset: 0x32E13F8 VA: 0x32E13F8 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x32E1444 Offset: 0x32E1444 VA: 0x32E1444 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x32E144C Offset: 0x32E144C VA: 0x32E144C
	public void set_IsShowed(bool value) { }

	// RVA: 0x32E1458 Offset: 0x32E1458 VA: 0x32E1458 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TowerWinStreakHomeWelcomingCommand.<ExecuteAsync>d__8))]
	// RVA: 0x32E14E0 Offset: 0x32E14E0 VA: 0x32E14E0 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x32E15CC Offset: 0x32E15CC VA: 0x32E15CC Slot: 10
	public void Dispose() { }

	// RVA: 0x32E15D0 Offset: 0x32E15D0 VA: 0x32E15D0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x32E15D8 Offset: 0x32E15D8 VA: 0x32E15D8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x32E15E0 Offset: 0x32E15E0 VA: 0x32E15E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts