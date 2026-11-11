public class TeamQuestService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, ILobbyShownService, IDataInitializable // TypeDefIndex: 2291
{
	// Fields
	private readonly CustomUpdater _customUpdater; // 0x10
	private readonly TeamQuestStateService _stateService; // 0x18
	private readonly TeamQuestDataService _dataService; // 0x20
	private readonly TeamQuestRemoteService _remoteService; // 0x28
	private readonly TeamsService _teamsService; // 0x30
	private readonly RewardService _rewardService; // 0x38
	private readonly RemoteConfigs _remoteConfigs; // 0x40
	private readonly LobbyEventsService _lobbyEventsService; // 0x48
	private readonly AssetManager _assetManager; // 0x50
	private const int NotActiveStatusCode = 425;
	private string _teamQuestBundleId; // 0x58
	private bool _shouldShowPopupAfterJoin; // 0x60

	// Properties
	public TeamQuestStateService StateService { get; }
	public TeamQuestDataService DataService { get; }

	// Methods

	// RVA: 0x2DD5D08 Offset: 0x2DD5D08 VA: 0x2DD5D08
	public TeamQuestStateService get_StateService() { }

	// RVA: 0x2DD5D10 Offset: 0x2DD5D10 VA: 0x2DD5D10
	public TeamQuestDataService get_DataService() { }

	// RVA: 0x2DD5D18 Offset: 0x2DD5D18 VA: 0x2DD5D18
	public void .ctor(TeamQuestStateService stateService, TeamQuestDataService teamQuestDataService, CustomUpdater customUpdater, TeamQuestRemoteService remoteService, RemoteConfigs remoteConfigs, TeamsService teamsService, RewardService rewardService, LobbyEventsService lobbyEventsService, AssetManager assetManager) { }

	// RVA: 0x2DD5E04 Offset: 0x2DD5E04 VA: 0x2DD5E04 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DD5FD8 Offset: 0x2DD5FD8 VA: 0x2DD5FD8 Slot: 5
	public void Dispose() { }

	// RVA: 0x2DD617C Offset: 0x2DD617C VA: 0x2DD617C Slot: 6
	public void IntervalUpdate() { }

	[AsyncStateMachine(typeof(TeamQuestService.<InitializeData>d__20))]
	// RVA: 0x2DD62E0 Offset: 0x2DD62E0 VA: 0x2DD62E0 Slot: 9
	public void InitializeData() { }

	// RVA: 0x2DD6194 Offset: 0x2DD6194 VA: 0x2DD6194
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(TeamQuestService.<FetchCurrentEvent>d__22))]
	// RVA: 0x2DD63D4 Offset: 0x2DD63D4 VA: 0x2DD63D4
	private void FetchCurrentEvent() { }

	[AsyncStateMachine(typeof(TeamQuestService.<SendClaimRequest>d__23))]
	// RVA: 0x2DD648C Offset: 0x2DD648C VA: 0x2DD648C
	public Task<bool> SendClaimRequest() { }

	[AsyncStateMachine(typeof(TeamQuestService.<TryJoin>d__24))]
	// RVA: 0x2DD65A0 Offset: 0x2DD65A0 VA: 0x2DD65A0
	public Task<bool> TryJoin() { }

	// RVA: 0x2DD66B4 Offset: 0x2DD66B4 VA: 0x2DD66B4
	private void DeleteCacheIfTeamChanged() { }

	// RVA: 0x2DD6728 Offset: 0x2DD6728 VA: 0x2DD6728
	private bool IsLobbyButtonVisible() { }

	// RVA: 0x2DD679C Offset: 0x2DD679C VA: 0x2DD679C
	public int GetTotalProgress() { }

	// RVA: 0x2DD67C4 Offset: 0x2DD67C4 VA: 0x2DD67C4
	public void IncreaseProgress(int scoreIncrement) { }

	// RVA: 0x2DD67E0 Offset: 0x2DD67E0 VA: 0x2DD67E0
	public void TryIncreaseTaskProgress(LevelDifficultyType difficultyType, int additionalMultiplier = 1) { }

	// RVA: 0x2DD6910 Offset: 0x2DD6910 VA: 0x2DD6910
	private int GetScore(LevelDifficultyType difficultyType, int multiplier) { }

	// RVA: 0x2DD699C Offset: 0x2DD699C VA: 0x2DD699C
	private bool ChangeTournamentCache(ApiResponse<TeamQuestResponseModel> response) { }

	// RVA: 0x2DD6B3C Offset: 0x2DD6B3C VA: 0x2DD6B3C
	public int GetRemainingSeconds() { }

	// RVA: 0x2DD6C40 Offset: 0x2DD6C40 VA: 0x2DD6C40
	public DateTime GetEndDate() { }

	// RVA: 0x2DD6CD4 Offset: 0x2DD6CD4 VA: 0x2DD6CD4
	public int GetStartDateAsUnix() { }

	// RVA: 0x2DD6CF4 Offset: 0x2DD6CF4 VA: 0x2DD6CF4
	public string GetTeamID() { }

	// RVA: 0x2DD6708 Offset: 0x2DD6708 VA: 0x2DD6708
	private void DeleteLeaderboardCache() { }

	// RVA: 0x2DD6D60 Offset: 0x2DD6D60 VA: 0x2DD6D60
	public bool IsUserEligibleToJoin() { }

	// RVA: 0x2DD6DD0 Offset: 0x2DD6DD0 VA: 0x2DD6DD0
	public bool ShouldShowPopupAfterJoin() { }

	// RVA: 0x2DD6DD8 Offset: 0x2DD6DD8 VA: 0x2DD6DD8
	public void SetShouldShowPopupAfterJoin(bool value) { }

	// RVA: 0x2DD6DE4 Offset: 0x2DD6DE4 VA: 0x2DD6DE4
	public bool HasBulkRewardInQueue() { }

	[AsyncStateMachine(typeof(TeamQuestService.<GiveBulkRewardInQueue>d__41))]
	// RVA: 0x2DD6E04 Offset: 0x2DD6E04 VA: 0x2DD6E04
	public Task GiveBulkRewardInQueue() { }

	// RVA: 0x2DD6EF0 Offset: 0x2DD6EF0 VA: 0x2DD6EF0
	public bool ShouldShowCollectableEarnAnimationOnLobbyReturn() { }

	// RVA: 0x2DD6F18 Offset: 0x2DD6F18 VA: 0x2DD6F18
	public int GetLobbyProgress() { }

	// RVA: 0x2DD6F34 Offset: 0x2DD6F34 VA: 0x2DD6F34
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x2DD6F84 Offset: 0x2DD6F84 VA: 0x2DD6F84
	public void SetIntroduceEvent(bool introduced) { }

	// RVA: 0x2DD6FB4 Offset: 0x2DD6FB4 VA: 0x2DD6FB4
	public int GetStepForProgress(int progress) { }

	// RVA: 0x2DD707C Offset: 0x2DD707C VA: 0x2DD707C
	private bool HasUnseenProgress() { }

	// RVA: 0x2DD70BC Offset: 0x2DD70BC VA: 0x2DD70BC
	public bool HasUnseenCompletedStep() { }

	// RVA: 0x2DD7280 Offset: 0x2DD7280 VA: 0x2DD7280
	private int GetClaimableStepCountForTeamProgress(int progress) { }

	// RVA: 0x2DD7404 Offset: 0x2DD7404 VA: 0x2DD7404
	public TeamQuestViewModel GetViewModel() { }

	// RVA: 0x2DD781C Offset: 0x2DD781C VA: 0x2DD781C
	public int GetClaimableStepsCount() { }

	// RVA: 0x2DD7DB0 Offset: 0x2DD7DB0 VA: 0x2DD7DB0
	public TeamQuestLobbyButtonViewModel GetLobbyButtonViewModel() { }

	// RVA: 0x2DD7F00 Offset: 0x2DD7F00 VA: 0x2DD7F00
	public TeamQuestLeaderboardViewModel GetLeaderboardViewModel() { }

	// RVA: 0x2DD8108 Offset: 0x2DD8108 VA: 0x2DD8108
	private List<TeamQuestLeaderboardPlayerViewModel> GetLeaderboard(bool selectable) { }

	// RVA: 0x2DD711C Offset: 0x2DD711C VA: 0x2DD711C
	private int GetUserScore() { }

	// RVA: 0x2DD7AAC Offset: 0x2DD7AAC VA: 0x2DD7AAC
	private TeamQuestStepChestState GetChestState(TeamQuestStepModel step, int index) { }

	// RVA: 0x2DD7888 Offset: 0x2DD7888 VA: 0x2DD7888
	private bool IsStepClaimed(int stepIndex) { }

	// RVA: 0x2DD797C Offset: 0x2DD797C VA: 0x2DD797C
	private bool IsStepClaimable(int stepIndex) { }

	// RVA: 0x2DD83B8 Offset: 0x2DD83B8 VA: 0x2DD83B8
	private bool IsTeamProgressEnoughForStep(int stepIndex) { }

	// RVA: 0x2DD8440 Offset: 0x2DD8440 VA: 0x2DD8440
	public int RemainingScoreForStep(int stepIndex) { }

	// RVA: 0x2DD7A44 Offset: 0x2DD7A44 VA: 0x2DD7A44
	private int GetLastSeenProgressForStep(int stepIndex) { }

	// RVA: 0x2DD7A80 Offset: 0x2DD7A80 VA: 0x2DD7A80
	private int GetProgressForStep(int stepIndex) { }

	// RVA: 0x2DD84D8 Offset: 0x2DD84D8 VA: 0x2DD84D8
	private int GetProgressForStep(int stepIndex, int totalProgress) { }

	// RVA: 0x2DD7C18 Offset: 0x2DD7C18 VA: 0x2DD7C18
	public List<ValueTuple<int, TeamQuestStepModel>> GetClaimableSteps(List<TeamQuestStepModel> steps) { }

	// RVA: 0x2DD86D0 Offset: 0x2DD86D0 VA: 0x2DD86D0
	public bool TryClaimStep(int stepIndex) { }

	// RVA: 0x2DD8BF0 Offset: 0x2DD8BF0 VA: 0x2DD8BF0
	public bool UserHasProgress() { }

	// RVA: 0x2DD8844 Offset: 0x2DD8844 VA: 0x2DD8844
	private void GiveStepRewards(TeamQuestStepModel stepModel) { }

	// RVA: 0x2DD77CC Offset: 0x2DD77CC VA: 0x2DD77CC
	private TeamQuestAlertMessageType GetAlertMessageType() { }

	// RVA: 0x2DD7B74 Offset: 0x2DD7B74 VA: 0x2DD7B74
	private TeamQuestAlertMessageType GetAlertMessageType(int stepIndex) { }

	// RVA: 0x2DD686C Offset: 0x2DD686C VA: 0x2DD686C
	private bool IsMaxProgressReached() { }

	// RVA: 0x2DD8C08 Offset: 0x2DD8C08 VA: 0x2DD8C08
	public List<ValueTuple<int, TeamQuestStepModel>> GetUnclaimedSteps() { }

	// RVA: 0x2DD8CC0 Offset: 0x2DD8CC0 VA: 0x2DD8CC0
	public TeamQuestTeamChatElementViewModel GetTeamChatElementViewModel() { }

	// RVA: 0x2DD8DE0 Offset: 0x2DD8DE0 VA: 0x2DD8DE0 Slot: 7
	public bool IsLobbyShown() { }

	// RVA: 0x2DD8E20 Offset: 0x2DD8E20 VA: 0x2DD8E20 Slot: 8
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x2DD8ED4 Offset: 0x2DD8ED4 VA: 0x2DD8ED4
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(TeamQuestService.<CheckAndResolveAssetDependency>d__76))]
	// RVA: 0x2DD61F4 Offset: 0x2DD61F4 VA: 0x2DD61F4
	private Task CheckAndResolveAssetDependency() { }

	// RVA: 0x2DD8F24 Offset: 0x2DD8F24 VA: 0x2DD8F24
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x2DD8F64 Offset: 0x2DD8F64 VA: 0x2DD8F64
	public int GetEventScoreByLevelDifficulty(LevelDifficultyType difficulty, int multiplier) { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts