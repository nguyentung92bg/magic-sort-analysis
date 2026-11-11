public class WatchAndWinService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3132
{
	// Fields
	private WatchAndWinDataService _dataService; // 0x10
	private WatchAndWinStateService _stateService; // 0x18
	private WatchAndWinRemoteService _remoteService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private RewardService _rewardService; // 0x30
	private CustomUpdater _customUpdater; // 0x38
	private SecondTimer _secondTimer; // 0x40
	private readonly LobbyEventsService _lobbyEventsService; // 0x48

	// Properties
	public WatchAndWinDataService DataService { get; }
	public WatchAndWinStateService StateService { get; }

	// Methods

	// RVA: 0x317155C Offset: 0x317155C VA: 0x317155C
	public WatchAndWinDataService get_DataService() { }

	// RVA: 0x3171564 Offset: 0x3171564 VA: 0x3171564
	public WatchAndWinStateService get_StateService() { }

	// RVA: 0x317156C Offset: 0x317156C VA: 0x317156C
	public void .ctor(CustomUpdater customUpdater, WatchAndWinDataService dataService, WatchAndWinStateService stateService, WatchAndWinRemoteService remoteService, RemoteConfigs remoteConfigs, RewardService rewardService, LobbyEventsService lobbyEventsService) { }

	// RVA: 0x317162C Offset: 0x317162C VA: 0x317162C Slot: 4
	public void Initialize() { }

	// RVA: 0x31716B8 Offset: 0x31716B8 VA: 0x31716B8 Slot: 5
	public void Dispose() { }

	// RVA: 0x31717B4 Offset: 0x31717B4 VA: 0x31717B4 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3171870 Offset: 0x3171870 VA: 0x3171870 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3171948 Offset: 0x3171948 VA: 0x3171948
	public void OnPopupOpened() { }

	[AsyncStateMachine(typeof(WatchAndWinService.<TryFetchCurrentEvent>d__18))]
	// RVA: 0x31717B8 Offset: 0x31717B8 VA: 0x31717B8
	public void TryFetchCurrentEvent() { }

	// RVA: 0x3171984 Offset: 0x3171984 VA: 0x3171984
	private WatchAndWinRequestModel GetRequestModel() { }

	// RVA: 0x3171A00 Offset: 0x3171A00 VA: 0x3171A00
	private void HandleWatchAndWinResponse(ApiResponse<WatchAndWinResponse> response) { }

	// RVA: 0x3171AB4 Offset: 0x3171AB4 VA: 0x3171AB4
	private void UpdateAndCacheBackendOfferResponse(ApiResponse<WatchAndWinResponse> response) { }

	// RVA: 0x3171B5C Offset: 0x3171B5C VA: 0x3171B5C
	private void ClearWatchAndWinData() { }

	// RVA: 0x3171B90 Offset: 0x3171B90 VA: 0x3171B90
	private void ScheduleWatchAndWinFetch() { }

	// RVA: 0x3171C74 Offset: 0x3171C74 VA: 0x3171C74
	public DateTime GetEndDate() { }

	// RVA: 0x3171D34 Offset: 0x3171D34 VA: 0x3171D34
	public int GetRemainingSeconds() { }

	// RVA: 0x3171E44 Offset: 0x3171E44 VA: 0x3171E44
	public bool ShouldForceShowPopup() { }

	// RVA: 0x3171E90 Offset: 0x3171E90 VA: 0x3171E90
	public string GetEventId() { }

	// RVA: 0x316F020 Offset: 0x316F020 VA: 0x316F020
	public List<RewardModel> GetRewards() { }

	// RVA: 0x31701A8 Offset: 0x31701A8 VA: 0x31701A8
	public RewardModel GetRewardByProgress(int stepProgress) { }

	// RVA: 0x316F0C4 Offset: 0x316F0C4 VA: 0x316F0C4
	public int GetAdProgress() { }

	// RVA: 0x3171F00 Offset: 0x3171F00 VA: 0x3171F00
	public bool HasReachedTotalRequiredAdCount() { }

	// RVA: 0x316FDE0 Offset: 0x316FDE0 VA: 0x316FDE0
	public void TryIncreaseAdProgress() { }

	// RVA: 0x316F0E8 Offset: 0x316F0E8 VA: 0x316F0E8
	public int GetTotalRequiredAdCount() { }

	// RVA: 0x316F240 Offset: 0x316F240 VA: 0x316F240
	public int GetStepProgressByWatchedAdCount() { }

	// RVA: 0x316F30C Offset: 0x316F30C VA: 0x316F30C
	public List<int> GetRequiredAdCountsToWatch() { }

	// RVA: 0x316FFDC Offset: 0x316FFDC VA: 0x316FFDC
	public bool IsOnRewardStep() { }

	// RVA: 0x3171F30 Offset: 0x3171F30 VA: 0x3171F30
	public string GetSegment() { }

	// RVA: 0x3171F64 Offset: 0x3171F64 VA: 0x3171F64
	public bool CanOpenPopupAfterReward() { }

	// RVA: 0x3171F80 Offset: 0x3171F80 VA: 0x3171F80 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x3171F9C Offset: 0x3171F9C VA: 0x3171F9C Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x316F334 Offset: 0x316F334 VA: 0x316F334
	public bool IsDynamicStagesEnabled() { }

	// RVA: 0x316F38C Offset: 0x316F38C VA: 0x316F38C
	public WatchAndWinStagesViewModel GetStageViewModel() { }

	// RVA: 0x316FE60 Offset: 0x316FE60 VA: 0x316FE60
	public WatchAndWinProgressViewModel GetProgressViewModel() { }

	// RVA: 0x31722D4 Offset: 0x31722D4 VA: 0x31722D4
	private int GetCurrentStage() { }

	// RVA: 0x31723B0 Offset: 0x31723B0 VA: 0x31723B0
	private int GetTotalStageCount() { }

	// RVA: 0x3171FB8 Offset: 0x3171FB8 VA: 0x3171FB8
	private List<IWatchAndWinStageScrollViewModel> GetStageViewModels() { }

	// RVA: 0x3172400 Offset: 0x3172400 VA: 0x3172400
	public WatchAndWinLobbyButtonViewModel GetLobbyButtonViewModel() { }

	[CompilerGenerated]
	// RVA: 0x31724A0 Offset: 0x31724A0 VA: 0x31724A0
	private void <ScheduleWatchAndWinFetch>b__23_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts