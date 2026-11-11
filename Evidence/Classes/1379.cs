public class LevelStats // TypeDefIndex: 1379
{
	// Fields
	private BoosterManager _boosterManager; // 0x10
	private BottleCollections _bottleCollections; // 0x18
	private LevelAndLevelConfigModel _levelAndLevelConfigModel; // 0x20
	private LevelTimer _levelTimer; // 0x28
	private int _progress; // 0x30
	private int _streakCount; // 0x34
	private int _sessionCount; // 0x38
	private string _levelType; // 0x40
	private int _levelDifficulty; // 0x48
	private string _seedId; // 0x50
	private int _questionMarkCount; // 0x58
	private int _plasterCount; // 0x5C
	private int _clayCount; // 0x60
	private int _curtainCount; // 0x64
	private int _tagCount; // 0x68
	private int _iceCount; // 0x6C
	private int _generatorCount; // 0x70
	private int _woodboxCount; // 0x74
	private int _carpetCount; // 0x78
	private int _toggleCount; // 0x7C
	private int _curtainOpened; // 0x80
	private int _questionMarkOpened; // 0x84
	private int _plasterOpened; // 0x88
	private int _clayOpened; // 0x8C
	private int _lockOpened; // 0x90
	private int _tagOpened; // 0x94
	private int _iceOpened; // 0x98
	private int _generatorOpened; // 0x9C
	private int _woodboxOpened; // 0xA0
	private int _carpetOpened; // 0xA4
	private int _toggleOpened; // 0xA8
	private int _sealOpened; // 0xAC
	private int _crystalOpened; // 0xB0
	private int _safeOpened; // 0xB4
	private int _bagOpened; // 0xB8
	private int _superChargerUsed; // 0xBC
	private bool _wasSuperChargerOnLevelEnd; // 0xC0
	private int _totalMoveCount; // 0xC4
	private int _emptyBottleCount; // 0xC8
	private int _initialEmptyBottleCount; // 0xCC
	private int _initialFilledBottleCount; // 0xD0
	private int _playOnUsage; // 0xD4
	private DailyLevelInfo _dailyLevelInfo; // 0xD8
	private bool _isDailyLevel; // 0xE0
	private int _magicBottleProgress; // 0xE4
	private bool _hasMagicBottle; // 0xE8
	private int _snitchProgress; // 0xEC
	private int _lastTimeIsUpStuckRemainingTime; // 0xF0
	private StuckType _lastStuckType; // 0xF4
	private int _attempt; // 0xF8
	private int _stuckCount; // 0xFC
	private List<int> _moves; // 0x100
	private float _lastClickTimeRealtimeSinceStart; // 0x108
	private bool _isFirstMoveDone; // 0x10C
	private List<LevelStats.RainbowUsage> _rainbowUsages; // 0x110

	// Properties
	public LevelAndLevelConfigModel LevelAndLevelConfigModel { get; }
	public int PlayOnUsage { get; }
	public int Attempt { get; }
	public int StuckCount { get; }

	// Methods

	// RVA: 0x1F18650 Offset: 0x1F18650 VA: 0x1F18650
	public LevelAndLevelConfigModel get_LevelAndLevelConfigModel() { }

	// RVA: 0x1F18658 Offset: 0x1F18658 VA: 0x1F18658
	public int get_PlayOnUsage() { }

	// RVA: 0x1F18660 Offset: 0x1F18660 VA: 0x1F18660
	public int get_Attempt() { }

	// RVA: 0x1F18668 Offset: 0x1F18668 VA: 0x1F18668
	public int get_StuckCount() { }

	// RVA: 0x1F18670 Offset: 0x1F18670 VA: 0x1F18670
	public void .ctor(BoosterManager boosterManager, BottleCollections bottleCollections, LevelAndLevelConfigModel levelAndLevelConfigModel, LevelTimer levelTimer) { }

	// RVA: 0x1F186EC Offset: 0x1F186EC VA: 0x1F186EC
	private void SubscribeEvents() { }

	// RVA: 0x1F18EF0 Offset: 0x1F18EF0 VA: 0x1F18EF0
	public void OnStuck(StuckType stuckType) { }

	// RVA: 0x1F18F20 Offset: 0x1F18F20 VA: 0x1F18F20
	private void OnSelectionApplied() { }

	// RVA: 0x1F18F30 Offset: 0x1F18F30 VA: 0x1F18F30
	private void OnPlasterOpened() { }

	// RVA: 0x1F18F40 Offset: 0x1F18F40 VA: 0x1F18F40
	private void OnClayOpened() { }

	// RVA: 0x1F18F50 Offset: 0x1F18F50 VA: 0x1F18F50
	private void OnQuestionMarkOpened() { }

	// RVA: 0x1F18F60 Offset: 0x1F18F60 VA: 0x1F18F60
	private void OnCurtainOpened() { }

	// RVA: 0x1F18F70 Offset: 0x1F18F70 VA: 0x1F18F70
	private void OnTagOpened() { }

	// RVA: 0x1F18F80 Offset: 0x1F18F80 VA: 0x1F18F80
	private void OnIceOpened() { }

	// RVA: 0x1F18F90 Offset: 0x1F18F90 VA: 0x1F18F90
	private void OnGeneratorOpened() { }

	// RVA: 0x1F18FA0 Offset: 0x1F18FA0 VA: 0x1F18FA0
	private void OnWoodboxOpened() { }

	// RVA: 0x1F18FB0 Offset: 0x1F18FB0 VA: 0x1F18FB0
	private void OnCarpetOpened() { }

	// RVA: 0x1F18FC0 Offset: 0x1F18FC0 VA: 0x1F18FC0
	private void OnToggleOpened() { }

	// RVA: 0x1F18FD0 Offset: 0x1F18FD0 VA: 0x1F18FD0
	private void OnMagicSealOpened() { }

	// RVA: 0x1F18FE0 Offset: 0x1F18FE0 VA: 0x1F18FE0
	private void OnSafeOpened() { }

	// RVA: 0x1F18FF0 Offset: 0x1F18FF0 VA: 0x1F18FF0
	private void OnBagOpened() { }

	// RVA: 0x1F19000 Offset: 0x1F19000 VA: 0x1F19000
	private void OnCrystalGateOpened() { }

	// RVA: 0x1F19010 Offset: 0x1F19010 VA: 0x1F19010
	private void OnSuperChargerUsed() { }

	// RVA: 0x1F19024 Offset: 0x1F19024 VA: 0x1F19024
	private void OnSuperChargerCharged() { }

	// RVA: 0x1F19030 Offset: 0x1F19030 VA: 0x1F19030
	private void OnPlayOnUsed() { }

	// RVA: 0x1F190BC Offset: 0x1F190BC VA: 0x1F190BC
	public void SetInitialValues() { }

	// RVA: 0x1F196EC Offset: 0x1F196EC VA: 0x1F196EC
	public int GetProgress() { }

	// RVA: 0x1F196F4 Offset: 0x1F196F4 VA: 0x1F196F4
	public string GetSeedId() { }

	// RVA: 0x1F196FC Offset: 0x1F196FC VA: 0x1F196FC
	public Dictionary<string, object> GetLevelStats() { }

	// RVA: 0x1F1A0D4 Offset: 0x1F1A0D4 VA: 0x1F1A0D4
	public Dictionary<string, object> GetDailyLevelStats(LevelState levelState) { }

	// RVA: 0x1F19570 Offset: 0x1F19570 VA: 0x1F19570
	private string GetLevelType() { }

	// RVA: 0x1F0F53C Offset: 0x1F0F53C VA: 0x1F0F53C
	public LevelDifficultyType GetLevelDifficulty() { }

	// RVA: 0x1F1A528 Offset: 0x1F1A528 VA: 0x1F1A528
	public void AddMove(Selection selection) { }

	// RVA: 0x1F19F20 Offset: 0x1F19F20 VA: 0x1F19F20
	public string GetMovesShorten() { }

	// RVA: 0x1F1A688 Offset: 0x1F1A688 VA: 0x1F1A688
	public string GetRainbowUsagesShorten() { }

	// RVA: 0x1F1A884 Offset: 0x1F1A884 VA: 0x1F1A884
	public float GetLastClickTimeRealtimeSinceStart() { }

	// RVA: 0x1F1A88C Offset: 0x1F1A88C VA: 0x1F1A88C
	public bool SuperChargerInGameStatus() { }

	// RVA: 0x1F1A894 Offset: 0x1F1A894 VA: 0x1F1A894
	public int SuperChargerUseCount() { }

	// RVA: 0x1F1A89C Offset: 0x1F1A89C VA: 0x1F1A89C
	public int GetTotalMoveCount() { }

	// RVA: 0x1F1A8A4 Offset: 0x1F1A8A4 VA: 0x1F1A8A4
	public void AddRainbowUsage(BottleItem bottleItem, int cellIndex) { }

	// RVA: 0x1F1A9A4 Offset: 0x1F1A9A4 VA: 0x1F1A9A4
	public void Deinitialize() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts