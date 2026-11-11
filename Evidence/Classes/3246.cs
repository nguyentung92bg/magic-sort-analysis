public class OnePlusFreeOfferDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3246
{
	// Fields
	private readonly ISaveLoad<OnePlusFreeOfferDataModel> _saveLoad; // 0x10
	private OnePlusFreeOfferDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x358A278 Offset: 0x358A278 VA: 0x358A278
	public void .ctor(ISaveLoad<OnePlusFreeOfferDataModel> saveLoad) { }

	// RVA: 0x358A2B0 Offset: 0x358A2B0 VA: 0x358A2B0 Slot: 4
	public void Initialize() { }

	// RVA: 0x358A3C0 Offset: 0x358A3C0 VA: 0x358A3C0 Slot: 5
	public void Dispose() { }

	// RVA: 0x358A3C4 Offset: 0x358A3C4 VA: 0x358A3C4 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x358A47C Offset: 0x358A47C VA: 0x358A47C Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x358A484 Offset: 0x358A484 VA: 0x358A484 Slot: 8
	public void DataSynced() { }

	// RVA: 0x358A48C Offset: 0x358A48C VA: 0x358A48C Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x358A4F4 Offset: 0x358A4F4 VA: 0x358A4F4 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x358A534 Offset: 0x358A534 VA: 0x358A534 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x358A644 Offset: 0x358A644 VA: 0x358A644 Slot: 12
	public void DeleteData() { }

	// RVA: 0x358A714 Offset: 0x358A714 VA: 0x358A714
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x358A728 Offset: 0x358A728 VA: 0x358A728
	public void UpdateEventCache(OnePlusFreeOfferEventCache eventCache) { }

	// RVA: 0x358A754 Offset: 0x358A754 VA: 0x358A754
	public void ResetEventCache() { }

	[CanBeNull]
	// RVA: 0x358A75C Offset: 0x358A75C VA: 0x358A75C
	public OnePlusFreeOfferEventCache GetEventCache() { }

	// RVA: 0x358A778 Offset: 0x358A778 VA: 0x358A778
	public void IncrementPopupTriggerCount() { }

	// RVA: 0x358A7A4 Offset: 0x358A7A4 VA: 0x358A7A4
	public void ClearPopupTriggerCount() { }

	// RVA: 0x358A7C8 Offset: 0x358A7C8 VA: 0x358A7C8
	public int GetPopupTriggerCount() { }

	// RVA: 0x358A7E4 Offset: 0x358A7E4 VA: 0x358A7E4
	public bool IsPurchased() { }

	// RVA: 0x358A808 Offset: 0x358A808 VA: 0x358A808
	public void SetIsPurchased(bool isPurchased) { }

	// RVA: 0x358A838 Offset: 0x358A838 VA: 0x358A838
	public bool IsFreeClaimed() { }

	// RVA: 0x358A85C Offset: 0x358A85C VA: 0x358A85C
	public void SetIsFreeClaimed(bool isFreeClaimed) { }

	// RVA: 0x358A88C Offset: 0x358A88C VA: 0x358A88C
	public bool HasEverSeenOffer() { }

	// RVA: 0x358A8B0 Offset: 0x358A8B0 VA: 0x358A8B0
	public void SetHasEverSeenOffer() { }

	// RVA: 0x358A8E8 Offset: 0x358A8E8 VA: 0x358A8E8
	public bool IsPopupShown() { }

	// RVA: 0x358A904 Offset: 0x358A904 VA: 0x358A904
	public void SetIsPopupShown(bool isShown) { }
}

// Namespace: 
[CompilerGenerated]