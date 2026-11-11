public class TryShowChampionsLeagueLeaderboardPopupClaimCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4699
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

	// RVA: 0x3B237B4 Offset: 0x3B237B4 VA: 0x3B237B4 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueLeaderboardPopupClaimCommand.<ExecuteAsync>d__2))]
	// RVA: 0x3B23838 Offset: 0x3B23838 VA: 0x3B23838 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueLeaderboardPopupClaimCommand.<Open>d__3))]
	// RVA: 0x3B23924 Offset: 0x3B23924 VA: 0x3B23924
	private Task Open() { }

	// RVA: 0x3B23A14 Offset: 0x3B23A14 VA: 0x3B23A14 Slot: 11
	public void Dispose() { }

	// RVA: 0x3B23A18 Offset: 0x3B23A18 VA: 0x3B23A18
	private bool CanShowLeaderboardPopup() { }

	// RVA: 0x3B23AB4 Offset: 0x3B23AB4 VA: 0x3B23AB4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3B23ACC Offset: 0x3B23ACC VA: 0x3B23ACC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3B23AD4 Offset: 0x3B23AD4 VA: 0x3B23AD4 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3B23ADC Offset: 0x3B23ADC VA: 0x3B23ADC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3B23AE4 Offset: 0x3B23AE4 VA: 0x3B23AE4
	private void set_IsShowed(bool value) { }

	// RVA: 0x3B23AF0 Offset: 0x3B23AF0 VA: 0x3B23AF0 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x3B23AF8 Offset: 0x3B23AF8 VA: 0x3B23AF8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]