public class ReferralDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 428
{
	// Fields
	private readonly ISaveLoad<ReferralDataModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private ReferralDataModel _model; // 0x20

	// Methods

	// RVA: 0x3D19FE4 Offset: 0x3D19FE4 VA: 0x3D19FE4
	public void .ctor(ISaveLoad<ReferralDataModel> saveLoad) { }

	// RVA: 0x3D1A01C Offset: 0x3D1A01C VA: 0x3D1A01C Slot: 4
	public void Initialize() { }

	// RVA: 0x3D1A0DC Offset: 0x3D1A0DC VA: 0x3D1A0DC Slot: 5
	public void Dispose() { }

	// RVA: 0x3D1A0E0 Offset: 0x3D1A0E0 VA: 0x3D1A0E0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3D1A198 Offset: 0x3D1A198 VA: 0x3D1A198 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3D1A1A0 Offset: 0x3D1A1A0 VA: 0x3D1A1A0 Slot: 8
	public void DataSynced() { }

	// RVA: 0x3D1A1A8 Offset: 0x3D1A1A8 VA: 0x3D1A1A8 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3D1A254 Offset: 0x3D1A254 VA: 0x3D1A254 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3D1A294 Offset: 0x3D1A294 VA: 0x3D1A294 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3D1A39C Offset: 0x3D1A39C VA: 0x3D1A39C Slot: 12
	public void DeleteData() { }

	// RVA: 0x3D1A468 Offset: 0x3D1A468 VA: 0x3D1A468
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3D1A474 Offset: 0x3D1A474 VA: 0x3D1A474
	public string GetReferrerId() { }

	// RVA: 0x3D1A490 Offset: 0x3D1A490 VA: 0x3D1A490
	public bool IsReferralRegistered() { }

	// RVA: 0x3D1A4BC Offset: 0x3D1A4BC VA: 0x3D1A4BC
	public void ReferralRegistered(string referrerId) { }

	// RVA: 0x3D1A4E8 Offset: 0x3D1A4E8 VA: 0x3D1A4E8
	public void ReachedMilestone() { }

	// RVA: 0x3D1A510 Offset: 0x3D1A510 VA: 0x3D1A510
	public bool DidReachMilestone() { }

	// RVA: 0x3D1A52C Offset: 0x3D1A52C VA: 0x3D1A52C
	public void AddToClaimedRewards(List<ReferralRewardItem> rewards) { }

	// RVA: 0x3D1A728 Offset: 0x3D1A728 VA: 0x3D1A728
	public bool RewardClaimed(ReferralRewardItem reward) { }

	// RVA: 0x3D1A8B0 Offset: 0x3D1A8B0 VA: 0x3D1A8B0
	public int GetClaimedRewardsCount() { }
}

// Namespace: Modules.Infrastructure.Social