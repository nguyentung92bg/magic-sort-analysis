public class PawTouchOfferDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3395
{
	// Fields
	private readonly ISaveLoad<PawTouchOfferData> _saveLoad; // 0x10
	private PawTouchOfferData _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x3470B8C Offset: 0x3470B8C VA: 0x3470B8C
	public void .ctor(ISaveLoad<PawTouchOfferData> saveLoad) { }

	// RVA: 0x3470BC4 Offset: 0x3470BC4 VA: 0x3470BC4 Slot: 4
	public void Initialize() { }

	// RVA: 0x3470D3C Offset: 0x3470D3C VA: 0x3470D3C Slot: 5
	public void Dispose() { }

	// RVA: 0x3470D40 Offset: 0x3470D40 VA: 0x3470D40 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3470DF8 Offset: 0x3470DF8 VA: 0x3470DF8 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3470E00 Offset: 0x3470E00 VA: 0x3470E00 Slot: 8
	public void DataSynced() { }

	// RVA: 0x3470E08 Offset: 0x3470E08 VA: 0x3470E08 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3470E70 Offset: 0x3470E70 VA: 0x3470E70 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3470EB0 Offset: 0x3470EB0 VA: 0x3470EB0 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3471010 Offset: 0x3471010 VA: 0x3471010 Slot: 12
	public void DeleteData() { }

	// RVA: 0x3471168 Offset: 0x3471168 VA: 0x3471168
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	[CanBeNull]
	// RVA: 0x347117C Offset: 0x347117C VA: 0x347117C
	public string GetEventId() { }

	// RVA: 0x34711A0 Offset: 0x34711A0 VA: 0x34711A0
	public void SetEventID(string eventId) { }

	[CanBeNull]
	// RVA: 0x34711D4 Offset: 0x34711D4 VA: 0x34711D4
	public PawTouchOfferPackage GetOfferPackage() { }

	// RVA: 0x34711F8 Offset: 0x34711F8 VA: 0x34711F8
	public void SetOfferPackage(PawTouchOfferPackage offerPackage) { }

	// RVA: 0x347121C Offset: 0x347121C VA: 0x347121C
	public bool IsPurchased() { }

	// RVA: 0x3471240 Offset: 0x3471240 VA: 0x3471240
	public void SetIsPurchased(bool isPurchased) { }

	// RVA: 0x3471270 Offset: 0x3471270 VA: 0x3471270
	public bool IsShowed() { }

	// RVA: 0x3471294 Offset: 0x3471294 VA: 0x3471294
	public void SetIsShowed(bool isShowed) { }

	// RVA: 0x34712C4 Offset: 0x34712C4 VA: 0x34712C4
	public long GetShowEndDate() { }

	// RVA: 0x34712E8 Offset: 0x34712E8 VA: 0x34712E8
	public void SetShowEndDate(long showEndDateUnixSeconds) { }

	// RVA: 0x3471314 Offset: 0x3471314 VA: 0x3471314
	public bool IsClaimSent() { }

	// RVA: 0x3471338 Offset: 0x3471338 VA: 0x3471338
	public void SetIsClaimSent(bool isClaimSent) { }

	// RVA: 0x3471368 Offset: 0x3471368 VA: 0x3471368
	public int GetEventType() { }

	// RVA: 0x347138C Offset: 0x347138C VA: 0x347138C
	public void SetEventType(int eventType) { }

	// RVA: 0x34713B8 Offset: 0x34713B8 VA: 0x34713B8
	public string GetSegment() { }

	// RVA: 0x34713DC Offset: 0x34713DC VA: 0x34713DC
	public void SetSegment(string segment) { }

	// RVA: 0x3471410 Offset: 0x3471410 VA: 0x3471410
	public long GetEndDate() { }

	// RVA: 0x3471434 Offset: 0x3471434 VA: 0x3471434
	public void SetEndDate(long endDate) { }
}

// Namespace: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts
[Serializable]