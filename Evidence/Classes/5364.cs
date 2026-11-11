public class MeticaInterstitial : IInterstitialAdAdapter, IAdAdapter // TypeDefIndex: 5364
{
	// Fields
	public const string InterstitialAdUnitIdTrial = "1006b041ec714b77";
	public const string InterstitialAdUnitIdHoldout = "b46823fb5e293c9e";
	private readonly string _interstitialAdUnitId; // 0x10
	private int _interstitialRetryAttempt; // 0x18
	private CustomUpdater _customUpdater; // 0x20
	private IPlayerService _playerService; // 0x28
	[CompilerGenerated]
	private DateTime <LastInterstitialShownTime>k__BackingField; // 0x30
	private AdRequestSource _adRequestSource; // 0x38
	private int _paidAdCount; // 0x3C
	private int _loadedAdCount; // 0x40
	private TaskCompletionSource<bool> _interstitialShowTcs; // 0x48
	private MaxSdkBase.AdInfo _lastLoadedAdInfo; // 0x50
	private AdConfigService _adConfigService; // 0x58

	// Properties
	public DateTime LastInterstitialShownTime { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x18585F0 Offset: 0x18585F0 VA: 0x18585F0 Slot: 4
	public DateTime get_LastInterstitialShownTime() { }

	[CompilerGenerated]
	// RVA: 0x18585F8 Offset: 0x18585F8 VA: 0x18585F8
	private void set_LastInterstitialShownTime(DateTime value) { }

	// RVA: 0x1858600 Offset: 0x1858600 VA: 0x1858600
	public void .ctor(CustomUpdater customUpdater, IPlayerService playerService, AdConfigService adConfigService, bool useHoldoutAdUnit) { }

	// RVA: 0x1858708 Offset: 0x1858708 VA: 0x1858708 Slot: 6
	public void Initialize() { }

	// RVA: 0x1858948 Offset: 0x1858948 VA: 0x1858948 Slot: 5
	public void ResetLastInterstitialShownTime() { }

	// RVA: 0x18589A4 Offset: 0x18589A4 VA: 0x18589A4
	private void LoadInterstitial() { }

	[AsyncStateMachine(typeof(MeticaInterstitial.<Show>d__20))]
	// RVA: 0x1858AAC Offset: 0x1858AAC VA: 0x1858AAC Slot: 8
	public Task<bool> Show(AdRequestSource adRequestSource) { }

	// RVA: 0x1858BD4 Offset: 0x1858BD4 VA: 0x1858BD4 Slot: 7
	public bool IsReady() { }

	// RVA: 0x1858CDC Offset: 0x1858CDC VA: 0x1858CDC
	private void OnInterstitialLoadedEvent(MeticaAd meticaAd) { }

	// RVA: 0x1858F44 Offset: 0x1858F44 VA: 0x1858F44
	private void OnInterstitialLoadFailedEvent(MeticaAdError meticaAdError) { }

	// RVA: 0x18590C4 Offset: 0x18590C4 VA: 0x18590C4
	private void InterstitialFailedToDisplayEvent(MeticaAd meticaAd, MeticaAdError meticaAdError) { }

	// RVA: 0x1859220 Offset: 0x1859220 VA: 0x1859220
	private void OnInterstitialHiddenEvent(MeticaAd meticaAd) { }

	// RVA: 0x185937C Offset: 0x185937C VA: 0x185937C
	private void OnInterstitialRevenuePaidEvent(MeticaAd meticaAd) { }

	// RVA: 0x18598E0 Offset: 0x18598E0 VA: 0x18598E0
	private void OnInterstitialClickedEvent(MeticaAd meticaAd) { }

	// RVA: 0x18599D4 Offset: 0x18599D4 VA: 0x18599D4
	private void OnAdDisplayedEvent(MeticaAd meticaAd) { }

	// RVA: 0x1859790 Offset: 0x1859790 VA: 0x1859790
	private void SendAdjustAdImpression(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1859808 Offset: 0x1859808 VA: 0x1859808
	private void TrackAdRevenue(MaxSdkBase.AdInfo adInfo) { }
}

// Namespace: 
[CompilerGenerated]