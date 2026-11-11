public class TryShowChampionsLeagueLeaderboardPopupCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4705
{
	// Fields
	private ChampionsLeagueService _championsLeagueService; // 0x10
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x3B25600 Offset: 0x3B25600 VA: 0x3B25600 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueLeaderboardPopupCommand.<ExecuteAsync>d__2))]
	// RVA: 0x3B25684 Offset: 0x3B25684 VA: 0x3B25684 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueLeaderboardPopupCommand.<Open>d__3))]
	// RVA: 0x3B25770 Offset: 0x3B25770 VA: 0x3B25770
	private Task Open() { }

	// RVA: 0x3B25860 Offset: 0x3B25860 VA: 0x3B25860
	private bool CanShowPopup() { }

	// RVA: 0x3B258CC Offset: 0x3B258CC VA: 0x3B258CC
	private bool ShouldShowIncreaseLeaderboardAnimation() { }

	// RVA: 0x3B259A8 Offset: 0x3B259A8 VA: 0x3B259A8 Slot: 11
	public void Dispose() { }

	// RVA: 0x3B259AC Offset: 0x3B259AC VA: 0x3B259AC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3B259DC Offset: 0x3B259DC VA: 0x3B259DC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3B259E4 Offset: 0x3B259E4 VA: 0x3B259E4 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3B259EC Offset: 0x3B259EC VA: 0x3B259EC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3B259F4 Offset: 0x3B259F4 VA: 0x3B259F4
	private void set_IsShowed(bool value) { }

	// RVA: 0x3B25A00 Offset: 0x3B25A00 VA: 0x3B25A00 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x3B25A08 Offset: 0x3B25A08 VA: 0x3B25A08
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]