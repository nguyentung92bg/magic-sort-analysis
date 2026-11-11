public class WebShopService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IFocusChanged, IIntervalUpdate // TypeDefIndex: 3109
{
	// Fields
	private readonly WebShopRemoteService _remoteService; // 0x10
	private readonly WebShopDataService _dataService; // 0x18
	private readonly CustomUpdater _customUpdater; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private readonly IPlayerService _playerService; // 0x30
	private readonly WebShopStateService _stateService; // 0x38
	private WebShopHandler _handler; // 0x40
	private WebShopTransactionDataModel _ongoingTransaction; // 0x48
	private List<AppchargeClaimablePurchase> _fulfilledPurchases; // 0x50
	private TaskCompletionSource<bool> _transactionTcs; // 0x58
	private bool _isClaimInProgress; // 0x60

	// Properties
	public WebShopRemoteService RemoteService { get; }
	public WebShopDataService DataService { get; }
	public WebShopStateService StateService { get; }

	// Methods

	// RVA: 0x316B5B8 Offset: 0x316B5B8 VA: 0x316B5B8
	public WebShopRemoteService get_RemoteService() { }

	// RVA: 0x316B5C0 Offset: 0x316B5C0 VA: 0x316B5C0
	public WebShopDataService get_DataService() { }

	// RVA: 0x316B5C8 Offset: 0x316B5C8 VA: 0x316B5C8
	public WebShopStateService get_StateService() { }

	// RVA: 0x316B5D0 Offset: 0x316B5D0 VA: 0x316B5D0
	public void .ctor(WebShopDataService dataService, WebShopRemoteService remoteService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, IPlayerService playerService, WebShopStateService stateService) { }

	// RVA: 0x316B674 Offset: 0x316B674 VA: 0x316B674 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(WebShopService.<InitializeData>d__19))]
	// RVA: 0x316B6EC Offset: 0x316B6EC VA: 0x316B6EC Slot: 6
	public void InitializeData() { }

	// RVA: 0x316B7A4 Offset: 0x316B7A4 VA: 0x316B7A4 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(WebShopService.<IntervalUpdate>d__21))]
	// RVA: 0x316B89C Offset: 0x316B89C VA: 0x316B89C Slot: 8
	public void IntervalUpdate() { }

	[AsyncStateMachine(typeof(WebShopService.<FetchFulfilledPurchases>d__22))]
	// RVA: 0x316B954 Offset: 0x316B954 VA: 0x316B954
	public Task FetchFulfilledPurchases() { }

	[AsyncStateMachine(typeof(WebShopService.<FocusChanged>d__23))]
	// RVA: 0x316BA40 Offset: 0x316BA40 VA: 0x316BA40 Slot: 7
	public void FocusChanged(bool hasFocus) { }

	[AsyncStateMachine(typeof(WebShopService.<TryClaimOngoingTransaction>d__24))]
	// RVA: 0x316BB00 Offset: 0x316BB00 VA: 0x316BB00
	private Task TryClaimOngoingTransaction(bool shouldShowPurchaseFailPopup = True) { }

	[AsyncStateMachine(typeof(WebShopService.<RetryClaimOngoingTransaction>d__25))]
	// RVA: 0x3162B9C Offset: 0x3162B9C VA: 0x3162B9C
	public void RetryClaimOngoingTransaction(bool shouldShowPurchaseFailPopup = True) { }

	// RVA: 0x316BBF8 Offset: 0x316BBF8 VA: 0x316BBF8
	public WebShopConfigModel GetConfig() { }

	[AsyncStateMachine(typeof(WebShopService.<StartCheckout>d__27))]
	// RVA: 0x316BC1C Offset: 0x316BC1C VA: 0x316BC1C
	public Task<bool> StartCheckout(string productId, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context, bool giveRewardsWithoutAnimation) { }

	// RVA: 0x316BD7C Offset: 0x316BD7C VA: 0x316BD7C
	private bool IsEnabled() { }

	// RVA: 0x31616D8 Offset: 0x31616D8 VA: 0x31616D8
	public bool CanShowWebShopOffer(string productId) { }

	// RVA: 0x316BDB0 Offset: 0x316BDB0 VA: 0x316BDB0
	private bool HasWebShopProduct(string productId) { }

	// RVA: 0x31617A4 Offset: 0x31617A4 VA: 0x31617A4
	public WebShopProduct GetWebShopProduct(string productId) { }

	// RVA: 0x31653AC Offset: 0x31653AC VA: 0x31653AC
	public bool TryGetProductByWebProductId(string webProductId, out WebShopProduct webProduct) { }

	// RVA: 0x316BF40 Offset: 0x316BF40 VA: 0x316BF40
	private string GetWebProductId(string productId) { }

	// RVA: 0x3161724 Offset: 0x3161724 VA: 0x3161724
	public void ResetOngoingTransaction() { }

	// RVA: 0x316BFA8 Offset: 0x316BFA8 VA: 0x316BFA8
	public bool ShouldShowPurchasedCompleted() { }

	// RVA: 0x316BFFC Offset: 0x316BFFC VA: 0x316BFFC
	public void ResetFulfilledPurchases() { }

	[AsyncStateMachine(typeof(WebShopService.<ApplyNotRequestedTransactions>d__37))]
	// RVA: 0x316C008 Offset: 0x316C008 VA: 0x316C008
	public Task ApplyNotRequestedTransactions() { }

	// RVA: 0x316C0F4 Offset: 0x316C0F4 VA: 0x316C0F4
	public WebShopTransactionDataModel GetOnGoingTransaction() { }

	// RVA: 0x316C0FC Offset: 0x316C0FC VA: 0x316C0FC
	public long GetPromptDisableUntilAsUnix() { }

	// RVA: 0x316C214 Offset: 0x316C214 VA: 0x316C214
	public long GetPurchaseProtectionEndTimeAsUnix() { }

	// RVA: 0x316C240 Offset: 0x316C240 VA: 0x316C240
	public long GetIapChosenCountdownEndTimeAsUnix() { }

	// RVA: 0x316C26C Offset: 0x316C26C VA: 0x316C26C
	public long GetNoPurchaseCountdownEndTimeAsUnix() { }

	// RVA: 0x316C128 Offset: 0x316C128 VA: 0x316C128
	private static long ToUnixSeconds(DateTime dateTimeUtc) { }

	// RVA: 0x3161678 Offset: 0x3161678 VA: 0x3161678
	public void TryTemporarilyDisableWebShop() { }

	// RVA: 0x3162070 Offset: 0x3162070 VA: 0x3162070
	public void OnWebShopPopupShown() { }

	// RVA: 0x316C3B8 Offset: 0x316C3B8 VA: 0x316C3B8
	private DateTime AddFlowDuration(DateTime startUtc, int configDays) { }

	// RVA: 0x316C2EC Offset: 0x316C2EC VA: 0x316C2EC
	private void TemporarilyDisableWebShop(WebShopFlowChangeReason reason) { }

	// RVA: 0x316C57C Offset: 0x316C57C VA: 0x316C57C
	public void OnNativePurchaseSucceeded() { }

	// RVA: 0x316C608 Offset: 0x316C608 VA: 0x316C608
	public void OnWebShopPurchaseSucceeded() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts