public class PlayerService : IPlayerService, IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IInitializeForNewDownload, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 5117
{
	// Fields
	private PlayerModel _playerModel; // 0x10
	private readonly ISaveLoad<PlayerModel> _playerModelSaveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21
	private bool _isInitialized; // 0x22
	private string _userPublicId; // 0x28
	[CompilerGenerated]
	private string <CountryCode>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <DeviceTransferDetected>k__BackingField; // 0x38

	// Properties
	public string CountryCode { get; set; }
	public bool DeviceTransferDetected { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3CED8E0 Offset: 0x3CED8E0 VA: 0x3CED8E0
	public string get_CountryCode() { }

	[CompilerGenerated]
	// RVA: 0x3CED8E8 Offset: 0x3CED8E8 VA: 0x3CED8E8
	private void set_CountryCode(string value) { }

	[CompilerGenerated]
	// RVA: 0x3CED8F0 Offset: 0x3CED8F0 VA: 0x3CED8F0 Slot: 78
	public bool get_DeviceTransferDetected() { }

	[CompilerGenerated]
	// RVA: 0x3CED8F8 Offset: 0x3CED8F8 VA: 0x3CED8F8 Slot: 79
	public void set_DeviceTransferDetected(bool value) { }

	// RVA: 0x3CED904 Offset: 0x3CED904 VA: 0x3CED904
	public void .ctor(ISaveLoad<PlayerModel> playerModelSaveLoad) { }

	// RVA: 0x3CED988 Offset: 0x3CED988 VA: 0x3CED988 Slot: 80
	public void Initialize() { }

	// RVA: 0x3CEDB94 Offset: 0x3CEDB94 VA: 0x3CEDB94 Slot: 82
	public void InitializeData() { }

	// RVA: 0x3CEDC00 Offset: 0x3CEDC00 VA: 0x3CEDC00 Slot: 81
	public void Dispose() { }

	// RVA: 0x3CEDC08 Offset: 0x3CEDC08 VA: 0x3CEDC08 Slot: 45
	public bool CanUseNewFailFlow() { }

	// RVA: 0x3CEDD6C Offset: 0x3CEDD6C VA: 0x3CEDD6C Slot: 50
	public bool CanUsePlayIntegrityToken() { }

	// RVA: 0x3CEDE44 Offset: 0x3CEDE44 VA: 0x3CEDE44 Slot: 49
	public bool IsOldUserBefore920() { }

	// RVA: 0x3CEDED0 Offset: 0x3CEDED0 VA: 0x3CEDED0 Slot: 46
	public AdjustAttributionModel GetAttributionModel() { }

	// RVA: 0x3CEDEEC Offset: 0x3CEDEEC VA: 0x3CEDEEC Slot: 47
	public void SetAttributionModel(AdjustAttributionModel adjustAttributionModel) { }

	// RVA: 0x3CEDF24 Offset: 0x3CEDF24 VA: 0x3CEDF24 Slot: 48
	public bool HasAttributionModel() { }

	// RVA: 0x3CEDACC Offset: 0x3CEDACC VA: 0x3CEDACC
	private void TrySetFirstInstallApplicationVersion() { }

	// RVA: 0x3CEDCF4 Offset: 0x3CEDCF4 VA: 0x3CEDCF4
	public Version GetParsedFirstInstallVersion() { }

	// RVA: 0x3CEDF48 Offset: 0x3CEDF48 VA: 0x3CEDF48 Slot: 34
	public void UpdateUserName(string userName) { }

	// RVA: 0x3CEDFFC Offset: 0x3CEDFFC VA: 0x3CEDFFC Slot: 35
	public void IncreaseStreakCount() { }

	// RVA: 0x3CEE028 Offset: 0x3CEE028 VA: 0x3CEE028 Slot: 36
	public void ResetStreakCount() { }

	// RVA: 0x3CEE04C Offset: 0x3CEE04C VA: 0x3CEE04C Slot: 37
	public int GetStreakCount() { }

	// RVA: 0x3CEE068 Offset: 0x3CEE068 VA: 0x3CEE068 Slot: 38
	public void IncreaseStreakCountStartsFrom20() { }

	// RVA: 0x3CEE0A0 Offset: 0x3CEE0A0 VA: 0x3CEE0A0 Slot: 39
	public void ResetStreakCountStartsFrom20() { }

	// RVA: 0x3CEE0C4 Offset: 0x3CEE0C4 VA: 0x3CEE0C4 Slot: 40
	public int GetStreakCountStartsFrom20() { }

	// RVA: 0x3CEE0E0 Offset: 0x3CEE0E0 VA: 0x3CEE0E0 Slot: 41
	public void TryCacheFirstCpm(double cpmAsDollar) { }

	// RVA: 0x3CEE124 Offset: 0x3CEE124 VA: 0x3CEE124 Slot: 42
	public double GetFirstCpmAsDollar() { }

	// RVA: 0x3CEE140 Offset: 0x3CEE140 VA: 0x3CEE140 Slot: 43
	public void TryCacheLastCpm(double cpmAsDollar) { }

	// RVA: 0x3CEE178 Offset: 0x3CEE178 VA: 0x3CEE178 Slot: 44
	public double GetLastCpmAsDollar() { }

	// RVA: 0x3CEE194 Offset: 0x3CEE194 VA: 0x3CEE194 Slot: 5
	public int GetLevel() { }

	// RVA: 0x3CEE1B0 Offset: 0x3CEE1B0 VA: 0x3CEE1B0 Slot: 4
	public int PeekNextLevel() { }

	// RVA: 0x3CEE204 Offset: 0x3CEE204 VA: 0x3CEE204 Slot: 6
	public void SetLevel(int level) { }

	// RVA: 0x3CEE288 Offset: 0x3CEE288 VA: 0x3CEE288 Slot: 27
	public bool TryIncreaseFirstTryLevelWinCount(bool isTutorialLevel) { }

	// RVA: 0x3CEE2D8 Offset: 0x3CEE2D8 VA: 0x3CEE2D8 Slot: 28
	public int GetFirstTryLevelWinCount() { }

	// RVA: 0x3CEDBDC Offset: 0x3CEDBDC VA: 0x3CEDBDC
	public void SetSessionCount(int sessionCount) { }

	// RVA: 0x3CEDBC0 Offset: 0x3CEDBC0 VA: 0x3CEDBC0 Slot: 29
	public int GetSessionCount() { }

	// RVA: 0x3CEE2F4 Offset: 0x3CEE2F4 VA: 0x3CEE2F4 Slot: 30
	public void SaveLastSelectedSeedId(string lastSelectedSeedId) { }

	// RVA: 0x3CEE320 Offset: 0x3CEE320 VA: 0x3CEE320 Slot: 31
	public string GetLastSelectedSeedId() { }

	// RVA: 0x3CEE33C Offset: 0x3CEE33C VA: 0x3CEE33C Slot: 32
	public void CacheLevelSeeds(LevelSeedCacheData cacheData) { }

	// RVA: 0x3CEE368 Offset: 0x3CEE368 VA: 0x3CEE368 Slot: 33
	public LevelSeedCacheData GetLevelSeedCache() { }

	// RVA: 0x3CEE384 Offset: 0x3CEE384 VA: 0x3CEE384 Slot: 7
	public void IncreaseLevel() { }

	// RVA: 0x3CEE3CC Offset: 0x3CEE3CC VA: 0x3CEE3CC Slot: 8
	public void IncreaseRetryCount() { }

	// RVA: 0x3CEE3F8 Offset: 0x3CEE3F8 VA: 0x3CEE3F8 Slot: 13
	public int GetRetryCount() { }

	// RVA: 0x3CEE414 Offset: 0x3CEE414 VA: 0x3CEE414 Slot: 9
	public void IncreaseDailyRetryCount() { }

	// RVA: 0x3CEE440 Offset: 0x3CEE440 VA: 0x3CEE440 Slot: 14
	public int GetDailyRetryCount() { }

	// RVA: 0x3CEE45C Offset: 0x3CEE45C VA: 0x3CEE45C Slot: 10
	public void SetLastEnteredDaily(DateTime dateTime) { }

	// RVA: 0x3CEE4F4 Offset: 0x3CEE4F4 VA: 0x3CEE4F4 Slot: 11
	public void SetIsLevelInProgress(bool isLevelInProgress) { }

	// RVA: 0x3CEE51C Offset: 0x3CEE51C VA: 0x3CEE51C Slot: 12
	public bool GetIsLevelInProgress() { }

	// RVA: 0x3CEE538 Offset: 0x3CEE538 VA: 0x3CEE538
	public void SetNewUserId() { }

	// RVA: 0x3CEE58C Offset: 0x3CEE58C VA: 0x3CEE58C Slot: 15
	public string GetUserId() { }

	// RVA: 0x3CEE5A8 Offset: 0x3CEE5A8 VA: 0x3CEE5A8
	public void SetUserId(string userId) { }

	// RVA: 0x3CEE5D4 Offset: 0x3CEE5D4 VA: 0x3CEE5D4 Slot: 16
	public string GetFacebookId() { }

	// RVA: 0x3CEE5D8 Offset: 0x3CEE5D8 VA: 0x3CEE5D8 Slot: 17
	public string GetAppleId() { }

	// RVA: 0x3CEE5DC Offset: 0x3CEE5DC VA: 0x3CEE5DC Slot: 18
	public ProfileInfo GetProfileInfo() { }

	// RVA: 0x3CEE5F8 Offset: 0x3CEE5F8 VA: 0x3CEE5F8 Slot: 19
	public void SetProfileInfo(ProfileInfo profileInfo) { }

	// RVA: 0x3CEE624 Offset: 0x3CEE624 VA: 0x3CEE624 Slot: 20
	public bool IsSignedInToFacebook() { }

	// RVA: 0x3CEE644 Offset: 0x3CEE644 VA: 0x3CEE644 Slot: 22
	public void SetFacebookId(string facebookId) { }

	// RVA: 0x3CEE64C Offset: 0x3CEE64C VA: 0x3CEE64C Slot: 23
	public void SetAppleId(string appleId) { }

	// RVA: 0x3CEE654 Offset: 0x3CEE654 VA: 0x3CEE654 Slot: 21
	public bool IsSignedInToApple() { }

	// RVA: 0x3CEE674 Offset: 0x3CEE674 VA: 0x3CEE674 Slot: 24
	public bool IsBlockerIntroduced(int blockerId) { }

	// RVA: 0x3CEE71C Offset: 0x3CEE71C VA: 0x3CEE71C Slot: 25
	public void SetIsBlockerIntroduced(int blockerId) { }

	// RVA: 0x3CEE804 Offset: 0x3CEE804 VA: 0x3CEE804 Slot: 26
	public bool IsBlockerIntroducedOld(ItemType blockerType) { }

	// RVA: 0x3CEE898 Offset: 0x3CEE898 VA: 0x3CEE898 Slot: 84
	public void LateUpdate() { }

	// RVA: 0x3CEDF18 Offset: 0x3CEDF18 VA: 0x3CEDF18
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3CEE950 Offset: 0x3CEE950 VA: 0x3CEE950 Slot: 85
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3CEE1DC Offset: 0x3CEE1DC VA: 0x3CEE1DC
	private int GetLevelIncrement() { }

	// RVA: 0x3CEE958 Offset: 0x3CEE958 VA: 0x3CEE958 Slot: 86
	public void DataSynced() { }

	// RVA: 0x3CEE960 Offset: 0x3CEE960 VA: 0x3CEE960 Slot: 87
	public string SerializeModelForSync() { }

	// RVA: 0x3CEEA0C Offset: 0x3CEEA0C VA: 0x3CEEA0C Slot: 88
	public string GetSyncName() { }

	// RVA: 0x3CEEA4C Offset: 0x3CEEA4C VA: 0x3CEEA4C Slot: 89
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3CEEBBC Offset: 0x3CEEBBC VA: 0x3CEEBBC Slot: 90
	public void DeleteData() { }

	// RVA: 0x3CEED40 Offset: 0x3CEED40 VA: 0x3CEED40 Slot: 51
	public int GetSnitchRetryCount() { }

	// RVA: 0x3CEED5C Offset: 0x3CEED5C VA: 0x3CEED5C Slot: 52
	public void IncreaseSnitchRetryCount() { }

	// RVA: 0x3CEED88 Offset: 0x3CEED88 VA: 0x3CEED88 Slot: 53
	public void SetUserPublicId(string userPublicId) { }

	// RVA: 0x3CEED90 Offset: 0x3CEED90 VA: 0x3CEED90 Slot: 54
	public string GetUserPublicId() { }

	// RVA: 0x3CEED98 Offset: 0x3CEED98 VA: 0x3CEED98 Slot: 55
	public DateTime GetFirstOpenTime() { }

	// RVA: 0x3CEEDB4 Offset: 0x3CEEDB4 VA: 0x3CEEDB4 Slot: 56
	public List<string> GetProfileTokens() { }

	// RVA: 0x3CEEDD0 Offset: 0x3CEEDD0 VA: 0x3CEEDD0 Slot: 57
	public void AddProfileToken(string tokenId) { }

	// RVA: 0x3CEEF30 Offset: 0x3CEEF30 VA: 0x3CEEF30 Slot: 58
	public void ClearProfileTokens() { }

	// RVA: 0x3CEEFC0 Offset: 0x3CEEFC0 VA: 0x3CEEFC0 Slot: 59
	public List<ProfileFrameInfo> GetProfileFrames() { }

	// RVA: 0x3CEEFDC Offset: 0x3CEEFDC VA: 0x3CEEFDC Slot: 60
	public void AddProfileFrame(ProfileFrameInfo frameInfo) { }

	// RVA: 0x3CEF190 Offset: 0x3CEF190 VA: 0x3CEF190 Slot: 61
	public List<ProfileNameStyleInfo> GetProfileNameStyles() { }

	// RVA: 0x3CEF1AC Offset: 0x3CEF1AC VA: 0x3CEF1AC Slot: 62
	public void AddProfileNameStyle(ProfileNameStyleInfo nameStyleInfo) { }

	// RVA: 0x3CEF344 Offset: 0x3CEF344 VA: 0x3CEF344 Slot: 83
	public void InitializeForNewDownload() { }

	// RVA: 0x3CEF488 Offset: 0x3CEF488 VA: 0x3CEF488 Slot: 63
	public bool IsMegaShuffleIntroduced() { }

	// RVA: 0x3CEF4A4 Offset: 0x3CEF4A4 VA: 0x3CEF4A4 Slot: 65
	public void SetMegaShuffleIntroduced() { }

	// RVA: 0x3CEF4CC Offset: 0x3CEF4CC VA: 0x3CEF4CC Slot: 64
	public bool IsRevealIntroduced() { }

	// RVA: 0x3CEF4E8 Offset: 0x3CEF4E8 VA: 0x3CEF4E8 Slot: 66
	public void SetRevealIntroduced() { }

	// RVA: 0x3CEF510 Offset: 0x3CEF510 VA: 0x3CEF510 Slot: 67
	public void ResetMegaShuffleIntroduction() { }

	// RVA: 0x3CEF534 Offset: 0x3CEF534 VA: 0x3CEF534 Slot: 68
	public void ResetRevealIntroduction() { }

	// RVA: 0x3CEF558 Offset: 0x3CEF558 VA: 0x3CEF558 Slot: 69
	public void SetCountryCode(string dataCountryCode) { }

	// RVA: 0x3CEF560 Offset: 0x3CEF560 VA: 0x3CEF560 Slot: 70
	public string GetCountryCode() { }

	// RVA: 0x3CEF3BC Offset: 0x3CEF3BC VA: 0x3CEF3BC
	private void SetFourthBoosterIntroduced() { }

	// RVA: 0x3CEF568 Offset: 0x3CEF568 VA: 0x3CEF568 Slot: 71
	public void TryIncreaseAttemptsResultedWithStuck() { }

	// RVA: 0x3CEF5A8 Offset: 0x3CEF5A8 VA: 0x3CEF5A8 Slot: 72
	public int GetAttemptsResultedWithStuck() { }

	// RVA: 0x3CEF5C4 Offset: 0x3CEF5C4 VA: 0x3CEF5C4 Slot: 73
	public void CacheGameEconomyHierarchy(long hierarchy) { }

	// RVA: 0x3CEF5E8 Offset: 0x3CEF5E8 VA: 0x3CEF5E8 Slot: 74
	public long GetLastSeenGameEconomyHierarchy() { }

	// RVA: 0x3CEF604 Offset: 0x3CEF604 VA: 0x3CEF604 Slot: 75
	public string GetIdForAppleDeviceTransfer() { }

	// RVA: 0x3CEF620 Offset: 0x3CEF620 VA: 0x3CEF620 Slot: 76
	public void TrySetIdForDeviceTransfer(string userId) { }

	// RVA: 0x3CEF674 Offset: 0x3CEF674 VA: 0x3CEF674 Slot: 77
	public void TrySendDeviceMigrationEvent() { }
}

// Namespace: Modules.Contexts.Application.Player.Scripts