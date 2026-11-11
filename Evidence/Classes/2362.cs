public class TeamArenaService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 2362
{
	// Fields
	private readonly CustomUpdater _customUpdater; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly TeamArenaStateService _stateService; // 0x20
	private readonly TeamArenaDataService _dataService; // 0x28
	private readonly TeamArenaRemoteService _remoteService; // 0x30
	private readonly RemoteConfigs _remoteConfig; // 0x38
	private readonly LobbyEventsService _lobbyEventsService; // 0x40
	private readonly ProfileSpriteCacheService _profileSpriteCacheService; // 0x48

	// Properties
	public TeamArenaStateService StateService { get; }
	public TeamArenaDataService DataService { get; }

	// Methods

	// RVA: 0x2DE5280 Offset: 0x2DE5280 VA: 0x2DE5280
	public TeamArenaStateService get_StateService() { }

	// RVA: 0x2DE5288 Offset: 0x2DE5288 VA: 0x2DE5288
	public TeamArenaDataService get_DataService() { }

	// RVA: 0x2DE5290 Offset: 0x2DE5290 VA: 0x2DE5290
	public void .ctor(CustomUpdater customUpdater, TeamsService teamsService, TeamArenaStateService stateService, TeamArenaDataService dataService, TeamArenaRemoteService remoteService, RemoteConfigs remoteConfig, LobbyEventsService lobbyEventsService, ProfileSpriteCacheService profileSpriteCacheService) { }

	// RVA: 0x2DE5364 Offset: 0x2DE5364 VA: 0x2DE5364 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DE5510 Offset: 0x2DE5510 VA: 0x2DE5510 Slot: 5
	public void Dispose() { }

	// RVA: 0x2DE56B4 Offset: 0x2DE56B4 VA: 0x2DE56B4 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x2DE5704 Offset: 0x2DE5704 VA: 0x2DE5704 Slot: 7
	public void InitializeData() { }

	// RVA: 0x2DE56B8 Offset: 0x2DE56B8 VA: 0x2DE56B8
	private void TryFetchCurrentEvent() { }

	// RVA: 0x2DE57C0 Offset: 0x2DE57C0 VA: 0x2DE57C0
	private void OnUserTeamDataUpdated() { }

	[AsyncStateMachine(typeof(TeamArenaService.<GetEvent>d__19))]
	// RVA: 0x2DE5708 Offset: 0x2DE5708 VA: 0x2DE5708
	private void GetEvent() { }

	[AsyncStateMachine(typeof(TeamArenaService.<TryJoinEvent>d__20))]
	// RVA: 0x2DE57FC Offset: 0x2DE57FC VA: 0x2DE57FC
	public Task<int> TryJoinEvent() { }

	[AsyncStateMachine(typeof(TeamArenaService.<TryClaimEvent>d__21))]
	// RVA: 0x2DE5910 Offset: 0x2DE5910 VA: 0x2DE5910
	public Task<int> TryClaimEvent() { }

	// RVA: 0x2DE5A24 Offset: 0x2DE5A24 VA: 0x2DE5A24
	private int ProcessEventData(ApiResponse<TeamArenaEventResponse> response) { }

	// RVA: 0x2DE5D2C Offset: 0x2DE5D2C VA: 0x2DE5D2C
	private void RequestProfileImages() { }

	// RVA: 0x2DE5EA8 Offset: 0x2DE5EA8 VA: 0x2DE5EA8
	public int GetRemainingTime() { }

	// RVA: 0x2DE5FA8 Offset: 0x2DE5FA8 VA: 0x2DE5FA8
	public DateTime GetEndDate() { }

	// RVA: 0x2DE6068 Offset: 0x2DE6068 VA: 0x2DE6068
	public long GetStartTimeAsUnixTime() { }

	// RVA: 0x2DE6094 Offset: 0x2DE6094 VA: 0x2DE6094
	public bool IsEventIntroducedEver() { }

	// RVA: 0x2DE60B8 Offset: 0x2DE60B8 VA: 0x2DE60B8
	public void SetIsEventIntroducedEver(bool value) { }

	// RVA: 0x2DE60E8 Offset: 0x2DE60E8 VA: 0x2DE60E8
	public TeamArenaLobbyIconViewModel GetTeamArenaIconButtonViewModel() { }

	// RVA: 0x2DE6754 Offset: 0x2DE6754 VA: 0x2DE6754
	public List<TeamArenaProgressStepViewModel> GetSteps() { }

	// RVA: 0x2DE69F0 Offset: 0x2DE69F0 VA: 0x2DE69F0
	public bool AllStepsAreCompleted() { }

	// RVA: 0x2DE61A8 Offset: 0x2DE61A8 VA: 0x2DE61A8
	public List<RewardModel> GetClaimableProgressRewards() { }

	// RVA: 0x2DE6A5C Offset: 0x2DE6A5C VA: 0x2DE6A5C
	public List<ITeamArenaLeaderboardViewModel> GetTeamLeaderboard(bool selectable = True) { }

	// RVA: 0x2DE7094 Offset: 0x2DE7094 VA: 0x2DE7094
	public List<ITeamArenaLeaderboardViewModel> GetPlayerLeaderboard(bool selectable = True) { }

	// RVA: 0x2DE79D4 Offset: 0x2DE79D4 VA: 0x2DE79D4
	public List<TeamArenaStepRewardViewModel> GetStepRewards() { }

	// RVA: 0x2DE7C4C Offset: 0x2DE7C4C VA: 0x2DE7C4C
	public TeamArenaEventResultViewModel TryGetEventResult() { }

	// RVA: 0x2DE8034 Offset: 0x2DE8034 VA: 0x2DE8034
	public int GetTotalStepsCount() { }

	// RVA: 0x2DE8084 Offset: 0x2DE8084 VA: 0x2DE8084
	public void ProgressSeen() { }

	// RVA: 0x2DE809C Offset: 0x2DE809C VA: 0x2DE809C
	public void ProgressRewardsClaimed() { }

	// RVA: 0x2DE8120 Offset: 0x2DE8120 VA: 0x2DE8120
	public void SetEventJoinPopupIntroduced() { }

	// RVA: 0x2DE815C Offset: 0x2DE815C VA: 0x2DE815C
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x2DE8190 Offset: 0x2DE8190 VA: 0x2DE8190
	public int GetLobbyProgress() { }

	// RVA: 0x2DE81BC Offset: 0x2DE81BC VA: 0x2DE81BC
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x2DE81D4 Offset: 0x2DE81D4 VA: 0x2DE81D4
	public void TryIncreaseProgress(LevelDifficultyType difficulty, int multiplier = 1) { }

	// RVA: 0x2DE825C Offset: 0x2DE825C VA: 0x2DE825C
	private int GetScore(LevelDifficultyType difficulty, int multiplier) { }

	// RVA: 0x2DE82A8 Offset: 0x2DE82A8 VA: 0x2DE82A8
	public bool UserTeamHasEnoughMemberToJoin() { }

	// RVA: 0x2DE8310 Offset: 0x2DE8310 VA: 0x2DE8310
	public TeamArenaInfoViewModel GetTeamArenaInfoViewModel() { }

	// RVA: 0x2DE83F8 Offset: 0x2DE83F8 VA: 0x2DE83F8
	public void SetInfoViewExpanded(bool expanded) { }

	// RVA: 0x2DE6308 Offset: 0x2DE6308 VA: 0x2DE6308
	private ValueTuple<int, int> GetUserTeamProgress() { }

	// RVA: 0x2DE8428 Offset: 0x2DE8428 VA: 0x2DE8428
	public int GetCurrentStep() { }

	// RVA: 0x2DE8454 Offset: 0x2DE8454 VA: 0x2DE8454
	public int GetEligibility() { }

	// RVA: 0x2DE84CC Offset: 0x2DE84CC VA: 0x2DE84CC
	public string GetTournamentId() { }

	// RVA: 0x2DE84F8 Offset: 0x2DE84F8 VA: 0x2DE84F8
	public long GetPreviousTeamElo() { }

	// RVA: 0x2DE8524 Offset: 0x2DE8524 VA: 0x2DE8524
	public long GetCurrentTeamElo() { }

	// RVA: 0x2DE8550 Offset: 0x2DE8550 VA: 0x2DE8550 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x2DE856C Offset: 0x2DE856C VA: 0x2DE856C Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x2DE85B4 Offset: 0x2DE85B4 VA: 0x2DE85B4
	public int GetMinMemberCountToJoinEvent() { }

	// RVA: 0x2DE85E0 Offset: 0x2DE85E0 VA: 0x2DE85E0
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x2DE85FC Offset: 0x2DE85FC VA: 0x2DE85FC
	public int GetEventScoreByLevelDifficulty(LevelDifficultyType difficulty, int multiplier) { }
}

// Namespace: Modules.Contexts.Home.TeamArena