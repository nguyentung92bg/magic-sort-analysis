public class AdService // TypeDefIndex: 5346
{
	// Fields
	private CustomUpdater _customUpdater; // 0x10
	private const string ApplovinMaxSDKKey = "dTawXlZHlIg8DPrgRq6bEf4nV8J99J1dCpvH3g7MTCR64bw5BTMtOBc6iFBT_ddexfTgi19OlEENH_mqPP67G7";
	private const string MeticaAppId = "magicSort";
	private const string MeticaApiKey = "8e032d15f83240f18d6ccf30beb7403f";
	private IAdAdapter _rewarded; // 0x18
	private IInterstitialAdAdapter _interstitial; // 0x20
	private IPlayerService _playerService; // 0x28
	private AdConfigService _adConfigService; // 0x30
	private InAppPurchaseHistoryService _inAppPurchaseHistoryService; // 0x38
	private TaskCompletionSource<bool> _initializeSdkTaskCompletionSource; // 0x40
	private TaskCompletionSource<bool> _initializeMaxSdkTaskCompletionSource; // 0x48
	[CompilerGenerated]
	private bool <SkipRewarded>k__BackingField; // 0x50
	private Nullable<MeticaUserGroup> _meticaUserGroup; // 0x54
	private bool _isMeticaForcedHoldout; // 0x5C

	// Properties
	public TaskCompletionSource<bool> InitializeSdkTaskCompletionSource { get; }
	public bool IsInitialized { get; }
	public bool IsMaxIsInitialized { get; }
	public bool SkipRewarded { get; set; }
	private bool _useMeticaHoldoutAdUnits { get; }

	// Methods

	// RVA: 0x1B5E43C Offset: 0x1B5E43C VA: 0x1B5E43C
	public TaskCompletionSource<bool> get_InitializeSdkTaskCompletionSource() { }

	// RVA: 0x1B5E444 Offset: 0x1B5E444 VA: 0x1B5E444
	public bool get_IsInitialized() { }

	// RVA: 0x1B5E4A4 Offset: 0x1B5E4A4 VA: 0x1B5E4A4
	public bool get_IsMaxIsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x1B5E534 Offset: 0x1B5E534 VA: 0x1B5E534
	public bool get_SkipRewarded() { }

	[CompilerGenerated]
	// RVA: 0x1B5E53C Offset: 0x1B5E53C VA: 0x1B5E53C
	public void set_SkipRewarded(bool value) { }

	// RVA: 0x1B5E548 Offset: 0x1B5E548 VA: 0x1B5E548
	private bool get__useMeticaHoldoutAdUnits() { }

	// RVA: 0x1B5ACAC Offset: 0x1B5ACAC VA: 0x1B5ACAC
	public void .ctor(CustomUpdater customUpdater, IPlayerService playerService, InAppPurchaseHistoryService inAppPurchaseHistoryService, AdConfigService adConfigService) { }

	// RVA: 0x1B5E5B8 Offset: 0x1B5E5B8 VA: 0x1B5E5B8
	private AdConfigModel GetAdConfigModel() { }

	[AsyncStateMachine(typeof(AdService.<Initialize>d__27))]
	// RVA: 0x1B52AC4 Offset: 0x1B52AC4 VA: 0x1B52AC4
	public void Initialize(bool hasUserConsent) { }

	[AsyncStateMachine(typeof(AdService.<InitializeMaxSdk>d__28))]
	// RVA: 0x1B5E5D4 Offset: 0x1B5E5D4 VA: 0x1B5E5D4
	private Task InitializeMaxSdk(bool hasUserConsent) { }

	[AsyncStateMachine(typeof(AdService.<InitializeMeticaSdk>d__29))]
	// RVA: 0x1B5E6CC Offset: 0x1B5E6CC VA: 0x1B5E6CC
	private Task InitializeMeticaSdk(bool hasUserConsent) { }

	// RVA: 0x1B5E7C4 Offset: 0x1B5E7C4 VA: 0x1B5E7C4
	private static void ApplyMaxDebugSettings() { }

	// RVA: 0x1B5E85C Offset: 0x1B5E85C VA: 0x1B5E85C
	private void InitializeUnityMaxLayerForTracking() { }

	// RVA: 0x1B5EA0C Offset: 0x1B5EA0C VA: 0x1B5EA0C
	private void InitializeAds() { }

	// RVA: 0x1B5EE8C Offset: 0x1B5EE8C VA: 0x1B5EE8C
	public bool IsAnyAdsEnabledFromConfigExceptRewarded() { }

	// RVA: 0x1B5EECC Offset: 0x1B5EECC VA: 0x1B5EECC
	public bool CanShowLaterInterstitial() { }

	// RVA: 0x1B5F158 Offset: 0x1B5F158 VA: 0x1B5F158
	public bool CanShowEarlyInterstitial() { }

	// RVA: 0x1B5F198 Offset: 0x1B5F198 VA: 0x1B5F198
	public bool CanShowInterWithoutFrequency() { }

	// RVA: 0x1B5EF0C Offset: 0x1B5EF0C VA: 0x1B5EF0C
	public bool CanShowInterstitial() { }

	[AsyncStateMachine(typeof(AdService.<ShowInterstitial>d__38))]
	// RVA: 0x1B5F248 Offset: 0x1B5F248 VA: 0x1B5F248
	public Task<bool> ShowInterstitial(AdRequestSource adRequestSource) { }

	// RVA: 0x1B5F370 Offset: 0x1B5F370 VA: 0x1B5F370
	public void ForceShowInterstitial(AdRequestSource adRequestSource) { }

	[AsyncStateMachine(typeof(AdService.<ShowRewarded>d__40))]
	// RVA: 0x1B5F494 Offset: 0x1B5F494 VA: 0x1B5F494
	public Task<bool> ShowRewarded(AdRequestSource adRequestSource) { }

	// RVA: 0x1B5F5BC Offset: 0x1B5F5BC VA: 0x1B5F5BC
	public void ShowBanner() { }

	// RVA: 0x1B5F5C0 Offset: 0x1B5F5C0 VA: 0x1B5F5C0
	public void ForceShowBanner() { }

	// RVA: 0x1B5F5C4 Offset: 0x1B5F5C4 VA: 0x1B5F5C4
	public void HideBanner() { }

	// RVA: 0x1B5F5C8 Offset: 0x1B5F5C8 VA: 0x1B5F5C8
	public bool ShouldShow2XRewarded() { }

	// RVA: 0x1B5F6A0 Offset: 0x1B5F6A0 VA: 0x1B5F6A0
	public int Get2XRewardedCoinAmount(LevelDifficultyType levelDifficultyType) { }

	// RVA: 0x1B5F6F8 Offset: 0x1B5F6F8 VA: 0x1B5F6F8
	public bool ShouldShowLifeRewarded() { }

	// RVA: 0x1B5F73C Offset: 0x1B5F73C VA: 0x1B5F73C
	public bool IsRewardedReady() { }

	// RVA: 0x1B5F7EC Offset: 0x1B5F7EC VA: 0x1B5F7EC
	public bool IsEndlessPortalDisabled() { }

	// RVA: 0x1B5F814 Offset: 0x1B5F814 VA: 0x1B5F814
	public bool IsChooseOneSpecialOfferDisabled() { }

	// RVA: 0x1B5F83C Offset: 0x1B5F83C VA: 0x1B5F83C
	public bool IsOnePlusFreeOfferDisabled() { }

	// RVA: 0x1B5F864 Offset: 0x1B5F864 VA: 0x1B5F864
	public bool IsPlayOnWithRewardedEnabled() { }

	// RVA: 0x1B5F88C Offset: 0x1B5F88C VA: 0x1B5F88C
	public int GetDailyPlayOnRewardedLimit() { }

	// RVA: 0x1B5F8B4 Offset: 0x1B5F8B4 VA: 0x1B5F8B4
	public PlayOnWithRewardedVariantType GetPlayOnWithRewardedBehaviour() { }

	// RVA: 0x1B5F8DC Offset: 0x1B5F8DC VA: 0x1B5F8DC
	public int GetPlayOnWithRewardedFirstLevelToShow() { }

	// RVA: 0x1B5F904 Offset: 0x1B5F904 VA: 0x1B5F904
	public bool IsTreasureDrillDisabled() { }

	// RVA: 0x1B5ECF8 Offset: 0x1B5ECF8 VA: 0x1B5ECF8
	public AdProviderType GetProvider() { }

	[CompilerGenerated]
	// RVA: 0x1B5F92C Offset: 0x1B5F92C VA: 0x1B5F92C
	private void <InitializeMaxSdk>b__28_0(MaxSdkBase.SdkConfiguration sdkConfiguration) { }

	[CompilerGenerated]
	// RVA: 0x1B5F9D0 Offset: 0x1B5F9D0 VA: 0x1B5F9D0
	private void <InitializeMaxSdk>b__28_1() { }

	[CompilerGenerated]
	// RVA: 0x1B5FAB8 Offset: 0x1B5FAB8 VA: 0x1B5FAB8
	private void <InitializeMeticaSdk>b__29_0(MeticaInitResponse response) { }

	[CompilerGenerated]
	// RVA: 0x1B5FBBC Offset: 0x1B5FBBC VA: 0x1B5FBBC
	private void <InitializeUnityMaxLayerForTracking>b__31_0(MaxSdkBase.SdkConfiguration sdkConfiguration) { }
}

// Namespace: Modules.Contexts.Application.Ads.Scripts