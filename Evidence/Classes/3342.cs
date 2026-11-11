public class NoAdsOfferService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable // TypeDefIndex: 3342
{
	// Fields
	private readonly NoAdsOfferStateService _stateService; // 0x10
	private readonly NoAdsOfferDataService _dataService; // 0x18
	private readonly NoAdsOfferRemoteService _remoteService; // 0x20
	private readonly CustomUpdater _customUpdater; // 0x28
	private readonly RemoteConfigs _remoteConfigs; // 0x30
	private SecondTimer _secondTimer; // 0x38
	private int _sessionInterstitialCount; // 0x40
	private int _nextPopupTargetCount; // 0x44
	private readonly RemoteTimeService _remoteTimeService; // 0x48

	// Methods

	// RVA: 0x3463E28 Offset: 0x3463E28 VA: 0x3463E28
	public void .ctor(NoAdsOfferStateService stateService, NoAdsOfferDataService dataService, NoAdsOfferRemoteService remoteService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, RemoteTimeService remoteTimeService) { }

	// RVA: 0x3463ECC Offset: 0x3463ECC VA: 0x3463ECC Slot: 4
	public void Initialize() { }

	// RVA: 0x34640A8 Offset: 0x34640A8 VA: 0x34640A8 Slot: 5
	public void Dispose() { }

	// RVA: 0x3464238 Offset: 0x3464238 VA: 0x3464238 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x34642F4 Offset: 0x34642F4 VA: 0x34642F4 Slot: 7
	public void InitializeData() { }

	// RVA: 0x346430C Offset: 0x346430C VA: 0x346430C
	private NoAdsOfferConfigModel GetConfig() { }

	// RVA: 0x3464330 Offset: 0x3464330 VA: 0x3464330
	public NoAdsOfferViewModel GetViewModel() { }

	// RVA: 0x3464470 Offset: 0x3464470 VA: 0x3464470
	public List<RewardModel> GetRewards() { }

	[AsyncStateMachine(typeof(NoAdsOfferService.<TryFetchCurrentEvent>d__17))]
	// RVA: 0x346423C Offset: 0x346423C VA: 0x346423C
	private void TryFetchCurrentEvent() { }

	// RVA: 0x34644F8 Offset: 0x34644F8 VA: 0x34644F8
	private void HandleResponse(ApiResponse<NoAdsOfferResponse> apiResponse) { }

	// RVA: 0x3460E8C Offset: 0x3460E8C VA: 0x3460E8C
	public bool ShouldForceShowPopup() { }

	// RVA: 0x34645C8 Offset: 0x34645C8 VA: 0x34645C8
	public Dictionary<string, IAPConfigModel> GetUniqueIAPConfigModels() { }

	// RVA: 0x34647E0 Offset: 0x34647E0 VA: 0x34647E0
	public bool TryGetIAPModel(string productId, out IAPConfigModel o) { }

	[AsyncStateMachine(typeof(NoAdsOfferService.<Claim>d__22))]
	// RVA: 0x3464864 Offset: 0x3464864 VA: 0x3464864
	public void Claim() { }

	// RVA: 0x346491C Offset: 0x346491C VA: 0x346491C
	private void MarkInterShown(AdRequestSource source) { }

	// RVA: 0x34613B4 Offset: 0x34613B4 VA: 0x34613B4
	public void PopupShown() { }

	// RVA: 0x34612B0 Offset: 0x34612B0 VA: 0x34612B0
	public void TryResetDailyPopupCount() { }

	// RVA: 0x3464934 Offset: 0x3464934 VA: 0x3464934
	private void OnPlayButtonClicked() { }
}

// Namespace: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts