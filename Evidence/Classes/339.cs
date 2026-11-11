public class GoogleUmpService : MonoBehaviour // TypeDefIndex: 339
{
	// Fields
	private ConsentStatus _consentStatus; // 0x18
	private bool _failedInitialization; // 0x1C
	private bool _consentGathered; // 0x1D
	private bool _canRequestAlreadyAfterUpdate; // 0x1E
	private bool _cancelInitialization; // 0x1F
	private float _cancelInitializationTimer; // 0x20
	private const float _cancelInitializationTimeout = 2.5;
	private bool _startedToInitialize; // 0x24
	private string _errorMessage; // 0x28
	private AdService _adService; // 0x30
	private IdfaService _idfaService; // 0x38

	// Properties
	public bool IsInitialized { get; }
	public bool CanRequestAds { get; }
	public ConsentStatus ConsentStatus { get; }

	// Methods

	// RVA: 0x3DE13DC Offset: 0x3DE13DC VA: 0x3DE13DC
	public bool get_IsInitialized() { }

	// RVA: 0x3DE140C Offset: 0x3DE140C VA: 0x3DE140C
	public bool get_CanRequestAds() { }

	// RVA: 0x3DE1414 Offset: 0x3DE1414 VA: 0x3DE1414
	public ConsentStatus get_ConsentStatus() { }

	[AsyncStateMachine(typeof(GoogleUmpService.<InitializeGoogleMobileAdsConsent>d__17))]
	// RVA: 0x3DE141C Offset: 0x3DE141C VA: 0x3DE141C
	public Task InitializeGoogleMobileAdsConsent(AdService adService, IdfaService idfaService) { }

	// RVA: 0x3DE1538 Offset: 0x3DE1538 VA: 0x3DE1538
	public string GetConsentInfoAsStr() { }

	// RVA: 0x3DE18F4 Offset: 0x3DE18F4 VA: 0x3DE18F4
	public void Update() { }

	// RVA: 0x3DE19B0 Offset: 0x3DE19B0 VA: 0x3DE19B0
	private void LoadAndShowConsentForm() { }

	// RVA: 0x3DE1A30 Offset: 0x3DE1A30 VA: 0x3DE1A30
	private void GatherConsent() { }

	// RVA: 0x3DE1B7C Offset: 0x3DE1B7C VA: 0x3DE1B7C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3DE1BDC Offset: 0x3DE1BDC VA: 0x3DE1BDC
	private void <LoadAndShowConsentForm>b__20_0(FormError showError) { }

	[CompilerGenerated]
	// RVA: 0x3DE1CE0 Offset: 0x3DE1CE0 VA: 0x3DE1CE0
	private void <GatherConsent>b__21_0(FormError updateError) { }
}

// Namespace: Modules.Infrastructure.Utils