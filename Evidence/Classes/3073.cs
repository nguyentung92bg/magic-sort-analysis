public class WebShopDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 3073
{
	// Fields
	private readonly ISaveLoad<WebShopDataModel> _saveLoad; // 0x10
	private WebShopDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x31631C4 Offset: 0x31631C4 VA: 0x31631C4
	public void .ctor(SaveLoad<WebShopDataModel> saveLoad) { }

	// RVA: 0x31631FC Offset: 0x31631FC VA: 0x31631FC Slot: 4
	public void Initialize() { }

	// RVA: 0x31632EC Offset: 0x31632EC VA: 0x31632EC Slot: 5
	public void Dispose() { }

	// RVA: 0x31632F0 Offset: 0x31632F0 VA: 0x31632F0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x31633A8 Offset: 0x31633A8 VA: 0x31633A8 Slot: 7
	public void DeleteData() { }

	// RVA: 0x3163474 Offset: 0x3163474 VA: 0x3163474 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x316347C Offset: 0x316347C VA: 0x316347C Slot: 9
	public void DataSynced() { }

	// RVA: 0x3163484 Offset: 0x3163484 VA: 0x3163484 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x3163530 Offset: 0x3163530 VA: 0x3163530 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x3163570 Offset: 0x3163570 VA: 0x3163570 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3163678 Offset: 0x3163678 VA: 0x3163678
	private void MarkForLateUpdate(bool shouldSyncWithBackend = True) { }

	// RVA: 0x316368C Offset: 0x316368C VA: 0x316368C
	public void AddAppliedTransaction(WebShopTransactionDataModel transaction) { }

	// RVA: 0x316374C Offset: 0x316374C VA: 0x316374C
	public void RemoveAppliedTransaction(WebShopTransactionDataModel transaction) { }

	// RVA: 0x31638E8 Offset: 0x31638E8 VA: 0x31638E8
	public WebShopTransactionDataModel RemoveAppliedTransaction(string transactionId) { }

	// RVA: 0x3163A98 Offset: 0x3163A98 VA: 0x3163A98
	public bool IsApplied(string purchaseId) { }

	// RVA: 0x3163C28 Offset: 0x3163C28 VA: 0x3163C28
	public List<WebShopTransactionDataModel> GetAppliedTransactions() { }

	// RVA: 0x3163CAC Offset: 0x3163CAC VA: 0x3163CAC
	public WebShopAdaptiveFlowDataModel GetAdaptiveFlowData() { }

	// RVA: 0x3163CC8 Offset: 0x3163CC8 VA: 0x3163CC8
	public bool IsTemporarilyDisabled() { }

	// RVA: 0x3163D3C Offset: 0x3163D3C VA: 0x3163D3C
	public bool IsWebShopPurchaseProtectionActive() { }

	// RVA: 0x3163DB0 Offset: 0x3163DB0 VA: 0x3163DB0
	public bool HasIapChosenOverWebShopCountdownEnded() { }

	// RVA: 0x3163E6C Offset: 0x3163E6C VA: 0x3163E6C
	public bool HasNoPurchaseAfterPromptCountdownEnded() { }

	// RVA: 0x3163F28 Offset: 0x3163F28 VA: 0x3163F28
	public void TemporarilyDisableWebShop(DateTime endsAtUtc) { }

	// RVA: 0x3163F54 Offset: 0x3163F54 VA: 0x3163F54
	public void ClearTemporaryDisable() { }

	// RVA: 0x3163FD0 Offset: 0x3163FD0 VA: 0x3163FD0
	public void IncrementUsedCycleCount() { }

	// RVA: 0x3164004 Offset: 0x3164004 VA: 0x3164004
	public void ResetUsedCycleCount() { }

	// RVA: 0x3164030 Offset: 0x3164030 VA: 0x3164030
	public void SetWebShopCustomerUntil(DateTime untilUtc) { }

	// RVA: 0x316405C Offset: 0x316405C VA: 0x316405C
	public void StartIapChosenOverWebShopCountdown(DateTime endsAtUtc) { }

	// RVA: 0x3164108 Offset: 0x3164108 VA: 0x3164108
	public void StartNoPurchaseAfterPromptCountdown(DateTime endsAtUtc) { }

	// RVA: 0x31641B4 Offset: 0x31641B4 VA: 0x31641B4
	public void ClearNoPurchaseCountdown() { }

	// RVA: 0x3164230 Offset: 0x3164230 VA: 0x3164230
	public void ClearCountdowns() { }

	// RVA: 0x31642C8 Offset: 0x31642C8 VA: 0x31642C8
	public void ResetFlow() { }
}

// Namespace: 
[CompilerGenerated]