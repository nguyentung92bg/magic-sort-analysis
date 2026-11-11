public class TowerWinStreakTryAgainCommand : ITryAgainCommand, ICommand // TypeDefIndex: 1027
{
	// Fields
	private bool _didPopupOpen; // 0x10
	private int _priority; // 0x14
	[CompilerGenerated]
	private int <LastScoreBeforeFail>k__BackingField; // 0x18

	// Properties
	public int LastScoreBeforeFail { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40EE8A8 Offset: 0x40EE8A8 VA: 0x40EE8A8
	public int get_LastScoreBeforeFail() { }

	[CompilerGenerated]
	// RVA: 0x40EE8B0 Offset: 0x40EE8B0 VA: 0x40EE8B0
	public void set_LastScoreBeforeFail(int value) { }

	// RVA: 0x40EE8B8 Offset: 0x40EE8B8 VA: 0x40EE8B8 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(TowerWinStreakTryAgainCommand.<ExecuteAsync>d__7))]
	// RVA: 0x40EE8C0 Offset: 0x40EE8C0 VA: 0x40EE8C0 Slot: 7
	public Task ExecuteAsync() { }

	// RVA: 0x40EE9AC Offset: 0x40EE9AC VA: 0x40EE9AC Slot: 5
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x40EE9B4 Offset: 0x40EE9B4 VA: 0x40EE9B4 Slot: 6
	public int GetPriority() { }

	// RVA: 0x40EE9BC Offset: 0x40EE9BC VA: 0x40EE9BC Slot: 8
	public void Dispose() { }

	// RVA: 0x40EE9C0 Offset: 0x40EE9C0 VA: 0x40EE9C0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]