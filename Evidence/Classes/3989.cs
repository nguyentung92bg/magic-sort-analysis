public class MagicLabDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 3989
{
	// Fields
	private readonly ISaveLoad<MagicLabModel> _saveLoad; // 0x10
	private MagicLabModel _model; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x20
	private bool _isMarkedForLateUpdate; // 0x21

	// Methods

	// RVA: 0x374E914 Offset: 0x374E914 VA: 0x374E914
	public void .ctor(ISaveLoad<MagicLabModel> saveLoad) { }

	// RVA: 0x374E944 Offset: 0x374E944 VA: 0x374E944 Slot: 4
	public void Initialize() { }

	// RVA: 0x374EA04 Offset: 0x374EA04 VA: 0x374EA04 Slot: 5
	public void Dispose() { }

	// RVA: 0x374EA08 Offset: 0x374EA08 VA: 0x374EA08
	public void ClaimEvent() { }

	// RVA: 0x374EAB8 Offset: 0x374EAB8 VA: 0x374EAB8
	public void StartNewEvent(MagicLabEventInfoResponse magicLabEventInfoResponse, int eventType) { }

	// RVA: 0x374EC90 Offset: 0x374EC90 VA: 0x374EC90
	private RewardModel ConvertRewardListToChestReward(List<RewardModel> rewardModels) { }

	// RVA: 0x374EEE4 Offset: 0x374EEE4 VA: 0x374EEE4
	public string GetEventId() { }

	// RVA: 0x374EF44 Offset: 0x374EF44 VA: 0x374EF44
	public bool IsEventCached() { }

	// RVA: 0x374EF68 Offset: 0x374EF68 VA: 0x374EF68
	public MagicLabCacheModel GetCachedEventInfo() { }

	// RVA: 0x374EF84 Offset: 0x374EF84 VA: 0x374EF84
	public int GetCurrentStage() { }

	// RVA: 0x374EFB0 Offset: 0x374EFB0 VA: 0x374EFB0
	public int GetLastSeenStage() { }

	// RVA: 0x374EFDC Offset: 0x374EFDC VA: 0x374EFDC
	public void SyncLastSeen() { }

	// RVA: 0x374F6D0 Offset: 0x374F6D0 VA: 0x374F6D0
	public bool IsTaskCompletedInStage(int stageId, MagicLabTaskType taskType) { }

	// RVA: 0x374F4D0 Offset: 0x374F4D0 VA: 0x374F4D0
	public bool IsAllTaskCompletedInStage(int stageId) { }

	// RVA: 0x374F88C Offset: 0x374F88C VA: 0x374F88C
	public bool IncreaseTaskProgressAndGetStageIfCompleted(MagicLabTaskType magicLabTaskType, int increaseAmount, out int stageIdOfCompletedTask) { }

	// RVA: 0x374FCC8 Offset: 0x374FCC8 VA: 0x374FCC8
	public bool ReachTaskProgressAndGetStageIfCompleted(MagicLabTaskType magicLabTaskType, int reachedProgress, out int stageIdOfCompletedTask) { }

	// RVA: 0x3750078 Offset: 0x3750078 VA: 0x3750078
	public void UpdateCurrentStage() { }

	// RVA: 0x3750328 Offset: 0x3750328 VA: 0x3750328
	private bool IsAllTasksCompletedInStage(int stageId) { }

	// RVA: 0x37501F4 Offset: 0x37501F4 VA: 0x37501F4
	private bool IsAllTasksCompletedInStage(MagicLabStage stage) { }

	// RVA: 0x374FBE8 Offset: 0x374FBE8 VA: 0x374FBE8
	public bool IsAllTasksCompletedInAllStages() { }

	// RVA: 0x375046C Offset: 0x375046C VA: 0x375046C
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x3750494 Offset: 0x3750494 VA: 0x3750494
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x37504B0 Offset: 0x37504B0 VA: 0x37504B0
	public bool IsClaimed() { }

	// RVA: 0x37504D4 Offset: 0x37504D4 VA: 0x37504D4 Slot: 7
	public void DeleteData() { }

	// RVA: 0x37505A4 Offset: 0x37505A4 VA: 0x37505A4 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x374EAAC Offset: 0x374EAAC VA: 0x374EAAC
	private void MarkDataForLateUpdate() { }

	// RVA: 0x375065C Offset: 0x375065C VA: 0x375065C Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3750664 Offset: 0x3750664 VA: 0x3750664 Slot: 9
	public void DataSynced() { }

	// RVA: 0x375066C Offset: 0x375066C VA: 0x375066C Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x3750718 Offset: 0x3750718 VA: 0x3750718 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x3750758 Offset: 0x3750758 VA: 0x3750758 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3750860 Offset: 0x3750860 VA: 0x3750860
	public bool TryClaimStage(int stageId) { }

	// RVA: 0x37509D4 Offset: 0x37509D4 VA: 0x37509D4
	public bool TryGetStageRewardsIfEligible(int stageId, out List<RewardModel> rewardModels) { }

	// RVA: 0x3750B40 Offset: 0x3750B40 VA: 0x3750B40
	private List<RewardModel> GetStageRewardModels(MagicLabStage stage) { }

	// RVA: 0x3750BF0 Offset: 0x3750BF0 VA: 0x3750BF0
	public bool IsStageRewardsEligible(int stageId) { }

	// RVA: 0x3750D28 Offset: 0x3750D28 VA: 0x3750D28
	public bool TryGetClaimableStages(out List<int> stages) { }

	// RVA: 0x3750F48 Offset: 0x3750F48 VA: 0x3750F48
	public bool HasAnyEligibleRewardInStages() { }

	// RVA: 0x3751028 Offset: 0x3751028 VA: 0x3751028
	public bool HasAnyTaskCompletedInLastSeenStage() { }

	// RVA: 0x3751208 Offset: 0x3751208 VA: 0x3751208
	public bool ShouldShowTwoTasksCompletedForcePopUp() { }

	// RVA: 0x37513F0 Offset: 0x37513F0 VA: 0x37513F0
	public int GetRemainingTaskInStage(int stageId) { }

	// RVA: 0x37515F8 Offset: 0x37515F8 VA: 0x37515F8
	public int GetCompletedTaskCountInStage(int stageId) { }

	// RVA: 0x3751800 Offset: 0x3751800 VA: 0x3751800
	public int GetCompletedStageCount() { }

	// RVA: 0x3751AB0 Offset: 0x3751AB0 VA: 0x3751AB0
	public int GetClaimedChestCount() { }

	// RVA: 0x3751C2C Offset: 0x3751C2C VA: 0x3751C2C
	public string GetSegment() { }

	[CompilerGenerated]
	// RVA: 0x3751C94 Offset: 0x3751C94 VA: 0x3751C94
	private MagicLabStage <StartNewEvent>b__8_0(MagicLabRemoteStageModel stage) { }

	[CompilerGenerated]
	// RVA: 0x3751E3C Offset: 0x3751E3C VA: 0x3751E3C
	private bool <TryGetClaimableStages>b__39_0(MagicLabStage s) { }

	[CompilerGenerated]
	// RVA: 0x3751E68 Offset: 0x3751E68 VA: 0x3751E68
	private bool <HasAnyEligibleRewardInStages>b__40_0(MagicLabStage s) { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts