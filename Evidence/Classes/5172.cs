public class IAPManager : IDetailedStoreListener, IStoreListener, IService, IInitializable, IDisposable // TypeDefIndex: 5172
{
	// Fields
	private static IStoreController m_StoreController; // 0x0
	private static IExtensionProvider m_StoreExtensionProvider; // 0x8
	private RequestedIAP _requestedIAP; // 0x10
	private bool unityServicesInitialized; // 0x18
	private Dictionary<string, IAPModel> _IAPModels; // 0x20
	private IAPPurchaseVerificationService _iapPurchaseVerificationService; // 0x28
	private bool _purchaseCompletedForNotRequestedIAP; // 0x30
	private RemoteConfigs _remoteConfigs; // 0x38
	private IAPVerificationService _iapVerificationService; // 0x40

	// Properties
	public bool PurchaseCompletedForNotRequestedIAP { get; }
	internal Dictionary<string, IAPModel> IAPModels { get; }

	// Methods

	// RVA: 0x138845C Offset: 0x138845C VA: 0x138845C
	public bool get_PurchaseCompletedForNotRequestedIAP() { }

	// RVA: 0x1388464 Offset: 0x1388464 VA: 0x1388464
	internal Dictionary<string, IAPModel> get_IAPModels() { }

	// RVA: 0x138846C Offset: 0x138846C VA: 0x138846C
	public void .ctor(IAPPurchaseVerificationService iapPurchaseVerificationService, RemoteConfigs remoteConfigs, IAPVerificationService iapVerificationService) { }

	// RVA: 0x13884CC Offset: 0x13884CC VA: 0x13884CC Slot: 10
	public void Initialize() { }

	[AsyncStateMachine(typeof(IAPManager.<InitializeUnityServices>d__15))]
	// RVA: 0x13884D0 Offset: 0x13884D0 VA: 0x13884D0
	public void InitializeUnityServices(Dictionary<string, IAPConfigModel> iapConfigModels) { }

	// RVA: 0x13885A4 Offset: 0x13885A4 VA: 0x13885A4
	private void InitializePurchasing(Dictionary<string, IAPConfigModel> iapConfigModels) { }

	// RVA: 0x13888D0 Offset: 0x13888D0 VA: 0x13888D0
	private void InitializeDefaultStore(Dictionary<string, IAPConfigModel> iapConfigModels) { }

	// RVA: 0x1388AB8 Offset: 0x1388AB8 VA: 0x1388AB8
	private IAPModel ConvertIAPConfigModelToIAPModel(IAPConfigModel iapConfigModel) { }

	// RVA: 0x1388B44 Offset: 0x1388B44 VA: 0x1388B44 Slot: 11
	public void Dispose() { }

	// RVA: 0x1387F48 Offset: 0x1387F48 VA: 0x1387F48
	public bool IsInitialized() { }

	// RVA: 0x1387FA8 Offset: 0x1387FA8 VA: 0x1387FA8
	public Task<PurchaseResult> TryPurchase(string productId, IAPReason iapReason) { }

	// RVA: 0x1388BEC Offset: 0x1388BEC VA: 0x1388BEC
	private void StartPurchaseProcess(string productId) { }

	// RVA: 0x1388EAC Offset: 0x1388EAC VA: 0x1388EAC Slot: 9
	public void OnInitialized(IStoreController controller, IExtensionProvider extensions) { }

	// RVA: 0x1389408 Offset: 0x1389408 VA: 0x1389408 Slot: 5
	public void OnInitializeFailed(InitializationFailureReason error) { }

	// RVA: 0x138949C Offset: 0x138949C VA: 0x138949C Slot: 6
	public void OnInitializeFailed(InitializationFailureReason error, string text) { }

	// RVA: 0x1389530 Offset: 0x1389530 VA: 0x1389530 Slot: 7
	public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args) { }

	// RVA: 0x1389868 Offset: 0x1389868 VA: 0x1389868
	private void ProcessPurchaseWithoutVerification(PurchaseEventArgs args) { }

	[AsyncStateMachine(typeof(IAPManager.<ProcessPurchaseWithVerificationAsync>d__28))]
	// RVA: 0x1389910 Offset: 0x1389910 VA: 0x1389910
	private void ProcessPurchaseWithVerificationAsync(PurchaseEventArgs args) { }

	// RVA: 0x13899E8 Offset: 0x13899E8 VA: 0x13899E8
	private bool IsRequested(string productId) { }

	// RVA: 0x1389A1C Offset: 0x1389A1C VA: 0x1389A1C
	private void CompleteNotRequestedInApp(string productId, bool verified) { }

	// RVA: 0x1389B18 Offset: 0x1389B18 VA: 0x1389B18 Slot: 8
	public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason) { }

	// RVA: 0x1389BDC Offset: 0x1389BDC VA: 0x1389BDC Slot: 4
	public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureReason) { }

	// RVA: 0x1388E10 Offset: 0x1388E10 VA: 0x1388E10
	private void CompleteRequestedInApp(string productId, PurchaseResult purchaseResult) { }

	// RVA: 0x1389C70 Offset: 0x1389C70 VA: 0x1389C70
	public void RestorePurchases() { }

	// RVA: 0x1389E20 Offset: 0x1389E20 VA: 0x1389E20
	private void TryRestoreTransaction(bool result, string errorMessage) { }

	// RVA: 0x1388AB4 Offset: 0x1388AB4 VA: 0x1388AB4
	private void LogIAP(string message) { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts
[Serializable]