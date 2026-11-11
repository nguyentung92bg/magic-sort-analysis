public class TryPlayLobbyButtonsCollectibleAnimationsCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1287
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private Tween _hatAnimationTween; // 0x18
	private Tween _towerWinStreakAnimationTween; // 0x20
	private Tween _broomStreakAnimationTween; // 0x28
	private Tween _jetpackRaceAnimationTween; // 0x30
	private Tween _magicBottleAnimationTween; // 0x38
	private Tween _championsLeagueAnimationTween; // 0x40
	private Tween _snitchAnimationTween; // 0x48
	private Tween _wheelOfFortuneAnimationTween; // 0x50
	private Tween _magicPassAnimationTween; // 0x58
	private Tween _duckFestivalAnimationTween; // 0x60
	private Tween _teamArenaEarnWandAnimationTween; // 0x68
	private Tween _miniGameAnimationTween; // 0x70
	private Tween _teamQuestAnimationTween; // 0x78
	private Tween _mergeMiniGameAnimationTween; // 0x80
	private Tween _strikeShowAnimationTween; // 0x88
	private CancellationToken _cancellationToken; // 0x90

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2155844 Offset: 0x2155844 VA: 0x2155844 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x215584C Offset: 0x215584C VA: 0x215584C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2155854 Offset: 0x2155854 VA: 0x2155854 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x215585C Offset: 0x215585C VA: 0x215585C
	private void set_IsShowed(bool value) { }

	// RVA: 0x2155868 Offset: 0x2155868 VA: 0x2155868 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x215588C Offset: 0x215588C VA: 0x215588C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2155894 Offset: 0x2155894 VA: 0x2155894 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<ExecuteAsync>d__27))]
	// RVA: 0x215589C Offset: 0x215589C VA: 0x215589C Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<MagicStreakTournamentEarnHats>d__28))]
	// RVA: 0x2155988 Offset: 0x2155988 VA: 0x2155988
	private Task MagicStreakTournamentEarnHats() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<TowerWinStreakEarnBroomAnimations>d__29))]
	// RVA: 0x2155A74 Offset: 0x2155A74 VA: 0x2155A74
	private Task TowerWinStreakEarnBroomAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<BroomStreakEarnBroomAnimations>d__30))]
	// RVA: 0x2155B60 Offset: 0x2155B60 VA: 0x2155B60
	private Task BroomStreakEarnBroomAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<JetpackRaceEarnRocketAnimations>d__31))]
	// RVA: 0x2155C4C Offset: 0x2155C4C VA: 0x2155C4C
	private Task JetpackRaceEarnRocketAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<MagicBottleEarnBottleAnimations>d__32))]
	// RVA: 0x2155D38 Offset: 0x2155D38 VA: 0x2155D38
	private Task MagicBottleEarnBottleAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<ChampionsLeagueEarnCrownAnimations>d__33))]
	// RVA: 0x2155E24 Offset: 0x2155E24 VA: 0x2155E24
	private Task ChampionsLeagueEarnCrownAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<SnitchProgressAnimations>d__34))]
	// RVA: 0x2155F10 Offset: 0x2155F10 VA: 0x2155F10
	private Task SnitchProgressAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<WheelOfFortuneProgressAnimations>d__35))]
	// RVA: 0x2155FFC Offset: 0x2155FFC VA: 0x2155FFC
	private Task WheelOfFortuneProgressAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<MagicPassProgressAnimations>d__36))]
	// RVA: 0x21560E8 Offset: 0x21560E8 VA: 0x21560E8
	private Task MagicPassProgressAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<DuckFestivalProgressAnimations>d__37))]
	// RVA: 0x21561D4 Offset: 0x21561D4 VA: 0x21561D4
	private Task DuckFestivalProgressAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<TeamArenaEarnWandAnimations>d__38))]
	// RVA: 0x21562C4 Offset: 0x21562C4 VA: 0x21562C4
	private Task TeamArenaEarnWandAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<TeamQuestProgressAnimations>d__39))]
	// RVA: 0x21563B4 Offset: 0x21563B4 VA: 0x21563B4
	private Task TeamQuestProgressAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<MiniGameProgressAnimations>d__40))]
	// RVA: 0x21564A4 Offset: 0x21564A4 VA: 0x21564A4
	private Task MiniGameProgressAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<MergeMiniGameProgressAnimations>d__41))]
	// RVA: 0x2156594 Offset: 0x2156594 VA: 0x2156594
	private Task MergeMiniGameProgressAnimations() { }

	[AsyncStateMachine(typeof(TryPlayLobbyButtonsCollectibleAnimationsCommand.<StrikeShowProgressAnimations>d__42))]
	// RVA: 0x2156684 Offset: 0x2156684 VA: 0x2156684
	private Task StrikeShowProgressAnimations() { }

	// RVA: 0x2156774 Offset: 0x2156774 VA: 0x2156774 Slot: 11
	public void Dispose() { }

	// RVA: 0x2154278 Offset: 0x2154278 VA: 0x2154278
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]