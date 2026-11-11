public class ChooseOneSpecialOfferService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3453
{
	// Fields
	private ChooseOneSpecialOfferDataService _dataService; // 0x10
	private ChooseOneSpecialOfferStateService _stateService; // 0x18
	private ChooseOneSpecialOfferRemoteService _remoteService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private RewardService _rewardService; // 0x30
	private CustomUpdater _customUpdater; // 0x38
	private SecondTimer _secondTimer; // 0x40
	private readonly LobbyEventsService _lobbyEventsService; // 0x48

	// Properties
	public ChooseOneSpecialOfferDataService DataService { get; }
	public ChooseOneSpecialOfferStateService StateService { get; }

	// Methods

	// RVA: 0x20AC8BC Offset: 0x20AC8BC VA: 0x20AC8BC
	public ChooseOneSpecialOfferDataService get_DataService() { }

	// RVA: 0x20AC8C4 Offset: 0x20AC8C4 VA: 0x20AC8C4
	public ChooseOneSpecialOfferStateService get_StateService() { }

	// RVA: 0x20AC8CC Offset: 0x20AC8CC VA: 0x20AC8CC
	public void .ctor(CustomUpdater customUpdater, ChooseOneSpecialOfferDataService dataService, ChooseOneSpecialOfferStateService stateService, ChooseOneSpecialOfferRemoteService remoteService, RemoteConfigs remoteConfigs, RewardService rewardService, LobbyEventsService lobbyEventsService) { }

	// RVA: 0x20AC98C Offset: 0x20AC98C VA: 0x20AC98C Slot: 4
	public void Initialize() { }

	// RVA: 0x20ACA18 Offset: 0x20ACA18 VA: 0x20ACA18 Slot: 5
	public void Dispose() { }

	// RVA: 0x20ACA4C Offset: 0x20ACA4C VA: 0x20ACA4C Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x20ACB08 Offset: 0x20ACB08 VA: 0x20ACB08 Slot: 7
	public void InitializeData() { }

	// RVA: 0x20ACB0C Offset: 0x20ACB0C VA: 0x20ACB0C
	public void OnPopupOpened() { }

	[AsyncStateMachine(typeof(ChooseOneSpecialOfferService.<TryFetchCurrentEvent>d__18))]
	// RVA: 0x20ACA50 Offset: 0x20ACA50 VA: 0x20ACA50
	public void TryFetchCurrentEvent() { }

	// RVA: 0x20ACB48 Offset: 0x20ACB48 VA: 0x20ACB48
	private ChooseOneSpecialOfferRequestModel GetRequestModel() { }

	// RVA: 0x20ACC14 Offset: 0x20ACC14 VA: 0x20ACC14
	private void HandleChooseOneSpecialOfferResponse(ApiResponse<ChooseOneSpecialOfferResponse> response) { }

	// RVA: 0x20ACCE8 Offset: 0x20ACCE8 VA: 0x20ACCE8
	private void UpdateAndCacheBackendOfferResponse(ApiResponse<ChooseOneSpecialOfferResponse> response) { }

	// RVA: 0x20ACDF0 Offset: 0x20ACDF0 VA: 0x20ACDF0
	private void ClearChooseOneSpecialOfferData() { }

	// RVA: 0x20ACE38 Offset: 0x20ACE38 VA: 0x20ACE38
	private void ScheduleChooseOneSpecialOfferFetch() { }

	// RVA: 0x20ACF34 Offset: 0x20ACF34 VA: 0x20ACF34
	public DateTime GetEndDate() { }

	// RVA: 0x20ACFF4 Offset: 0x20ACFF4 VA: 0x20ACFF4
	public int GetRemainingSeconds() { }

	// RVA: 0x20AD10C Offset: 0x20AD10C VA: 0x20AD10C
	public Dictionary<string, IAPConfigModel> GetChooseOneSpecialOfferUniqueIAPs() { }

	// RVA: 0x20AD2D8 Offset: 0x20AD2D8 VA: 0x20AD2D8
	public void ClaimPurchasedChooseOneSpecialOfferRewards(string productId, bool giveRewardsWithoutAnimation) { }

	// RVA: 0x20AD340 Offset: 0x20AD340 VA: 0x20AD340
	private List<RewardModel> GetRewardsForProductId(string productId) { }

	// RVA: 0x20AD50C Offset: 0x20AD50C VA: 0x20AD50C
	private List<RewardModel> TryGetFallbackRewards(string productId) { }

	[CanBeNull]
	// RVA: 0x20AD79C Offset: 0x20AD79C VA: 0x20AD79C
	public IAPConfigModel GetIAPConfigModel(string iapProductId) { }

	// RVA: 0x20AD954 Offset: 0x20AD954 VA: 0x20AD954
	public bool CanShowBeforeStore() { }

	// RVA: 0x20AD9D8 Offset: 0x20AD9D8 VA: 0x20AD9D8
	public bool ShouldDisplayBeforeStore() { }

	// RVA: 0x20ADA64 Offset: 0x20ADA64 VA: 0x20ADA64
	public void IncrementPopupTrigger() { }

	// RVA: 0x20ADA98 Offset: 0x20ADA98 VA: 0x20ADA98
	public bool ShouldForceShowPopup() { }

	// RVA: 0x20ADAE4 Offset: 0x20ADAE4 VA: 0x20ADAE4
	public string GetEventId() { }

	// RVA: 0x20ADB54 Offset: 0x20ADB54 VA: 0x20ADB54
	public bool CheckWrongData() { }

	// RVA: 0x20ADD30 Offset: 0x20ADD30 VA: 0x20ADD30
	public int GetDiscountAmount() { }

	// RVA: 0x20ADD6C Offset: 0x20ADD6C VA: 0x20ADD6C
	public string GetSegment() { }

	// RVA: 0x20ADDA0 Offset: 0x20ADDA0 VA: 0x20ADDA0
	public int GetPackageIdByProductId(string productId) { }

	// RVA: 0x20ADF74 Offset: 0x20ADF74 VA: 0x20ADF74 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x20ADF98 Offset: 0x20ADF98 VA: 0x20ADF98 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	[CompilerGenerated]
	// RVA: 0x20ADFBC Offset: 0x20ADFBC VA: 0x20ADFBC
	private void <ScheduleChooseOneSpecialOfferFetch>b__23_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts