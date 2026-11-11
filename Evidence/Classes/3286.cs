public class SpecialOfferDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3286
{
	// Fields
	private readonly ISaveLoad<SpecialOfferDataModel> _saveLoad; // 0x10
	private SpecialOfferDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x3593D40 Offset: 0x3593D40 VA: 0x3593D40
	public void .ctor(ISaveLoad<SpecialOfferDataModel> saveLoad) { }

	// RVA: 0x3593D78 Offset: 0x3593D78 VA: 0x3593D78 Slot: 4
	public void Initialize() { }

	// RVA: 0x3593E88 Offset: 0x3593E88 VA: 0x3593E88 Slot: 5
	public void Dispose() { }

	// RVA: 0x3593E8C Offset: 0x3593E8C VA: 0x3593E8C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3593F44 Offset: 0x3593F44 VA: 0x3593F44 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3593F4C Offset: 0x3593F4C VA: 0x3593F4C Slot: 8
	public void DataSynced() { }

	// RVA: 0x3593F54 Offset: 0x3593F54 VA: 0x3593F54 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3593FBC Offset: 0x3593FBC VA: 0x3593FBC Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3593FFC Offset: 0x3593FFC VA: 0x3593FFC Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x359410C Offset: 0x359410C VA: 0x359410C Slot: 12
	public void DeleteData() { }

	// RVA: 0x35941E4 Offset: 0x35941E4 VA: 0x35941E4
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x35941F8 Offset: 0x35941F8 VA: 0x35941F8
	public void CacheBackendResponse(SpecialOfferResponse responseData) { }

	[CanBeNull]
	// RVA: 0x3594224 Offset: 0x3594224 VA: 0x3594224
	public SpecialOfferResponse GetCachedBackendResponse() { }

	// RVA: 0x3594240 Offset: 0x3594240 VA: 0x3594240
	public void IncrementPopupTriggerCount() { }

	// RVA: 0x359426C Offset: 0x359426C VA: 0x359426C
	public void ClearPopupTriggerCount() { }

	// RVA: 0x3594290 Offset: 0x3594290 VA: 0x3594290
	public int GetPopupTriggerCount() { }

	// RVA: 0x35942AC Offset: 0x35942AC VA: 0x35942AC
	public bool IsPurchased() { }

	// RVA: 0x35942D0 Offset: 0x35942D0 VA: 0x35942D0
	public void SetIsPurchased(bool isPurchased) { }

	// RVA: 0x3594300 Offset: 0x3594300 VA: 0x3594300
	public bool IsPopupShown() { }

	// RVA: 0x359431C Offset: 0x359431C VA: 0x359431C
	public void SetIsPopupShown(bool isShown) { }

	// RVA: 0x3594344 Offset: 0x3594344 VA: 0x3594344
	public void SetPopupTypeForOldSpecialOffer(int popupType) { }

	// RVA: 0x3594368 Offset: 0x3594368 VA: 0x3594368
	public int GetPopupTypeForOldSpecialOffer() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts