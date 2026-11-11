public class DuckFestivalDataService : ISyncable, ILateUpdate, IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4381
{
	// Fields
	private DuckFestivalModel _model; // 0x10
	private DuckFestivalSessionCacheModel _sessionCacheModel; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private readonly SaveLoad<DuckFestivalModel> _saveLoad; // 0x28
	private bool _isMarkedForLateUpdate; // 0x30
	private bool _isDataChangedSinceLastSave; // 0x31

	// Methods

	// RVA: 0x1B92C54 Offset: 0x1B92C54 VA: 0x1B92C54
	public void .ctor(SaveLoad<DuckFestivalModel> saveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x1B92C98 Offset: 0x1B92C98 VA: 0x1B92C98 Slot: 10
	public void Initialize() { }

	// RVA: 0x1B92D40 Offset: 0x1B92D40 VA: 0x1B92D40
	public void MarkLastSeenData() { }

	// RVA: 0x1B93148 Offset: 0x1B93148 VA: 0x1B93148
	public bool HasCache() { }

	// RVA: 0x1B93170 Offset: 0x1B93170 VA: 0x1B93170
	public bool IsEventEnabled() { }

	// RVA: 0x1B9319C Offset: 0x1B9319C VA: 0x1B9319C
	public int GetEventOpenLevel() { }

	// RVA: 0x1B931C8 Offset: 0x1B931C8 VA: 0x1B931C8
	public int GetProgress() { }

	// RVA: 0x1B931E4 Offset: 0x1B931E4 VA: 0x1B931E4
	public bool HasLeaderboardId() { }

	// RVA: 0x1B93210 Offset: 0x1B93210 VA: 0x1B93210
	public bool IsFinished() { }

	// RVA: 0x1B9322C Offset: 0x1B9322C VA: 0x1B9322C
	public bool IsClaimed() { }

	// RVA: 0x1B93248 Offset: 0x1B93248 VA: 0x1B93248
	public bool IsIntroduced() { }

	// RVA: 0x1B93264 Offset: 0x1B93264 VA: 0x1B93264
	public long GetEventEndDate() { }

	// RVA: 0x1B93280 Offset: 0x1B93280 VA: 0x1B93280
	public long GetPreJoinEndDate() { }

	// RVA: 0x1B9329C Offset: 0x1B9329C VA: 0x1B9329C
	public void IncreaseScore(int increment) { }

	// RVA: 0x1B93870 Offset: 0x1B93870 VA: 0x1B93870
	private void SortLeaderboardIfNeeded() { }

	// RVA: 0x1B939FC Offset: 0x1B939FC VA: 0x1B939FC
	public bool IsInfoEverShown() { }

	// RVA: 0x1B93A18 Offset: 0x1B93A18 VA: 0x1B93A18
	public void SetInfoShown(bool status) { }

	// RVA: 0x1B93A40 Offset: 0x1B93A40 VA: 0x1B93A40 Slot: 9
	public void LateUpdate() { }

	// RVA: 0x1B93AA4 Offset: 0x1B93AA4 VA: 0x1B93AA4 Slot: 4
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x1B93AAC Offset: 0x1B93AAC VA: 0x1B93AAC Slot: 5
	public void DataSynced() { }

	// RVA: 0x1B9313C Offset: 0x1B9313C VA: 0x1B9313C
	private void MarkDataForLateUpdate() { }

	// RVA: 0x1B93AB4 Offset: 0x1B93AB4 VA: 0x1B93AB4 Slot: 6
	public string SerializeModelForSync() { }

	// RVA: 0x1B93B44 Offset: 0x1B93B44 VA: 0x1B93B44 Slot: 7
	public string GetSyncName() { }

	// RVA: 0x1B93B84 Offset: 0x1B93B84 VA: 0x1B93B84 Slot: 8
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x1B93C38 Offset: 0x1B93C38 VA: 0x1B93C38 Slot: 11
	public void Dispose() { }

	// RVA: 0x1B93C3C Offset: 0x1B93C3C VA: 0x1B93C3C
	public void DeleteCache() { }

	// RVA: 0x1B93D24 Offset: 0x1B93D24 VA: 0x1B93D24
	public void UpdateDataFromRemoteResponse(DuckFestivalResponse responseData) { }

	// RVA: 0x1B93E40 Offset: 0x1B93E40 VA: 0x1B93E40
	public void SetIsIntroduced(bool state) { }

	// RVA: 0x1B93E68 Offset: 0x1B93E68 VA: 0x1B93E68
	public List<DuckFestivalRewardStepModel> GetRewardSteps() { }

	// RVA: 0x1B93F18 Offset: 0x1B93F18 VA: 0x1B93F18
	public int GetFirstStepCompleteScore() { }

	// RVA: 0x1B93F7C Offset: 0x1B93F7C VA: 0x1B93F7C
	public List<DuckFestivalLeaderboardPlayer> GetLeaderboardPlayers() { }

	// RVA: 0x1B92DF0 Offset: 0x1B92DF0 VA: 0x1B92DF0
	public DuckFestivalLeaderboardPlayer GetMyPlayer() { }

	// RVA: 0x1B93FA0 Offset: 0x1B93FA0 VA: 0x1B93FA0
	public void MarkSeenProgress() { }

	// RVA: 0x1B92F5C Offset: 0x1B92F5C VA: 0x1B92F5C
	public void MarkLobbySeen() { }

	// RVA: 0x1B94160 Offset: 0x1B94160 VA: 0x1B94160
	public Nullable<int> TryGetLastClaimedStep() { }

	// RVA: 0x1B9417C Offset: 0x1B9417C VA: 0x1B9417C
	public int GetTournamentType() { }

	// RVA: 0x1B941A8 Offset: 0x1B941A8 VA: 0x1B941A8
	public string GetTournamentId() { }

	// RVA: 0x1B941C4 Offset: 0x1B941C4 VA: 0x1B941C4
	public List<RewardModel> GetLeaderboardRewards() { }

	// RVA: 0x1B94274 Offset: 0x1B94274 VA: 0x1B94274
	public bool IsPreJoinProgressCompleted() { }

	// RVA: 0x1B934C8 Offset: 0x1B934C8 VA: 0x1B934C8
	public List<DuckFestivalProgressModel> GetProgressModels() { }

	// RVA: 0x1B9429C Offset: 0x1B9429C VA: 0x1B9429C
	private DuckFestivalProgressModel GetProgressModelFromRewardModel(DuckFestivalRewardStepModel duckFestivalRewardStepModel, int stepIndex, int totalStepCount) { }

	// RVA: 0x1B9433C Offset: 0x1B9433C VA: 0x1B9433C
	public int GetLastSeenRank() { }

	// RVA: 0x1B94358 Offset: 0x1B94358 VA: 0x1B94358
	public void SetLastSeenRank(int currentRank) { }

	// RVA: 0x1B9437C Offset: 0x1B9437C VA: 0x1B9437C
	public int GetLastSeenLeaderboardProgress() { }

	// RVA: 0x1B94398 Offset: 0x1B94398 VA: 0x1B94398
	public bool IsFirstStepSeen() { }

	// RVA: 0x1B94404 Offset: 0x1B94404 VA: 0x1B94404
	public int GetUnclaimCount() { }

	// RVA: 0x1B94570 Offset: 0x1B94570 VA: 0x1B94570
	public int GetRewardStage() { }

	// RVA: 0x1B946CC Offset: 0x1B946CC VA: 0x1B946CC
	public bool IsJoinWindowEnded() { }

	// RVA: 0x1B946E8 Offset: 0x1B946E8 VA: 0x1B946E8
	public void SetMyPlayerLastSeenLeaderboardProgress(int progress) { }

	// RVA: 0x1B92D90 Offset: 0x1B92D90 VA: 0x1B92D90
	public bool HasLeaderboard() { }

	// RVA: 0x1B9470C Offset: 0x1B9470C VA: 0x1B9470C
	public int GetTournamentStartTime() { }

	// RVA: 0x1B94728 Offset: 0x1B94728 VA: 0x1B94728
	public long GetAvgProgress() { }

	// RVA: 0x1B94744 Offset: 0x1B94744 VA: 0x1B94744
	public int GetElo() { }

	// RVA: 0x1B93810 Offset: 0x1B93810 VA: 0x1B93810
	private void OnStepComplete(DuckFestivalProgressModel progressModel) { }

	// RVA: 0x1B94760 Offset: 0x1B94760 VA: 0x1B94760
	public int GetExtraEarnedProgress() { }

	// RVA: 0x1B9477C Offset: 0x1B9477C VA: 0x1B9477C
	public List<DuckFestivalProgressViewModel> GetProgressViewModels() { }

	// RVA: 0x1B94984 Offset: 0x1B94984 VA: 0x1B94984
	public string GetLeaderboardId() { }

	// RVA: 0x1B949B4 Offset: 0x1B949B4 VA: 0x1B949B4
	public int GetPreviousElo() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts