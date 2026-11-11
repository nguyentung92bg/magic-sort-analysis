public class WeeklyTournamentHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 1960
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x32D6628 Offset: 0x32D6628 VA: 0x32D6628 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x32D6630 Offset: 0x32D6630 VA: 0x32D6630 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x32D6638 Offset: 0x32D6638 VA: 0x32D6638
	private void set_IsShowed(bool value) { }

	// RVA: 0x32D6644 Offset: 0x32D6644 VA: 0x32D6644 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(WeeklyTournamentHomeWelcomingCommand.<ExecuteAsync>d__7))]
	// RVA: 0x32D6648 Offset: 0x32D6648 VA: 0x32D6648 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x32D6734 Offset: 0x32D6734 VA: 0x32D6734 Slot: 10
	public void Dispose() { }

	// RVA: 0x32D6738 Offset: 0x32D6738 VA: 0x32D6738 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x32D6740 Offset: 0x32D6740 VA: 0x32D6740 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x32D6748 Offset: 0x32D6748 VA: 0x32D6748
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts