public class SkyJumpDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 2737
{
	// Fields
	private readonly ISaveLoad<SkyJumpModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private SkyJumpModel _model; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x28

	// Methods

	// RVA: 0x2F11B54 Offset: 0x2F11B54 VA: 0x2F11B54
	public void .ctor(ISaveLoad<SkyJumpModel> saveLoad) { }

	// RVA: 0x2F11B84 Offset: 0x2F11B84 VA: 0x2F11B84 Slot: 4
	public void Initialize() { }

	// RVA: 0x2F11C98 Offset: 0x2F11C98 VA: 0x2F11C98 Slot: 5
	public void Dispose() { }

	// RVA: 0x2F11C9C Offset: 0x2F11C9C VA: 0x2F11C9C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2F11D54 Offset: 0x2F11D54 VA: 0x2F11D54 Slot: 7
	public void DeleteData() { }

	// RVA: 0x2F11E20 Offset: 0x2F11E20 VA: 0x2F11E20
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2F11E30 Offset: 0x2F11E30 VA: 0x2F11E30 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2F11E38 Offset: 0x2F11E38 VA: 0x2F11E38 Slot: 9
	public void DataSynced() { }

	// RVA: 0x2F11E40 Offset: 0x2F11E40 VA: 0x2F11E40 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x2F11ED8 Offset: 0x2F11ED8 VA: 0x2F11ED8 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x2F11F18 Offset: 0x2F11F18 VA: 0x2F11F18 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2F12028 Offset: 0x2F12028 VA: 0x2F12028
	public void Fall() { }

	// RVA: 0x2F1205C Offset: 0x2F1205C VA: 0x2F1205C
	public void IncreaseScore() { }

	// RVA: 0x2F120F4 Offset: 0x2F120F4 VA: 0x2F120F4
	public int GetScore() { }

	// RVA: 0x2F12120 Offset: 0x2F12120 VA: 0x2F12120
	public int GetLastSeenScore() { }

	// RVA: 0x2F1214C Offset: 0x2F1214C VA: 0x2F1214C
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x2F12170 Offset: 0x2F12170 VA: 0x2F12170
	public void MarkEventIntroduced() { }

	// RVA: 0x2F121AC Offset: 0x2F121AC VA: 0x2F121AC
	public void SetClaimedLocally() { }

	[CanBeNull]
	// RVA: 0x2F121DC Offset: 0x2F121DC VA: 0x2F121DC
	public SkyJumpCacheModel GetCachedRace() { }

	// RVA: 0x2F121F8 Offset: 0x2F121F8 VA: 0x2F121F8
	public void CacheRace(SkyJumpCacheModel cacheModel) { }

	// RVA: 0x2F12228 Offset: 0x2F12228 VA: 0x2F12228
	public void UpdateLastSeen() { }

	// RVA: 0x2F1225C Offset: 0x2F1225C VA: 0x2F1225C
	public void UpdateLastSeenBanner() { }

	// RVA: 0x2F1226C Offset: 0x2F1226C VA: 0x2F1226C
	public int GetWinRecord() { }

	// RVA: 0x2F12290 Offset: 0x2F12290 VA: 0x2F12290
	public void IncreaseWinRecord() { }

	// RVA: 0x2F122C8 Offset: 0x2F122C8 VA: 0x2F122C8
	public bool IsJoinPopupIntroduced() { }

	// RVA: 0x2F122E4 Offset: 0x2F122E4 VA: 0x2F122E4
	public void SetIsJoinPopupIntroduced(bool isJoinPopupIntroduced) { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts