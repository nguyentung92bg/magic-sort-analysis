public class JetpackRaceWithStageHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4118
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3A82DBC Offset: 0x3A82DBC VA: 0x3A82DBC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3A82DC4 Offset: 0x3A82DC4 VA: 0x3A82DC4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3A82DCC Offset: 0x3A82DCC VA: 0x3A82DCC
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageHomeWelcomingCommand.<ExecuteAsync>d__6))]
	// RVA: 0x3A82DD8 Offset: 0x3A82DD8 VA: 0x3A82DD8 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3A82EC8 Offset: 0x3A82EC8 VA: 0x3A82EC8 Slot: 10
	public void Dispose() { }

	// RVA: 0x3A82ECC Offset: 0x3A82ECC VA: 0x3A82ECC Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x3A82ED0 Offset: 0x3A82ED0 VA: 0x3A82ED0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3A82ED8 Offset: 0x3A82ED8 VA: 0x3A82ED8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3A82EE0 Offset: 0x3A82EE0 VA: 0x3A82EE0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts