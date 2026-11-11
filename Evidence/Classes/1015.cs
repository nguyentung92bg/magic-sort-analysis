public class BroomStreakTryAgainCommand : ITryAgainCommand, ICommand // TypeDefIndex: 1015
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
	// RVA: 0x40EC97C Offset: 0x40EC97C VA: 0x40EC97C
	public int get_LastScoreBeforeFail() { }

	[CompilerGenerated]
	// RVA: 0x40EC984 Offset: 0x40EC984 VA: 0x40EC984
	public void set_LastScoreBeforeFail(int value) { }

	// RVA: 0x40EC98C Offset: 0x40EC98C VA: 0x40EC98C Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(BroomStreakTryAgainCommand.<ExecuteAsync>d__7))]
	// RVA: 0x40EC994 Offset: 0x40EC994 VA: 0x40EC994 Slot: 7
	public Task ExecuteAsync() { }

	// RVA: 0x40ECA84 Offset: 0x40ECA84 VA: 0x40ECA84 Slot: 5
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x40ECA8C Offset: 0x40ECA8C VA: 0x40ECA8C Slot: 6
	public int GetPriority() { }

	// RVA: 0x40ECA94 Offset: 0x40ECA94 VA: 0x40ECA94 Slot: 8
	public void Dispose() { }

	// RVA: 0x40ECA98 Offset: 0x40ECA98 VA: 0x40ECA98
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.TryAgainPopUpNs.Scripts