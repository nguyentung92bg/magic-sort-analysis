public class ProfileSpritePersistenceService : IService, IInitializable, IDisposable, IFrameUpdate, ILateInitializable // TypeDefIndex: 3757
{
	// Fields
	private ProfileSpritePersistenceCatalog _catalogCache; // 0x10
	private readonly CustomUpdater _customUpdater; // 0x18
	private const int CacheExpirationSessionCount = 5;
	private const int CatalogSaveIntervalSeconds = 3;
	private const string CacheFolder = "ProfileSpriteCache";
	private string _cacheFolderPath; // 0x20
	private string _catalogFilePath; // 0x28
	private string _temporaryCacheFilePath; // 0x30
	private string _applicationTempPath; // 0x38
	private int _activeSessionCount; // 0x40
	private int _catalogSaveRequestCount; // 0x44
	private DateTime _catalogSaveCooldownEndTime; // 0x48
	private bool _isCachePathInitialized; // 0x50
	private bool _isCatalogReady; // 0x51
	private bool _isCatalogFilePathInitialized; // 0x52
	private bool _isCatalogSaving; // 0x53
	private bool _isTemporaryPathInitialized; // 0x54
	private bool _isInitializationComplete; // 0x55
	private IPlayerService _playerService; // 0x58

	// Methods

	// RVA: 0x3E0A278 Offset: 0x3E0A278 VA: 0x3E0A278
	public void .ctor(CustomUpdater customUpdater, IPlayerService playerService) { }

	// RVA: 0x3E0A2BC Offset: 0x3E0A2BC VA: 0x3E0A2BC Slot: 4
	public void Initialize() { }

	// RVA: 0x3E0A6AC Offset: 0x3E0A6AC VA: 0x3E0A6AC Slot: 7
	public void LateInitialize() { }

	[AsyncStateMachine(typeof(ProfileSpritePersistenceService.<InitializeInternal>d__22))]
	// RVA: 0x3E0AEF0 Offset: 0x3E0AEF0 VA: 0x3E0AEF0
	private Task InitializeInternal() { }

	// RVA: 0x3E0AFE0 Offset: 0x3E0AFE0 VA: 0x3E0AFE0
	private void InitializeFileSystem() { }

	// RVA: 0x3E0B168 Offset: 0x3E0B168 VA: 0x3E0B168
	private bool IsFileSystemInitialized() { }

	// RVA: 0x3E0B1BC Offset: 0x3E0B1BC VA: 0x3E0B1BC Slot: 6
	public void FrameUpdate(float elapsedSeconds) { }

	[AsyncStateMachine(typeof(ProfileSpritePersistenceService.<TrySaveCatalog>d__26))]
	// RVA: 0x3E0B1D0 Offset: 0x3E0B1D0 VA: 0x3E0B1D0
	private Task TrySaveCatalog(bool force = False) { }

	// RVA: 0x3E0B2C8 Offset: 0x3E0B2C8 VA: 0x3E0B2C8
	private void RequestSaveCatalog() { }

	// RVA: 0x3E0B2D8 Offset: 0x3E0B2D8 VA: 0x3E0B2D8
	private void LoadCatalog() { }

	// RVA: 0x3E0B50C Offset: 0x3E0B50C VA: 0x3E0B50C
	private void DeleteItemsFromCatalog(List<ProfileSpritePersistenceCatalogItem> items) { }

	// RVA: 0x3E0B664 Offset: 0x3E0B664 VA: 0x3E0B664 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E0A408 Offset: 0x3E0A408 VA: 0x3E0A408
	public bool IsCacheExists(ProfileSpriteCacheRequest profileSpriteCacheRequest) { }

	[AsyncStateMachine(typeof(ProfileSpritePersistenceService.<GetImageAsync>d__32))]
	// RVA: 0x3E0A2DC Offset: 0x3E0A2DC VA: 0x3E0A2DC
	public Task<ValueTuple<byte[], Texture2D>> GetImageAsync(ProfileSpriteCacheRequest profileSpriteCacheRequest) { }

	// RVA: 0x3E0B684 Offset: 0x3E0B684 VA: 0x3E0B684
	private Texture2D LoadImage(byte[] data) { }

	[AsyncStateMachine(typeof(ProfileSpritePersistenceService.<Add>d__34))]
	// RVA: 0x3E0A5A0 Offset: 0x3E0A5A0 VA: 0x3E0A5A0
	public void Add(ProfileSpriteCacheRequest profileSpriteCacheRequest, byte[] data) { }

	// RVA: 0x3E0A68C Offset: 0x3E0A68C VA: 0x3E0A68C
	public void Remove(ProfileSpriteCacheRequest request) { }

	[AsyncStateMachine(typeof(ProfileSpritePersistenceService.<SaveCatalog>d__36))]
	// RVA: 0x3E0B6FC Offset: 0x3E0B6FC VA: 0x3E0B6FC
	private Task<bool> SaveCatalog() { }

	// RVA: 0x3E0B810 Offset: 0x3E0B810 VA: 0x3E0B810
	private bool WriteFile(string tempPath, string filePath, byte[] data) { }

	// RVA: 0x3E0B984 Offset: 0x3E0B984 VA: 0x3E0B984
	private bool WriteFile(string tempPath, string filePath, string[] data) { }

	[AsyncStateMachine(typeof(ProfileSpritePersistenceService.<DeleteFiles>d__39))]
	// RVA: 0x3E0BA68 Offset: 0x3E0BA68 VA: 0x3E0BA68
	private Task DeleteFiles(IEnumerable<string> expiredCacheFiles) { }

	// RVA: 0x3E0B450 Offset: 0x3E0B450 VA: 0x3E0B450
	private ProfileSpritePersistenceCatalogItem GetProfileSpritePersistenceCatalogItemFromLineText(string line) { }

	// RVA: 0x3E0B038 Offset: 0x3E0B038 VA: 0x3E0B038
	private string GetCacheFolderPath() { }

	// RVA: 0x3E0BB54 Offset: 0x3E0BB54 VA: 0x3E0BB54
	private string GetCacheFilePathFromUrl(string fileName) { }

	// RVA: 0x3E0BC10 Offset: 0x3E0BC10 VA: 0x3E0BC10
	private string GetCacheFileTempPathFromUrl(string fileName) { }

	// RVA: 0x3E0BCD4 Offset: 0x3E0BCD4 VA: 0x3E0BCD4
	private string GetTempPathDirectory() { }

	// RVA: 0x3E0B8F4 Offset: 0x3E0B8F4 VA: 0x3E0B8F4
	private static void CreateDirectoryIfNotExists(string filePath) { }

	// RVA: 0x3E0B0E8 Offset: 0x3E0B0E8 VA: 0x3E0B0E8
	private string GetCatalogFilePath() { }

	// RVA: 0x3E0BD18 Offset: 0x3E0BD18 VA: 0x3E0BD18
	private int GetCacheExpirationSessionCount() { }

	// RVA: 0x3E0BD24 Offset: 0x3E0BD24 VA: 0x3E0BD24
	public bool IsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x3E0BD2C Offset: 0x3E0BD2C VA: 0x3E0BD2C
	private string <InitializeInternal>b__22_0(ProfileSpritePersistenceCatalogItem o) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI
[CreateAssetMenu(fileName = "MagicStreakHeroImageAnimationConfig", menuName = "Configs/MagicStreakHeroImageAnimationConfig")]