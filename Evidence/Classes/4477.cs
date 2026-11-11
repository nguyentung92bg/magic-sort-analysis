public class DailyRewardDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 4477
{
	// Fields
	private DailyRewardModel _model; // 0x10
	private ISaveLoad<DailyRewardModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x38CFF7C Offset: 0x38CFF7C VA: 0x38CFF7C
	public void .ctor(ISaveLoad<DailyRewardModel> saveLoad) { }

	// RVA: 0x38CFFAC Offset: 0x38CFFAC VA: 0x38CFFAC Slot: 4
	public void Initialize() { }

	// RVA: 0x38D006C Offset: 0x38D006C VA: 0x38D006C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x38D0124 Offset: 0x38D0124 VA: 0x38D0124 Slot: 5
	public void Dispose() { }

	// RVA: 0x38D0128 Offset: 0x38D0128 VA: 0x38D0128 Slot: 7
	public void DeleteData() { }

	// RVA: 0x38D01F8 Offset: 0x38D01F8 VA: 0x38D01F8
	public void StartNewEvent(DailyRewardEventInfoResponse response) { }

	// RVA: 0x38D0334 Offset: 0x38D0334 VA: 0x38D0334
	public DailyRewardCacheModel GetCachedEventInfo() { }

	// RVA: 0x38D0350 Offset: 0x38D0350 VA: 0x38D0350
	public void ClaimEvent() { }

	// RVA: 0x38D03F4 Offset: 0x38D03F4 VA: 0x38D03F4
	public bool IsClaimed() { }

	// RVA: 0x38D0328 Offset: 0x38D0328 VA: 0x38D0328
	private void MarkDataForLateUpdate() { }

	// RVA: 0x38D0418 Offset: 0x38D0418 VA: 0x38D0418
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x38D0440 Offset: 0x38D0440 VA: 0x38D0440
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x38D045C Offset: 0x38D045C VA: 0x38D045C Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x38D0464 Offset: 0x38D0464 VA: 0x38D0464 Slot: 9
	public void DataSynced() { }

	// RVA: 0x38D046C Offset: 0x38D046C VA: 0x38D046C Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x38D0518 Offset: 0x38D0518 VA: 0x38D0518 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x38D0558 Offset: 0x38D0558 VA: 0x38D0558 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x38D0660 Offset: 0x38D0660 VA: 0x38D0660
	public string GetSegment() { }

	// RVA: 0x38D06C8 Offset: 0x38D06C8 VA: 0x38D06C8
	public bool IsRewardPoolInitialized() { }

	// RVA: 0x38D06FC Offset: 0x38D06FC VA: 0x38D06FC
	public void InitializeRewardPoolV2() { }

	// RVA: 0x38D0800 Offset: 0x38D0800 VA: 0x38D0800
	public void InitializeRewardPool(DailyRewardProbabilityModel probabilityConfig) { }

	// RVA: 0x38D0E38 Offset: 0x38D0E38 VA: 0x38D0E38
	private List<CurrencyType> GetSelectedRewardTypes(DailyRewardProbabilityModel probabilityConfig) { }

	// RVA: 0x38D132C Offset: 0x38D132C VA: 0x38D132C
	private int GetRandomCoinAmountByConfig(DailyRewardProbabilityModel probabilityConfig) { }

	// RVA: 0x38D1600 Offset: 0x38D1600 VA: 0x38D1600
	private int GetRandomUnlimitedLifeTimeByConfig(DailyRewardProbabilityModel probabilityConfig) { }

	// RVA: 0x38D1C0C Offset: 0x38D1C0C VA: 0x38D1C0C
	private int GetUnlimitedLifeOpenProbabilityByOpenedRewardCount(int openedRewardCount) { }

	// RVA: 0x38D1D04 Offset: 0x38D1D04 VA: 0x38D1D04
	public RewardModel SelectRandomRewardV2(List<DailyRewardProbabilityRewardModelV2> probabilities, int selectedRewardIndex) { }

	// RVA: 0x38D1E50 Offset: 0x38D1E50 VA: 0x38D1E50
	private RewardModel GetRandomRewardV2(List<DailyRewardProbabilityRewardModelV2> probabilities) { }

	// RVA: 0x38D24A0 Offset: 0x38D24A0 VA: 0x38D24A0
	public RewardModel SelectRandomRewardFromPool(int selectedRewardIndex) { }

	// RVA: 0x38D2324 Offset: 0x38D2324 VA: 0x38D2324
	private void AddRewardToLastEarnedRewards(RewardModel selectedReward) { }

	// RVA: 0x38D2C18 Offset: 0x38D2C18 VA: 0x38D2C18
	public void QueueSelectedReward(RewardModel selectedReward) { }

	[AsyncStateMachine(typeof(DailyRewardDataService.<GiveBulkRewards>d__34))]
	// RVA: 0x38D2D2C Offset: 0x38D2D2C VA: 0x38D2D2C
	public Task GiveBulkRewards() { }

	// RVA: 0x38D2DFC Offset: 0x38D2DFC VA: 0x38D2DFC
	public bool HasRewardInQueue() { }

	// RVA: 0x38D261C Offset: 0x38D261C VA: 0x38D261C
	private RewardModel GetRandomRewardFromPool() { }

	// RVA: 0x38D22B4 Offset: 0x38D22B4 VA: 0x38D22B4
	public bool IsSelectionCompleted() { }

	// RVA: 0x38D1924 Offset: 0x38D1924 VA: 0x38D1924
	private bool TryGetSameRepeatedEarnedReward(out RewardModel rewardModel) { }

	// RVA: 0x38D1A98 Offset: 0x38D1A98 VA: 0x38D1A98
	public bool IsPlayerHasNoLifeOrInHardLevel() { }
}

// Namespace: Modules.Contexts.Home.DailyReward.Scripts