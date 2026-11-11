public class BoosterManager // TypeDefIndex: 1432
{
	// Fields
	private readonly SelectionSystem _selectionSystem; // 0x10
	private readonly BottleCollections _bottleCollections; // 0x18
	private readonly GameplayInputSystem _gameplayInputSystem; // 0x20
	private readonly LevelWinOrStuckSystem _levelWinOrStuckSystem; // 0x28
	private readonly BoosterStats _boosterStats; // 0x30
	private readonly MegaShuffleManager _megaShuffleManager; // 0x38

	// Properties
	public BoosterStats BoosterStats { get; }

	// Methods

	// RVA: 0x1E92650 Offset: 0x1E92650 VA: 0x1E92650
	public BoosterStats get_BoosterStats() { }

	// RVA: 0x1E8F618 Offset: 0x1E8F618 VA: 0x1E8F618
	public void .ctor(SelectionSystem selectionSystem, BottleCollections bottleCollections, GameplayInputSystem gameplayInputSystem, LevelWinOrStuckSystem levelWinOrStuckSystem) { }

	// RVA: 0x1E92660 Offset: 0x1E92660 VA: 0x1E92660
	private bool CanUseUndo() { }

	// RVA: 0x1E926E8 Offset: 0x1E926E8 VA: 0x1E926E8
	private bool CanUseShuffleOrReveal() { }

	// RVA: 0x1E92740 Offset: 0x1E92740 VA: 0x1E92740
	private bool CanUseExtraBottleBooster() { }

	// RVA: 0x1E927B4 Offset: 0x1E927B4 VA: 0x1E927B4
	private bool CanUseMegaShuffle() { }

	// RVA: 0x1E926CC Offset: 0x1E926CC VA: 0x1E926CC
	private bool IsBoardStopped() { }

	[AsyncStateMachine(typeof(BoosterManager.<Undo>d__14))]
	// RVA: 0x1E92870 Offset: 0x1E92870 VA: 0x1E92870
	private void Undo() { }

	[AsyncStateMachine(typeof(BoosterManager.<Shuffle>d__15))]
	// RVA: 0x1E92928 Offset: 0x1E92928 VA: 0x1E92928
	private void Shuffle() { }

	[AsyncStateMachine(typeof(BoosterManager.<Reveal>d__16))]
	// RVA: 0x1E929E0 Offset: 0x1E929E0 VA: 0x1E929E0
	private void Reveal() { }

	// RVA: 0x1E92A98 Offset: 0x1E92A98 VA: 0x1E92A98
	private void OnSelectionBackgroundShowStarted(InputMode inputMode) { }

	// RVA: 0x1E92C28 Offset: 0x1E92C28 VA: 0x1E92C28
	private void OnSelectionBackgroundHideStarted() { }

	// RVA: 0x1E92C2C Offset: 0x1E92C2C VA: 0x1E92C2C
	private void OnSelectionBackgroundHideEnd() { }

	// RVA: 0x1E92D48 Offset: 0x1E92D48 VA: 0x1E92D48
	private bool HasBottleCanShuffle() { }

	// RVA: 0x1E92E64 Offset: 0x1E92E64 VA: 0x1E92E64
	private bool HasBottleCanReveal() { }

	// RVA: 0x1E92C14 Offset: 0x1E92C14 VA: 0x1E92C14
	public static bool CanUseRevealBooster(BottleItem bottleItem) { }

	// RVA: 0x1E92C00 Offset: 0x1E92C00 VA: 0x1E92C00
	public static bool CanUseShuffleBooster(BottleItem bottleItem) { }

	[AsyncStateMachine(typeof(BoosterManager.<UseShuffleBooster>d__24))]
	// RVA: 0x1E92F80 Offset: 0x1E92F80 VA: 0x1E92F80
	private Task UseShuffleBooster(BottleItem selectedBottle) { }

	[AsyncStateMachine(typeof(BoosterManager.<UseRevealBooster>d__25))]
	// RVA: 0x1E93084 Offset: 0x1E93084 VA: 0x1E93084
	private Task UseRevealBooster(BottleItem selectedBottle) { }

	// RVA: 0x1E93170 Offset: 0x1E93170 VA: 0x1E93170
	private void AddExtraBottle() { }

	[AsyncStateMachine(typeof(BoosterManager.<UseMegaShuffle>d__27))]
	// RVA: 0x1E931AC Offset: 0x1E931AC VA: 0x1E931AC
	private void UseMegaShuffle() { }

	[AsyncStateMachine(typeof(BoosterManager.<UseForceMegaShuffle>d__28))]
	// RVA: 0x1E93268 Offset: 0x1E93268 VA: 0x1E93268
	public Task<bool> UseForceMegaShuffle(float delay = 0) { }

	// RVA: 0x1E91DC8 Offset: 0x1E91DC8 VA: 0x1E91DC8
	public bool TryUseBooster(CurrencyType currencyType) { }

	// RVA: 0x1E93394 Offset: 0x1E93394 VA: 0x1E93394
	private bool CanUseBooster(CurrencyType currencyType) { }

	// RVA: 0x1E933B4 Offset: 0x1E933B4 VA: 0x1E933B4
	private void UseBooster(CurrencyType currencyType) { }

	// RVA: 0x1E933D0 Offset: 0x1E933D0 VA: 0x1E933D0
	public void TryIntroduceNewBooster() { }

	// RVA: 0x1E938D4 Offset: 0x1E938D4 VA: 0x1E938D4
	private bool ShouldShowRevealTutorial() { }

	// RVA: 0x1E93B8C Offset: 0x1E93B8C VA: 0x1E93B8C
	private void StartRevealTutorial() { }

	// RVA: 0x1E93408 Offset: 0x1E93408 VA: 0x1E93408
	private bool ShouldShowMegaShuffleTutorial() { }

	// RVA: 0x1E936C0 Offset: 0x1E936C0 VA: 0x1E936C0
	private void StartMegaShuffleTutorial() { }

	// RVA: 0x1E8FEA8 Offset: 0x1E8FEA8 VA: 0x1E8FEA8
	public void Deinitialize() { }
}

// Namespace: Modules.Contexts.GamePlay.Boosters.Scripts