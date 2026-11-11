public class StrikeShowDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 2469
{
	// Fields
	private readonly ISaveLoad<StrikeShowModel> _saveLoad; // 0x10
	private StrikeShowModel _model; // 0x18
	private readonly RemoteConfigs _remoteConfigs; // 0x20
	private bool _isMarkedForLateUpdate; // 0x28
	private bool _isDataChangedSinceLastSave; // 0x29

	// Methods

	// RVA: 0x2AF3DDC Offset: 0x2AF3DDC VA: 0x2AF3DDC
	public void .ctor(ISaveLoad<StrikeShowModel> saveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x2AF3E20 Offset: 0x2AF3E20 VA: 0x2AF3E20 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AF3FCC Offset: 0x2AF3FCC VA: 0x2AF3FCC Slot: 5
	public void Dispose() { }

	// RVA: 0x2AF3FD0 Offset: 0x2AF3FD0 VA: 0x2AF3FD0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2AF4088 Offset: 0x2AF4088 VA: 0x2AF4088 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2AF4090 Offset: 0x2AF4090 VA: 0x2AF4090 Slot: 8
	public void DataSynced() { }

	// RVA: 0x2AF4098 Offset: 0x2AF4098 VA: 0x2AF4098 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x2AF4130 Offset: 0x2AF4130 VA: 0x2AF4130 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2AF4170 Offset: 0x2AF4170 VA: 0x2AF4170 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2AF42EC Offset: 0x2AF42EC VA: 0x2AF42EC Slot: 12
	public void DeleteData() { }

	// RVA: 0x2AF43BC Offset: 0x2AF43BC VA: 0x2AF43BC
	private void MarkForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x2AF43D0 Offset: 0x2AF43D0 VA: 0x2AF43D0
	public StrikeShowConfigModel GetConfig() { }

	// RVA: 0x2AF43F4 Offset: 0x2AF43F4 VA: 0x2AF43F4
	public string GetEventId() { }

	// RVA: 0x2AF445C Offset: 0x2AF445C VA: 0x2AF445C
	public long GetFinishTime() { }

	// RVA: 0x2AF4480 Offset: 0x2AF4480 VA: 0x2AF4480
	public long GetStartTime() { }

	// RVA: 0x2AF44A4 Offset: 0x2AF44A4 VA: 0x2AF44A4
	public long GetJoinWindowEndEpoch() { }

	// RVA: 0x2AF44C8 Offset: 0x2AF44C8 VA: 0x2AF44C8
	public string GetLeaderboardId() { }

	// RVA: 0x2AF4530 Offset: 0x2AF4530 VA: 0x2AF4530
	public bool IsJoinWindowEnded() { }

	// RVA: 0x2AF4650 Offset: 0x2AF4650 VA: 0x2AF4650
	public bool IsJoined() { }

	// RVA: 0x2AF4674 Offset: 0x2AF4674 VA: 0x2AF4674
	public bool IsFinished() { }

	// RVA: 0x2AF4698 Offset: 0x2AF4698 VA: 0x2AF4698
	public bool IsClaimed() { }

	// RVA: 0x2AF46BC Offset: 0x2AF46BC VA: 0x2AF46BC
	public bool IsIntroduced() { }

	// RVA: 0x2AF46E0 Offset: 0x2AF46E0 VA: 0x2AF46E0
	public bool IsPreJoinLevelPassed() { }

	// RVA: 0x2AF4704 Offset: 0x2AF4704 VA: 0x2AF4704
	public bool IsEventPopupIntroduced() { }

	// RVA: 0x2AF4728 Offset: 0x2AF4728 VA: 0x2AF4728
	public int GetScore() { }

	// RVA: 0x2AF474C Offset: 0x2AF474C VA: 0x2AF474C
	public int GetMultiplierIndex() { }

	// RVA: 0x2AF4770 Offset: 0x2AF4770 VA: 0x2AF4770
	public bool IsStreakEnabled() { }

	// RVA: 0x2AF4794 Offset: 0x2AF4794 VA: 0x2AF4794
	public void UpdateDataFromPreJoinResponse(GetPreJoinStrikeShowResponse responseModel) { }

	// RVA: 0x2AF4814 Offset: 0x2AF4814 VA: 0x2AF4814
	public void UpdateDataFromLeaderboardResponse(StrikeShowLeaderboardResponse responseModel) { }

	// RVA: 0x2AF498C Offset: 0x2AF498C VA: 0x2AF498C
	private static Dictionary<StrikeShowLeagueType, int> ConvertLeagueCountMap(IDictionary<long, long> countMap) { }

	// RVA: 0x2AF4CE4 Offset: 0x2AF4CE4 VA: 0x2AF4CE4
	private static List<StrikeShowPlayerModel> ConvertPlayers(IEnumerable<StrikeShowLeaderboardPlayer> responsePlayers) { }

	// RVA: 0x2AF4570 Offset: 0x2AF4570 VA: 0x2AF4570
	private static long GetNowUnixSeconds() { }

	// RVA: 0x2AF517C Offset: 0x2AF517C VA: 0x2AF517C
	public void SetIntroduced(bool isIntroduced) { }

	// RVA: 0x2AF51AC Offset: 0x2AF51AC VA: 0x2AF51AC
	public void SetEventPopupIntroduced(bool isIntroduced) { }

	// RVA: 0x2AF51DC Offset: 0x2AF51DC VA: 0x2AF51DC
	public bool IsInfoPopupEverShown() { }

	// RVA: 0x2AF51F8 Offset: 0x2AF51F8 VA: 0x2AF51F8
	public void IncreaseWinCount(StrikeShowLeagueType league) { }

	// RVA: 0x2AF525C Offset: 0x2AF525C VA: 0x2AF525C
	public void SetInfoPopupEverShown(bool isShown) { }

	// RVA: 0x2AF5284 Offset: 0x2AF5284 VA: 0x2AF5284
	public void SetClaimed(bool isClaimed) { }

	// RVA: 0x2AF52B4 Offset: 0x2AF52B4 VA: 0x2AF52B4
	public void SetPreJoinLevelPassed(bool isPassed) { }

	// RVA: 0x2AF52E4 Offset: 0x2AF52E4 VA: 0x2AF52E4
	public void SetScore(int score) { }

	// RVA: 0x2AF5310 Offset: 0x2AF5310 VA: 0x2AF5310
	public void SetMultiplierIndex(int multiplierIndex) { }

	// RVA: 0x2AF533C Offset: 0x2AF533C VA: 0x2AF533C
	public StrikeShowLeagueType GetCurrentLeague() { }

	// RVA: 0x2AF5390 Offset: 0x2AF5390 VA: 0x2AF5390
	public StrikeShowLeagueType GetLeague() { }

	// RVA: 0x2AF53B4 Offset: 0x2AF53B4 VA: 0x2AF53B4
	public long GetServerElo() { }

	// RVA: 0x2AF53D8 Offset: 0x2AF53D8 VA: 0x2AF53D8
	public int GetPromotionCountOfLeague(StrikeShowLeagueType league) { }

	// RVA: 0x2AF5450 Offset: 0x2AF5450 VA: 0x2AF5450
	public int GetDemotionCountOfLeague(StrikeShowLeagueType league) { }

	// RVA: 0x2AF54C8 Offset: 0x2AF54C8 VA: 0x2AF54C8
	public List<StrikeShowPlayerModel> GetLeaderboardPlayers() { }

	// RVA: 0x2AF54EC Offset: 0x2AF54EC VA: 0x2AF54EC
	public bool HasLeaderboardCache() { }

	// RVA: 0x2AF5554 Offset: 0x2AF5554 VA: 0x2AF5554
	public StrikeShowPlayerModel GetMyPlayer() { }

	// RVA: 0x2AF56CC Offset: 0x2AF56CC VA: 0x2AF56CC
	public StrikeShowPlayerModel GetLeaderboardLeader() { }

	// RVA: 0x2AF5848 Offset: 0x2AF5848 VA: 0x2AF5848
	public int GetLeaderboardBotCount() { }

	// RVA: 0x2AF59B0 Offset: 0x2AF59B0 VA: 0x2AF59B0
	public void IncreaseMyLeaderboardScore(int amount) { }

	// RVA: 0x2AF59E8 Offset: 0x2AF59E8 VA: 0x2AF59E8
	public void UpdateLeaderboardLocally() { }

	// RVA: 0x2AF5D24 Offset: 0x2AF5D24 VA: 0x2AF5D24
	public void ResetEventData() { }

	// RVA: 0x2AF5E3C Offset: 0x2AF5E3C VA: 0x2AF5E3C
	public int GetLastScoreIncreaseCount() { }

	// RVA: 0x2AF5E68 Offset: 0x2AF5E68 VA: 0x2AF5E68
	public void SetLastScoreIncreaseCount(int count) { }

	// RVA: 0x2AF5E94 Offset: 0x2AF5E94 VA: 0x2AF5E94
	public int GetLastSeenMultiplier() { }

	// RVA: 0x2AF5EC0 Offset: 0x2AF5EC0 VA: 0x2AF5EC0
	public void SetLastSeenMultiplier(int multiplier) { }

	// RVA: 0x2AF5374 Offset: 0x2AF5374 VA: 0x2AF5374
	public bool IsLeagueEnabled() { }

	// RVA: 0x2AF5EEC Offset: 0x2AF5EEC VA: 0x2AF5EEC
	public int GetEventType() { }

	// RVA: 0x2AF5F30 Offset: 0x2AF5F30 VA: 0x2AF5F30
	public void SetEventType(int eventType) { }
}

// Namespace: 
[CompilerGenerated]