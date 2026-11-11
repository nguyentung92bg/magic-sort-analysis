public class WeeklyTournamentService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IIntervalUpdate, IDeletable, ILateLoginService // TypeDefIndex: 1978
{
	// Fields
	[CompilerGenerated]
	private RemoteConfigs <RemoteConfigs>k__BackingField; // 0x10
	[CompilerGenerated]
	private WeeklyTournamentStateService <StateService>k__BackingField; // 0x18
	private WeeklyTournamentDataService _weeklyTournamentDataService; // 0x20
	private WeeklyTournamentRemoteService _remoteService; // 0x28
	private IPlayerService _playerService; // 0x30
	private CustomUpdater _customUpdater; // 0x38
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x40
	private SecondTimer _secondTimer; // 0x48
	private RemoteConfigs _remoteConfig; // 0x50

	// Properties
	public RemoteConfigs RemoteConfigs { get; set; }
	public WeeklyTournamentStateService StateService { get; set; }
	public WeeklyTournamentDataService WeeklyTournamentDataService { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32D9078 Offset: 0x32D9078 VA: 0x32D9078
	public RemoteConfigs get_RemoteConfigs() { }

	[CompilerGenerated]
	// RVA: 0x32D9080 Offset: 0x32D9080 VA: 0x32D9080
	private void set_RemoteConfigs(RemoteConfigs value) { }

	[CompilerGenerated]
	// RVA: 0x32D9088 Offset: 0x32D9088 VA: 0x32D9088
	public WeeklyTournamentStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x32D9090 Offset: 0x32D9090 VA: 0x32D9090
	private void set_StateService(WeeklyTournamentStateService value) { }

	// RVA: 0x32D9098 Offset: 0x32D9098 VA: 0x32D9098
	public WeeklyTournamentDataService get_WeeklyTournamentDataService() { }

	// RVA: 0x32D90A0 Offset: 0x32D90A0 VA: 0x32D90A0
	public void .ctor(RemoteConfigs remoteConfigs, WeeklyTournamentDataService weeklyTournamentDataService, WeeklyTournamentRemoteService remoteService, WeeklyTournamentStateService weeklyTournamentStateService, IPlayerService playerService, CustomUpdater customUpdater, ProfileSpriteCacheService profileSpriteCacheService, RemoteConfigs remoteConfig) { }

	// RVA: 0x32D9174 Offset: 0x32D9174 VA: 0x32D9174 Slot: 4
	public void Initialize() { }

	// RVA: 0x32D9204 Offset: 0x32D9204 VA: 0x32D9204 Slot: 6
	public void InitializeData() { }

	// RVA: 0x32D92C0 Offset: 0x32D92C0 VA: 0x32D92C0 Slot: 5
	public void Dispose() { }

	// RVA: 0x32D92F4 Offset: 0x32D92F4 VA: 0x32D92F4 Slot: 7
	public void IntervalUpdate() { }

	// RVA: 0x32D92F8 Offset: 0x32D92F8 VA: 0x32D92F8
	public void TryIncreaseScore() { }

	// RVA: 0x32D9340 Offset: 0x32D9340 VA: 0x32D9340
	private void IncreaseScoreAndManipulateCachedLeaderboard() { }

	// RVA: 0x32D931C Offset: 0x32D931C VA: 0x32D931C
	private bool CanIncreaseScore() { }

	// RVA: 0x32D9A04 Offset: 0x32D9A04 VA: 0x32D9A04
	private void ResetScore() { }

	// RVA: 0x32D9A28 Offset: 0x32D9A28 VA: 0x32D9A28
	public List<WeeklyTournamentLeaderboardPlayerViewModel> GetLeaderboardViewModels() { }

	[AsyncStateMachine(typeof(WeeklyTournamentService.<SendGetLeaderboardRequest>d__27))]
	// RVA: 0x32D9208 Offset: 0x32D9208 VA: 0x32D9208
	public void SendGetLeaderboardRequest() { }

	// RVA: 0x32D9F9C Offset: 0x32D9F9C VA: 0x32D9F9C
	private void TrySendTournamentFinishEvent(WeeklyGetLeaderboardResponse responseData) { }

	// RVA: 0x32DA058 Offset: 0x32DA058 VA: 0x32DA058
	private void CacheLeaderboardResponse(WeeklyGetLeaderboardResponse response) { }

	// RVA: 0x32DA108 Offset: 0x32DA108 VA: 0x32DA108
	private void TryHandleNotSyncedScoreAndManipulateResponse(WeeklyGetLeaderboardResponse response) { }

	[CanBeNull]
	// RVA: 0x32D9400 Offset: 0x32D9400 VA: 0x32D9400
	private WeeklyLeaderBoardPlayer FindPlayer(List<WeeklyLeaderBoardPlayer> players) { }

	// RVA: 0x32D9870 Offset: 0x32D9870 VA: 0x32D9870
	private void OnCachedLeaderboardChanged(WeeklyGetLeaderboardResponse response) { }

	// RVA: 0x32DA290 Offset: 0x32DA290 VA: 0x32DA290
	public DateTime GetEndDate() { }

	// RVA: 0x32D96E0 Offset: 0x32D96E0 VA: 0x32D96E0
	private void ManipulateLeaderboardResponse(WeeklyGetLeaderboardResponse response) { }

	[AsyncStateMachine(typeof(WeeklyTournamentService.<ClaimRewardRequestAndGetNewWeeklyTournament>d__35))]
	// RVA: 0x32D5434 Offset: 0x32D5434 VA: 0x32D5434
	public Task<ApiResponse<WeeklyLeaderboardClaimResponse>> ClaimRewardRequestAndGetNewWeeklyTournament(int visualRank) { }

	// RVA: 0x32DA350 Offset: 0x32DA350 VA: 0x32DA350
	private void CacheLeaderBoardClaimResponse(WeeklyLeaderboardClaimResponse claimResponse) { }

	// RVA: 0x32DA184 Offset: 0x32DA184 VA: 0x32DA184
	private void OnNewTournamentStarted() { }

	[AsyncStateMachine(typeof(WeeklyTournamentService.<SendSetScoreRequest>d__38))]
	// RVA: 0x32D9628 Offset: 0x32D9628 VA: 0x32D9628
	public void SendSetScoreRequest() { }

	// RVA: 0x32DA3EC Offset: 0x32DA3EC VA: 0x32DA3EC
	public bool TryGetTournamentReward(out List<RewardModel> rewards) { }

	// RVA: 0x32D9D9C Offset: 0x32D9D9C VA: 0x32D9D9C
	private int GetRewardAmountByRank(int rank) { }

	// RVA: 0x32D9E2C Offset: 0x32D9E2C VA: 0x32D9E2C
	private RewardModel GetRewardModelByRank(int rank) { }

	// RVA: 0x32D5574 Offset: 0x32D5574 VA: 0x32D5574
	public void TryIncreaseWinCount(int rank) { }

	// RVA: 0x32DA278 Offset: 0x32DA278 VA: 0x32DA278
	public int GetRank() { }

	// RVA: 0x32DA5D8 Offset: 0x32DA5D8 VA: 0x32DA5D8
	public int GetWinCount() { }

	// RVA: 0x32DA5FC Offset: 0x32DA5FC VA: 0x32DA5FC Slot: 8
	public void DeleteData() { }

	// RVA: 0x32D5554 Offset: 0x32D5554 VA: 0x32D5554
	public void DeleteCachedLeaderboard() { }

	// RVA: 0x32DA614 Offset: 0x32DA614 VA: 0x32DA614
	public void MarkWeeklyIntroduced() { }

	// RVA: 0x32D9518 Offset: 0x32D9518 VA: 0x32D9518
	public int GetRemainingSeconds() { }

	// RVA: 0x32DA644 Offset: 0x32DA644 VA: 0x32DA644
	public long GetStartTimeAsUnix() { }

	// RVA: 0x32DA678 Offset: 0x32DA678 VA: 0x32DA678
	public void SetWeeklyTournamentSeenByUser() { }

	// RVA: 0x32DA6AC Offset: 0x32DA6AC VA: 0x32DA6AC
	public void OnWeeklyTournamentSeenByUser() { }

	// RVA: 0x32D6CA4 Offset: 0x32D6CA4 VA: 0x32D6CA4
	public void OnResultShowed() { }

	// RVA: 0x32DA748 Offset: 0x32DA748 VA: 0x32DA748
	public int GetLiveOpsStateForLevelEvent() { }

	[CompilerGenerated]
	// RVA: 0x32DA790 Offset: 0x32DA790 VA: 0x32DA790
	private void <OnCachedLeaderboardChanged>b__32_0() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts