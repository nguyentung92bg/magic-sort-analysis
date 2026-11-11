public interface IPlayerService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IInitializeForNewDownload // TypeDefIndex: 5108
{
	// Properties
	public abstract bool DeviceTransferDetected { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int PeekNextLevel();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int GetLevel();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SetLevel(int level);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void IncreaseLevel();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void IncreaseRetryCount();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void IncreaseDailyRetryCount();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void SetLastEnteredDaily(DateTime dateTime);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void SetIsLevelInProgress(bool isLevelInProgress);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool GetIsLevelInProgress();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract int GetRetryCount();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract int GetDailyRetryCount();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract string GetUserId();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract string GetFacebookId();

	// RVA: -1 Offset: -1 Slot: 13
	public abstract string GetAppleId();

	// RVA: -1 Offset: -1 Slot: 14
	public abstract ProfileInfo GetProfileInfo();

	// RVA: -1 Offset: -1 Slot: 15
	public abstract void SetProfileInfo(ProfileInfo profileInfo);

	// RVA: -1 Offset: -1 Slot: 16
	public abstract bool IsSignedInToFacebook();

	// RVA: -1 Offset: -1 Slot: 17
	public abstract bool IsSignedInToApple();

	// RVA: -1 Offset: -1 Slot: 18
	public abstract void SetFacebookId(string facebookId);

	// RVA: -1 Offset: -1 Slot: 19
	public abstract void SetAppleId(string appleId);

	// RVA: -1 Offset: -1 Slot: 20
	public abstract bool IsBlockerIntroduced(int blockerId);

	// RVA: -1 Offset: -1 Slot: 21
	public abstract void SetIsBlockerIntroduced(int blockerId);

	// RVA: -1 Offset: -1 Slot: 22
	public abstract bool IsBlockerIntroducedOld(ItemType blockerType);

	// RVA: -1 Offset: -1 Slot: 23
	public abstract bool TryIncreaseFirstTryLevelWinCount(bool isTutorialLevel);

	// RVA: -1 Offset: -1 Slot: 24
	public abstract int GetFirstTryLevelWinCount();

	// RVA: -1 Offset: -1 Slot: 25
	public abstract int GetSessionCount();

	// RVA: -1 Offset: -1 Slot: 26
	public abstract void SaveLastSelectedSeedId(string selectedSeedId);

	// RVA: -1 Offset: -1 Slot: 27
	public abstract string GetLastSelectedSeedId();

	// RVA: -1 Offset: -1 Slot: 28
	public abstract void CacheLevelSeeds(LevelSeedCacheData cacheData);

	// RVA: -1 Offset: -1 Slot: 29
	public abstract LevelSeedCacheData GetLevelSeedCache();

	// RVA: -1 Offset: -1 Slot: 30
	public abstract void UpdateUserName(string dataUserName);

	// RVA: -1 Offset: -1 Slot: 31
	public abstract void IncreaseStreakCount();

	// RVA: -1 Offset: -1 Slot: 32
	public abstract void ResetStreakCount();

	// RVA: -1 Offset: -1 Slot: 33
	public abstract int GetStreakCount();

	// RVA: -1 Offset: -1 Slot: 34
	public abstract void IncreaseStreakCountStartsFrom20();

	// RVA: -1 Offset: -1 Slot: 35
	public abstract void ResetStreakCountStartsFrom20();

	// RVA: -1 Offset: -1 Slot: 36
	public abstract int GetStreakCountStartsFrom20();

	// RVA: -1 Offset: -1 Slot: 37
	public abstract void TryCacheFirstCpm(double adInfoRevenue);

	// RVA: -1 Offset: -1 Slot: 38
	public abstract double GetFirstCpmAsDollar();

	// RVA: -1 Offset: -1 Slot: 39
	public abstract void TryCacheLastCpm(double cpmAsDollar);

	// RVA: -1 Offset: -1 Slot: 40
	public abstract double GetLastCpmAsDollar();

	// RVA: -1 Offset: -1 Slot: 41
	public abstract bool CanUseNewFailFlow();

	// RVA: -1 Offset: -1 Slot: 42
	public abstract AdjustAttributionModel GetAttributionModel();

	// RVA: -1 Offset: -1 Slot: 43
	public abstract void SetAttributionModel(AdjustAttributionModel adjustAttributionModel);

	// RVA: -1 Offset: -1 Slot: 44
	public abstract bool HasAttributionModel();

	// RVA: -1 Offset: -1 Slot: 45
	public abstract bool IsOldUserBefore920();

	// RVA: -1 Offset: -1 Slot: 46
	public abstract bool CanUsePlayIntegrityToken();

	// RVA: -1 Offset: -1 Slot: 47
	public abstract int GetSnitchRetryCount();

	// RVA: -1 Offset: -1 Slot: 48
	public abstract void IncreaseSnitchRetryCount();

	// RVA: -1 Offset: -1 Slot: 49
	public abstract void SetUserPublicId(string userPublicId);

	// RVA: -1 Offset: -1 Slot: 50
	public abstract string GetUserPublicId();

	// RVA: -1 Offset: -1 Slot: 51
	public abstract DateTime GetFirstOpenTime();

	// RVA: -1 Offset: -1 Slot: 52
	public abstract List<string> GetProfileTokens();

	// RVA: -1 Offset: -1 Slot: 53
	public abstract void AddProfileToken(string tokenId);

	// RVA: -1 Offset: -1 Slot: 54
	public abstract void ClearProfileTokens();

	// RVA: -1 Offset: -1 Slot: 55
	public abstract List<ProfileFrameInfo> GetProfileFrames();

	// RVA: -1 Offset: -1 Slot: 56
	public abstract void AddProfileFrame(ProfileFrameInfo frameInfo);

	// RVA: -1 Offset: -1 Slot: 57
	public abstract List<ProfileNameStyleInfo> GetProfileNameStyles();

	// RVA: -1 Offset: -1 Slot: 58
	public abstract void AddProfileNameStyle(ProfileNameStyleInfo nameStyleInfo);

	// RVA: -1 Offset: -1 Slot: 59
	public abstract bool IsMegaShuffleIntroduced();

	// RVA: -1 Offset: -1 Slot: 60
	public abstract bool IsRevealIntroduced();

	// RVA: -1 Offset: -1 Slot: 61
	public abstract void SetMegaShuffleIntroduced();

	// RVA: -1 Offset: -1 Slot: 62
	public abstract void SetRevealIntroduced();

	// RVA: -1 Offset: -1 Slot: 63
	public abstract void ResetMegaShuffleIntroduction();

	// RVA: -1 Offset: -1 Slot: 64
	public abstract void ResetRevealIntroduction();

	// RVA: -1 Offset: -1 Slot: 65
	public abstract void SetCountryCode(string countryCode);

	// RVA: -1 Offset: -1 Slot: 66
	public abstract string GetCountryCode();

	// RVA: -1 Offset: -1 Slot: 67
	public abstract void TryIncreaseAttemptsResultedWithStuck();

	// RVA: -1 Offset: -1 Slot: 68
	public abstract int GetAttemptsResultedWithStuck();

	// RVA: -1 Offset: -1 Slot: 69
	public abstract void CacheGameEconomyHierarchy(long hierarchy);

	// RVA: -1 Offset: -1 Slot: 70
	public abstract long GetLastSeenGameEconomyHierarchy();

	// RVA: -1 Offset: -1 Slot: 71
	public abstract string GetIdForAppleDeviceTransfer();

	// RVA: -1 Offset: -1 Slot: 72
	public abstract void TrySetIdForDeviceTransfer(string userId);

	// RVA: -1 Offset: -1 Slot: 73
	public abstract void TrySendDeviceMigrationEvent();

	// RVA: -1 Offset: -1 Slot: 74
	public abstract bool get_DeviceTransferDetected();

	// RVA: -1 Offset: -1 Slot: 75
	public abstract void set_DeviceTransferDetected(bool value);
}

// Namespace: Modules.Contexts.Application.Player.Scripts