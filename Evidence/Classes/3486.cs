public class MiniGameDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 3486
{
	// Fields
	private MiniGameModel _model; // 0x10
	private ISaveLoad<MiniGameModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x20B3790 Offset: 0x20B3790 VA: 0x20B3790
	public void .ctor(ISaveLoad<MiniGameModel> saveLoad) { }

	// RVA: 0x20B37C0 Offset: 0x20B37C0 VA: 0x20B37C0 Slot: 4
	public void Initialize() { }

	// RVA: 0x20B3880 Offset: 0x20B3880 VA: 0x20B3880 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x20B3938 Offset: 0x20B3938 VA: 0x20B3938 Slot: 5
	public void Dispose() { }

	// RVA: 0x20B393C Offset: 0x20B393C VA: 0x20B393C Slot: 7
	public void DeleteData() { }

	// RVA: 0x20B3A0C Offset: 0x20B3A0C VA: 0x20B3A0C
	public void StartNewEvent(MiniGameEventInfoResponse response) { }

	// RVA: 0x20B3C04 Offset: 0x20B3C04 VA: 0x20B3C04
	public MiniGameCacheModel GetCachedEventInfo() { }

	// RVA: 0x20B3C20 Offset: 0x20B3C20 VA: 0x20B3C20
	public void ClaimEvent() { }

	// RVA: 0x20B3CC4 Offset: 0x20B3CC4 VA: 0x20B3CC4
	public bool IsClaimed() { }

	// RVA: 0x20B3BF8 Offset: 0x20B3BF8 VA: 0x20B3BF8
	private void MarkDataForLateUpdate() { }

	// RVA: 0x20B3CF8 Offset: 0x20B3CF8 VA: 0x20B3CF8
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x20B3D20 Offset: 0x20B3D20 VA: 0x20B3D20
	public void ResetEventIntroducedEverInLifeTime() { }

	// RVA: 0x20B3D44 Offset: 0x20B3D44 VA: 0x20B3D44
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x20B3D60 Offset: 0x20B3D60 VA: 0x20B3D60 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x20B3D68 Offset: 0x20B3D68 VA: 0x20B3D68 Slot: 9
	public void DataSynced() { }

	// RVA: 0x20B3D70 Offset: 0x20B3D70 VA: 0x20B3D70 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x20B3E1C Offset: 0x20B3E1C VA: 0x20B3E1C Slot: 11
	public string GetSyncName() { }

	// RVA: 0x20B3E5C Offset: 0x20B3E5C VA: 0x20B3E5C Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x20B3F64 Offset: 0x20B3F64 VA: 0x20B3F64
	public string GetSegment() { }

	// RVA: 0x20B3FCC Offset: 0x20B3FCC VA: 0x20B3FCC
	public int GetTridentCount() { }

	// RVA: 0x20B3FF8 Offset: 0x20B3FF8 VA: 0x20B3FF8
	public void ChangeTridentCount(int changeAmount) { }

	// RVA: 0x20B4090 Offset: 0x20B4090 VA: 0x20B4090
	public int GetLastTridentIncreaseCount() { }

	// RVA: 0x20B40BC Offset: 0x20B40BC VA: 0x20B40BC
	public void SetLastTridentIncreaseCount(int count) { }

	// RVA: 0x20B40E8 Offset: 0x20B40E8 VA: 0x20B40E8
	public int GetCurrentStage() { }

	// RVA: 0x20B4114 Offset: 0x20B4114 VA: 0x20B4114
	public void SetCurrentStage(int stage) { }

	// RVA: 0x20B4140 Offset: 0x20B4140 VA: 0x20B4140
	public int GetCurrentStageSeedIndex() { }

	// RVA: 0x20B416C Offset: 0x20B416C VA: 0x20B416C
	public void SetCurrentStageSeedIndex(int seedIndex) { }

	// RVA: 0x20B4198 Offset: 0x20B4198 VA: 0x20B4198
	public List<int> GetCurrentStageHitCells() { }

	// RVA: 0x20B4224 Offset: 0x20B4224 VA: 0x20B4224
	public void AddCurrentStageHitCell(int cellId) { }

	// RVA: 0x20B42E0 Offset: 0x20B42E0 VA: 0x20B42E0
	public void ResetCurrentStageHitCells() { }

	// RVA: 0x20B4348 Offset: 0x20B4348 VA: 0x20B4348
	public int GetCurrentStageBoosterHitPercentage() { }

	// RVA: 0x20B4374 Offset: 0x20B4374 VA: 0x20B4374
	public void SetCurrentStageBoosterHitPercentage(int percentage) { }

	// RVA: 0x20B43A0 Offset: 0x20B43A0 VA: 0x20B43A0
	public void ResetCurrentStageBoosterHitPercentage() { }

	// RVA: 0x20B43CC Offset: 0x20B43CC VA: 0x20B43CC
	public List<int> GetClaimedStages() { }

	// RVA: 0x20B4458 Offset: 0x20B4458 VA: 0x20B4458
	public void AddClaimedStage(int stageIndex) { }

	// RVA: 0x20B4550 Offset: 0x20B4550 VA: 0x20B4550
	public void ResetClaimedStages() { }

	// RVA: 0x20B45B8 Offset: 0x20B45B8 VA: 0x20B45B8
	public int GetCurrentStageUsedTridentCount() { }

	// RVA: 0x20B45E4 Offset: 0x20B45E4 VA: 0x20B45E4
	public void IncreaseCurrentStageUsedTridentCount(int count) { }

	// RVA: 0x20B4618 Offset: 0x20B4618 VA: 0x20B4618
	public void ResetCurrentStageUsedTridentCount() { }

	// RVA: 0x20B4644 Offset: 0x20B4644 VA: 0x20B4644
	public int GetOfferPurchaseLimit() { }

	// RVA: 0x20B4670 Offset: 0x20B4670 VA: 0x20B4670
	public int GetOfferPurchasedCount() { }

	// RVA: 0x20B469C Offset: 0x20B469C VA: 0x20B469C
	public void IncreaseOfferPurchasedCount() { }

	// RVA: 0x20B46D0 Offset: 0x20B46D0 VA: 0x20B46D0
	public bool IsOfferIntroduced() { }

	// RVA: 0x20B4704 Offset: 0x20B4704 VA: 0x20B4704
	public void SetOfferIntroduced(bool introduced) { }

	// RVA: 0x20B4734 Offset: 0x20B4734 VA: 0x20B4734
	public bool IsOfferOpened() { }

	// RVA: 0x20B4768 Offset: 0x20B4768 VA: 0x20B4768
	public void SetOfferOpened(bool opened) { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts