public class StoreModelService : IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 2558
{
	// Fields
	[CompilerGenerated]
	private StoreViewService <StoreViewService>k__BackingField; // 0x10
	private readonly ISaveLoad<StoreModel> _storeDataModelSaveLoad; // 0x18
	private readonly RemoteConfigs _remoteConfigs; // 0x20
	private StoreModel _storeModel; // 0x28
	private bool _isMarkedForLateUpdate; // 0x30
	private bool _isDataChangedSinceLastSave; // 0x31
	[CompilerGenerated]
	private readonly bool <IsSelectiveNoAdsBundleEnabled>k__BackingField; // 0x32

	// Properties
	public StoreViewService StoreViewService { get; set; }
	private StoreConfigModelV2 StoreConfigModelV2 { get; }
	public bool IsNewStoreEnabled { get; }
	public bool IsSelectiveNoAdsBundleEnabled { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x246152C Offset: 0x246152C VA: 0x246152C
	public StoreViewService get_StoreViewService() { }

	[CompilerGenerated]
	// RVA: 0x2461534 Offset: 0x2461534 VA: 0x2461534
	private void set_StoreViewService(StoreViewService value) { }

	// RVA: 0x246153C Offset: 0x246153C VA: 0x246153C
	private StoreConfigModelV2 get_StoreConfigModelV2() { }

	// RVA: 0x2461560 Offset: 0x2461560 VA: 0x2461560
	public bool get_IsNewStoreEnabled() { }

	[CompilerGenerated]
	// RVA: 0x2461568 Offset: 0x2461568 VA: 0x2461568
	public bool get_IsSelectiveNoAdsBundleEnabled() { }

	// RVA: 0x2461570 Offset: 0x2461570 VA: 0x2461570
	public void .ctor(ISaveLoad<StoreModel> storeDataModelSaveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x24616FC Offset: 0x24616FC VA: 0x24616FC
	public List<StoreBundleModel> GetCoinBundles() { }

	// RVA: 0x24618B4 Offset: 0x24618B4 VA: 0x24618B4
	public List<StoreSpecialBundleModel> GetSpecialBundles() { }

	// RVA: 0x2461A6C Offset: 0x2461A6C VA: 0x2461A6C
	public List<StorePermanentBundleModel> GetPermanentBundles() { }

	// RVA: 0x2461C24 Offset: 0x2461C24 VA: 0x2461C24
	public bool TryGetCoinStoreBundle(string productId, out StoreBundleModel storeBundle, out int index) { }

	// RVA: 0x2461CA0 Offset: 0x2461CA0 VA: 0x2461CA0
	public bool TryGetSpecialStoreBundle(string productId, out StoreSpecialBundleModel specialBundle) { }

	// RVA: 0x2461D24 Offset: 0x2461D24 VA: 0x2461D24
	public bool TryGetPermanentStoreBundle(string productId, out StorePermanentBundleModel permanentBundle, out int index) { }

	// RVA: -1 Offset: -1
	private bool TryGetBundle<T>(List<T> bundles, string productId, out T foundBundle, out int index) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26E19A8 Offset: 0x26E19A8 VA: 0x26E19A8
	|-StoreModelService.TryGetBundle<object>
	*/

	// RVA: 0x2461DA0 Offset: 0x2461DA0 VA: 0x2461DA0
	public void SetCurrentOfferRank(int index) { }

	// RVA: 0x2461DD0 Offset: 0x2461DD0 VA: 0x2461DD0
	private int GetCurrentOfferRank() { }

	// RVA: 0x2461DEC Offset: 0x2461DEC VA: 0x2461DEC
	public void SetMaxPurchasedBundleIndex(int index) { }

	// RVA: 0x2461E10 Offset: 0x2461E10 VA: 0x2461E10
	public int GetMaxPurchasedBundleIndex() { }

	// RVA: 0x2461E2C Offset: 0x2461E2C VA: 0x2461E2C
	public bool TryGetCurrentSpecialOffer(out StoreSpecialBundleModel specialBundle) { }

	// RVA: 0x2461FC0 Offset: 0x2461FC0 VA: 0x2461FC0
	public bool TryGetDailyReward(out StoreDailyRewardModel dailyReward) { }

	// RVA: 0x24620A8 Offset: 0x24620A8 VA: 0x24620A8
	public bool TryGetMagicPassOffer(out StoreMagicPassOfferModel magicPassOffer) { }

	// RVA: 0x24621A4 Offset: 0x24621A4 VA: 0x24621A4 Slot: 4
	public void Initialize() { }

	// RVA: 0x2462268 Offset: 0x2462268 VA: 0x2462268 Slot: 5
	public void Dispose() { }

	// RVA: 0x2461DC4 Offset: 0x2461DC4 VA: 0x2461DC4
	private void MarkDataForLateUpdate() { }

	// RVA: 0x246226C Offset: 0x246226C VA: 0x246226C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2462324 Offset: 0x2462324 VA: 0x2462324 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x246232C Offset: 0x246232C VA: 0x246232C Slot: 8
	public void DataSynced() { }

	// RVA: 0x2462334 Offset: 0x2462334 VA: 0x2462334 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x24623E0 Offset: 0x24623E0 VA: 0x24623E0 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2462420 Offset: 0x2462420 VA: 0x2462420 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2462528 Offset: 0x2462528 VA: 0x2462528 Slot: 12
	public void DeleteData() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts