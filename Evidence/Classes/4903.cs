public class TryShowBoatRushPopUpCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4903
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private BoatRushService _boatRushService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x410298C Offset: 0x410298C VA: 0x410298C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x41029A8 Offset: 0x41029A8 VA: 0x41029A8 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x41029B0 Offset: 0x41029B0 VA: 0x41029B0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x41029B8 Offset: 0x41029B8 VA: 0x41029B8
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(TryShowBoatRushPopUpCommand.<ExecuteAsync>d__9))]
	// RVA: 0x41029C4 Offset: 0x41029C4 VA: 0x41029C4 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x4102AB0 Offset: 0x4102AB0 VA: 0x4102AB0 Slot: 11
	public void Dispose() { }

	// RVA: 0x4102AB4 Offset: 0x4102AB4 VA: 0x4102AB4 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x4102B3C Offset: 0x4102B3C VA: 0x4102B3C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x4102B64 Offset: 0x4102B64 VA: 0x4102B64 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x4102B6C Offset: 0x4102B6C VA: 0x4102B6C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts
[Serializable]