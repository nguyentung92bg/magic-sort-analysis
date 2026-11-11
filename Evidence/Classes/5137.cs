public class InventoryService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IInitializeForNewDownload, IDataInitializable, IDeletable // TypeDefIndex: 5137
{
	// Fields
	private ISaveLoad<InventoryModel> _saveLoad; // 0x10
	[CompilerGenerated]
	private InventoryModel <_playerInventoryModel>k__BackingField; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21
	private bool _hasSingleUseFreePlayOn; // 0x22
	private RemoteConfigs _remoteConfigs; // 0x28
	private GameEconomyModel _gameEconomyModel; // 0x30
	private NotificationService _notificationService; // 0x38
	private ApplovinStatSender _applovinStatSender; // 0x40
	private MagicLabService _magicLabService; // 0x48
	private WheelOfFortuneService _wheelOfFortuneService; // 0x50
	private WindQuestService _windQuestService; // 0x58

	// Properties
	private InventoryModel _playerInventoryModel { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x137D228 Offset: 0x137D228 VA: 0x137D228
	private InventoryModel get__playerInventoryModel() { }

	[CompilerGenerated]
	// RVA: 0x137D230 Offset: 0x137D230 VA: 0x137D230
	private void set__playerInventoryModel(InventoryModel value) { }

	// RVA: 0x137D238 Offset: 0x137D238 VA: 0x137D238
	public void .ctor(ISaveLoad<InventoryModel> saveLoad, RemoteConfigs remoteConfigs, NotificationService notificationService, ApplovinStatSender applovinStatSender) { }

	// RVA: 0x137D2B4 Offset: 0x137D2B4 VA: 0x137D2B4 Slot: 4
	public void Initialize() { }

	// RVA: 0x137D49C Offset: 0x137D49C VA: 0x137D49C Slot: 13
	public void InitializeData() { }

	// RVA: 0x137DA08 Offset: 0x137DA08 VA: 0x137DA08 Slot: 12
	public void InitializeForNewDownload() { }

	// RVA: 0x137DDE8 Offset: 0x137DDE8 VA: 0x137DDE8
	private void GiveFourthBoosterIfEnabled(int amount) { }

	// RVA: 0x137D564 Offset: 0x137D564 VA: 0x137D564
	public void ApplyAllPending() { }

	// RVA: 0x137E4A4 Offset: 0x137E4A4 VA: 0x137E4A4
	public int GetSecondsToFillOneLife() { }

	// RVA: 0x137DE74 Offset: 0x137DE74 VA: 0x137DE74
	public int GetVisibleCurrencyAmountByType(CurrencyType currencyType) { }

	// RVA: 0x137E5D4 Offset: 0x137E5D4 VA: 0x137E5D4
	public int GetCurrencyAmountByTypeIncludingPending(CurrencyType currencyType) { }

	// RVA: 0x137E848 Offset: 0x137E848 VA: 0x137E848
	public DateTime GetVisibleLimitlessCurrencyEndDateByType(CurrencyType currencyType) { }

	// RVA: 0x137E8E0 Offset: 0x137E8E0 VA: 0x137E8E0
	public DateTime GetVisibleTimedCurrencyEndDateByType(CurrencyType currencyType) { }

	// RVA: 0x137E978 Offset: 0x137E978 VA: 0x137E978
	public DateTime GetLimitlessCurrencyEndDateByTypeIncludingPending(CurrencyType currencyType) { }

	// RVA: 0x137EAA8 Offset: 0x137EAA8 VA: 0x137EAA8
	public DateTime GetTimedCurrencyEndDateByTypeIncludingPending(CurrencyType currencyType) { }

	// RVA: 0x137EBD8 Offset: 0x137EBD8 VA: 0x137EBD8
	public void ResetLimitlessCurrencyEndDateByType(CurrencyType currencyType) { }

	// RVA: 0x137EC80 Offset: 0x137EC80 VA: 0x137EC80
	public void ResetTimedCurrencyEndDateByType(CurrencyType currencyType) { }

	// RVA: 0x137ED28 Offset: 0x137ED28 VA: 0x137ED28
	public bool DoesEnoughVisibleCurrency(CurrencyType currencyType, int amount) { }

	// RVA: 0x137EEA4 Offset: 0x137EEA4 VA: 0x137EEA4
	public void Spend(CurrencySpendReason currencySpendReason, CurrencyType currencyType, int amount) { }

	// RVA: 0x137F1DC Offset: 0x137F1DC VA: 0x137F1DC
	public void UpdateLifeFilledNotification() { }

	// RVA: 0x137DA88 Offset: 0x137DA88 VA: 0x137DA88
	public void Earn(CurrencyType currencyType, int amount) { }

	// RVA: 0x137F3E8 Offset: 0x137F3E8 VA: 0x137F3E8
	public void Earn(CurrencyType currencyType, TimeSpan timeSpan) { }

	// RVA: 0x137F404 Offset: 0x137F404 VA: 0x137F404
	private void EarnLimitless(CurrencyType currencyType, TimeSpan timeSpan) { }

	// RVA: 0x137F600 Offset: 0x137F600 VA: 0x137F600
	private void EarnTimed(CurrencyType currencyType, TimeSpan timeSpan) { }

	// RVA: 0x137ED7C Offset: 0x137ED7C VA: 0x137ED7C
	public bool HasVisibleLimitlessCurrencyByType(CurrencyType currencyModelType) { }

	// RVA: 0x137EE10 Offset: 0x137EE10 VA: 0x137EE10
	public bool HasVisibleTimedCurrencyByType(CurrencyType currencyModelType) { }

	// RVA: 0x137E1E0 Offset: 0x137E1E0 VA: 0x137E1E0
	private bool CanHasLimitlessCurrencyByType(CurrencyType currencyModelType) { }

	// RVA: 0x137F5F4 Offset: 0x137F5F4 VA: 0x137F5F4
	private bool CanHasTimedCurrencyByType(CurrencyType currencyModelType) { }

	// RVA: 0x137F7DC Offset: 0x137F7DC VA: 0x137F7DC
	public bool HasLimitlessCurrencyByTypeIncludingPending(CurrencyType currencyModelType) { }

	// RVA: 0x137F860 Offset: 0x137F860 VA: 0x137F860
	public void Pending(CurrencyType currencyType, int amount) { }

	// RVA: 0x137F910 Offset: 0x137F910 VA: 0x137F910
	public void Pending(CurrencyType currencyType, TimeSpan timeSpan) { }

	// RVA: 0x137F92C Offset: 0x137F92C VA: 0x137F92C
	private void PendingLimitless(CurrencyType currencyType, TimeSpan timeSpan) { }

	// RVA: 0x137FA1C Offset: 0x137FA1C VA: 0x137FA1C
	private void PendingTimed(CurrencyType currencyType, TimeSpan timeSpan) { }

	// RVA: 0x137E120 Offset: 0x137E120 VA: 0x137E120
	public void ApplyPending(CurrencyType currencyType, int amount) { }

	// RVA: 0x137E31C Offset: 0x137E31C VA: 0x137E31C
	public void ApplyPending(CurrencyType currencyType, TimeSpan timeSpan) { }

	// RVA: 0x137E284 Offset: 0x137E284 VA: 0x137E284
	private TimeSpan GetPendingLimitlessCurrencyByType(CurrencyType currencyType) { }

	// RVA: 0x137E1EC Offset: 0x137E1EC VA: 0x137E1EC
	private TimeSpan GetPendingTimedCurrencyByType(CurrencyType currencyType) { }

	// RVA: 0x137E0C0 Offset: 0x137E0C0 VA: 0x137E0C0
	private int GetPendingCurrencyAmountByType(CurrencyType currencyType) { }

	// RVA: 0x137FB0C Offset: 0x137FB0C VA: 0x137FB0C
	public void PendingCollectionPack(int packType, int amount) { }

	// RVA: 0x137FBF8 Offset: 0x137FBF8 VA: 0x137FBF8
	public void ApplyPendingCollectionPack(int packType, int amount) { }

	// RVA: 0x137FB98 Offset: 0x137FB98 VA: 0x137FB98
	public int GetPendingCollectionPack(int packType) { }

	// RVA: 0x137FC84 Offset: 0x137FC84 VA: 0x137FC84
	private long GetTimeStamp() { }

	// RVA: 0x137FCF4 Offset: 0x137FCF4 VA: 0x137FCF4 Slot: 5
	public void Dispose() { }

	// RVA: 0x137FCF8 Offset: 0x137FCF8 VA: 0x137FCF8 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x137D558 Offset: 0x137D558 VA: 0x137D558
	private void MarkDataForLateUpdate() { }

	// RVA: 0x137FDB0 Offset: 0x137FDB0 VA: 0x137FDB0 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x137FDB8 Offset: 0x137FDB8 VA: 0x137FDB8 Slot: 8
	public void DataSynced() { }

	// RVA: 0x137FDC0 Offset: 0x137FDC0 VA: 0x137FDC0 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x137FE6C Offset: 0x137FE6C VA: 0x137FE6C Slot: 10
	public string GetSyncName() { }

	// RVA: 0x137FEAC Offset: 0x137FEAC VA: 0x137FEAC Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x137FFB4 Offset: 0x137FFB4 VA: 0x137FFB4 Slot: 14
	public void DeleteData() { }

	// RVA: 0x1380094 Offset: 0x1380094 VA: 0x1380094
	public bool HasFreePlayOn() { }

	// RVA: 0x13800E0 Offset: 0x13800E0 VA: 0x13800E0
	public void UseFreePlayOn() { }

	// RVA: 0x1380118 Offset: 0x1380118 VA: 0x1380118
	public void GrantSingleUseFreePlayOn() { }

	// RVA: 0x1380124 Offset: 0x1380124 VA: 0x1380124
	public void ResetFreePlayOn() { }

	// RVA: 0x137E5A4 Offset: 0x137E5A4 VA: 0x137E5A4
	public int GetMaxLifeAmount() { }

	// RVA: 0x138012C Offset: 0x138012C VA: 0x138012C
	private bool IsMagicPassActive() { }

	// RVA: 0x13801B4 Offset: 0x13801B4 VA: 0x13801B4
	private int GetMagicPassMaxLifeAmount() { }

	// RVA: 0x137F32C Offset: 0x137F32C VA: 0x137F32C
	private void CheckCanSendEventForSpendCoin(int amount) { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts.UI
[CreateAssetMenu(fileName = "BulkCurrencyAnimationConfig", menuName = "Configs/BulkCurrencyAnimationConfig")]