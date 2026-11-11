public class FirebaseInitializer : MonoBehaviour // TypeDefIndex: 5227
{
	// Fields
	private FirebaseApp _app; // 0x18
	private bool _checkedDependencies; // 0x20
	private bool _cancelInitialization; // 0x21
	private bool _setUserProperties; // 0x22
	private const float _cancelInitializationTimeout = 2.5;
	private float _cancelInitializationTimer; // 0x24
	private bool _startedToInitialize; // 0x28
	private bool _isFirebaseInitializedWithFail; // 0x29
	private const int _appCheckMaxRetryCount = 3;
	private int _appCheckRetryCount; // 0x2C
	private bool _isAppCheckPassed; // 0x30

	// Properties
	public FirebaseApp App { get; }
	public bool IsInitializedSucesfully { get; }
	public bool IsInitialized { get; }

	// Methods

	// RVA: 0x1CBCD48 Offset: 0x1CBCD48 VA: 0x1CBCD48
	public FirebaseApp get_App() { }

	// RVA: 0x1CBCD50 Offset: 0x1CBCD50 VA: 0x1CBCD50
	public bool get_IsInitializedSucesfully() { }

	// RVA: 0x1CBCD70 Offset: 0x1CBCD70 VA: 0x1CBCD70
	public bool get_IsInitialized() { }

	// RVA: 0x1CBCDA0 Offset: 0x1CBCDA0 VA: 0x1CBCDA0
	public string GetInitializationState() { }

	// RVA: 0x1CBCE4C Offset: 0x1CBCE4C VA: 0x1CBCE4C
	public void InitializeFirebase() { }

	// RVA: 0x1CBCFE8 Offset: 0x1CBCFE8 VA: 0x1CBCFE8
	public void Update() { }

	// RVA: 0x1CBD050 Offset: 0x1CBD050 VA: 0x1CBD050
	private void TrySetUserProperties() { }

	// RVA: 0x1CBD194 Offset: 0x1CBD194 VA: 0x1CBD194
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1CBD19C Offset: 0x1CBD19C VA: 0x1CBD19C
	private void <InitializeFirebase>b__18_0(Task<DependencyStatus> previousTask) { }
}

// Namespace: 
[CompilerGenerated]