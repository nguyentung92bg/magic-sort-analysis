public class TryShowMagicStreakLeaderboardLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3831
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private readonly ReturnToHomeSequenceService _returnHomeService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3CF2368 Offset: 0x3CF2368 VA: 0x3CF2368 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3CF2370 Offset: 0x3CF2370 VA: 0x3CF2370 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3CF2378 Offset: 0x3CF2378 VA: 0x3CF2378 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3CF2380 Offset: 0x3CF2380 VA: 0x3CF2380
	private void set_IsShowed(bool value) { }

	// RVA: 0x3CF238C Offset: 0x3CF238C VA: 0x3CF238C
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x3CF23BC Offset: 0x3CF23BC VA: 0x3CF23BC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowMagicStreakLeaderboardLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3CF23C4 Offset: 0x3CF23C4 VA: 0x3CF23C4 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3CF24B0 Offset: 0x3CF24B0 VA: 0x3CF24B0
	private MagicStreakTournamentPopupImpressionSource GetImpressionSource() { }

	// RVA: 0x3CF2550 Offset: 0x3CF2550 VA: 0x3CF2550 Slot: 11
	public void Dispose() { }

	// RVA: 0x3CF2554 Offset: 0x3CF2554 VA: 0x3CF2554 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3CF25DC Offset: 0x3CF25DC VA: 0x3CF25DC Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts
[CreateAssetMenu(fileName = "MagicStreakGaeAnimationConfig", menuName = "Configs/MagicStreakGaeAnimationConfig")]