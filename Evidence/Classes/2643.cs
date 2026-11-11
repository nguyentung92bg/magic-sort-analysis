public class SkyJumpWithStageDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 2643
{
	// Fields
	private readonly ISaveLoad<SkyJumpWithStageModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private SkyJumpWithStageModel _model; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x28

	// Methods

	// RVA: 0x2472DB4 Offset: 0x2472DB4 VA: 0x2472DB4
	public void .ctor(ISaveLoad<SkyJumpWithStageModel> saveLoad) { }

	// RVA: 0x2472DE4 Offset: 0x2472DE4 VA: 0x2472DE4 Slot: 4
	public void Initialize() { }

	// RVA: 0x2472EF8 Offset: 0x2472EF8 VA: 0x2472EF8 Slot: 5
	public void Dispose() { }

	// RVA: 0x2472EFC Offset: 0x2472EFC VA: 0x2472EFC Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2472FB4 Offset: 0x2472FB4 VA: 0x2472FB4 Slot: 7
	public void DeleteData() { }

	// RVA: 0x2473080 Offset: 0x2473080 VA: 0x2473080
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2473090 Offset: 0x2473090 VA: 0x2473090 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2473098 Offset: 0x2473098 VA: 0x2473098 Slot: 9
	public void DataSynced() { }

	// RVA: 0x24730A0 Offset: 0x24730A0 VA: 0x24730A0 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x2473138 Offset: 0x2473138 VA: 0x2473138 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x2473178 Offset: 0x2473178 VA: 0x2473178 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2473288 Offset: 0x2473288 VA: 0x2473288
	public void Fall() { }

	// RVA: 0x24732BC Offset: 0x24732BC VA: 0x24732BC
	public void IncreaseScore() { }

	// RVA: 0x2473354 Offset: 0x2473354 VA: 0x2473354
	public int GetScore() { }

	// RVA: 0x2473380 Offset: 0x2473380 VA: 0x2473380
	public int GetLastSeenScore() { }

	// RVA: 0x24733AC Offset: 0x24733AC VA: 0x24733AC
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x24733D0 Offset: 0x24733D0 VA: 0x24733D0
	public void MarkEventIntroduced() { }

	// RVA: 0x247340C Offset: 0x247340C VA: 0x247340C
	public void SetClaimedLocally() { }

	[CanBeNull]
	// RVA: 0x247343C Offset: 0x247343C VA: 0x247343C
	public SkyJumpWithStageCacheModel GetCachedRace() { }

	// RVA: 0x2473458 Offset: 0x2473458 VA: 0x2473458
	public void CacheRace(SkyJumpWithStageCacheModel cacheModel) { }

	// RVA: 0x2473488 Offset: 0x2473488 VA: 0x2473488
	public void UpdateLastSeen() { }

	// RVA: 0x24734BC Offset: 0x24734BC VA: 0x24734BC
	public void UpdateLastSeenBanner() { }

	// RVA: 0x24734CC Offset: 0x24734CC VA: 0x24734CC
	public int GetWinRecord() { }

	// RVA: 0x24734F0 Offset: 0x24734F0 VA: 0x24734F0
	public void IncreaseWinRecord() { }

	// RVA: 0x2473528 Offset: 0x2473528 VA: 0x2473528
	public bool IsJoinPopupIntroduced() { }

	// RVA: 0x2473544 Offset: 0x2473544 VA: 0x2473544
	public void SetIsJoinPopupIntroduced(bool isJoinPopupIntroduced) { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts