public class Rewarded : IAdAdapter // TypeDefIndex: 5358
{
	// Fields
	private const string RewardedAdUnitId = "bafca2515b7c993b";
	private int _rewardedRetryAttempt; // 0x10
	private CustomUpdater _customUpdater; // 0x18
	private TaskCompletionSource<bool> _showTask; // 0x20
	private int _loadedAdCount; // 0x28
	private AdRequestSource _adRequestSource; // 0x2C
	private MaxSdkBase.AdInfo _lastLoadedAdInfo; // 0x30
	private IPlayerService _playerService; // 0x38
	private AdConfigService _adConfigService; // 0x40
	[CompilerGenerated]
	private DateTime <LastInterstitialShownTime>k__BackingField; // 0x48

	// Properties
	public DateTime LastInterstitialShownTime { get; set; }

	// Methods

	// RVA: 0x1B5EDD8 Offset: 0x1B5EDD8 VA: 0x1B5EDD8
	public void .ctor(CustomUpdater customUpdater, IPlayerService playerService, AdConfigService adConfigService) { }

	[CompilerGenerated]
	// RVA: 0x1B63C60 Offset: 0x1B63C60 VA: 0x1B63C60
	public DateTime get_LastInterstitialShownTime() { }

	[CompilerGenerated]
	// RVA: 0x1B63C68 Offset: 0x1B63C68 VA: 0x1B63C68
	private void set_LastInterstitialShownTime(DateTime value) { }

	// RVA: 0x1B63C70 Offset: 0x1B63C70 VA: 0x1B63C70 Slot: 4
	public void Initialize() { }

	// RVA: 0x1B6401C Offset: 0x1B6401C VA: 0x1B6401C
	private void OnRewardedAdReviewCreativeIdGeneratedEvent(string adUnitIdentifier, string adReviewCreativeId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B63F4C Offset: 0x1B63F4C VA: 0x1B63F4C
	private void LoadRewardedAd() { }

	[AsyncStateMachine(typeof(Rewarded.<Show>d__17))]
	// RVA: 0x1B6412C Offset: 0x1B6412C VA: 0x1B6412C Slot: 6
	public Task<bool> Show(AdRequestSource adRequestSource) { }

	// RVA: 0x1B64254 Offset: 0x1B64254 VA: 0x1B64254 Slot: 5
	public bool IsReady() { }

	// RVA: 0x1B642BC Offset: 0x1B642BC VA: 0x1B642BC
	private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B64564 Offset: 0x1B64564 VA: 0x1B64564
	private void OnRewardedAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }

	// RVA: 0x1B646E4 Offset: 0x1B646E4 VA: 0x1B646E4
	private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B64824 Offset: 0x1B64824 VA: 0x1B64824
	private void OnRewardedAdDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B64828 Offset: 0x1B64828 VA: 0x1B64828
	private void OnRewardedAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B6490C Offset: 0x1B6490C VA: 0x1B6490C
	private void OnRewardedAdDismissedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B64A4C Offset: 0x1B64A4C VA: 0x1B64A4C
	private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdkBase.Reward reward, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B64B24 Offset: 0x1B64B24 VA: 0x1B64B24
	private void OnRewardedAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B64D78 Offset: 0x1B64D78 VA: 0x1B64D78
	private void SendAdjustAdImpression(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B64DF0 Offset: 0x1B64DF0 VA: 0x1B64DF0
	private void TrackAdRevenue(MaxSdkBase.AdInfo adInfo) { }
}

// Namespace: Modules.Contexts.Application.Ads.Scripts.UI