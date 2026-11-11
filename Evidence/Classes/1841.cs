public class WindQuestService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable // TypeDefIndex: 1841
{
	// Fields
	private readonly CustomUpdater _customUpdater; // 0x10
	private readonly WindQuestDataService _dataService; // 0x18
	private readonly WindQuestStateService _stateService; // 0x20
	private readonly WindQuestRemoteService _remoteService; // 0x28
	private readonly RewardService _rewardService; // 0x30
	private readonly AssetManager _assetManager; // 0x38
	private const string WindQuestBundleId = "wind_quest";
	private const double CloseToCompletionPercentage = 0.1;

	// Properties
	public WindQuestDataService DataService { get; }
	public WindQuestStateService StateService { get; }

	// Methods

	// RVA: 0x2D9D67C Offset: 0x2D9D67C VA: 0x2D9D67C
	public WindQuestDataService get_DataService() { }

	// RVA: 0x2D9D684 Offset: 0x2D9D684 VA: 0x2D9D684
	public WindQuestStateService get_StateService() { }

	// RVA: 0x2D9D68C Offset: 0x2D9D68C VA: 0x2D9D68C
	public void .ctor(CustomUpdater customUpdater, WindQuestDataService dataService, WindQuestStateService stateService, WindQuestRemoteService remoteService, RewardService rewardService, AssetManager assetManager) { }

	// RVA: 0x2D9D730 Offset: 0x2D9D730 VA: 0x2D9D730 Slot: 4
	public void Initialize() { }

	// RVA: 0x2D9D758 Offset: 0x2D9D758 VA: 0x2D9D758 Slot: 5
	public void Dispose() { }

	// RVA: 0x2D9D778 Offset: 0x2D9D778 VA: 0x2D9D778 Slot: 6
	public void IntervalUpdate() { }

	[AsyncStateMachine(typeof(WindQuestService.<InitializeData>d__16))]
	// RVA: 0x2D9D9F4 Offset: 0x2D9D9F4 VA: 0x2D9D9F4 Slot: 7
	public void InitializeData() { }

	[AsyncStateMachine(typeof(WindQuestService.<TryAutoClaimTask>d__17))]
	// RVA: 0x2D9D884 Offset: 0x2D9D884 VA: 0x2D9D884
	private void TryAutoClaimTask() { }

	[AsyncStateMachine(typeof(WindQuestService.<TryFetchCurrentTask>d__18))]
	// RVA: 0x2D9D93C Offset: 0x2D9D93C VA: 0x2D9D93C
	private void TryFetchCurrentTask() { }

	// RVA: 0x2D9DAAC Offset: 0x2D9DAAC VA: 0x2D9DAAC
	private void HandleResponse(WindQuestResponseModel responseModel) { }

	[AsyncStateMachine(typeof(WindQuestService.<TryClaimTask>d__20))]
	// RVA: 0x2D99138 Offset: 0x2D99138 VA: 0x2D99138
	public Task<bool> TryClaimTask(bool isAutoClaim, bool isCompleted) { }

	// RVA: 0x2D9DAD8 Offset: 0x2D9DAD8 VA: 0x2D9DAD8
	public void OnLevelWin(LevelDifficultyType difficulty, bool isFirstTry, int completedBottleCount) { }

	// RVA: 0x2D9B0A0 Offset: 0x2D9B0A0 VA: 0x2D9B0A0
	public void TryStartTaskTimer() { }

	// RVA: 0x2D9DCE8 Offset: 0x2D9DCE8 VA: 0x2D9DCE8
	public bool IsSessionUnlockReached() { }

	// RVA: 0x2D9DD10 Offset: 0x2D9DD10 VA: 0x2D9DD10
	public bool IsTaskTimedOut() { }

	// RVA: 0x2D9DD5C Offset: 0x2D9DD5C VA: 0x2D9DD5C
	public bool IsCycleEnded() { }

	// RVA: 0x2D9DD80 Offset: 0x2D9DD80 VA: 0x2D9DD80
	public bool IsTaskCompleted() { }

	// RVA: 0x2D9DE18 Offset: 0x2D9DE18 VA: 0x2D9DE18
	private DateTime GetEndDate() { }

	// RVA: 0x2D9B220 Offset: 0x2D9B220 VA: 0x2D9B220
	public WindQuestViewModel GetViewModel() { }

	// RVA: 0x2D9DF50 Offset: 0x2D9DF50 VA: 0x2D9DF50
	private List<WindQuestGoalViewModel> GetGoalViewModels() { }

	// RVA: 0x2D99EFC Offset: 0x2D99EFC VA: 0x2D99EFC
	public WindQuestLobbyButtonViewModel GetLobbyButtonViewModel() { }

	// RVA: 0x2D9DED8 Offset: 0x2D9DED8 VA: 0x2D9DED8
	private int GetMaxProgress() { }

	// RVA: 0x2D9E208 Offset: 0x2D9E208 VA: 0x2D9E208
	private int GetCurrentGoalProgress() { }

	// RVA: 0x2D9E2A4 Offset: 0x2D9E2A4 VA: 0x2D9E2A4
	private int GetCurrentGoalMaxProgress() { }

	// RVA: 0x2D9E324 Offset: 0x2D9E324 VA: 0x2D9E324
	private RewardModel GetCurrentGoalReward() { }

	// RVA: 0x2D9E3B0 Offset: 0x2D9E3B0 VA: 0x2D9E3B0
	private int GetCurrentGoalIndex() { }

	// RVA: 0x2D9DB90 Offset: 0x2D9DB90 VA: 0x2D9DB90
	public void TryIncreaseTaskProgress(WindQuestTaskType taskType, int amount = 1) { }

	// RVA: 0x2D9E4BC Offset: 0x2D9E4BC VA: 0x2D9E4BC
	public void TryResetTaskProgress(WindQuestTaskType taskType) { }

	// RVA: 0x2D9E514 Offset: 0x2D9E514 VA: 0x2D9E514
	private int GetLastReachedGoalTarget() { }

	// RVA: 0x2D9E494 Offset: 0x2D9E494 VA: 0x2D9E494
	private void IncreaseProgress(int amount) { }

	// RVA: 0x2D9B13C Offset: 0x2D9B13C VA: 0x2D9B13C
	public void GrantPendingGoalRewards() { }

	// RVA: 0x2D9E5F8 Offset: 0x2D9E5F8 VA: 0x2D9E5F8
	private void GiveGoalReward(WindQuestStepCacheModel stepCacheModel, int goalIndex) { }

	// RVA: 0x2D9E7B0 Offset: 0x2D9E7B0 VA: 0x2D9E7B0
	public bool HasBulkRewardInQueue() { }

	[AsyncStateMachine(typeof(WindQuestService.<GiveBulkRewardInQueue>d__43))]
	// RVA: 0x2D9E7D0 Offset: 0x2D9E7D0 VA: 0x2D9E7D0
	public Task GiveBulkRewardInQueue() { }

	// RVA: 0x2D9E8BC Offset: 0x2D9E8BC VA: 0x2D9E8BC
	public bool HasUnseenCompletedStep() { }

	// RVA: 0x2D9E918 Offset: 0x2D9E918 VA: 0x2D9E918
	public int GetCompletedGoalCountForProgress(int progress) { }

	// RVA: 0x2D9EA7C Offset: 0x2D9EA7C VA: 0x2D9EA7C
	public bool ShouldShowCloseToCompletion() { }

	// RVA: 0x2D9EB44 Offset: 0x2D9EB44 VA: 0x2D9EB44
	public void TryMarkShowedCloseToCompletion() { }

	// RVA: 0x2D9EB70 Offset: 0x2D9EB70 VA: 0x2D9EB70
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(WindQuestService.<CheckAndResolveAssetDependency>d__49))]
	// RVA: 0x2D9D798 Offset: 0x2D9D798 VA: 0x2D9D798
	private Task CheckAndResolveAssetDependency() { }

	// RVA: 0x2D9DC08 Offset: 0x2D9DC08 VA: 0x2D9DC08
	private static long GetNowUnixSeconds() { }

	// RVA: 0x2D9EBF0 Offset: 0x2D9EBF0 VA: 0x2D9EBF0
	public string GetReadableEventId() { }

	// RVA: 0x2D9ED20 Offset: 0x2D9ED20 VA: 0x2D9ED20
	public void DebugIncreaseProgress(int amount) { }

	// RVA: 0x2D9ED24 Offset: 0x2D9ED24 VA: 0x2D9ED24
	public void FulfillShowRequirement() { }

	// RVA: 0x2D9ED50 Offset: 0x2D9ED50 VA: 0x2D9ED50
	public void FailWindQuest() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts