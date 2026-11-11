public class WebShopHandler // TypeDefIndex: 3083
{
	// Fields
	private const string PlatformIos = "ios";
	private const string PlatformAndroid = "and";
	private WebShopService _service; // 0x10

	// Methods

	// RVA: 0x3164344 Offset: 0x3164344 VA: 0x3164344
	public void .ctor(WebShopService service) { }

	[AsyncStateMachine(typeof(WebShopHandler.<StartCheckoutAsync>d__4))]
	// RVA: 0x3164374 Offset: 0x3164374 VA: 0x3164374
	public Task<WebShopTransactionDataModel> StartCheckoutAsync(string productId, string webProductId, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context, bool giveRewardsWithoutAnimation, string countryCode) { }

	[AsyncStateMachine(typeof(WebShopHandler.<TryClaimTransactionAsync>d__5))]
	// RVA: 0x31644F8 Offset: 0x31644F8 VA: 0x31644F8
	public Task<bool> TryClaimTransactionAsync(WebShopTransactionDataModel transaction, bool shouldShowPurchaseFailPopup) { }

	[AsyncStateMachine(typeof(WebShopHandler.<TryFetchTransactionStatus>d__6))]
	// RVA: 0x3164634 Offset: 0x3164634 VA: 0x3164634
	private Task<string> TryFetchTransactionStatus(WebShopTransactionDataModel transactionModel) { }

	[AsyncStateMachine(typeof(WebShopHandler.<ApplyTransaction>d__7))]
	// RVA: 0x3164760 Offset: 0x3164760 VA: 0x3164760
	private Task ApplyTransaction(WebShopTransactionDataModel transaction) { }

	[AsyncStateMachine(typeof(WebShopHandler.<TryClaimFulfilledTransaction>d__8))]
	// RVA: 0x3164864 Offset: 0x3164864 VA: 0x3164864
	private Task TryClaimFulfilledTransaction(WebShopTransactionDataModel transaction) { }

	[AsyncStateMachine(typeof(WebShopHandler.<HandleClaimablePurchases>d__9))]
	// RVA: 0x3164968 Offset: 0x3164968 VA: 0x3164968
	public Task<List<AppchargeClaimablePurchase>> HandleClaimablePurchases() { }

	[AsyncStateMachine(typeof(WebShopHandler.<ApplyNotRequestedTransactions>d__10))]
	// RVA: 0x3164A78 Offset: 0x3164A78 VA: 0x3164A78
	public Task ApplyNotRequestedTransactions(List<AppchargeClaimablePurchase> fulfilledPurchases) { }

	[AsyncStateMachine(typeof(WebShopHandler.<ApplyNotRequestedTransaction>d__11))]
	// RVA: 0x3164B7C Offset: 0x3164B7C VA: 0x3164B7C
	private Task ApplyNotRequestedTransaction(string purchaseId, string webProductId) { }

	// RVA: 0x3164CA0 Offset: 0x3164CA0 VA: 0x3164CA0
	private void SendWebPurchaseEvent(string productId, string webProductId, string transactionId, WebShopProduct webShopProduct) { }

	[AsyncStateMachine(typeof(WebShopHandler.<ClaimAppliedTransactions>d__13))]
	// RVA: 0x3164DB8 Offset: 0x3164DB8 VA: 0x3164DB8
	public Task ClaimAppliedTransactions() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts