public class TryShowMagicStreakLeaderboardHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3829
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3CF1DF4 Offset: 0x3CF1DF4 VA: 0x3CF1DF4 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3CF1DFC Offset: 0x3CF1DFC VA: 0x3CF1DFC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3CF1E04 Offset: 0x3CF1E04 VA: 0x3CF1E04
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(TryShowMagicStreakLeaderboardHomeWelcomingCommand.<ExecuteAsync>d__6))]
	// RVA: 0x3CF1E10 Offset: 0x3CF1E10 VA: 0x3CF1E10 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3CF1EFC Offset: 0x3CF1EFC VA: 0x3CF1EFC
	private MagicStreakTournamentPopupImpressionSource GetImpressionSource() { }

	// RVA: 0x3CF1F9C Offset: 0x3CF1F9C VA: 0x3CF1F9C Slot: 10
	public void Dispose() { }

	// RVA: 0x3CF1FA0 Offset: 0x3CF1FA0 VA: 0x3CF1FA0 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x3CF1FA4 Offset: 0x3CF1FA4 VA: 0x3CF1FA4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3CF1FAC Offset: 0x3CF1FAC VA: 0x3CF1FAC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3CF1FB4 Offset: 0x3CF1FB4 VA: 0x3CF1FB4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]