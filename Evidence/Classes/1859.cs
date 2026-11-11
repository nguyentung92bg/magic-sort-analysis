public class WheelOfFortuneDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 1859
{
	// Fields
	private readonly ISaveLoad<WheelOfFortuneDataModel> _saveLoad; // 0x10
	private WheelOfFortuneDataModel _model; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x20
	private bool _isMarkedForLateUpdate; // 0x21
	private const int ConsecutiveStrategyCheckCount = 2;
	private const int MaxActiveTaskCount = 2;

	// Methods

	// RVA: 0x2DA1448 Offset: 0x2DA1448 VA: 0x2DA1448
	public void .ctor(ISaveLoad<WheelOfFortuneDataModel> saveLoad) { }

	// RVA: 0x2DA1478 Offset: 0x2DA1478 VA: 0x2DA1478 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DA1538 Offset: 0x2DA1538 VA: 0x2DA1538 Slot: 5
	public void Dispose() { }

	// RVA: 0x2DA153C Offset: 0x2DA153C VA: 0x2DA153C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2DA15F4 Offset: 0x2DA15F4 VA: 0x2DA15F4 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2DA15FC Offset: 0x2DA15FC VA: 0x2DA15FC Slot: 8
	public void DataSynced() { }

	// RVA: 0x2DA1604 Offset: 0x2DA1604 VA: 0x2DA1604 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x2DA16B0 Offset: 0x2DA16B0 VA: 0x2DA16B0 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2DA16F0 Offset: 0x2DA16F0 VA: 0x2DA16F0 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2DA17F8 Offset: 0x2DA17F8 VA: 0x2DA17F8 Slot: 12
	public void DeleteData() { }

	// RVA: 0x2DA18C8 Offset: 0x2DA18C8 VA: 0x2DA18C8
	public void StartNewEvent(WheelOfFortuneInfoResponse wheelOfFortuneInfoResponse, int eventType) { }

	// RVA: 0x2DA1BF4 Offset: 0x2DA1BF4 VA: 0x2DA1BF4
	private WheelOfFortuneBackUpTaskModel MapToBackUpTask(WheelOfFortuneRemoteTaskModel remoteTask) { }

	// RVA: 0x2DA1C68 Offset: 0x2DA1C68 VA: 0x2DA1C68
	private WheelOfFortuneStageModel Map(WheelOfFortuneRemoteStageModel remoteStage, bool isLastStage) { }

	// RVA: 0x2DA235C Offset: 0x2DA235C VA: 0x2DA235C
	public string GetSegment() { }

	// RVA: 0x2DA1BE8 Offset: 0x2DA1BE8 VA: 0x2DA1BE8
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2DA2394 Offset: 0x2DA2394 VA: 0x2DA2394
	public void IncreaseProgress() { }

	// RVA: 0x2DA23BC Offset: 0x2DA23BC VA: 0x2DA23BC
	public int GetLastSeenStageIndex() { }

	// RVA: 0x2DA24D0 Offset: 0x2DA24D0 VA: 0x2DA24D0
	public int GetCurrentStageIndex() { }

	// RVA: 0x2DA2414 Offset: 0x2DA2414 VA: 0x2DA2414
	private int GetStageIdByProgress(int progress) { }

	// RVA: 0x2DA25B4 Offset: 0x2DA25B4 VA: 0x2DA25B4
	public void SetLastSeenProgress(int progress) { }

	// RVA: 0x2DA25D4 Offset: 0x2DA25D4 VA: 0x2DA25D4
	public int GetConsecutiveStrategyCheckCount() { }

	// RVA: 0x2DA2528 Offset: 0x2DA2528 VA: 0x2DA2528
	public List<WheelOfFortuneStageModel> GetStages() { }

	// RVA: 0x2DA25DC Offset: 0x2DA25DC VA: 0x2DA25DC
	public bool SpinAlertSeenOnLobbyButton() { }

	// RVA: 0x2DA2604 Offset: 0x2DA2604 VA: 0x2DA2604
	public int LastSeenLobbyButtonProgress() { }

	// RVA: 0x2DA2624 Offset: 0x2DA2624 VA: 0x2DA2624
	public void SetSpinAlertSeenOnLobbyButton() { }

	// RVA: 0x2DA2648 Offset: 0x2DA2648 VA: 0x2DA2648
	public void ResetSpinAlertSeenOnLobbyButton() { }

	// RVA: 0x2DA2668 Offset: 0x2DA2668 VA: 0x2DA2668
	public void SetLastSeenLobbyButtonProgress(int currentProgress) { }

	// RVA: 0x2DA2688 Offset: 0x2DA2688 VA: 0x2DA2688
	private void SetStageSpinResultIndex(int stage, int spinIndex) { }

	// RVA: 0x2DA270C Offset: 0x2DA270C VA: 0x2DA270C
	private void SetStageSpinStrategy(WheelOfFortuneSpinStrategy strategy) { }

	// RVA: 0x2DA27C8 Offset: 0x2DA27C8 VA: 0x2DA27C8
	public int GetStageSpinResultIndex(int stage) { }

	// RVA: 0x2DA283C Offset: 0x2DA283C VA: 0x2DA283C
	public List<WheelOfFortuneSpinStrategy> GetSpinStrategies() { }

	// RVA: 0x2DA237C Offset: 0x2DA237C VA: 0x2DA237C
	public WheelOfFortuneCacheModel GetCachedEventInfo() { }

	// RVA: 0x2DA28C8 Offset: 0x2DA28C8 VA: 0x2DA28C8
	public bool IsClaimed() { }

	// RVA: 0x2DA28F0 Offset: 0x2DA28F0 VA: 0x2DA28F0
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x2DA290C Offset: 0x2DA290C VA: 0x2DA290C
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x2DA23E8 Offset: 0x2DA23E8 VA: 0x2DA23E8
	public int GetLastSeenProgress() { }

	// RVA: 0x2DA24FC Offset: 0x2DA24FC VA: 0x2DA24FC
	public int GetCurrentProgress() { }

	// RVA: 0x2DA2934 Offset: 0x2DA2934 VA: 0x2DA2934
	public int GetMaxProgress() { }

	// RVA: 0x2DA2AB4 Offset: 0x2DA2AB4 VA: 0x2DA2AB4
	public void SyncLastSeen() { }

	// RVA: 0x2DA2F98 Offset: 0x2DA2F98 VA: 0x2DA2F98
	public void SetSpinResult(int stageIndex, int spinResultIndex, WheelOfFortuneSpinStrategy strategy) { }

	// RVA: 0x2DA3030 Offset: 0x2DA3030 VA: 0x2DA3030
	public void ClaimEvent() { }

	// RVA: 0x2DA3054 Offset: 0x2DA3054 VA: 0x2DA3054
	public void SetClosedByCollectionReward(bool value) { }

	// RVA: 0x2DA3078 Offset: 0x2DA3078 VA: 0x2DA3078
	public bool IsClosedByCollectionReward() { }

	// RVA: 0x2DA30A0 Offset: 0x2DA30A0 VA: 0x2DA30A0
	public bool IsLastStage(int stageIndex) { }

	// RVA: 0x2DA3160 Offset: 0x2DA3160 VA: 0x2DA3160
	public int GetStageSpinCost(int stageIndex) { }

	// RVA: 0x2DA3230 Offset: 0x2DA3230 VA: 0x2DA3230
	public int GetWheelOfFortuneCurrencyCount() { }

	// RVA: 0x2DA325C Offset: 0x2DA325C VA: 0x2DA325C
	public void ChangeWheelOfFortuneCurrencyCount(int changeAmount) { }

	// RVA: 0x2DA2C44 Offset: 0x2DA2C44 VA: 0x2DA2C44
	public List<WheelOfFortuneTaskModel> GetActiveTasks() { }

	// RVA: 0x2DA32F4 Offset: 0x2DA32F4 VA: 0x2DA32F4
	public WheelOfFortuneTaskModel UpdateTaskWithBackUp(WheelOfFortuneTaskModel task) { }

	// RVA: 0x2DA3444 Offset: 0x2DA3444 VA: 0x2DA3444
	public bool TryIncreaseTaskProgress(WheelOfFortuneTaskType taskType, int amount) { }

	// RVA: 0x2DA3688 Offset: 0x2DA3688 VA: 0x2DA3688
	public bool TryReachTaskProgress(WheelOfFortuneTaskType taskType, int target) { }

	// RVA: 0x2DA38DC Offset: 0x2DA38DC VA: 0x2DA38DC
	public bool TryResetTaskProgress(WheelOfFortuneTaskType taskType) { }

	// RVA: 0x2DA3A7C Offset: 0x2DA3A7C VA: 0x2DA3A7C
	public void MarkTaskAsSeen(int taskId) { }

	// RVA: 0x2DA3C38 Offset: 0x2DA3C38 VA: 0x2DA3C38
	public bool ClaimTask(int taskId) { }

	// RVA: 0x2DA3AAC Offset: 0x2DA3AAC VA: 0x2DA3AAC
	public WheelOfFortuneTaskModel GetTaskById(int id) { }

	// RVA: 0x2DA2F68 Offset: 0x2DA2F68 VA: 0x2DA2F68
	private void SetAutoOpen(bool canAutoOpen) { }

	// RVA: 0x2DA3DE0 Offset: 0x2DA3DE0 VA: 0x2DA3DE0
	public WheelOfFortuneStageModel GetStage(int stageIndex) { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune