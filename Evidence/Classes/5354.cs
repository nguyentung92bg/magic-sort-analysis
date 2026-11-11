public class Interstitial : IInterstitialAdAdapter, IAdAdapter // TypeDefIndex: 5354
{
	// Fields
	private const string InterstitialAdUnitId = "b46823fb5e293c9e";
	private int _interstitialRetryAttempt; // 0x10
	private CustomUpdater _customUpdater; // 0x18
	private IPlayerService _playerService; // 0x20
	[CompilerGenerated]
	private DateTime <LastInterstitialShownTime>k__BackingField; // 0x28
	private AdRequestSource _adRequestSource; // 0x30
	private int _paidAdCount; // 0x34
	private int _loadedAdCount; // 0x38
	private TaskCompletionSource<bool> _interstitialShowTcs; // 0x40
	private MaxSdkBase.AdInfo _lastLoadedAdInfo; // 0x48
	private AdConfigService _adConfigService; // 0x50

	// Properties
	public DateTime LastInterstitialShownTime { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1B62530 Offset: 0x1B62530 VA: 0x1B62530 Slot: 4
	public DateTime get_LastInterstitialShownTime() { }

	[CompilerGenerated]
	// RVA: 0x1B62538 Offset: 0x1B62538 VA: 0x1B62538
	private void set_LastInterstitialShownTime(DateTime value) { }

	// RVA: 0x1B5ED24 Offset: 0x1B5ED24 VA: 0x1B5ED24
	public void .ctor(CustomUpdater customUpdater, IPlayerService playerService, AdConfigService adConfigService) { }

	// RVA: 0x1B62540 Offset: 0x1B62540 VA: 0x1B62540 Slot: 6
	public void Initialize() { }

	// RVA: 0x1B628FC Offset: 0x1B628FC VA: 0x1B628FC
	private void OnInterstitialAdReviewCreativeIdGeneratedEvent(string adUnitIdentifier, string adReviewCreativeId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B627D0 Offset: 0x1B627D0 VA: 0x1B627D0 Slot: 5
	public void ResetLastInterstitialShownTime() { }

	// RVA: 0x1B6282C Offset: 0x1B6282C VA: 0x1B6282C
	private void LoadInterstitial() { }

	[AsyncStateMachine(typeof(Interstitial.<Show>d__19))]
	// RVA: 0x1B62A14 Offset: 0x1B62A14 VA: 0x1B62A14 Slot: 8
	public Task<bool> Show(AdRequestSource adRequestSource) { }

	// RVA: 0x1B62B3C Offset: 0x1B62B3C VA: 0x1B62B3C Slot: 7
	public bool IsReady() { }

	// RVA: 0x1B62BA4 Offset: 0x1B62BA4 VA: 0x1B62BA4
	private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B62DFC Offset: 0x1B62DFC VA: 0x1B62DFC
	private void OnInterstitialLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }

	// RVA: 0x1B62F7C Offset: 0x1B62F7C VA: 0x1B62F7C
	private void InterstitialFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B630C4 Offset: 0x1B630C4 VA: 0x1B630C4
	private void OnInterstitialHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B6320C Offset: 0x1B6320C VA: 0x1B6320C
	private void OnInterstitialRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B63630 Offset: 0x1B63630 VA: 0x1B63630
	private void OnInterstitialClickedEvent(string arg1, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B63714 Offset: 0x1B63714 VA: 0x1B63714
	private void OnAdDisplayedEvent(string arg1, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B634E0 Offset: 0x1B634E0 VA: 0x1B634E0
	private void SendAdjustAdImpression(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B63558 Offset: 0x1B63558 VA: 0x1B63558
	private void TrackAdRevenue(MaxSdkBase.AdInfo adInfo) { }
}

// Namespace: Modules.Contexts.Application.Ads.Scripts