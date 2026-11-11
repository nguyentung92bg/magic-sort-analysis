public class TryShowBoatRushJoinCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4901
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

	// RVA: 0x4102440 Offset: 0x4102440 VA: 0x4102440 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x410245C Offset: 0x410245C VA: 0x410245C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x4102464 Offset: 0x4102464 VA: 0x4102464 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x410246C Offset: 0x410246C VA: 0x410246C
	private void set_IsShowed(bool value) { }

	// RVA: 0x4102478 Offset: 0x4102478 VA: 0x4102478 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowBoatRushJoinCommand.<ExecuteAsync>d__10))]
	// RVA: 0x4102500 Offset: 0x4102500 VA: 0x4102500 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x41025EC Offset: 0x41025EC VA: 0x41025EC Slot: 11
	public void Dispose() { }

	// RVA: 0x41025F0 Offset: 0x41025F0 VA: 0x41025F0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x4102618 Offset: 0x4102618 VA: 0x4102618 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x4102620 Offset: 0x4102620 VA: 0x4102620
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]