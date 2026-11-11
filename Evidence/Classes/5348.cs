public class Banner // TypeDefIndex: 5348
{
	// Fields
	private const string BannerAdUnitId = "dafc9a6b98ca5ab9";
	private bool isBannerShowRequested; // 0x10
	private int _paidAdCount; // 0x14
	private int _loadedAdCount; // 0x18

	// Methods

	// RVA: 0x1B61EF4 Offset: 0x1B61EF4 VA: 0x1B61EF4
	public void .ctor() { }

	// RVA: 0x1B61EFC Offset: 0x1B61EFC VA: 0x1B61EFC
	public void Initialize() { }

	// RVA: 0x1B6210C Offset: 0x1B6210C VA: 0x1B6210C
	public void Show() { }

	// RVA: 0x1B6218C Offset: 0x1B6218C VA: 0x1B6218C
	public void Hide() { }

	// RVA: 0x1B62208 Offset: 0x1B62208 VA: 0x1B62208
	private void OnBannerAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B62280 Offset: 0x1B62280 VA: 0x1B62280
	private void OnBannerAdFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo) { }

	// RVA: 0x1B62284 Offset: 0x1B62284 VA: 0x1B62284
	private void OnBannerAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B62288 Offset: 0x1B62288 VA: 0x1B62288
	private void OnBannerAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B623E0 Offset: 0x1B623E0 VA: 0x1B623E0
	private void SendAdjustAdImpression(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x1B62458 Offset: 0x1B62458 VA: 0x1B62458
	private void TrackAdRevenue(MaxSdkBase.AdInfo adInfo) { }
}

// Namespace: Modules.Contexts.Application.Ads.Scripts