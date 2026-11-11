public class TeamArenaDataService : IRestartableService, IService, IInitializable, IDisposable, ISyncable, ILateUpdate, IDeletable // TypeDefIndex: 2344
{
	// Fields
	private ISaveLoad<TeamArenaModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private readonly RemoteConfigs _remoteConfigs; // 0x20
	private readonly CollectionService _collectionService; // 0x28
	private TeamArenaModel _model; // 0x30

	// Methods

	// RVA: 0x2DE3184 Offset: 0x2DE3184 VA: 0x2DE3184
	public void .ctor(SaveLoad<TeamArenaModel> saveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x2DE324C Offset: 0x2DE324C VA: 0x2DE324C Slot: 4
	public void Initialize() { }

	// RVA: 0x2DE3350 Offset: 0x2DE3350 VA: 0x2DE3350 Slot: 5
	public void Dispose() { }

	// RVA: 0x2DE3354 Offset: 0x2DE3354 VA: 0x2DE3354
	public TeamArenaModel GetEventCache() { }

	// RVA: 0x2DE335C Offset: 0x2DE335C VA: 0x2DE335C
	public bool IsClaimed() { }

	// RVA: 0x2DE3380 Offset: 0x2DE3380 VA: 0x2DE3380
	public bool IsJoined() { }

	// RVA: 0x2DE33A4 Offset: 0x2DE33A4 VA: 0x2DE33A4
	public bool IsFinished() { }

	// RVA: 0x2DE33C8 Offset: 0x2DE33C8 VA: 0x2DE33C8
	public bool HasTournamentCache() { }

	// RVA: 0x2DE33FC Offset: 0x2DE33FC VA: 0x2DE33FC
	public bool IsJoinIntroduced() { }

	// RVA: 0x2DE3418 Offset: 0x2DE3418 VA: 0x2DE3418
	public long GetEventEndTime() { }

	// RVA: 0x2DE343C Offset: 0x2DE343C VA: 0x2DE343C
	public bool IsEventIntroducedEver() { }

	// RVA: 0x2DE3458 Offset: 0x2DE3458 VA: 0x2DE3458
	public void SetEventIntroducedEver(bool value) { }

	// RVA: 0x2DE3494 Offset: 0x2DE3494 VA: 0x2DE3494
	public bool IsJoinWindowEnded() { }

	// RVA: 0x2DE34B8 Offset: 0x2DE34B8 VA: 0x2DE34B8
	public void ResetEventData() { }

	// RVA: 0x2DE35D8 Offset: 0x2DE35D8 VA: 0x2DE35D8
	public void ResetTournamentCache() { }

	// RVA: 0x2DE3654 Offset: 0x2DE3654 VA: 0x2DE3654 Slot: 6
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2DE365C Offset: 0x2DE365C VA: 0x2DE365C Slot: 7
	public void DataSynced() { }

	// RVA: 0x2DE3664 Offset: 0x2DE3664 VA: 0x2DE3664 Slot: 8
	public string SerializeModelForSync() { }

	// RVA: 0x2DE36C0 Offset: 0x2DE36C0 VA: 0x2DE36C0 Slot: 9
	public string GetSyncName() { }

	// RVA: 0x2DE3700 Offset: 0x2DE3700 VA: 0x2DE3700 Slot: 10
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2DE3480 Offset: 0x2DE3480 VA: 0x2DE3480
	private void MarkForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x2DE3788 Offset: 0x2DE3788 VA: 0x2DE3788 Slot: 11
	public void LateUpdate() { }

	// RVA: 0x2DE3840 Offset: 0x2DE3840 VA: 0x2DE3840 Slot: 12
	public void DeleteData() { }

	// RVA: 0x2DE390C Offset: 0x2DE390C VA: 0x2DE390C
	public void UpdateStatusCache(TeamArenaStatusCacheModel statusCache) { }

	// RVA: 0x2DE3938 Offset: 0x2DE3938 VA: 0x2DE3938
	public void UpdateTournamentCache(TeamArenaTournamentCacheModel tournamentCache) { }

	// RVA: 0x2DE3964 Offset: 0x2DE3964 VA: 0x2DE3964
	public void UpdateSeenProgress() { }

	// RVA: 0x2DE3994 Offset: 0x2DE3994 VA: 0x2DE3994
	public void SetJoinIntroduced(bool isIntroduced) { }

	// RVA: 0x2DE39BC Offset: 0x2DE39BC VA: 0x2DE39BC
	public void IncreaseProgress(int progress) { }

	// RVA: 0x2DE3E20 Offset: 0x2DE3E20 VA: 0x2DE3E20
	public void ResetLobbyProgressCount() { }

	// RVA: 0x2DE3E4C Offset: 0x2DE3E4C VA: 0x2DE3E4C
	public void UpdateLastClaimedStep() { }

	// RVA: 0x2DE3DD0 Offset: 0x2DE3DD0 VA: 0x2DE3DD0
	public List<TeamArenaStepModel> GetSteps() { }

	// RVA: 0x2DE3E7C Offset: 0x2DE3E7C VA: 0x2DE3E7C
	public List<RewardModel> GetLeaderboardRewards() { }

	// RVA: 0x2DE3ECC Offset: 0x2DE3ECC VA: 0x2DE3ECC
	public List<RewardModel> GetTeamLeaderboardRewards() { }

	// RVA: 0x2DE3F1C Offset: 0x2DE3F1C VA: 0x2DE3F1C
	public bool GetCanContribute() { }

	// RVA: 0x2DE3F40 Offset: 0x2DE3F40 VA: 0x2DE3F40
	public int GetProgress() { }

	// RVA: 0x2DE3F64 Offset: 0x2DE3F64 VA: 0x2DE3F64
	public string GetTournamentId() { }

	// RVA: 0x2DE3FC8 Offset: 0x2DE3FC8 VA: 0x2DE3FC8
	public bool GetInfoViewExpanded() { }

	// RVA: 0x2DE3FE4 Offset: 0x2DE3FE4 VA: 0x2DE3FE4
	public void SetInfoViewExpanded(bool expanded) { }

	// RVA: 0x2DE400C Offset: 0x2DE400C VA: 0x2DE400C
	public void SetIsJoined(bool isJoined) { }
}

// Namespace: Modules.Contexts.Home.TeamArena