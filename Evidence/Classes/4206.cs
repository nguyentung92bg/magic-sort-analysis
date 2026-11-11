public class JetpackRaceHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4206
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3B17338 Offset: 0x3B17338 VA: 0x3B17338 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3B17340 Offset: 0x3B17340 VA: 0x3B17340 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3B17348 Offset: 0x3B17348 VA: 0x3B17348
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(JetpackRaceHomeWelcomingCommand.<ExecuteAsync>d__6))]
	// RVA: 0x3B17354 Offset: 0x3B17354 VA: 0x3B17354 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3B17444 Offset: 0x3B17444 VA: 0x3B17444 Slot: 10
	public void Dispose() { }

	// RVA: 0x3B17448 Offset: 0x3B17448 VA: 0x3B17448 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x3B1744C Offset: 0x3B1744C VA: 0x3B1744C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3B17454 Offset: 0x3B17454 VA: 0x3B17454 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3B1745C Offset: 0x3B1745C VA: 0x3B1745C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRace.Scripts