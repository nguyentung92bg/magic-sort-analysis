public class TeamQuestDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable // TypeDefIndex: 2269
{
	// Fields
	private readonly ISaveLoad<TeamQuestDataModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private TeamQuestDataModel _model; // 0x20
	private readonly CollectionService _collectionService; // 0x28
	private readonly RemoteConfigs _remoteConfigs; // 0x30

	// Methods

	// RVA: 0x2F0ECB0 Offset: 0x2F0ECB0 VA: 0x2F0ECB0
	public void .ctor(SaveLoad<TeamQuestDataModel> saveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x2F0ED78 Offset: 0x2F0ED78 VA: 0x2F0ED78 Slot: 4
	public void Initialize() { }

	// RVA: 0x2F0EEB4 Offset: 0x2F0EEB4 VA: 0x2F0EEB4 Slot: 5
	public void Dispose() { }

	// RVA: 0x2F0EEB8 Offset: 0x2F0EEB8 VA: 0x2F0EEB8 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2F0EF70 Offset: 0x2F0EF70 VA: 0x2F0EF70 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2F0EF78 Offset: 0x2F0EF78 VA: 0x2F0EF78 Slot: 8
	public void DataSynced() { }

	// RVA: 0x2F0EF80 Offset: 0x2F0EF80 VA: 0x2F0EF80 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x2F0F02C Offset: 0x2F0F02C VA: 0x2F0F02C Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2F0F06C Offset: 0x2F0F06C VA: 0x2F0F06C Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2F0F174 Offset: 0x2F0F174 VA: 0x2F0F174
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2F0F180 Offset: 0x2F0F180 VA: 0x2F0F180
	public TeamQuestTournamentCacheModel GetCachedTeamQuestModel() { }

	// RVA: 0x2F0F19C Offset: 0x2F0F19C VA: 0x2F0F19C
	public void SetTournamentCache(TeamQuestLeaderboardModel model) { }

	// RVA: 0x2F0F338 Offset: 0x2F0F338 VA: 0x2F0F338
	public TeamQuestStatusCacheModel GetCachedEventStatus() { }

	// RVA: 0x2F0F354 Offset: 0x2F0F354 VA: 0x2F0F354
	public void SetEventStatusCache(TeamQuestStatusModel statusModel) { }

	// RVA: 0x2F0F41C Offset: 0x2F0F41C VA: 0x2F0F41C
	public TeamQuestTournamentProgress GetTournamentProgress() { }

	// RVA: 0x2F0F438 Offset: 0x2F0F438 VA: 0x2F0F438
	public void SetQuestProgress(int extraEarnedProgress) { }

	// RVA: 0x2F0F480 Offset: 0x2F0F480 VA: 0x2F0F480
	private void IncrementUserScore(int amount) { }

	// RVA: 0x2F0F5B0 Offset: 0x2F0F5B0 VA: 0x2F0F5B0
	public bool GetIsTeamChatElementVisible() { }

	// RVA: 0x2F0F5CC Offset: 0x2F0F5CC VA: 0x2F0F5CC
	public void SetIsTeamChatElementVisible(bool isVisible) { }

	// RVA: 0x2F0EE80 Offset: 0x2F0EE80 VA: 0x2F0EE80
	public void MarkLobbySeen() { }

	// RVA: 0x2F0F5F4 Offset: 0x2F0F5F4 VA: 0x2F0F5F4
	public long GetEventEndDate() { }

	// RVA: 0x2F0F620 Offset: 0x2F0F620 VA: 0x2F0F620
	public long GetEventStartDate() { }

	// RVA: 0x2F0F64C Offset: 0x2F0F64C VA: 0x2F0F64C
	public bool IsIntroduced() { }

	// RVA: 0x2F0F680 Offset: 0x2F0F680 VA: 0x2F0F680
	public void SetEventIntroduced(bool isIntroduced) { }

	// RVA: 0x2F0F6B0 Offset: 0x2F0F6B0 VA: 0x2F0F6B0
	public bool IsEverIntroduced() { }

	// RVA: 0x2F0F6CC Offset: 0x2F0F6CC VA: 0x2F0F6CC
	public void SetEventEverIntroduced(bool isIntroduced) { }

	// RVA: 0x2F0F6F4 Offset: 0x2F0F6F4 VA: 0x2F0F6F4
	public bool IsJoinWindowEnded() { }

	// RVA: 0x2F0F718 Offset: 0x2F0F718 VA: 0x2F0F718
	public bool HasLeaderboard() { }

	// RVA: 0x2F0F778 Offset: 0x2F0F778 VA: 0x2F0F778
	public string GetTournamentID() { }

	// RVA: 0x2F0F79C Offset: 0x2F0F79C VA: 0x2F0F79C
	public void DeleteTournamentCache() { }

	// RVA: 0x2F0F814 Offset: 0x2F0F814 VA: 0x2F0F814
	public void ResetEventData() { }

	// RVA: 0x2F0F938 Offset: 0x2F0F938 VA: 0x2F0F938
	public int GetLobbyProgress() { }

	// RVA: 0x2F0F95C Offset: 0x2F0F95C VA: 0x2F0F95C
	public void SetIsJoined(bool isJoined) { }

	// RVA: 0x2F0F98C Offset: 0x2F0F98C VA: 0x2F0F98C
	public int GetLastSeenProgress() { }

	// RVA: 0x2F0F9B0 Offset: 0x2F0F9B0 VA: 0x2F0F9B0
	public int SetLastSeenProgress(int progress) { }

	// RVA: 0x2F0F9E0 Offset: 0x2F0F9E0 VA: 0x2F0F9E0
	public void SetStepAsClaimed(int stepIndex, string teamId) { }

	// RVA: 0x2F0FAC8 Offset: 0x2F0FAC8 VA: 0x2F0FAC8
	public RewardModel GetStepReward(TeamQuestStepModel stepModel) { }

	// RVA: 0x2F0FB04 Offset: 0x2F0FB04 VA: 0x2F0FB04
	public TeamQuestConfigModel GetConfig() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts