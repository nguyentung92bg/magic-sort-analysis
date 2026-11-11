public class RegularLevel : ALevel // TypeDefIndex: 1390
{
	// Fields
	private InputService _inputService; // 0x48
	private MagicBottleInGameManager _magicBottleInGameManager; // 0x50
	private GameplayInputSystem _gameplayInputSystem; // 0x58
	private TutorialSystem _tutorialSystem; // 0x60
	private TutorialEventHandler _tutorialEventHandler; // 0x68
	private LevelEntranceHandler _levelEntranceHandler; // 0x70
	private BasicGameObject _basicGameObject; // 0x78
	private SnitchInGameManager _snitchInGameManager; // 0x80
	private SuperChargerInGameManager _superChargerInGameManager; // 0x88

	// Methods

	// RVA: 0x1F1C634 Offset: 0x1F1C634 VA: 0x1F1C634 Slot: 4
	public override void Start(LevelAndLevelConfigModel levelAndLevelConfigModel) { }

	// RVA: 0x1F1CC98 Offset: 0x1F1CC98 VA: 0x1F1CC98 Slot: 5
	public override void Stuck(StuckType stuckType) { }

	// RVA: 0x1F1CD68 Offset: 0x1F1CD68 VA: 0x1F1CD68 Slot: 6
	public override void Pause() { }

	// RVA: 0x1F1CE14 Offset: 0x1F1CE14 VA: 0x1F1CE14 Slot: 8
	public override void PlayOn(List<PlayOnBehaviourType> behaviours) { }

	// RVA: 0x1F1D2C0 Offset: 0x1F1D2C0 VA: 0x1F1D2C0 Slot: 7
	public override void Resume() { }

	// RVA: 0x1F1D368 Offset: 0x1F1D368 VA: 0x1F1D368 Slot: 9
	public override StuckType GetLastStuckType() { }

	// RVA: 0x1F1D370 Offset: 0x1F1D370 VA: 0x1F1D370
	public void TryIntroduceNewBlocker() { }

	// RVA: 0x1F1DA18 Offset: 0x1F1DA18 VA: 0x1F1DA18
	public bool HasNewBlockerToIntroduce() { }

	// RVA: 0x1F1D5F0 Offset: 0x1F1D5F0 VA: 0x1F1D5F0
	private ItemType GetNewBlockerToIntroduce() { }

	[AsyncStateMachine(typeof(RegularLevel.<ReverseLastSelection>d__18))]
	// RVA: 0x1F1D140 Offset: 0x1F1D140 VA: 0x1F1D140
	private void ReverseLastSelection(float delay = 0) { }

	[AsyncStateMachine(typeof(RegularLevel.<UseMegaShuffle>d__19))]
	// RVA: 0x1F1D208 Offset: 0x1F1D208 VA: 0x1F1D208
	private void UseMegaShuffle() { }

	// RVA: 0x1F1DA30 Offset: 0x1F1DA30 VA: 0x1F1DA30 Slot: 10
	public override void End() { }

	// RVA: 0x1F1DB18 Offset: 0x1F1DB18 VA: 0x1F1DB18 Slot: 11
	public override int GetCurrentPlayOnPrice() { }

	// RVA: 0x1F1DB34 Offset: 0x1F1DB34 VA: 0x1F1DB34 Slot: 12
	public override bool TryUsePlayOn() { }

	// RVA: 0x1F1DB50 Offset: 0x1F1DB50 VA: 0x1F1DB50
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1F1DB58 Offset: 0x1F1DB58 VA: 0x1F1DB58
	private void <PlayOn>b__12_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.RegularLevels