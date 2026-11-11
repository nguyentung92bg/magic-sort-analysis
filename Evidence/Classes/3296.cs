public class SpecialOfferService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3296
{
	// Fields
	private SpecialOfferDataService _dataService; // 0x10
	private SpecialOfferStateService _stateService; // 0x18
	private SpecialOfferRemoteService _remoteService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private RewardService _rewardService; // 0x30
	private InventoryService _inventoryService; // 0x38
	private CustomUpdater _customUpdater; // 0x40
	private SecondTimer _secondTimer; // 0x48
	private AssetManager _assetManager; // 0x50
	private readonly LobbyEventsService _lobbyEventsService; // 0x58
	private Dictionary<SpecialOfferThemeTpye, string> _themeBundle; // 0x60
	private Dictionary<int, string> _popupBundle; // 0x68

	// Properties
	public SpecialOfferDataService DataService { get; }
	public SpecialOfferStateService StateService { get; }

	// Methods

	// RVA: 0x3595444 Offset: 0x3595444 VA: 0x3595444
	public SpecialOfferDataService get_DataService() { }

	// RVA: 0x359544C Offset: 0x359544C VA: 0x359544C
	public SpecialOfferStateService get_StateService() { }

	// RVA: 0x3595454 Offset: 0x3595454 VA: 0x3595454
	public void .ctor(CustomUpdater customUpdater, SpecialOfferDataService dataService, SpecialOfferStateService stateService, SpecialOfferRemoteService remoteService, InventoryService inventoryService, RemoteConfigs remoteConfigs, RewardService rewardService, LobbyEventsService lobbyEventsService, AssetManager assetManager) { }

	// RVA: 0x3595540 Offset: 0x3595540 VA: 0x3595540 Slot: 4
	public void Initialize() { }

	// RVA: 0x3595814 Offset: 0x3595814 VA: 0x3595814 Slot: 5
	public void Dispose() { }

	// RVA: 0x3595848 Offset: 0x3595848 VA: 0x3595848 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3595904 Offset: 0x3595904 VA: 0x3595904 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3595908 Offset: 0x3595908 VA: 0x3595908
	public void OnPopupOpened() { }

	[AsyncStateMachine(typeof(SpecialOfferService.<TryFetchCurrentEvent>d__22))]
	// RVA: 0x359584C Offset: 0x359584C VA: 0x359584C
	public void TryFetchCurrentEvent() { }

	// RVA: 0x3595944 Offset: 0x3595944 VA: 0x3595944
	private SpecialOfferRequestModel GetRequestModel() { }

	// RVA: 0x3595A58 Offset: 0x3595A58 VA: 0x3595A58
	private void HandleSpecialOfferResponse(ApiResponse<SpecialOfferResponse> response) { }

	// RVA: 0x3595B2C Offset: 0x3595B2C VA: 0x3595B2C
	private void UpdateAndCacheBackendOfferResponse(ApiResponse<SpecialOfferResponse> response) { }

	// RVA: 0x3595C74 Offset: 0x3595C74 VA: 0x3595C74
	private void ClearSpecialOfferData() { }

	[AsyncStateMachine(typeof(SpecialOfferService.<CheckAndResolveAssetDependencies>d__27))]
	// RVA: 0x3595DE4 Offset: 0x3595DE4 VA: 0x3595DE4
	private Task CheckAndResolveAssetDependencies() { }

	// RVA: 0x3595CE8 Offset: 0x3595CE8 VA: 0x3595CE8
	private void ScheduleSpecialOfferFetch() { }

	// RVA: 0x3595ED0 Offset: 0x3595ED0 VA: 0x3595ED0
	public DateTime GetEndDate() { }

	// RVA: 0x3595F90 Offset: 0x3595F90 VA: 0x3595F90
	public int GetRemainingSeconds() { }

	// RVA: 0x35960A8 Offset: 0x35960A8 VA: 0x35960A8
	public int GetSpecialOfferPopupType() { }

	// RVA: 0x3596110 Offset: 0x3596110 VA: 0x3596110
	public Dictionary<string, IAPConfigModel> GetSpecialOfferUniqueIAPs() { }

	// RVA: 0x35962D4 Offset: 0x35962D4 VA: 0x35962D4
	public void ClaimPurchasedSpecialOfferRewards(string productId, bool giveRewardsWithoutAnimation) { }

	// RVA: 0x359633C Offset: 0x359633C VA: 0x359633C
	private List<RewardModel> GetRewardsForProductId(string productId) { }

	[CanBeNull]
	// RVA: 0x35963F4 Offset: 0x35963F4 VA: 0x35963F4
	public IAPConfigModel GetIAPConfigModel(string iapProductId) { }

	// RVA: 0x35965A4 Offset: 0x35965A4 VA: 0x35965A4
	public bool ShouldDisplayBeforeStore() { }

	// RVA: 0x3596634 Offset: 0x3596634 VA: 0x3596634
	public void IncrementPopupTrigger() { }

	// RVA: 0x3596668 Offset: 0x3596668 VA: 0x3596668
	public bool ShouldForceShowPopup() { }

	// RVA: 0x35966B4 Offset: 0x35966B4 VA: 0x35966B4
	public string GetOfferName() { }

	// RVA: 0x35967D8 Offset: 0x35967D8 VA: 0x35967D8
	public string GetEventId() { }

	// RVA: 0x3596848 Offset: 0x3596848 VA: 0x3596848
	public int GetPopupId() { }

	// RVA: 0x359687C Offset: 0x359687C VA: 0x359687C Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x35968A0 Offset: 0x35968A0 VA: 0x35968A0 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x35967A4 Offset: 0x35967A4 VA: 0x35967A4
	public SpecialOfferThemeTpye GetThemeType() { }

	// RVA: 0x35968C4 Offset: 0x35968C4 VA: 0x35968C4
	public bool NeedToDownloadAssets() { }

	// RVA: 0x3596940 Offset: 0x3596940 VA: 0x3596940
	private string GetBundleId() { }

	// RVA: 0x3596A38 Offset: 0x3596A38 VA: 0x3596A38
	public bool ShouldShowEgoOffer() { }

	// RVA: 0x3596A80 Offset: 0x3596A80 VA: 0x3596A80
	public bool ShouldShowPlayOnAtEgo(bool isFirstPlayOn) { }

	// RVA: 0x3596AD8 Offset: 0x3596AD8 VA: 0x3596AD8
	private bool IsAllowedByFirstStuckRule(bool isFirstPlayOn) { }

	[CompilerGenerated]
	// RVA: 0x3596B10 Offset: 0x3596B10 VA: 0x3596B10
	private void <ScheduleSpecialOfferFetch>b__28_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts