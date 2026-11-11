public class IAPVerificationService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IIntervalUpdate // TypeDefIndex: 5194
{
	// Fields
	private const string AndroidPlatform = "android";
	private const string IOSPlatform = "ios";
	private const int MaxVerificationAttempts = 5;
	private readonly IAPVerificationDataService _dataService; // 0x10
	private readonly IAPVerificationRemoteService _remoteService; // 0x18
	private readonly RemoteConfigs _remoteConfigs; // 0x20
	private readonly AdjustStatSender _adjustStatSender; // 0x28
	private readonly CustomUpdater _customUpdater; // 0x30
	private readonly IAPService _iapService; // 0x38
	private readonly IAPManager _iapManager; // 0x40
	private bool _isProcessing; // 0x48

	// Methods

	// RVA: 0x138E95C Offset: 0x138E95C VA: 0x138E95C
	public void .ctor(IAPVerificationDataService dataService, IAPVerificationRemoteService remoteService, RemoteConfigs remoteConfigs, AdjustStatSender adjustStatSender, CustomUpdater customUpdater, IAPService iapService, IAPManager iapManager) { }

	// RVA: 0x138EA1C Offset: 0x138EA1C VA: 0x138EA1C Slot: 4
	public void Initialize() { }

	// RVA: 0x138EA44 Offset: 0x138EA44 VA: 0x138EA44 Slot: 6
	public void InitializeData() { }

	// RVA: 0x138EADC Offset: 0x138EADC VA: 0x138EADC Slot: 7
	public void IntervalUpdate() { }

	// RVA: 0x138EAE0 Offset: 0x138EAE0 VA: 0x138EAE0 Slot: 5
	public void Dispose() { }

	// RVA: 0x13895C4 Offset: 0x13895C4 VA: 0x13895C4
	public bool IsEnabled() { }

	// RVA: 0x138EB28 Offset: 0x138EB28 VA: 0x138EB28
	private bool IsDryRun() { }

	// RVA: 0x1389838 Offset: 0x1389838 VA: 0x1389838
	public bool ShouldProceedWithoutLegacyVerification() { }

	// RVA: 0x138EB6C Offset: 0x138EB6C VA: 0x138EB6C
	public bool ShouldSkipSendingEventToAdjust(bool fromWebShop) { }

	// RVA: 0x13895E0 Offset: 0x13895E0 VA: 0x13895E0
	public void EnqueuePurchase(PurchaseEventArgs purchaseEventArgs) { }

	// RVA: 0x138EA48 Offset: 0x138EA48 VA: 0x138EA48
	private void TryProcessPendingVerifications() { }

	[AsyncStateMachine(typeof(IAPVerificationService.<ProcessPendingVerificationsAsync>d__22))]
	// RVA: 0x138EBF4 Offset: 0x138EBF4 VA: 0x138EBF4
	private void ProcessPendingVerificationsAsync() { }

	[AsyncStateMachine(typeof(IAPVerificationService.<ProcessPendingVerificationBatchAsync>d__23))]
	// RVA: 0x138ECAC Offset: 0x138ECAC VA: 0x138ECAC
	private Task ProcessPendingVerificationBatchAsync(List<VerificationCacheModel> pendingVerifications) { }

	// RVA: 0x138EDB0 Offset: 0x138EDB0 VA: 0x138EDB0
	private void ApplyVerificationResult(VerificationCacheModel pendingVerification, bool isValid, int verificationStatus) { }

	// RVA: 0x138EFE4 Offset: 0x138EFE4 VA: 0x138EFE4
	private void HandleFailedVerification(VerificationCacheModel pendingVerification, int statusCode) { }

	// RVA: 0x138EF1C Offset: 0x138EF1C VA: 0x138EF1C
	private void SendAdjustPurchaseEvent(VerificationCacheModel verification) { }

	// RVA: 0x138EB04 Offset: 0x138EB04 VA: 0x138EB04
	private IAPVerificationConfigModel GetConfig() { }

	// RVA: 0x138EBB4 Offset: 0x138EBB4 VA: 0x138EBB4
	private static string GetPlatform() { }

	// RVA: 0x138EB9C Offset: 0x138EB9C VA: 0x138EB9C
	private static bool TryGetPurchaseToken(Product product, out string purchaseToken) { }

	// RVA: 0x138F1DC Offset: 0x138F1DC VA: 0x138F1DC
	private static bool TryGetGooglePlayPurchaseToken(string receipt, out string purchaseToken) { }

	// RVA: 0x138EB98 Offset: 0x138EB98 VA: 0x138EB98
	private static void LogVerification(string message) { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts.VerificationService