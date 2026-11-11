public class BoatRushDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 4815
{
	// Fields
	private readonly ISaveLoad<BoatRushModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private BoatRushModel _model; // 0x20
	private readonly RemoteConfigs _remoteConfig; // 0x28
	private bool _shouldShowBoatRushPopupAfterJoin; // 0x30
	private bool _shouldShowJoinPopUpAfterClaim; // 0x31
	private bool _forceShowedJoinPopUpThisSession; // 0x32

	// Methods

	// RVA: 0x3FCB5D0 Offset: 0x3FCB5D0 VA: 0x3FCB5D0
	public void .ctor(ISaveLoad<BoatRushModel> saveLoad, RemoteConfigs remoteConfig) { }

	// RVA: 0x3FCB61C Offset: 0x3FCB61C VA: 0x3FCB61C Slot: 4
	public void Initialize() { }

	// RVA: 0x3FCB6DC Offset: 0x3FCB6DC VA: 0x3FCB6DC Slot: 5
	public void Dispose() { }

	// RVA: 0x3FCB6E0 Offset: 0x3FCB6E0 VA: 0x3FCB6E0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3FCB798 Offset: 0x3FCB798 VA: 0x3FCB798 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3FCB7A0 Offset: 0x3FCB7A0 VA: 0x3FCB7A0 Slot: 8
	public void DataSynced() { }

	// RVA: 0x3FCB7A8 Offset: 0x3FCB7A8 VA: 0x3FCB7A8 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3FCB854 Offset: 0x3FCB854 VA: 0x3FCB854 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3FCB894 Offset: 0x3FCB894 VA: 0x3FCB894 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3FCB99C Offset: 0x3FCB99C VA: 0x3FCB99C Slot: 12
	public void DeleteData() { }

	// RVA: 0x3FCBA6C Offset: 0x3FCBA6C VA: 0x3FCBA6C
	private void MarkDataForLateUpdate() { }

	[CanBeNull]
	// RVA: 0x3FCBA78 Offset: 0x3FCBA78 VA: 0x3FCBA78
	public BoatRushEventCacheModel GetCachedEventInfo() { }

	// RVA: 0x3FCBA94 Offset: 0x3FCBA94 VA: 0x3FCBA94
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x3FCBAB0 Offset: 0x3FCBAB0 VA: 0x3FCBAB0
	public void ResetEventCache() { }

	// RVA: 0x3FCBAE0 Offset: 0x3FCBAE0 VA: 0x3FCBAE0
	public void ResetRaceCache() { }

	// RVA: 0x3FCBB18 Offset: 0x3FCBB18 VA: 0x3FCBB18
	public void UpdateEventCache(BoatRushEventCacheModel cacheModel) { }

	// RVA: 0x3FCBB44 Offset: 0x3FCBB44 VA: 0x3FCBB44
	public void UpdateRaceCache(BoatRushRaceModel raceCacheModel) { }

	// RVA: 0x3FCBB78 Offset: 0x3FCBB78 VA: 0x3FCBB78
	public void UpdateTierCache(Dictionary<int, BoatRushTierModel> tierCacheModel) { }

	// RVA: 0x3FCBBAC Offset: 0x3FCBBAC VA: 0x3FCBBAC
	public void ResetTierCache() { }

	// RVA: 0x3FCBBE4 Offset: 0x3FCBBE4 VA: 0x3FCBBE4
	public void MarkEventPopUpIntroducedForEvent() { }

	// RVA: 0x3FCBC14 Offset: 0x3FCBC14 VA: 0x3FCBC14
	public void MarkEventPopUpIntroducedForStage(bool value) { }

	// RVA: 0x3FCBC44 Offset: 0x3FCBC44 VA: 0x3FCBC44
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x3FCBC64 Offset: 0x3FCBC64 VA: 0x3FCBC64
	public void MarkJoinPopUpIntroduced() { }

	// RVA: 0x3FCBC9C Offset: 0x3FCBC9C VA: 0x3FCBC9C
	private BoatRushConfigModel GetConfig() { }

	// RVA: 0x3FCBCC0 Offset: 0x3FCBCC0 VA: 0x3FCBCC0
	public int GetEventType() { }

	// RVA: 0x3FCBCEC Offset: 0x3FCBCEC VA: 0x3FCBCEC
	public void IncreaseScore() { }

	// RVA: 0x3FCBD8C Offset: 0x3FCBD8C VA: 0x3FCBD8C
	public int GetScore() { }

	// RVA: 0x3FCBDC0 Offset: 0x3FCBDC0 VA: 0x3FCBDC0
	public int GetLastSeenScore() { }

	// RVA: 0x3FCBDF4 Offset: 0x3FCBDF4 VA: 0x3FCBDF4
	public string GetLeaderboardId() { }

	// RVA: 0x3FCBE64 Offset: 0x3FCBE64 VA: 0x3FCBE64
	public int GetPathVariantIndex() { }

	// RVA: 0x3FCBE80 Offset: 0x3FCBE80 VA: 0x3FCBE80
	public void UpdateLastSeenBanner() { }

	// RVA: 0x3FCBF38 Offset: 0x3FCBF38 VA: 0x3FCBF38
	public void UpdateLastSeenTierIndex() { }

	// RVA: 0x3FCBF60 Offset: 0x3FCBF60 VA: 0x3FCBF60
	public void SyncLastSeen() { }

	// RVA: 0x3FCC078 Offset: 0x3FCC078 VA: 0x3FCC078
	public bool HasUsedLimitlessLife() { }

	// RVA: 0x3FCC0AC Offset: 0x3FCC0AC VA: 0x3FCC0AC
	public bool ShouldShowBoatRushAfterJoin() { }

	// RVA: 0x3FCC0B4 Offset: 0x3FCC0B4 VA: 0x3FCC0B4
	public bool ShouldShowJoinPopUpAfterClaim() { }

	// RVA: 0x3FCC0BC Offset: 0x3FCC0BC VA: 0x3FCC0BC
	public bool IsForceShowedJoinPopUpThisSession() { }

	// RVA: 0x3FCC0C4 Offset: 0x3FCC0C4 VA: 0x3FCC0C4
	public void SetForceShowedJoinPopUpThisSession(bool value) { }

	// RVA: 0x3FCC0D0 Offset: 0x3FCC0D0 VA: 0x3FCC0D0
	public void SetShouldShowJoinPopUpAfterClaim(bool shouldShowJoinPopUpAfterClaim) { }

	// RVA: 0x3FCC0DC Offset: 0x3FCC0DC VA: 0x3FCC0DC
	public void SetShouldShowBoatRushAfterJoin(bool shouldShowBoatRushAfterJoin) { }

	// RVA: 0x3FCC0E8 Offset: 0x3FCC0E8 VA: 0x3FCC0E8
	public void SetEventCompletedPopUpSeen() { }

	// RVA: 0x3FCC118 Offset: 0x3FCC118 VA: 0x3FCC118
	public bool IsEventCompletedPopUpSeen() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts