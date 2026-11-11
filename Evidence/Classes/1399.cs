public class LevelModelPersistenceService : IService, IInitializable, IDisposable, ISecondUpdate, IDataInitializable // TypeDefIndex: 1399
{
	// Fields
	private IPlayerService _playerService; // 0x10
	private CustomUpdater _customUpdater; // 0x18
	private const string _persistentDirectoryName = "Levels";
	private const string _resourcesDirectoryName = "DefaultLevels";
	private const string _levelCatalogResourcesFileName = "levelcatalog";
	private const string _levelCatalogPersistentFileName = "levelcatalog";
	private RemoteConfigs _remoteConfigs; // 0x20
	private LevelModelRemoteService _levelModelRemoteService; // 0x28
	private const int _maxTotalLevelCountForBulkDownload = 120;
	private HashSet<string> _seedsFromRemote; // 0x30
	private LevelCatalog _levelsInResources; // 0x38
	private LevelCatalog _levelsInPersistentPath; // 0x40
	private LevelBatches _levelBatches; // 0x48
	private DateTime _coolDownEndTime; // 0x50
	private float _coolDownDurationAsSeconds; // 0x58
	private const float _maxCoolDownDurationAsSeconds = 200;

	// Methods

	// RVA: 0x1E8A9C4 Offset: 0x1E8A9C4 VA: 0x1E8A9C4
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, LevelModelRemoteService levelModelRemoteService, CustomUpdater customUpdater) { }

	// RVA: 0x1E8AA40 Offset: 0x1E8AA40 VA: 0x1E8AA40 Slot: 4
	public void Initialize() { }

	// RVA: 0x1E8AA68 Offset: 0x1E8AA68 VA: 0x1E8AA68
	public void ResetForDebugger() { }

	// RVA: 0x1E8AAD8 Offset: 0x1E8AAD8 VA: 0x1E8AAD8 Slot: 7
	public void InitializeData() { }

	// RVA: 0x1E8AC84 Offset: 0x1E8AC84 VA: 0x1E8AC84 Slot: 6
	public void SecondUpdate() { }

	// RVA: 0x1E8B250 Offset: 0x1E8B250 VA: 0x1E8B250
	private List<LevelBatch> GetBatchedFileNamesFromSeeds(HashSet<string> seeds, int fromLevel, int toLevel) { }

	// RVA: 0x1E8B124 Offset: 0x1E8B124 VA: 0x1E8B124
	private HashSet<string> GetLevelSeedsBetweenLevelsIncluded(int fromLevel, int toLevel) { }

	// RVA: 0x1E8B694 Offset: 0x1E8B694 VA: 0x1E8B694
	private LevelConfigModel GetLevelConfigModelAtLevel(int level) { }

	// RVA: 0x1E8B6C4 Offset: 0x1E8B6C4 VA: 0x1E8B6C4
	private LevelConfigModel GetLevelConfigModel(GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs, int level) { }

	// RVA: 0x1E8B738 Offset: 0x1E8B738 VA: 0x1E8B738
	private LevelConfigModel GetRegularLevelConfigModel(GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs, int level) { }

	// RVA: 0x1E8B79C Offset: 0x1E8B79C VA: 0x1E8B79C
	private LevelConfigModel GetLoopLevelConfigModel(GrandRemoteRegularLevelsConfigs remoteRegularLevelsConfigs, int level) { }

	[AsyncStateMachine(typeof(LevelModelPersistenceService.<TryDownloadAndPersistBatch>d__27))]
	// RVA: 0x1E8B550 Offset: 0x1E8B550 VA: 0x1E8B550
	private void TryDownloadAndPersistBatch(LevelBatch levelBatch) { }

	// RVA: 0x1E8B830 Offset: 0x1E8B830 VA: 0x1E8B830
	public LevelModel GetDefaultLevelFromResources(string seed) { }

	// RVA: 0x1E8B948 Offset: 0x1E8B948 VA: 0x1E8B948
	public bool TryGetLevelModelFromPersistentPath(string fileName, out LevelModel levelModel) { }

	// RVA: 0x1E8B628 Offset: 0x1E8B628 VA: 0x1E8B628
	private bool IsCached(string seedName) { }

	// RVA: 0x1E8BC08 Offset: 0x1E8BC08 VA: 0x1E8BC08
	public bool IsInResources(string seedName) { }

	// RVA: 0x1E8BBA8 Offset: 0x1E8BBA8 VA: 0x1E8BBA8
	public bool IsInPersistentPath(string seedName) { }

	// RVA: 0x1E8BC68 Offset: 0x1E8BC68 VA: 0x1E8BC68 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService
[Serializable]