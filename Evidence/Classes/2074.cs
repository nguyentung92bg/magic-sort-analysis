public class TeamsDataService : ILateUpdate, ISyncable, IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2074
{
	// Fields
	private ISaveLoad<TeamsDataModel> _saveLoad; // 0x10
	private TeamsDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21
	private ObjectPool<LeaderboardTeam> _objectPool; // 0x28
	private int _maxHelpedMessageCount; // 0x30

	// Methods

	// RVA: 0x35A78A4 Offset: 0x35A78A4 VA: 0x35A78A4
	public void .ctor(ISaveLoad<TeamsDataModel> saveLoad) { }

	// RVA: 0x35A78D4 Offset: 0x35A78D4 VA: 0x35A78D4 Slot: 10
	public void Initialize() { }

	// RVA: 0x35A7BA4 Offset: 0x35A7BA4 VA: 0x35A7BA4 Slot: 11
	public void Dispose() { }

	// RVA: 0x35A7BA8 Offset: 0x35A7BA8 VA: 0x35A7BA8 Slot: 4
	public void LateUpdate() { }

	// RVA: 0x35A7C60 Offset: 0x35A7C60 VA: 0x35A7C60
	private void MarkForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x35A7C74 Offset: 0x35A7C74 VA: 0x35A7C74
	public bool IsTeamsIntroduced() { }

	// RVA: 0x35A7C98 Offset: 0x35A7C98 VA: 0x35A7C98
	public bool UserJoinedTeam() { }

	// RVA: 0x35A7CBC Offset: 0x35A7CBC VA: 0x35A7CBC
	public void SetTeamsIntroduced(bool isIntroduced) { }

	// RVA: 0x35A7D00 Offset: 0x35A7D00 VA: 0x35A7D00
	public void SetUserJoinedTeam(bool userJoined) { }

	// RVA: 0x35A7D44 Offset: 0x35A7D44 VA: 0x35A7D44
	public List<TeamFreeLifeModel> GetLives() { }

	// RVA: 0x35A7DD0 Offset: 0x35A7DD0 VA: 0x35A7DD0
	public List<TeamFreeLifeModel> GetClaimedLives() { }

	// RVA: 0x35A7EE8 Offset: 0x35A7EE8 VA: 0x35A7EE8
	public List<TeamFreeLifeModel> GetUnclaimedLives() { }

	// RVA: 0x35A8000 Offset: 0x35A8000 VA: 0x35A8000 Slot: 5
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x35A8008 Offset: 0x35A8008 VA: 0x35A8008 Slot: 6
	public void DataSynced() { }

	// RVA: 0x35A8010 Offset: 0x35A8010 VA: 0x35A8010 Slot: 7
	public string SerializeModelForSync() { }

	// RVA: 0x35A8078 Offset: 0x35A8078 VA: 0x35A8078 Slot: 8
	public string GetSyncName() { }

	// RVA: 0x35A80B8 Offset: 0x35A80B8 VA: 0x35A80B8 Slot: 9
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x35A834C Offset: 0x35A834C VA: 0x35A834C
	private TeamFreeLifeModel GetFreeLife(List<TeamFreeLifeModel> lives, string messageId, string senderId) { }

	// RVA: 0x35A84DC Offset: 0x35A84DC VA: 0x35A84DC
	public void AddFreeLife(TeamFreeLifeModel freeLife) { }

	// RVA: 0x35A85A4 Offset: 0x35A85A4 VA: 0x35A85A4
	public void RemoveClaimedLives() { }

	// RVA: 0x35A86C8 Offset: 0x35A86C8 VA: 0x35A86C8
	public bool LifeClaimed(string messageId, string userId) { }

	// RVA: 0x35A8880 Offset: 0x35A8880 VA: 0x35A8880
	public void SetCountryLeaderboard(GetTeamLeaderboardResponse leaderboardResponse) { }

	// RVA: 0x35A8BA4 Offset: 0x35A8BA4 VA: 0x35A8BA4
	public void SetGlobalLeaderboard(GetTeamLeaderboardResponse leaderboardResponse) { }

	// RVA: 0x35A8EC8 Offset: 0x35A8EC8 VA: 0x35A8EC8
	public List<LeaderboardTeam> GetGlobalLeaderboard() { }

	// RVA: 0x35A8EE4 Offset: 0x35A8EE4 VA: 0x35A8EE4
	public List<LeaderboardTeam> GetCountryLeaderboard() { }

	// RVA: 0x35A8F00 Offset: 0x35A8F00 VA: 0x35A8F00
	public void SetUserBelongsToTeam(bool belongsToTeam) { }

	// RVA: 0x35A8F3C Offset: 0x35A8F3C VA: 0x35A8F3C
	public bool IsUserBelongsToTeam() { }

	// RVA: 0x35A62CC Offset: 0x35A62CC VA: 0x35A62CC
	public void AddToHelpedMessages(string messageId) { }

	// RVA: 0x35A6148 Offset: 0x35A6148 VA: 0x35A6148
	public bool HasHelpedMessage(string messageId) { }

	// RVA: 0x35A6C18 Offset: 0x35A6C18 VA: 0x35A6C18
	public void CacheMessageSend(int messageType, string context) { }

	// RVA: 0x35A6CA8 Offset: 0x35A6CA8 VA: 0x35A6CA8
	public TeamsMessageCacheModel GetCachedMessage() { }

	// RVA: 0x35A6CC4 Offset: 0x35A6CC4 VA: 0x35A6CC4
	public void ClearCachedMessage() { }

	// RVA: 0x35A8F58 Offset: 0x35A8F58 VA: 0x35A8F58
	public bool GetUserTeamInfoSend() { }

	// RVA: 0x35A8F7C Offset: 0x35A8F7C VA: 0x35A8F7C
	public void SetUserTeamInfoSend(bool send) { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI