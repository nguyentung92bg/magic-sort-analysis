public class PawTouchOfferService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable // TypeDefIndex: 3412
{
	// Fields
	[CompilerGenerated]
	private readonly PawTouchOfferDataService <DataService>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly PawTouchOfferStateService <StateService>k__BackingField; // 0x18
	[CompilerGenerated]
	private readonly PawTouchOfferRemoteService <RemoteService>k__BackingField; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private readonly CustomUpdater _customUpdater; // 0x30

	// Properties
	public PawTouchOfferConfig Config { get; }
	public PawTouchOfferDataService DataService { get; }
	public PawTouchOfferStateService StateService { get; }
	public PawTouchOfferRemoteService RemoteService { get; }

	// Methods

	// RVA: 0x34725A8 Offset: 0x34725A8 VA: 0x34725A8
	public PawTouchOfferConfig get_Config() { }

	[CompilerGenerated]
	// RVA: 0x34725CC Offset: 0x34725CC VA: 0x34725CC
	public PawTouchOfferDataService get_DataService() { }

	[CompilerGenerated]
	// RVA: 0x34725D4 Offset: 0x34725D4 VA: 0x34725D4
	public PawTouchOfferStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x34725DC Offset: 0x34725DC VA: 0x34725DC
	public PawTouchOfferRemoteService get_RemoteService() { }

	// RVA: 0x34725E4 Offset: 0x34725E4 VA: 0x34725E4
	public void .ctor(PawTouchOfferDataService dataService, PawTouchOfferStateService stateService, PawTouchOfferRemoteService remoteService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs) { }

	// RVA: 0x3472674 Offset: 0x3472674 VA: 0x3472674 Slot: 4
	public void Initialize() { }

	// RVA: 0x347269C Offset: 0x347269C VA: 0x347269C Slot: 5
	public void Dispose() { }

	// RVA: 0x34726BC Offset: 0x34726BC VA: 0x34726BC Slot: 7
	public void InitializeData() { }

	// RVA: 0x3472778 Offset: 0x3472778 VA: 0x3472778 Slot: 6
	public void IntervalUpdate() { }

	[AsyncStateMachine(typeof(PawTouchOfferService.<TryFetchCurrentEvent>d__18))]
	// RVA: 0x34726C0 Offset: 0x34726C0 VA: 0x34726C0
	private void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(PawTouchOfferService.<TrySendGetPawTouchOfferRequest>d__19))]
	// RVA: 0x347277C Offset: 0x347277C VA: 0x347277C
	private Task TrySendGetPawTouchOfferRequest() { }

	[AsyncStateMachine(typeof(PawTouchOfferService.<TrySendClaimPawTouchOfferRequest>d__20))]
	// RVA: 0x3472868 Offset: 0x3472868 VA: 0x3472868
	private Task TrySendClaimPawTouchOfferRequest() { }

	// RVA: 0x3472954 Offset: 0x3472954 VA: 0x3472954
	public int GetRemainingTimeInSeconds() { }

	// RVA: 0x3472A38 Offset: 0x3472A38 VA: 0x3472A38
	private DateTime GetEndDateTime() { }

	// RVA: 0x3472AC8 Offset: 0x3472AC8 VA: 0x3472AC8
	public int GetShowRemainingTimeInSeconds() { }

	// RVA: 0x3472BAC Offset: 0x3472BAC VA: 0x3472BAC
	public DateTime GetShowEndDateTime() { }

	// RVA: 0x3472C3C Offset: 0x3472C3C VA: 0x3472C3C
	public void OnPlayOnContainerShowed(PawTouchOfferPackage offerPackage) { }

	[AsyncStateMachine(typeof(PawTouchOfferService.<PurchaseOffer>d__26))]
	// RVA: 0x3472E1C Offset: 0x3472E1C VA: 0x3472E1C
	public Task<bool> PurchaseOffer(IAPConfigModel iapConfigModel) { }

	// RVA: 0x3472F50 Offset: 0x3472F50 VA: 0x3472F50
	public void OnPurchaseOffer(string productId, out List<RewardModel> rewards) { }

	// RVA: 0x3473034 Offset: 0x3473034 VA: 0x3473034
	private PawTouchOfferPackage GetOfferPackage(string productId, out bool isFallback) { }

	// RVA: 0x3473128 Offset: 0x3473128 VA: 0x3473128
	public Dictionary<string, IAPConfigModel> GetUniqueIAPConfigModels() { }

	[CanBeNull]
	// RVA: 0x34732FC Offset: 0x34732FC VA: 0x34732FC
	public IAPConfigModel GetIAPConfigModel(string iapProductId) { }
}

// Namespace: 