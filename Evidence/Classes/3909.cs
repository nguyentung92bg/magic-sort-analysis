public class MagicPassService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3909
{
	// Fields
	private MagicPassDataService _dataService; // 0x10
	private MagicPassStateService _stateService; // 0x18
	private MagicPassRemoteService _remoteService; // 0x20
	private CustomUpdater _customUpdater; // 0x28
	private RemoteConfigs _remoteConfigs; // 0x30
	private IPlayerService _playerService; // 0x38
	private SyncService _syncService; // 0x40
	private IAPService _iapService; // 0x48
	private RewardService _rewardService; // 0x50
	private InventoryService _inventoryService; // 0x58
	private CollectionService _collectionService; // 0x60
	private TeamChatService _teamChatService; // 0x68
	private MagicPassViewModel _viewModel; // 0x70

	// Methods

	// RVA: 0x38DB55C Offset: 0x38DB55C VA: 0x38DB55C
	public void .ctor(MagicPassDataService dataService, MagicPassStateService stateService, MagicPassRemoteService remoteService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, IPlayerService playerService, SyncService syncService, IAPService iapService, RewardService rewardService, InventoryService inventoryService, CollectionService collectionService, TeamChatService teamChatService) { }

	// RVA: 0x38DB690 Offset: 0x38DB690 VA: 0x38DB690 Slot: 4
	public void Initialize() { }

	// RVA: 0x38DB6B4 Offset: 0x38DB6B4 VA: 0x38DB6B4 Slot: 7
	public void InitializeData() { }

	// RVA: 0x38DB70C Offset: 0x38DB70C VA: 0x38DB70C Slot: 5
	public void Dispose() { }

	// RVA: 0x38DB72C Offset: 0x38DB72C VA: 0x38DB72C Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x38DB6B8 Offset: 0x38DB6B8 VA: 0x38DB6B8
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(MagicPassService.<FetchCurrentEvent>d__19))]
	// RVA: 0x38DB748 Offset: 0x38DB748 VA: 0x38DB748
	private void FetchCurrentEvent() { }

	// RVA: 0x38DB8D0 Offset: 0x38DB8D0 VA: 0x38DB8D0
	private void TryStartNewEvent(MagicPassEventInfoResponse response) { }

	[AsyncStateMachine(typeof(MagicPassService.<SendClaimEventRequest>d__21))]
	// RVA: 0x38DB818 Offset: 0x38DB818 VA: 0x38DB818
	private void SendClaimEventRequest() { }

	// RVA: 0x38DBB08 Offset: 0x38DBB08 VA: 0x38DBB08
	public int GetRemainingSeconds() { }

	// RVA: 0x38DBC10 Offset: 0x38DBC10 VA: 0x38DBC10
	public long GetFinishTime() { }

	// RVA: 0x38DBC38 Offset: 0x38DBC38 VA: 0x38DBC38
	public DateTime GetEndDate() { }

	// RVA: 0x38DBCB4 Offset: 0x38DBCB4 VA: 0x38DBCB4
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x38DBD2C Offset: 0x38DBD2C VA: 0x38DBD2C
	public string GetEventId() { }

	// RVA: 0x38DBDAC Offset: 0x38DBDAC VA: 0x38DBDAC
	public long GetStartTimeAsUnix() { }

	// RVA: 0x38DBDEC Offset: 0x38DBDEC VA: 0x38DBDEC
	public string GetSegment() { }

	// RVA: 0x38DBE08 Offset: 0x38DBE08 VA: 0x38DBE08
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x38DBE24 Offset: 0x38DBE24 VA: 0x38DBE24
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x38DBE40 Offset: 0x38DBE40 VA: 0x38DBE40
	public bool IsIntroduced() { }

	// RVA: 0x38DBE5C Offset: 0x38DBE5C VA: 0x38DBE5C
	public void MarkAsIntroduced() { }

	// RVA: 0x38DBE78 Offset: 0x38DBE78 VA: 0x38DBE78
	public bool IsEligible() { }

	// RVA: 0x38DBF70 Offset: 0x38DBF70 VA: 0x38DBF70
	public bool IsClaimedLocally() { }

	// RVA: 0x38DBF8C Offset: 0x38DBF8C VA: 0x38DBF8C
	public void ResetProgress() { }

	// RVA: 0x38DBF4C Offset: 0x38DBF4C VA: 0x38DBF4C
	private MagicPassConfigModel GetConfig() { }

	// RVA: 0x38DBFA8 Offset: 0x38DBFA8 VA: 0x38DBFA8
	public IAPConfigModel GetIAPConfigModel() { }

	// RVA: 0x38DC048 Offset: 0x38DC048 VA: 0x38DC048
	public Dictionary<string, IAPConfigModel> GetUniqueIAPConfigModels() { }

	[AsyncStateMachine(typeof(MagicPassService.<ActivatePass>d__39))]
	// RVA: 0x38DC2AC Offset: 0x38DC2AC VA: 0x38DC2AC
	public Task<bool> ActivatePass(MagicPassActivationSource activationSource) { }

	// RVA: 0x38DC3D4 Offset: 0x38DC3D4 VA: 0x38DC3D4
	private IAPContext GetContext(MagicPassActivationSource source) { }

	// RVA: 0x38DC43C Offset: 0x38DC43C VA: 0x38DC43C
	public void MarkPassAsActivated() { }

	// RVA: 0x38DC6C4 Offset: 0x38DC6C4 VA: 0x38DC6C4
	public bool IsPassActivated() { }

	// RVA: 0x38DC6E0 Offset: 0x38DC6E0 VA: 0x38DC6E0
	public void TryIncreaseProgress(LevelDifficultyType levelDifficulty, int multiplier = 1) { }

	// RVA: 0x38DC890 Offset: 0x38DC890 VA: 0x38DC890
	public void AddKey(int keyCount) { }

	// RVA: 0x38DC92C Offset: 0x38DC92C VA: 0x38DC92C
	public int GetKeyCount() { }

	// RVA: 0x38DC948 Offset: 0x38DC948 VA: 0x38DC948
	public int GetLastSeenKeyCount() { }

	// RVA: 0x38DC964 Offset: 0x38DC964 VA: 0x38DC964
	public int GetLastSeenLobbyButtonKeyCount() { }

	// RVA: 0x38DC980 Offset: 0x38DC980 VA: 0x38DC980
	public int GetKeyIncreaseCountByLevel(int level, int multiplier) { }

	// RVA: 0x38DC7DC Offset: 0x38DC7DC VA: 0x38DC7DC
	private int GetKeyIncreaseCountByLevelDifficulty(LevelDifficultyType difficulty, int selectedMultiplier) { }

	// RVA: 0x38DC9B8 Offset: 0x38DC9B8 VA: 0x38DC9B8
	public List<MagicPassStepModel> GetDefaultSteps() { }

	// RVA: 0x38DCA24 Offset: 0x38DCA24 VA: 0x38DCA24
	private MagicPassStepModel GetCurrentStepModel() { }

	// RVA: 0x38DCAF4 Offset: 0x38DCAF4 VA: 0x38DCAF4
	private MagicPassStepModel GetLastSeenStepModel() { }

	// RVA: 0x38DCA6C Offset: 0x38DCA6C VA: 0x38DCA6C
	private MagicPassStepModel GetStepModel(int step) { }

	// RVA: 0x38DCB3C Offset: 0x38DCB3C VA: 0x38DCB3C
	public int GetDefaultStepsCount() { }

	// RVA: 0x38DCA40 Offset: 0x38DCA40 VA: 0x38DCA40
	public int GetCurrentStep() { }

	// RVA: 0x38DCB10 Offset: 0x38DCB10 VA: 0x38DCB10
	private int GetLastSeenStep() { }

	// RVA: 0x38DCB88 Offset: 0x38DCB88 VA: 0x38DCB88
	private int GetStepByKeyCount(int keyCount) { }

	// RVA: 0x38DCCDC Offset: 0x38DCCDC VA: 0x38DCCDC
	private int GetCurrentStepProgress() { }

	// RVA: 0x38DCEDC Offset: 0x38DCEDC VA: 0x38DCEDC
	private int GetLastSeenStepProgress() { }

	// RVA: 0x38DCD08 Offset: 0x38DCD08 VA: 0x38DCD08
	private int GetStepProgressByKeyCount(int keyCount) { }

	// RVA: 0x38DCF08 Offset: 0x38DCF08 VA: 0x38DCF08
	private int GetCurrentStepMaxProgress() { }

	// RVA: 0x38DCF9C Offset: 0x38DCF9C VA: 0x38DCF9C
	private int GetLastSeenStepMaxProgress() { }

	// RVA: 0x38DCF6C Offset: 0x38DCF6C VA: 0x38DCF6C
	private bool AllDefaultStepsCompleted() { }

	// RVA: 0x38DD000 Offset: 0x38DD000 VA: 0x38DD000
	private bool AllLastSeenDefaultStepsCompleted() { }

	// RVA: 0x38DCCA4 Offset: 0x38DCCA4 VA: 0x38DCCA4
	public int GetVaultStepsCount() { }

	// RVA: 0x38DCCC0 Offset: 0x38DCCC0 VA: 0x38DCCC0
	public int GetVaultStepKeyCount() { }

	// RVA: 0x38DD030 Offset: 0x38DD030 VA: 0x38DD030
	private int GetVaultStepCoinAmount() { }

	// RVA: 0x38DD04C Offset: 0x38DD04C VA: 0x38DD04C
	public int GetCurrentVaultCoinAmount() { }

	// RVA: 0x38DD100 Offset: 0x38DD100 VA: 0x38DD100
	public int GetLastSeenVaultCoinAmount() { }

	// RVA: 0x38DD0A0 Offset: 0x38DD0A0 VA: 0x38DD0A0
	private int GetVaultCoinAmountByStep(int step) { }

	// RVA: 0x38DD154 Offset: 0x38DD154 VA: 0x38DD154
	private int GetMaxVaultCoinAmount() { }

	// RVA: 0x38DD190 Offset: 0x38DD190 VA: 0x38DD190
	private bool AllVaultStepsCompleted() { }

	// RVA: 0x38DC790 Offset: 0x38DC790 VA: 0x38DC790
	private bool AllLastSeenVaultStepsCompleted() { }

	// RVA: 0x38DD1DC Offset: 0x38DD1DC VA: 0x38DD1DC
	private bool IsFreeStepClaimed(int step) { }

	// RVA: 0x38DD1F8 Offset: 0x38DD1F8 VA: 0x38DD1F8
	private bool IsPaidStepClaimed(int step) { }

	// RVA: 0x38DD214 Offset: 0x38DD214 VA: 0x38DD214
	private bool IsFreeStepClaimable(int step) { }

	// RVA: 0x38DD288 Offset: 0x38DD288 VA: 0x38DD288
	private bool IsPaidStepClaimable(int step) { }

	// RVA: 0x38DD314 Offset: 0x38DD314 VA: 0x38DD314
	public void ClaimFreeStep(int step) { }

	// RVA: 0x38DC4B0 Offset: 0x38DC4B0 VA: 0x38DC4B0
	public void ClaimPaidStep(int step) { }

	// RVA: 0x38DD6B0 Offset: 0x38DD6B0 VA: 0x38DD6B0
	private void MarkAllStepsAsClaimed() { }

	// RVA: 0x38DD794 Offset: 0x38DD794 VA: 0x38DD794
	public bool IsVaultClaimed() { }

	// RVA: 0x38DD7B0 Offset: 0x38DD7B0 VA: 0x38DD7B0
	public void MarkVaultAsClaimed() { }

	// RVA: 0x38DD470 Offset: 0x38DD470 VA: 0x38DD470
	private void GiveStepRewards(MagicPassStepModel stepModel, bool isPaidReward) { }

	// RVA: 0x38DD7CC Offset: 0x38DD7CC VA: 0x38DD7CC
	public bool HasBulkRewardInQueue() { }

	[AsyncStateMachine(typeof(MagicPassService.<GiveBulkRewardInQueue>d__85))]
	// RVA: 0x38DD7EC Offset: 0x38DD7EC VA: 0x38DD7EC
	public Task GiveBulkRewardInQueue() { }

	// RVA: 0x38DD8D8 Offset: 0x38DD8D8 VA: 0x38DD8D8
	public void QueueUnclaimedRewards() { }

	[AsyncStateMachine(typeof(MagicPassService.<GiveUnclaimedRewardsInQueue>d__87))]
	// RVA: 0x38DDCD8 Offset: 0x38DDCD8 VA: 0x38DDCD8
	public Task GiveUnclaimedRewardsInQueue() { }

	// RVA: 0x38DDDC4 Offset: 0x38DDDC4 VA: 0x38DDDC4
	public void GiveUnclaimedRewardsDirectly() { }

	// RVA: 0x38DD650 Offset: 0x38DD650 VA: 0x38DD650
	private RewardModel GetStepReward(MagicPassStepModel stepModel, bool isPaidReward) { }

	// RVA: 0x38DDDF4 Offset: 0x38DDDF4 VA: 0x38DDDF4
	public List<RewardModel> GetUnclaimedRewards() { }

	// RVA: 0x38DE018 Offset: 0x38DE018 VA: 0x38DE018
	public bool HasAnyUnclaimedRewards() { }

	// RVA: 0x38DE0E0 Offset: 0x38DE0E0 VA: 0x38DE0E0
	public int GetUnclaimedRewardCount() { }

	// RVA: 0x38DD908 Offset: 0x38DD908 VA: 0x38DD908
	public List<RewardModel> GetMergedUnclaimedRewards() { }

	// RVA: 0x38DE12C Offset: 0x38DE12C VA: 0x38DE12C
	private void TryMergeReward(RewardModel reward, List<RewardModel> rewards, Dictionary<CurrencyType, RewardModel> mergedRewards) { }

	// RVA: 0x38DE2E8 Offset: 0x38DE2E8 VA: 0x38DE2E8
	public bool IsLobbyIconVisible() { }

	// RVA: 0x38DE380 Offset: 0x38DE380 VA: 0x38DE380
	public bool IsLobbyIconUnclaimedRewardCountVisible() { }

	// RVA: 0x38DE3C8 Offset: 0x38DE3C8 VA: 0x38DE3C8
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x38DE454 Offset: 0x38DE454 VA: 0x38DE454
	private bool IsKeyCountIncreased() { }

	// RVA: 0x38DE498 Offset: 0x38DE498 VA: 0x38DE498
	private bool IsStepIncreased() { }

	// RVA: 0x38DE4C8 Offset: 0x38DE4C8 VA: 0x38DE4C8
	public bool IsLobbyIconStepIncreased() { }

	// RVA: 0x38DE514 Offset: 0x38DE514 VA: 0x38DE514
	public float GetCurrentLobbyIconProgress() { }

	// RVA: 0x38DE5DC Offset: 0x38DE5DC VA: 0x38DE5DC
	public float GetLastSeenLobbyButtonProgress() { }

	// RVA: 0x38DE70C Offset: 0x38DE70C VA: 0x38DE70C
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x38DE754 Offset: 0x38DE754 VA: 0x38DE754
	public void TrySetLastSeenProgress() { }

	// RVA: 0x38DC758 Offset: 0x38DC758 VA: 0x38DC758
	public bool IsEventActive() { }

	// RVA: 0x38DE42C Offset: 0x38DE42C VA: 0x38DE42C
	public bool IsTimeUp() { }

	// RVA: 0x38DC8D4 Offset: 0x38DC8D4 VA: 0x38DC8D4
	public bool ShouldShowTutorial() { }

	// RVA: 0x38DE7D0 Offset: 0x38DE7D0 VA: 0x38DE7D0
	public bool ShouldShowFinishedPopUp() { }

	// RVA: 0x38DE818 Offset: 0x38DE818 VA: 0x38DE818
	public bool ShouldShowVaultRewardPopUp() { }

	// RVA: 0x38DE874 Offset: 0x38DE874 VA: 0x38DE874
	public bool ShouldShowOffer() { }

	// RVA: 0x38DE8C4 Offset: 0x38DE8C4 VA: 0x38DE8C4
	public bool IsPlayOnActive() { }

	// RVA: 0x38DE920 Offset: 0x38DE920 VA: 0x38DE920
	public void MarkEventAsFinished() { }

	// RVA: 0x38DE93C Offset: 0x38DE93C VA: 0x38DE93C
	public void MarkEventAsClaimedLocally() { }

	// RVA: 0x38DE9CC Offset: 0x38DE9CC VA: 0x38DE9CC
	private void MarkAsClaimedLocally() { }

	[AsyncStateMachine(typeof(MagicPassService.<EquipMagicPassProfileFrameAndNameStyle>d__115))]
	// RVA: 0x38DC60C Offset: 0x38DC60C VA: 0x38DC60C
	private void EquipMagicPassProfileFrameAndNameStyle() { }

	[AsyncStateMachine(typeof(MagicPassService.<UnequipMagicPassProfileFrameAndNameStyle>d__116))]
	// RVA: 0x38DE9E8 Offset: 0x38DE9E8 VA: 0x38DE9E8
	public void UnequipMagicPassProfileFrameAndNameStyle() { }

	// RVA: 0x38DEA9C Offset: 0x38DEA9C VA: 0x38DEA9C
	public int GetMagicPassMaxLifeAmount() { }

	// RVA: 0x38DEAA4 Offset: 0x38DEAA4 VA: 0x38DEAA4
	public ProfileFrameInfo GetMagicPassFrameInfo() { }

	// RVA: 0x38DEB34 Offset: 0x38DEB34 VA: 0x38DEB34
	public ProfileNameStyleInfo GetMagicPassNameStyleInfo() { }

	// RVA: 0x38DEBC4 Offset: 0x38DEBC4 VA: 0x38DEBC4
	public MagicPassViewModel GetViewModel() { }

	// RVA: 0x38DF370 Offset: 0x38DF370 VA: 0x38DF370
	public int GetTicketClaimReward() { }

	// RVA: 0x38DF39C Offset: 0x38DF39C VA: 0x38DF39C
	public void ClaimedMagicPassTicket(string messageId) { }

	// RVA: 0x38DF4A0 Offset: 0x38DF4A0 VA: 0x38DF4A0
	public bool IsTicketClaimed(string messageId) { }

	// RVA: 0x38DF4BC Offset: 0x38DF4BC VA: 0x38DF4BC
	public void ResetClaimedTickets() { }

	// RVA: 0x38DC8B8 Offset: 0x38DC8B8 VA: 0x38DC8B8
	public bool IsEventEnabled() { }

	// RVA: 0x38DB980 Offset: 0x38DB980 VA: 0x38DB980
	private void TrySetLastCompletedStep() { }

	// RVA: 0x38DE364 Offset: 0x38DE364 VA: 0x38DE364
	public MagicPassCacheModel GetCacheEventInfo() { }

	// RVA: 0x38DF4D8 Offset: 0x38DF4D8 VA: 0x38DF4D8 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x38DF4DC Offset: 0x38DF4DC VA: 0x38DF4DC Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x38DF4E0 Offset: 0x38DF4E0 VA: 0x38DF4E0
	public string GetReadableEventId() { }

	// RVA: 0x38DF5FC Offset: 0x38DF5FC VA: 0x38DF5FC
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x38DF62C Offset: 0x38DF62C VA: 0x38DF62C
	public int GetEventScoreByLevelDifficulty(LevelDifficultyType difficulty, int selectedMultiplier) { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts