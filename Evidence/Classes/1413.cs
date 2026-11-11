public class LevelModelService : ILevelModelService, IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1413
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private IPlayerService _playerService; // 0x18
	private LevelModelPersistenceService _levelModelPersistenceService; // 0x20
	private GrandConfigPersistenceService _grandConfigPersistenceService; // 0x28
	private SnitchService _snitchService; // 0x30
	[CompilerGenerated]
	private int <ForceSeedIndex>k__BackingField; // 0x38

	// Properties
	private GrandRemoteRegularLevelsConfigs FallBackRegularLevelsConfigs { get; }
	private GrandRemoteDailyLevelsConfig FallBackDailyLevelsConfigs { get; }
	public int ForceSeedIndex { get; set; }

	// Methods

	// RVA: 0x1E8D3F8 Offset: 0x1E8D3F8 VA: 0x1E8D3F8
	private GrandRemoteRegularLevelsConfigs get_FallBackRegularLevelsConfigs() { }

	// RVA: 0x1E8D414 Offset: 0x1E8D414 VA: 0x1E8D414
	private GrandRemoteDailyLevelsConfig get_FallBackDailyLevelsConfigs() { }

	[CompilerGenerated]
	// RVA: 0x1E8D430 Offset: 0x1E8D430 VA: 0x1E8D430
	public int get_ForceSeedIndex() { }

	[CompilerGenerated]
	// RVA: 0x1E8D438 Offset: 0x1E8D438 VA: 0x1E8D438
	public void set_ForceSeedIndex(int value) { }

	// RVA: 0x1E8D440 Offset: 0x1E8D440 VA: 0x1E8D440
	public void .ctor(RemoteConfigs remoteConfigs, IPlayerService playerService, LevelModelPersistenceService levelModelPersistenceService, GrandConfigPersistenceService grandConfigPersistenceService, SnitchService snitchService) { }

	// RVA: 0x1E8D4D8 Offset: 0x1E8D4D8 VA: 0x1E8D4D8 Slot: 9
	public void Initialize() { }

	// RVA: 0x1E8D4E4 Offset: 0x1E8D4E4 VA: 0x1E8D4E4 Slot: 4
	public LevelAndLevelConfigModel GetRegularLevelAndLevelConfigModel(int level) { }

	// RVA: 0x1E8D63C Offset: 0x1E8D63C VA: 0x1E8D63C
	private LevelAndLevelConfigModel GetEditorLevelAndLevelConfigModel() { }

	// RVA: 0x1E8D718 Offset: 0x1E8D718 VA: 0x1E8D718 Slot: 7
	public LevelConfigModel GetLevelConfigModel(int level) { }

	// RVA: 0x1E8D71C Offset: 0x1E8D71C VA: 0x1E8D71C
	private LevelConfigModel GetLevelConfigModelWhenCheatNotEnabled(int level) { }

	// RVA: 0x1E8D7C0 Offset: 0x1E8D7C0 VA: 0x1E8D7C0
	private LevelConfigModel GetTutorialLevelConfigModel(int level) { }

	// RVA: 0x1E8D960 Offset: 0x1E8D960 VA: 0x1E8D960
	private LevelConfigModel GetRegularLevelConfigModel(int level) { }

	// RVA: 0x1E8D598 Offset: 0x1E8D598 VA: 0x1E8D598
	private LevelAndLevelConfigModel GetLevelAndLevelConfigModelWhenCheatNotEnabled(int level) { }

	// RVA: 0x1E8DB18 Offset: 0x1E8DB18 VA: 0x1E8DB18
	private LevelAndLevelConfigModel GetTutorialLevelAndLevelConfigModel(int level) { }

	// RVA: 0x1E8E114 Offset: 0x1E8E114 VA: 0x1E8E114
	private LevelAndLevelConfigModel GetRegularLevelAndLevelConfigModelInternal(int level) { }

	// RVA: 0x1E8E3B4 Offset: 0x1E8E3B4 VA: 0x1E8E3B4
	private bool TryGetCachedSeed(int level, out string seed) { }

	// RVA: 0x1E8DA80 Offset: 0x1E8DA80 VA: 0x1E8DA80
	private string GetSeedIdFromConfig(LevelConfigModel levelConfigModel) { }

	// RVA: 0x1E8E524 Offset: 0x1E8E524 VA: 0x1E8E524
	private string GetSeedIdFromConfig(List<string> dlbSeeds, List<string> seeds, int dlbCap, string slSeed) { }

	// RVA: 0x1E8DA0C Offset: 0x1E8DA0C VA: 0x1E8DA0C
	private LevelConfigModel GetLevelConfigModel(GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs, int level) { }

	// RVA: 0x1E8E8D4 Offset: 0x1E8E8D4 VA: 0x1E8E8D4
	private LevelConfigModel GetRegularLevelConfigModel(GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs, int level) { }

	// RVA: 0x1E8E938 Offset: 0x1E8E938 VA: 0x1E8E938
	private LevelConfigModel GetLoopLevelConfigModel(GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs, int level) { }

	// RVA: 0x1E8E360 Offset: 0x1E8E360 VA: 0x1E8E360
	private bool TryGetLevelModelBySeedFromPersistentPath(string seed, out LevelModel levelModel) { }

	// RVA: 0x1E8E39C Offset: 0x1E8E39C VA: 0x1E8E39C
	private LevelModel GetLevelModelBySeedFromResources(string seed) { }

	// RVA: 0x1E8E9CC Offset: 0x1E8E9CC VA: 0x1E8E9CC Slot: 8
	public LevelDifficultyType GetLevelDifficulty(int level) { }

	// RVA: 0x1E8EA94 Offset: 0x1E8EA94 VA: 0x1E8EA94 Slot: 6
	public LevelAndLevelConfigModel GetDailyTutorialLevelAndLevelConfigModel(DailyLevelInfo dailyLevelInfo) { }

	// RVA: 0x1E8EC44 Offset: 0x1E8EC44 VA: 0x1E8EC44 Slot: 5
	public LevelAndLevelConfigModel GetDailyLevelAndLevelConfigModel(DailyLevelInfo dailyLevelInfo) { }

	[CanBeNull]
	// RVA: 0x1E8EDD4 Offset: 0x1E8EDD4 VA: 0x1E8EDD4
	private DailyLevelConfigModel GetDailyLevelConfigModel(GrandRemoteDailyLevelsConfig configModels, DateTime dateTime, bool shouldFallback = False) { }

	// RVA: 0x1E8EF54 Offset: 0x1E8EF54 VA: 0x1E8EF54
	private string GetDailySeedIdFromConfig(DailyLevelConfigModel dailyLevelConfigModel) { }

	// RVA: 0x1E8EFDC Offset: 0x1E8EFDC VA: 0x1E8EFDC Slot: 10
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.Difficulty
[CreateAssetMenu(fileName = "DifficultySpriteConfig", menuName = "Configs/DifficultySpriteConfig")]