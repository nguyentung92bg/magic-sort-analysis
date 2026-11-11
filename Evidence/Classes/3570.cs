public class MergeMiniGameDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 3570
{
	// Fields
	private MergeMiniGameModel _model; // 0x10
	private ISaveLoad<MergeMiniGameModel> _saveLoad; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private bool _isMarkedForLateUpdate; // 0x28
	private bool _isDataChangedSinceLastSave; // 0x29
	private const int SetCount = 5;
	public int CellCount; // 0x2C

	// Methods

	// RVA: 0x21921D4 Offset: 0x21921D4 VA: 0x21921D4
	public void .ctor(ISaveLoad<MergeMiniGameModel> saveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x2192220 Offset: 0x2192220 VA: 0x2192220 Slot: 4
	public void Initialize() { }

	// RVA: 0x21922E0 Offset: 0x21922E0 VA: 0x21922E0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2192398 Offset: 0x2192398 VA: 0x2192398 Slot: 5
	public void Dispose() { }

	// RVA: 0x219239C Offset: 0x219239C VA: 0x219239C Slot: 7
	public void DeleteData() { }

	// RVA: 0x219246C Offset: 0x219246C VA: 0x219246C
	public void StartNewEvent(MergeMiniGameEventInfoResponse response, int eventType) { }

	// RVA: 0x2192774 Offset: 0x2192774 VA: 0x2192774
	private List<MergeMiniGameItemModel> BuildItemDefinitions(MergeMiniGameEventInfoResponse response) { }

	// RVA: 0x2192C24 Offset: 0x2192C24 VA: 0x2192C24
	private List<ScatterDefinitionCacheModel> BuildScatterDefinitions(MergeMiniGameEventInfoResponse response) { }

	// RVA: 0x219332C Offset: 0x219332C VA: 0x219332C
	private List<MergeMiniGameCellModel> BuildBoardState(MergeMiniGameEventInfoResponse response) { }

	// RVA: 0x2193E54 Offset: 0x2193E54 VA: 0x2193E54
	public MergeMiniGameConfigModel GetConfig() { }

	// RVA: 0x2193E78 Offset: 0x2193E78 VA: 0x2193E78
	public void SwapItems(int fromPosition, int toPosition) { }

	// RVA: 0x2194044 Offset: 0x2194044 VA: 0x2194044
	public void AddItem(int position, MergeMiniGameItemModel item) { }

	// RVA: 0x21943C4 Offset: 0x21943C4 VA: 0x21943C4
	public void SnapItem(int fromPosition, int toPosition) { }

	// RVA: 0x2194028 Offset: 0x2194028 VA: 0x2194028
	public MergeMiniGameCacheModel GetCachedEventInfo() { }

	// RVA: 0x2193CBC Offset: 0x2193CBC VA: 0x2193CBC
	public MergeMiniGameItemType GetItemType(int setId, int level) { }

	// RVA: 0x219453C Offset: 0x219453C VA: 0x219453C
	public void ClaimEvent() { }

	// RVA: 0x21945E0 Offset: 0x21945E0 VA: 0x21945E0
	public bool IsClaimed() { }

	// RVA: 0x2194614 Offset: 0x2194614 VA: 0x2194614
	public void JoinEvent() { }

	// RVA: 0x21946B8 Offset: 0x21946B8 VA: 0x21946B8
	public bool IsJoined() { }

	// RVA: 0x2193CB0 Offset: 0x2193CB0 VA: 0x2193CB0
	private void MarkDataForLateUpdate() { }

	// RVA: 0x21946EC Offset: 0x21946EC VA: 0x21946EC
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x2194714 Offset: 0x2194714 VA: 0x2194714
	public void ResetEventIntroducedEverInLifeTime() { }

	// RVA: 0x2194738 Offset: 0x2194738 VA: 0x2194738
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x2194754 Offset: 0x2194754 VA: 0x2194754 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x219475C Offset: 0x219475C VA: 0x219475C Slot: 9
	public void DataSynced() { }

	// RVA: 0x2194764 Offset: 0x2194764 VA: 0x2194764 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x2194810 Offset: 0x2194810 VA: 0x2194810 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x2194850 Offset: 0x2194850 VA: 0x2194850 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2194958 Offset: 0x2194958 VA: 0x2194958
	public int GetLastEnergyIncreaseCount() { }

	// RVA: 0x2194984 Offset: 0x2194984 VA: 0x2194984
	public void SetLastEnergyIncreaseCount(int count) { }

	// RVA: 0x21949B0 Offset: 0x21949B0 VA: 0x21949B0
	public int GetCurrentStage(int setID = 0) { }

	// RVA: 0x2193B70 Offset: 0x2193B70 VA: 0x2193B70
	public void SetCurrentStage(int stage, int setID = 0) { }

	// RVA: 0x2194A44 Offset: 0x2194A44 VA: 0x2194A44
	public int GetLastShownStage(int setID = 0) { }

	// RVA: 0x2193C10 Offset: 0x2193C10 VA: 0x2193C10
	public void SetLastShownStage(int stage, int setID = 0) { }

	// RVA: 0x2194AD8 Offset: 0x2194AD8 VA: 0x2194AD8
	public int GetMultiplier() { }

	// RVA: 0x2194B04 Offset: 0x2194B04 VA: 0x2194B04
	public void SetMultiplier(int multiplier) { }

	// RVA: 0x2194B30 Offset: 0x2194B30 VA: 0x2194B30
	public void MergeItems(int from, int to, MergeMiniGameItemModel itemModel) { }

	// RVA: 0x2194D68 Offset: 0x2194D68 VA: 0x2194D68
	private MergeMiniGameCellModel GetCellModel(int cellIndex) { }

	// RVA: 0x2194C54 Offset: 0x2194C54 VA: 0x2194C54
	public void RemoveItemsAt(int cellIndex) { }

	// RVA: 0x2194B78 Offset: 0x2194B78 VA: 0x2194B78
	public void RemoveCellData(int cellIndex) { }

	// RVA: 0x2194EDC Offset: 0x2194EDC VA: 0x2194EDC
	public void RemoveItemAt(int cellIndex, int itemIndex) { }

	// RVA: 0x2195000 Offset: 0x2195000 VA: 0x2195000
	public void RemoveItemFromGeneratorList(int position) { }

	// RVA: 0x21952F8 Offset: 0x21952F8 VA: 0x21952F8
	public void AddToScatterQueue(List<MergeMiniGameItemModel> itemModels) { }

	// RVA: 0x21953C8 Offset: 0x21953C8 VA: 0x21953C8
	public void AddPendingPopulatedScatterCell(int cellIndex) { }

	// RVA: 0x21953F4 Offset: 0x21953F4 VA: 0x21953F4
	public bool TryGetItemFromScatterQueue(out List<MergeMiniGameItemModel> scatterItemModel) { }

	// RVA: 0x21954DC Offset: 0x21954DC VA: 0x21954DC
	public void ClearBoard() { }

	// RVA: 0x219555C Offset: 0x219555C VA: 0x219555C
	public bool GetEventStartTutorialCompleted() { }

	// RVA: 0x219557C Offset: 0x219557C VA: 0x219557C
	public void SetEventStartTutorialCompleted(bool value) { }

	// RVA: 0x21955A4 Offset: 0x21955A4 VA: 0x21955A4
	public bool GetGeneratorItemTutorialCompleted() { }

	// RVA: 0x21955C4 Offset: 0x21955C4 VA: 0x21955C4
	public void SetGeneratorItemTutorialCompleted(bool value) { }

	// RVA: 0x21955EC Offset: 0x21955EC VA: 0x21955EC
	public bool GetRewardedTutorialCompleted() { }

	// RVA: 0x219560C Offset: 0x219560C VA: 0x219560C
	public void SetRewardedTutorialCompleted(bool value) { }

	// RVA: 0x2195634 Offset: 0x2195634 VA: 0x2195634
	public bool GetBubbleTutorialCompleted() { }

	// RVA: 0x2195654 Offset: 0x2195654 VA: 0x2195654
	public void SetBubbleTutorialCompleted(bool value) { }

	// RVA: 0x219567C Offset: 0x219567C VA: 0x219567C
	public bool IsIntroduced() { }

	// RVA: 0x21956A4 Offset: 0x21956A4 VA: 0x21956A4
	public void SetIntroduced(bool value) { }

	// RVA: 0x21956DC Offset: 0x21956DC VA: 0x21956DC
	public int GetForceOpenCount() { }

	// RVA: 0x21956FC Offset: 0x21956FC VA: 0x21956FC
	public void IncreaseForceOpenCount() { }

	// RVA: 0x2195724 Offset: 0x2195724 VA: 0x2195724
	public void IncreaseSpendEnergyCount(int amount) { }

	// RVA: 0x219574C Offset: 0x219574C VA: 0x219574C
	public void IncreaseTotalCollectedUnlimitedTime(TimeSpan amount) { }

	// RVA: 0x21957D8 Offset: 0x21957D8 VA: 0x21957D8
	public int GetTotalCollectedCoinAmount() { }

	// RVA: 0x21957F8 Offset: 0x21957F8 VA: 0x21957F8
	public TimeSpan GetTotalCollectedUnlimitedTime() { }

	// RVA: 0x219586C Offset: 0x219586C VA: 0x219586C
	public void IncreaseTotalCollectedCoinAmount(int amount) { }

	// RVA: 0x2195894 Offset: 0x2195894 VA: 0x2195894
	public int GetSpendEnergyCount() { }

	// RVA: 0x21958B4 Offset: 0x21958B4 VA: 0x21958B4
	public string GetBoardState() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts