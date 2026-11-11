public class ChooseOneSpecialOfferDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3445
{
	// Fields
	private readonly ISaveLoad<ChooseOneSpecialOfferDataModel> _saveLoad; // 0x10
	private ChooseOneSpecialOfferDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x20AB340 Offset: 0x20AB340 VA: 0x20AB340
	public void .ctor(ISaveLoad<ChooseOneSpecialOfferDataModel> saveLoad) { }

	// RVA: 0x20AB378 Offset: 0x20AB378 VA: 0x20AB378 Slot: 4
	public void Initialize() { }

	// RVA: 0x20AB488 Offset: 0x20AB488 VA: 0x20AB488 Slot: 5
	public void Dispose() { }

	// RVA: 0x20AB48C Offset: 0x20AB48C VA: 0x20AB48C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x20AB544 Offset: 0x20AB544 VA: 0x20AB544 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x20AB54C Offset: 0x20AB54C VA: 0x20AB54C Slot: 8
	public void DataSynced() { }

	// RVA: 0x20AB554 Offset: 0x20AB554 VA: 0x20AB554 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x20AB5BC Offset: 0x20AB5BC VA: 0x20AB5BC Slot: 10
	public string GetSyncName() { }

	// RVA: 0x20AB5FC Offset: 0x20AB5FC VA: 0x20AB5FC Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x20AB70C Offset: 0x20AB70C VA: 0x20AB70C Slot: 12
	public void DeleteData() { }

	// RVA: 0x20AB7DC Offset: 0x20AB7DC VA: 0x20AB7DC
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x20AB7F0 Offset: 0x20AB7F0 VA: 0x20AB7F0
	public void CacheBackendResponse(ChooseOneSpecialOfferResponse responseData) { }

	[CanBeNull]
	// RVA: 0x20AB81C Offset: 0x20AB81C VA: 0x20AB81C
	public ChooseOneSpecialOfferResponse GetCachedBackendResponse() { }

	// RVA: 0x20AB838 Offset: 0x20AB838 VA: 0x20AB838
	public void IncrementPopupTriggerCount() { }

	// RVA: 0x20AB864 Offset: 0x20AB864 VA: 0x20AB864
	public void ClearPopupTriggerCount() { }

	// RVA: 0x20AB888 Offset: 0x20AB888 VA: 0x20AB888
	public int GetPopupTriggerCount() { }

	// RVA: 0x20AB8A4 Offset: 0x20AB8A4 VA: 0x20AB8A4
	public bool IsPurchased() { }

	// RVA: 0x20AB8C8 Offset: 0x20AB8C8 VA: 0x20AB8C8
	public void SetIsPurchased(bool isPurchased) { }

	// RVA: 0x20AB8F8 Offset: 0x20AB8F8 VA: 0x20AB8F8
	public bool IsPopupShown() { }

	// RVA: 0x20AB914 Offset: 0x20AB914 VA: 0x20AB914
	public void SetIsPopupShown(bool isShown) { }
}

// Namespace: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts