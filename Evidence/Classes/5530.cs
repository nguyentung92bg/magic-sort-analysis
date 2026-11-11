public class GrandSDK : MonoBehaviour // TypeDefIndex: 5530
{
	// Fields
	private static GrandSDK _instance; // 0x0
	private static bool _isInitialized; // 0x8
	private static bool _callbacksRegistered; // 0x9
	[Nullable(2)]
	private static IHttpTransport _sharedHttpTransport; // 0x10
	private static readonly Regex ScopedManifestGamePattern; // 0x18
	private const string ManifestFileName = "grandbase.manifest.json";
	private const string FallbackGameId = "default";
	[SerializeField]
	private bool _wasInitialized; // 0x18
	[SerializeField]
	private string _gameId; // 0x20
	[SerializeField]
	private string _namespaceSuffix; // 0x28

	// Properties
	public static bool IsInitialized { get; }

	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x13A5BBC Offset: 0x13A5BBC VA: 0x13A5BBC
	private static void EnsureAnalyticsSerializerBeforeFirstSceneAwake() { }

	// RVA: 0x13A6A84 Offset: 0x13A6A84 VA: 0x13A6A84
	private static GrandSDK FindGrandSDKInHierarchy() { }

	[RuntimeInitializeOnLoadMethod(0)]
	// RVA: 0x13A6AEC Offset: 0x13A6AEC VA: 0x13A6AEC
	private static void AutoInitialize() { }

	// RVA: 0x13A7FFC Offset: 0x13A7FFC VA: 0x13A7FFC
	private static void TryRecoverFromStaticResetOnResume() { }

	// RVA: 0x13A8168 Offset: 0x13A8168 VA: 0x13A8168
	public static bool VerifyInitialized() { }

	// RVA: 0x13A833C Offset: 0x13A833C VA: 0x13A833C
	public static bool get_IsInitialized() { }

	// RVA: 0x13A83F4 Offset: 0x13A83F4 VA: 0x13A83F4
	public static bool ApplySettings(string json) { }

	// RVA: 0x13A844C Offset: 0x13A844C VA: 0x13A844C
	public static bool ApplySettings(GrandSdkConfigModel config) { }

	// RVA: 0x13A84A4 Offset: 0x13A84A4 VA: 0x13A84A4
	public static void ClearSettings() { }

	// RVA: 0x13A84F4 Offset: 0x13A84F4 VA: 0x13A84F4
	private void Awake() { }

	// RVA: 0x13A90E0 Offset: 0x13A90E0 VA: 0x13A90E0
	private void Start() { }

	// RVA: 0x13A6D94 Offset: 0x13A6D94 VA: 0x13A6D94
	private void InitializeSDK() { }

	// RVA: 0x13A9198 Offset: 0x13A9198 VA: 0x13A9198
	private void OnApplicationPause(bool pauseStatus) { }

	[NullableContext(2)]
	// RVA: 0x13A8B88 Offset: 0x13A8B88 VA: 0x13A8B88
	private IEventSerializer CreateEventSerializer() { }

	// RVA: 0x13A6380 Offset: 0x13A6380 VA: 0x13A6380
	private static IEventSerializer CreateEventSerializerForGame(string gameId, string namespaceSuffix, out string updatedNamespaceSuffixFromTypeName) { }

	// RVA: 0x13A8C28 Offset: 0x13A8C28 VA: 0x13A8C28
	private void ApplySerializerMetadata(IEventSerializer serializer) { }

	// RVA: 0x13A8850 Offset: 0x13A8850 VA: 0x13A8850
	private void ResolveGameMetadataFromManifest() { }

	// RVA: 0x13A5CF0 Offset: 0x13A5CF0 VA: 0x13A5CF0
	private static bool TryReadScopedManifestGameId(out string gameId) { }

	// RVA: 0x13A9E90 Offset: 0x13A9E90 VA: 0x13A9E90
	private static bool TryExtractGameIdFromManifest(string json, out string gameId) { }

	[NullableContext(2)]
	// RVA: 0x13A93A4 Offset: 0x13A93A4 VA: 0x13A93A4
	private static Type ResolveStableSerializerType() { }

	// RVA: 0x13A9C9C Offset: 0x13A9C9C VA: 0x13A9C9C
	private static Type FindSerializerBySuffix(List<Type> available, string suffix) { }

	// RVA: 0x13A9824 Offset: 0x13A9824 VA: 0x13A9824
	private static List<Type> GetAvailableSerializerTypes() { }

	// RVA: 0x13A61B8 Offset: 0x13A61B8 VA: 0x13A61B8
	private static string ToPascalFromGameId(string gameId) { }

	// RVA: 0x13A9FE0 Offset: 0x13A9FE0 VA: 0x13A9FE0
	private void OnApplicationQuit() { }

	// RVA: 0x13AA15C Offset: 0x13AA15C VA: 0x13AA15C
	private void OnDestroy() { }

	// RVA: 0x13AA284 Offset: 0x13AA284 VA: 0x13AA284
	public void .ctor() { }

	// RVA: 0x13AA2EC Offset: 0x13AA2EC VA: 0x13AA2EC
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]