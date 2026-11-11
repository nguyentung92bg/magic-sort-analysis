public class StoreViewService // TypeDefIndex: 2572
{
	// Fields
	private readonly StoreModelService _storeModelService; // 0x10
	private readonly List<StoreViewModel> _storeViewItems; // 0x18
	private readonly List<StoreViewModel> _storeViewItemsPool; // 0x20
	private IAPService _iapService; // 0x28

	// Methods

	// RVA: 0x2461630 Offset: 0x2461630 VA: 0x2461630
	public void .ctor(StoreModelService storeModelService) { }

	// RVA: 0x2462264 Offset: 0x2462264 VA: 0x2462264
	public void Initialize() { }

	// RVA: 0x2464F74 Offset: 0x2464F74 VA: 0x2464F74
	public List<StoreViewModel> GetHomeStoreViews() { }

	// RVA: 0x246506C Offset: 0x246506C VA: 0x246506C
	public List<StoreViewModel> GetPopupStoreViews() { }

	// RVA: 0x2462BF0 Offset: 0x2462BF0 VA: 0x2462BF0
	public List<StoreViewModel> GetPopupStorePreviewViews() { }

	// RVA: 0x2467628 Offset: 0x2467628 VA: 0x2467628
	private List<StoreViewModel> FillStoreViewItems(List<object> bundles) { }

	// RVA: 0x24679CC Offset: 0x24679CC VA: 0x24679CC
	private void ReturnToPool() { }

	// RVA: 0x2467A64 Offset: 0x2467A64 VA: 0x2467A64
	private StoreViewModel GetStoreViewItem() { }

	// RVA: 0x2467834 Offset: 0x2467834 VA: 0x2467834
	private List<object> GetSpecialBundles(bool withHeader) { }

	// RVA: 0x2466BBC Offset: 0x2466BBC VA: 0x2466BBC
	private List<object> GetHorizontalBundle(bool withHeader) { }

	// RVA: 0x2466F64 Offset: 0x2466F64 VA: 0x2466F64
	private List<object> GetPermanentBundles(bool withHeader, bool inverseOrder = False, int count = -1, int startIndex = 0, List<int> excludedIndexes) { }

	// RVA: 0x2467314 Offset: 0x2467314 VA: 0x2467314
	private List<object> GetCoinBundles(bool withHeader, int count = -1, int startIndex = 0) { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts