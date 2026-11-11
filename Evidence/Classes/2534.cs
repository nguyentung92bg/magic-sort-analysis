public class ApplyPurchaseSuccessCommand : ICommand // TypeDefIndex: 2534
{
	// Fields
	[CompilerGenerated]
	private string <ProductId>k__BackingField; // 0x10
	[CompilerGenerated]
	private IAPOrigin <IAPOrigin>k__BackingField; // 0x18
	[CompilerGenerated]
	private IAPReason <IAPReason>k__BackingField; // 0x1C
	[CompilerGenerated]
	private IAPContext <IAPContext>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <GiveRewardsWithoutAnimation>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <IsWithoutRequest>k__BackingField; // 0x25
	[CompilerGenerated]
	private bool <IsVerified>k__BackingField; // 0x26
	[CompilerGenerated]
	private bool <FromWebShop>k__BackingField; // 0x27
	[CompilerGenerated]
	private string <WebProductId>k__BackingField; // 0x28

	// Properties
	public string ProductId { get; set; }
	public IAPOrigin IAPOrigin { get; set; }
	public IAPReason IAPReason { get; set; }
	public IAPContext IAPContext { get; set; }
	public bool GiveRewardsWithoutAnimation { get; set; }
	public bool IsWithoutRequest { get; set; }
	public bool IsVerified { get; set; }
	public bool FromWebShop { get; set; }
	public string WebProductId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2B033E0 Offset: 0x2B033E0 VA: 0x2B033E0
	public string get_ProductId() { }

	[CompilerGenerated]
	// RVA: 0x2B033E8 Offset: 0x2B033E8 VA: 0x2B033E8
	public void set_ProductId(string value) { }

	[CompilerGenerated]
	// RVA: 0x2B033F0 Offset: 0x2B033F0 VA: 0x2B033F0
	public IAPOrigin get_IAPOrigin() { }

	[CompilerGenerated]
	// RVA: 0x2B033F8 Offset: 0x2B033F8 VA: 0x2B033F8
	public void set_IAPOrigin(IAPOrigin value) { }

	[CompilerGenerated]
	// RVA: 0x2B03400 Offset: 0x2B03400 VA: 0x2B03400
	public IAPReason get_IAPReason() { }

	[CompilerGenerated]
	// RVA: 0x2B03408 Offset: 0x2B03408 VA: 0x2B03408
	public void set_IAPReason(IAPReason value) { }

	[CompilerGenerated]
	// RVA: 0x2B03410 Offset: 0x2B03410 VA: 0x2B03410
	public IAPContext get_IAPContext() { }

	[CompilerGenerated]
	// RVA: 0x2B03418 Offset: 0x2B03418 VA: 0x2B03418
	public void set_IAPContext(IAPContext value) { }

	[CompilerGenerated]
	// RVA: 0x2B03420 Offset: 0x2B03420 VA: 0x2B03420
	public bool get_GiveRewardsWithoutAnimation() { }

	[CompilerGenerated]
	// RVA: 0x2B03428 Offset: 0x2B03428 VA: 0x2B03428
	public void set_GiveRewardsWithoutAnimation(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2B03434 Offset: 0x2B03434 VA: 0x2B03434
	public bool get_IsWithoutRequest() { }

	[CompilerGenerated]
	// RVA: 0x2B0343C Offset: 0x2B0343C VA: 0x2B0343C
	public void set_IsWithoutRequest(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2B03448 Offset: 0x2B03448 VA: 0x2B03448
	public bool get_IsVerified() { }

	[CompilerGenerated]
	// RVA: 0x2B03450 Offset: 0x2B03450 VA: 0x2B03450
	public void set_IsVerified(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2B0345C Offset: 0x2B0345C VA: 0x2B0345C
	public bool get_FromWebShop() { }

	[CompilerGenerated]
	// RVA: 0x2B03464 Offset: 0x2B03464 VA: 0x2B03464
	public void set_FromWebShop(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2B03470 Offset: 0x2B03470 VA: 0x2B03470
	public string get_WebProductId() { }

	[CompilerGenerated]
	// RVA: 0x2B03478 Offset: 0x2B03478 VA: 0x2B03478
	public void set_WebProductId(string value) { }

	// RVA: 0x2B03480 Offset: 0x2B03480 VA: 0x2B03480 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2B04F70 Offset: 0x2B04F70 VA: 0x2B04F70
	private void ClaimRewards(float dollarEquivalent, List<RewardModel> rewards, bool giveRewardsWithoutAnimation, CurrencyEarnReason earnReason, bool bundleContainsNoAds) { }

	// RVA: 0x2B05084 Offset: 0x2B05084 VA: 0x2B05084
	private void SendInAppPurchaseEvent(IAPService iapService, StoreModelService storeModelService) { }

	// RVA: 0x2B047F0 Offset: 0x2B047F0 VA: 0x2B047F0
	private List<RewardModel> GetRewards(StoreSpecialBundleModel model) { }

	// RVA: 0x2B04BBC Offset: 0x2B04BBC VA: 0x2B04BBC
	private List<RewardModel> GetRewards(StorePermanentBundleModel model) { }

	// RVA: 0x2B053A8 Offset: 0x2B053A8 VA: 0x2B053A8 Slot: 5
	public void Dispose() { }

	// RVA: 0x2B053AC Offset: 0x2B053AC VA: 0x2B053AC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts