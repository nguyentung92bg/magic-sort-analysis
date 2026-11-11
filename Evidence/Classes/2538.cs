public class InAppPurchaseHistoryService : IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 2538
{
	// Fields
	private ISaveLoad<InAppPurchaseHistoryModel> _saveLoad; // 0x10
	private InAppPurchaseHistoryModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x2B06154 Offset: 0x2B06154 VA: 0x2B06154
	public void .ctor(ISaveLoad<InAppPurchaseHistoryModel> saveLoad) { }

	// RVA: 0x2B06184 Offset: 0x2B06184 VA: 0x2B06184 Slot: 4
	public void Initialize() { }

	// RVA: 0x2B047A0 Offset: 0x2B047A0 VA: 0x2B047A0
	public void RecordInAppPurchase(float dollarEquivalent, bool bundleContainsNoAds) { }

	// RVA: 0x2B06334 Offset: 0x2B06334 VA: 0x2B06334
	private void OnAdsDisabledFromBackend(bool isAdsDisabled) { }

	// RVA: 0x2B0636C Offset: 0x2B0636C VA: 0x2B0636C
	public int GetInAppCount() { }

	// RVA: 0x2B06388 Offset: 0x2B06388 VA: 0x2B06388
	public bool IsPayerUser() { }

	// RVA: 0x2B063AC Offset: 0x2B063AC VA: 0x2B063AC
	public float GetInAppLtv() { }

	// RVA: 0x2B062F0 Offset: 0x2B062F0 VA: 0x2B062F0
	private void SetAdsDisabledState(bool isAdsDisabled) { }

	// RVA: 0x2B054F8 Offset: 0x2B054F8 VA: 0x2B054F8
	public bool HasNoAds() { }

	// RVA: 0x2B063C8 Offset: 0x2B063C8 VA: 0x2B063C8 Slot: 5
	public void Dispose() { }

	// RVA: 0x2B06328 Offset: 0x2B06328 VA: 0x2B06328
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2B064AC Offset: 0x2B064AC VA: 0x2B064AC Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2B06564 Offset: 0x2B06564 VA: 0x2B06564 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2B0656C Offset: 0x2B0656C VA: 0x2B0656C Slot: 8
	public void DataSynced() { }

	// RVA: 0x2B06574 Offset: 0x2B06574 VA: 0x2B06574 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x2B06620 Offset: 0x2B06620 VA: 0x2B06620 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2B06660 Offset: 0x2B06660 VA: 0x2B06660 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2B06768 Offset: 0x2B06768 VA: 0x2B06768 Slot: 12
	public void DeleteData() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts