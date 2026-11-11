public class BundleNoAdsAvailabilityService // TypeDefIndex: 2535
{
	// Fields
	private readonly InAppPurchaseHistoryService _inAppPurchaseHistoryService; // 0x10
	private readonly StoreModelService _storeModelService; // 0x18
	private readonly AdService _adService; // 0x20

	// Methods

	// RVA: 0x2B0540C Offset: 0x2B0540C VA: 0x2B0540C
	public void .ctor(InAppPurchaseHistoryService inAppPurchaseHistoryService, StoreModelService storeModelService, AdService adService) { }

	// RVA: 0x2B04BA4 Offset: 0x2B04BA4 VA: 0x2B04BA4
	public bool IsNoAdsAvailableInBundle(StoreBundleModel bundleModel) { }

	// RVA: 0x2B054E0 Offset: 0x2B054E0 VA: 0x2B054E0
	public bool IsNoAdsAvailableInBundle(StoreViewModel viewModel) { }

	// RVA: 0x2B046E0 Offset: 0x2B046E0 VA: 0x2B046E0
	public bool ShouldCloseAds(StoreBundleModel bundleModel) { }

	// RVA: 0x2B0546C Offset: 0x2B0546C VA: 0x2B0546C
	private bool IsNoAdsAvailableWhenShouldCloseAdsActive(bool shouldCloseAds) { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts