public class JetpackRaceDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 4204
{
	// Fields
	private readonly ISaveLoad<JetpackRaceModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private JetpackRaceModel _model; // 0x20

	// Methods

	// RVA: 0x3B16A40 Offset: 0x3B16A40 VA: 0x3B16A40
	public void .ctor(ISaveLoad<JetpackRaceModel> saveLoad) { }

	// RVA: 0x3B16A78 Offset: 0x3B16A78 VA: 0x3B16A78 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B16B38 Offset: 0x3B16B38 VA: 0x3B16B38 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B16B3C Offset: 0x3B16B3C VA: 0x3B16B3C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3B16BF4 Offset: 0x3B16BF4 VA: 0x3B16BF4 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3B16BFC Offset: 0x3B16BFC VA: 0x3B16BFC Slot: 8
	public void DataSynced() { }

	// RVA: 0x3B16C04 Offset: 0x3B16C04 VA: 0x3B16C04 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3B16CB0 Offset: 0x3B16CB0 VA: 0x3B16CB0 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3B16CF0 Offset: 0x3B16CF0 VA: 0x3B16CF0 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3B16DF8 Offset: 0x3B16DF8 VA: 0x3B16DF8 Slot: 12
	public void DeleteData() { }

	// RVA: 0x3B16EC8 Offset: 0x3B16EC8 VA: 0x3B16EC8
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3B16ED4 Offset: 0x3B16ED4 VA: 0x3B16ED4
	public void ResetScore() { }

	// RVA: 0x3B16F0C Offset: 0x3B16F0C VA: 0x3B16F0C
	public void IncreaseScore() { }

	// RVA: 0x3B16FA0 Offset: 0x3B16FA0 VA: 0x3B16FA0
	public int GetScore() { }

	// RVA: 0x3B16FCC Offset: 0x3B16FCC VA: 0x3B16FCC
	public int GetLastSeenScore() { }

	// RVA: 0x3B16FF8 Offset: 0x3B16FF8 VA: 0x3B16FF8
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x3B17014 Offset: 0x3B17014 VA: 0x3B17014
	public void MarkEventIntroduced() { }

	// RVA: 0x3B17048 Offset: 0x3B17048 VA: 0x3B17048
	public void SetClaimedLocally() { }

	[CanBeNull]
	// RVA: 0x3B17078 Offset: 0x3B17078 VA: 0x3B17078
	public JetPackRaceCacheModel GetCachedRace() { }

	// RVA: 0x3B17094 Offset: 0x3B17094 VA: 0x3B17094
	public void CacheRace(JetPackRaceCacheModel cacheModel) { }

	// RVA: 0x3B170C0 Offset: 0x3B170C0 VA: 0x3B170C0
	public void UpdateLastSeen() { }

	// RVA: 0x3B171B8 Offset: 0x3B171B8 VA: 0x3B171B8
	public void UpdateLastSeenBanner() { }

	// RVA: 0x3B17268 Offset: 0x3B17268 VA: 0x3B17268
	public void IncreaseWinRecord() { }

	// RVA: 0x3B17294 Offset: 0x3B17294 VA: 0x3B17294
	public int GetWinRecord() { }

	// RVA: 0x3B172B0 Offset: 0x3B172B0 VA: 0x3B172B0
	public bool IsJoinPopupIntroduced() { }

	// RVA: 0x3B172CC Offset: 0x3B172CC VA: 0x3B172CC
	public void SetIsJoinPopupIntroduced(bool isJoinPopupIntroduced) { }

	// RVA: 0x3B172F4 Offset: 0x3B172F4 VA: 0x3B172F4
	public void SetHasUsedLimitlessLife(bool hasUsedLimitlessLife) { }

	// RVA: 0x3B1731C Offset: 0x3B1731C VA: 0x3B1731C
	public bool HasUsedLimitlessLife() { }
}

// Namespace: 
[CompilerGenerated]