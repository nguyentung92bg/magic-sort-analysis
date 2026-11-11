public class MeticaRewarded : IAdAdapter // TypeDefIndex: 5366
{
	// Fields
	public const string RewardedAdUnitIdTrial = "11dffc8715f4ce9e";
	public const string RewardedAdUnitIdHoldout = "bafca2515b7c993b";
	private readonly string _rewardedAdUnitId; // 0x10
	private int _rewardedRetryAttempt; // 0x18
	private CustomUpdater _customUpdater; // 0x20
	private TaskCompletionSource<bool> _showTask; // 0x28
	private int _loadedAdCount; // 0x30
	private AdRequestSource _adRequestSource; // 0x34
	private MaxSdkBase.AdInfo _lastLoadedAdInfo; // 0x38
	private IPlayerService _playerService; // 0x40
	private AdConfigService _adConfigService; // 0x48

	// Methods

	// RVA: 0x1859EC8 Offset: 0x1859EC8 VA: 0x1859EC8
	public void .ctor(CustomUpdater customUpdater, IPlayerService playerService, AdConfigService adConfigService, bool useHoldoutAdUnit) { }

	// RVA: 0x1859F9C Offset: 0x1859F9C VA: 0x1859F9C Slot: 4
	public void Initialize() { }

	// RVA: 0x185A214 Offset: 0x185A214 VA: 0x185A214
	private void LoadRewardedAd() { }

	[AsyncStateMachine(typeof(MeticaRewarded.<Show>d__14))]
	// RVA: 0x185A31C Offset: 0x185A31C VA: 0x185A31C Slot: 6
	public Task<bool> Show(AdRequestSource adRequestSource) { }

	// RVA: 0x185A444 Offset: 0x185A444 VA: 0x185A444 Slot: 5
	public bool IsReady() { }

	// RVA: 0x185A54C Offset: 0x185A54C VA: 0x185A54C
	private void OnRewardedAdLoadedEvent(MeticaAd meticaAd) { }

	// RVA: 0x185A800 Offset: 0x185A800 VA: 0x185A800
	private void OnRewardedAdFailedEvent(MeticaAdError meticaAdError) { }

	// RVA: 0x185A980 Offset: 0x185A980 VA: 0x185A980
	private void OnRewardedAdFailedToDisplayEvent(MeticaAd meticaAd, MeticaAdError meticaAdError) { }

	// RVA: 0x185AAD4 Offset: 0x185AAD4 VA: 0x185AAD4
	private void OnRewardedAdDisplayedEvent(MeticaAd meticaAd) { }

	// RVA: 0x185AAD8 Offset: 0x185AAD8 VA: 0x185AAD8
	private void OnRewardedAdClickedEvent(MeticaAd meticaAd) { }

	// RVA: 0x185ABCC Offset: 0x185ABCC VA: 0x185ABCC
	private void OnRewardedAdDismissedEvent(MeticaAd meticaAd) { }

	// RVA: 0x185AD20 Offset: 0x185AD20 VA: 0x185AD20
	private void OnRewardedAdReceivedRewardEvent(MeticaAd meticaAd) { }

	// RVA: 0x185ADF8 Offset: 0x185ADF8 VA: 0x185ADF8
	private void OnRewardedAdRevenuePaidEvent(MeticaAd meticaAd) { }

	// RVA: 0x185B180 Offset: 0x185B180 VA: 0x185B180
	private void SendAdjustAdImpression(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x185B1F8 Offset: 0x185B1F8 VA: 0x185B1F8
	private void TrackAdRevenue(MaxSdkBase.AdInfo adInfo) { }
}

// Namespace: Modules.Contexts.Application.Ads.Scripts.ConfigService
[Serializable]