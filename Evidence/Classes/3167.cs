public class WatchAndWinHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3167
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3300518 Offset: 0x3300518 VA: 0x3300518 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3300520 Offset: 0x3300520 VA: 0x3300520 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3300528 Offset: 0x3300528 VA: 0x3300528
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(WatchAndWinHomeWelcomingCommand.<ExecuteAsync>d__6))]
	// RVA: 0x3300534 Offset: 0x3300534 VA: 0x3300534 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3300620 Offset: 0x3300620 VA: 0x3300620 Slot: 10
	public void Dispose() { }

	// RVA: 0x3300624 Offset: 0x3300624 VA: 0x3300624 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x3300628 Offset: 0x3300628 VA: 0x3300628 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3300630 Offset: 0x3300630 VA: 0x3300630 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3300638 Offset: 0x3300638 VA: 0x3300638
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts
[Serializable]