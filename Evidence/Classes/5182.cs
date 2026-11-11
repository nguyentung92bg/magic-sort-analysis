public class IAPService : IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 5182
{
	// Fields
	private IAPHandler _iAPHandler; // 0x10
	private readonly IAPManager _iapManager; // 0x18
	private readonly StoreModelService _storeModelService; // 0x20
	private readonly EndlessPortalService _endlessPortalService; // 0x28
	private readonly SpecialOfferService _specialOfferService; // 0x30
	private readonly PawTouchOfferService _pawTouchOfferService; // 0x38
	private readonly NoAdsOfferService _noAdsOfferService; // 0x40
	private readonly ChooseOneSpecialOfferService _chooseOneSpecialOfferService; // 0x48
	private readonly OnePlusFreeOfferService _onePlusFreeOfferService; // 0x50
	private readonly TreasureDrillService _treasureDrillService; // 0x58
	private readonly MagicPassService _magicPassService; // 0x60
	private readonly MiniGameService _minigameService; // 0x68
	private readonly WebShopService _webShopService; // 0x70
	private Dictionary<string, IAPConfigModel> _iapConfigModels; // 0x78
	private bool _isPurchaseInProgress; // 0x80

	// Methods

	// RVA: 0x138B608 Offset: 0x138B608 VA: 0x138B608
	public void .ctor(IAPManager iapManager, StoreModelService storeModelService, EndlessPortalService endlessPortalService, SpecialOfferService specialOfferService, PawTouchOfferService pawTouchOfferService, NoAdsOfferService noAdsOfferService, ChooseOneSpecialOfferService chooseOneSpecialOfferService, OnePlusFreeOfferService onePlusFreeOfferService, TreasureDrillService treasureDrillService, MagicPassService magicPassService, MiniGameService minigameService, WebShopService webShopService) { }

	// RVA: 0x138B73C Offset: 0x138B73C VA: 0x138B73C Slot: 4
	public void Initialize() { }

	// RVA: 0x138C3C0 Offset: 0x138C3C0 VA: 0x138C3C0 Slot: 5
	public void Dispose() { }

	// RVA: 0x138B810 Offset: 0x138B810 VA: 0x138B810
	private void CollectIAPConfigModels() { }

	// RVA: 0x1386E38 Offset: 0x1386E38 VA: 0x1386E38
	public bool TryGetIAPModel(string productId, out IAPModel iapModel) { }

	// RVA: 0x138C3C4 Offset: 0x138C3C4 VA: 0x138C3C4
	public bool TryGetDollarEquivalentByProductId(string productId, out float dollarEquivalent) { }

	[AsyncStateMachine(typeof(IAPService.<ProcessPurchase>d__21))]
	// RVA: 0x138C458 Offset: 0x138C458 VA: 0x138C458
	public Task<bool> ProcessPurchase(string productId, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context, bool giveRewardsWithoutAnimation) { }

	// RVA: 0x138C5BC Offset: 0x138C5BC VA: 0x138C5BC Slot: 6
	public bool IsInterrupting() { }

	// RVA: 0x138C5C4 Offset: 0x138C5C4 VA: 0x138C5C4
	private void SendPurchaseButtonSelectedEvent(string productId, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context) { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts