public class OnePlusFreeOfferService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3253
{
	// Fields
	private OnePlusFreeOfferDataService _dataService; // 0x10
	private OnePlusFreeOfferStateService _stateService; // 0x18
	private OnePlusFreeOfferRemoteService _remoteService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private RewardService _rewardService; // 0x30
	private CustomUpdater _customUpdater; // 0x38
	private SecondTimer _secondTimer; // 0x40
	private readonly LobbyEventsService _lobbyEventsService; // 0x48
	private readonly AssetManager _assetManager; // 0x50
	private string _onePlusFreeOfferBundleId; // 0x58
	private bool _shouldShowPopupAfterPurchased; // 0x60
	private static readonly CurrencyType[] RewardDisplayOrder; // 0x0
	[CompilerGenerated]
	private OnePlusFreeOfferPopupImpressionSource <CurrentSource>k__BackingField; // 0x64
	private OnePlusFreeOfferViewModel _viewModel; // 0x68

	// Properties
	public OnePlusFreeOfferDataService DataService { get; }
	public OnePlusFreeOfferStateService StateService { get; }
	public OnePlusFreeOfferPopupImpressionSource CurrentSource { get; set; }

	// Methods

	// RVA: 0x358B7A4 Offset: 0x358B7A4 VA: 0x358B7A4
	public OnePlusFreeOfferDataService get_DataService() { }

	// RVA: 0x358B7AC Offset: 0x358B7AC VA: 0x358B7AC
	public OnePlusFreeOfferStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x358B7B4 Offset: 0x358B7B4 VA: 0x358B7B4
	public OnePlusFreeOfferPopupImpressionSource get_CurrentSource() { }

	[CompilerGenerated]
	// RVA: 0x358B7BC Offset: 0x358B7BC VA: 0x358B7BC
	private void set_CurrentSource(OnePlusFreeOfferPopupImpressionSource value) { }

	// RVA: 0x358B7C4 Offset: 0x358B7C4 VA: 0x358B7C4
	public void .ctor(CustomUpdater customUpdater, OnePlusFreeOfferDataService dataService, OnePlusFreeOfferStateService stateService, OnePlusFreeOfferRemoteService remoteService, RemoteConfigs remoteConfigs, RewardService rewardService, LobbyEventsService lobbyEventsService, AssetManager assetManager) { }

	// RVA: 0x358B898 Offset: 0x358B898 VA: 0x358B898 Slot: 4
	public void Initialize() { }

	// RVA: 0x358B994 Offset: 0x358B994 VA: 0x358B994 Slot: 5
	public void Dispose() { }

	// RVA: 0x358B9C8 Offset: 0x358B9C8 VA: 0x358B9C8 Slot: 6
	public void IntervalUpdate() { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferService.<InitializeData>d__25))]
	// RVA: 0x358BA80 Offset: 0x358BA80 VA: 0x358BA80 Slot: 7
	public void InitializeData() { }

	// RVA: 0x358BB38 Offset: 0x358BB38 VA: 0x358BB38
	public void OnPopupOpened(OnePlusFreeOfferPopupImpressionSource impressionSource) { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferService.<TryFetchCurrentEvent>d__27))]
	// RVA: 0x358B9CC Offset: 0x358B9CC VA: 0x358B9CC
	private void TryFetchCurrentEvent() { }

	// RVA: 0x358BB78 Offset: 0x358BB78 VA: 0x358BB78
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferService.<CheckAndResolveAssetDependency>d__29))]
	// RVA: 0x358BBE0 Offset: 0x358BBE0 VA: 0x358BBE0
	private Task CheckAndResolveAssetDependency() { }

	// RVA: 0x358BCCC Offset: 0x358BCCC VA: 0x358BCCC
	private long GetEventType() { }

	// RVA: 0x358BCF8 Offset: 0x358BCF8 VA: 0x358BCF8
	private void HandleOnePlusFreeOfferResponse(ApiResponse<OnePlusOneOfferResponse> response) { }

	// RVA: 0x358BDCC Offset: 0x358BDCC VA: 0x358BDCC
	private void UpdateAndCacheBackendOfferResponse(ApiResponse<OnePlusOneOfferResponse> response) { }

	// RVA: 0x358BF60 Offset: 0x358BF60 VA: 0x358BF60
	private static OnePlusFreeOfferEventCache ToEventCache(OnePlusOneOfferResponse response) { }

	// RVA: 0x358BF08 Offset: 0x358BF08 VA: 0x358BF08
	private void ClearOnePlusFreeOfferData() { }

	// RVA: 0x358C044 Offset: 0x358C044 VA: 0x358C044
	private void ScheduleOnePlusFreeOfferFetch() { }

	// RVA: 0x358C140 Offset: 0x358C140 VA: 0x358C140
	public DateTime GetEndDate() { }

	// RVA: 0x358C200 Offset: 0x358C200 VA: 0x358C200
	public int GetRemainingSeconds() { }

	// RVA: 0x358C318 Offset: 0x358C318 VA: 0x358C318
	public Dictionary<string, IAPConfigModel> GetOnePlusFreeOfferUniqueIAPs() { }

	// RVA: 0x358C4E4 Offset: 0x358C4E4 VA: 0x358C4E4
	public void ClaimPurchasedOnePlusFreeOfferRewards(string productId, bool giveRewardsWithoutAnimation) { }

	// RVA: 0x358C63C Offset: 0x358C63C VA: 0x358C63C
	public void ClaimFreeRewards(bool giveRewardsWithoutAnimation) { }

	// RVA: 0x358C6A0 Offset: 0x358C6A0 VA: 0x358C6A0
	private void GiveFreeRewards(OnePlusFreeOfferPopupImpressionSource source, bool giveRewardsWithoutAnimation) { }

	// RVA: 0x358CB40 Offset: 0x358CB40 VA: 0x358CB40
	public OnePlusFreeOfferViewModel GetViewModel() { }

	// RVA: 0x358CBF4 Offset: 0x358CBF4 VA: 0x358CBF4
	public string GetProductId() { }

	// RVA: 0x358C590 Offset: 0x358C590 VA: 0x358C590
	private List<RewardModel> GetPaidRewards(string productId) { }

	// RVA: 0x358C858 Offset: 0x358C858 VA: 0x358C858
	private List<RewardModel> FilterCollectionRewards(List<RewardModel> rewards) { }

	// RVA: 0x358C7B0 Offset: 0x358C7B0 VA: 0x358C7B0
	private List<RewardModel> GetFreeRewards() { }

	// RVA: 0x358D0A4 Offset: 0x358D0A4 VA: 0x358D0A4
	private static List<RewardModel> ToAvailableMergedRewards(List<RewardModel> rewardSource) { }

	// RVA: 0x358D350 Offset: 0x358D350 VA: 0x358D350
	private static int CompareByDisplayOrder(RewardModel first, RewardModel second) { }

	// RVA: 0x358D400 Offset: 0x358D400 VA: 0x358D400
	private static int GetDisplayOrder(CurrencyType currencyType) { }

	// RVA: 0x358CE1C Offset: 0x358CE1C VA: 0x358CE1C
	private List<RewardModel> TryGetFallbackRewards(string productId, bool isPaidStep) { }

	// RVA: 0x358D4C8 Offset: 0x358D4C8 VA: 0x358D4C8
	private static List<RewardModel> GetMappingRewards(OnePlusFreeFallbackRewardMapping mapping, bool isPaidStep) { }

	// RVA: 0x358CC64 Offset: 0x358CC64 VA: 0x358CC64
	public IAPConfigModel GetIAPConfigModel(string iapProductId) { }

	// RVA: 0x358D55C Offset: 0x358D55C VA: 0x358D55C
	public bool ShouldDisplayBeforeStore() { }

	// RVA: 0x358D624 Offset: 0x358D624 VA: 0x358D624
	public void IncrementPopupTrigger() { }

	// RVA: 0x358D658 Offset: 0x358D658 VA: 0x358D658
	public bool ShouldForceShowPopup() { }

	// RVA: 0x358D708 Offset: 0x358D708 VA: 0x358D708
	public string GetEventId() { }

	// RVA: 0x358D778 Offset: 0x358D778 VA: 0x358D778
	public bool CheckWrongData() { }

	// RVA: 0x358D808 Offset: 0x358D808 VA: 0x358D808
	public string GetSegment() { }

	// RVA: 0x358D83C Offset: 0x358D83C VA: 0x358D83C Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x358D86C Offset: 0x358D86C VA: 0x358D86C Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x358D89C Offset: 0x358D89C VA: 0x358D89C
	public OnePlusFreeOfferLobbyButtonViewModel GetLobbyButtonViewModel() { }

	// RVA: 0x358D6C0 Offset: 0x358D6C0 VA: 0x358D6C0
	public bool ShouldGiveFreeRewardsAuto() { }

	// RVA: 0x358D95C Offset: 0x358D95C VA: 0x358D95C
	private bool IsEventTimeUp() { }

	// RVA: 0x358D9FC Offset: 0x358D9FC VA: 0x358D9FC
	public bool ShouldShowPopupAfterPurchase() { }

	// RVA: 0x358DA04 Offset: 0x358DA04 VA: 0x358DA04
	public void SetShouldShowPopupAfterPurchased(bool shouldShow) { }

	// RVA: 0x358DA10 Offset: 0x358DA10 VA: 0x358DA10
	public bool HasPendingRewards() { }

	// RVA: 0x358DA30 Offset: 0x358DA30 VA: 0x358DA30
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x358DAD0 Offset: 0x358DAD0 VA: 0x358DAD0
	private void <ScheduleOnePlusFreeOfferFetch>b__35_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts