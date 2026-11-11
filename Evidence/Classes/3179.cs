public class TreasureDrillDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3179
{
	// Fields
	private readonly ISaveLoad<TreasureDrillDataModel> _saveLoad; // 0x10
	private TreasureDrillDataModel _model; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x20
	private bool _isMarkedForLateUpdate; // 0x21

	// Methods

	// RVA: 0x3300D9C Offset: 0x3300D9C VA: 0x3300D9C
	public void .ctor(ISaveLoad<TreasureDrillDataModel> saveLoad) { }

	// RVA: 0x3300DCC Offset: 0x3300DCC VA: 0x3300DCC Slot: 4
	public void Initialize() { }

	// RVA: 0x3300E8C Offset: 0x3300E8C VA: 0x3300E8C Slot: 5
	public void Dispose() { }

	// RVA: 0x3300E90 Offset: 0x3300E90 VA: 0x3300E90 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3300F48 Offset: 0x3300F48 VA: 0x3300F48
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x3300F7C Offset: 0x3300F7C VA: 0x3300F7C Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3300F84 Offset: 0x3300F84 VA: 0x3300F84 Slot: 8
	public void DataSynced() { }

	// RVA: 0x3300F8C Offset: 0x3300F8C VA: 0x3300F8C Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3301038 Offset: 0x3301038 VA: 0x3301038 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3301078 Offset: 0x3301078 VA: 0x3301078 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3301180 Offset: 0x3301180 VA: 0x3301180 Slot: 12
	public void DeleteData() { }

	// RVA: 0x3301250 Offset: 0x3301250 VA: 0x3301250
	public TreasureDrillCacheModel GetCachedModel() { }

	// RVA: 0x330126C Offset: 0x330126C VA: 0x330126C
	public void SetIsPurchased(bool isPurchased) { }

	// RVA: 0x330129C Offset: 0x330129C VA: 0x330129C
	public int GetLastSeenProgress() { }

	// RVA: 0x33012C8 Offset: 0x33012C8 VA: 0x33012C8
	public IEnumerable<TreasureDrillStepBase> GetStepsFromCache() { }

	// RVA: 0x33012FC Offset: 0x33012FC VA: 0x33012FC
	public void StartNewEvent(TreasureDrillInfoResponse treasureDrillInfoResponse) { }

	// RVA: 0x3301610 Offset: 0x3301610 VA: 0x3301610
	public bool IsClaimed() { }

	// RVA: 0x3301644 Offset: 0x3301644 VA: 0x3301644
	public bool TryGetClaimableStepIndexes(out List<int> claimableStepIndexList) { }

	// RVA: 0x3301954 Offset: 0x3301954 VA: 0x3301954
	public bool HasAnyClaimableStep() { }

	// RVA: 0x3301AB4 Offset: 0x3301AB4 VA: 0x3301AB4
	public bool CheckStepIsEligibleToClaim(int stepIndex) { }

	// RVA: 0x3300F70 Offset: 0x3300F70 VA: 0x3300F70
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3301BA4 Offset: 0x3301BA4 VA: 0x3301BA4
	public string GetSegment() { }

	// RVA: 0x3301C2C Offset: 0x3301C2C VA: 0x3301C2C
	public int GetProgress() { }

	// RVA: 0x3301C58 Offset: 0x3301C58 VA: 0x3301C58
	public void SetStepAsClaimed(int stepIndex) { }

	// RVA: 0x3301D44 Offset: 0x3301D44 VA: 0x3301D44
	public void ClaimEvent() { }

	// RVA: 0x3301DE8 Offset: 0x3301DE8 VA: 0x3301DE8
	public bool IncreaseTaskProgressAndGetStepIdIfCompleted(out int stepIdOfCompletedTask) { }

	// RVA: 0x3302020 Offset: 0x3302020 VA: 0x3302020
	public bool IsPurchased() { }

	// RVA: 0x3302054 Offset: 0x3302054 VA: 0x3302054
	public int GetLastSeenStep() { }

	// RVA: 0x3302080 Offset: 0x3302080 VA: 0x3302080
	public int GetStep() { }

	// RVA: 0x3301FE8 Offset: 0x3301FE8 VA: 0x3301FE8
	private bool IsPlayerReachedLastStep() { }

	// RVA: 0x33020D8 Offset: 0x33020D8 VA: 0x33020D8
	private int GetLastStepScore() { }

	// RVA: 0x33020AC Offset: 0x33020AC VA: 0x33020AC
	private int GetScore() { }

	// RVA: 0x330219C Offset: 0x330219C VA: 0x330219C
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x33021B8 Offset: 0x33021B8 VA: 0x33021B8
	public int GetLastCompletedUnseenStep() { }

	// RVA: 0x33022B0 Offset: 0x33022B0 VA: 0x33022B0
	public bool HasUnseenCompletedStep() { }

	// RVA: 0x3302490 Offset: 0x3302490 VA: 0x3302490
	public void SyncLastSeen() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts