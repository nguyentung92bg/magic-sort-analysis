public class AnalyticsContextProvider : IAnalyticsContextProvider, IRemoteConfigProvider // TypeDefIndex: 5525
{
	// Fields
	private static int _mainThreadId; // 0x0
	private static bool _primed; // 0x4
	private static string _appIdentifier; // 0x8
	private static string _appVersion; // 0x10
	private static string _buildGuid; // 0x18
	private static string _deviceModel; // 0x20
	private static string _operatingSystemVersion; // 0x28
	private static string _deviceLanguage; // 0x30
	private static string _platform; // 0x38
	private static string _networkType; // 0x40
	private static string _userId; // 0x48
	private static IMessage _inventory; // 0x50
	private static AnalyticsContextProvider.AttributionSnapshot _attributionSnapshot; // 0x58
	private static Func<IMessage> _inventorySource; // 0x60
	public static bool ExperimentAttributionEnabled; // 0x68
	public static bool ExperimentAttributionDryRun; // 0x69

	// Properties
	private static bool OnMainThread { get; }

	// Methods

	// RVA: 0x13A433C Offset: 0x13A433C VA: 0x13A433C
	public void .ctor() { }

	// RVA: 0x13A43C8 Offset: 0x13A43C8 VA: 0x13A43C8
	public static void Prime() { }

	// RVA: 0x13A4770 Offset: 0x13A4770 VA: 0x13A4770
	private static bool get_OnMainThread() { }

	// RVA: 0x13A481C Offset: 0x13A481C VA: 0x13A481C Slot: 12
	public UserProperties BuildUserProperties() { }

	// RVA: 0x13A4B50 Offset: 0x13A4B50 VA: 0x13A4B50 Slot: 13
	public DeviceProperties BuildDeviceProperties() { }

	// RVA: 0x13A4C68 Offset: 0x13A4C68 VA: 0x13A4C68
	private static string GetDeviceBrand(string model) { }

	// RVA: 0x13A4EF0 Offset: 0x13A4EF0 VA: 0x13A4EF0 Slot: 14
	public AppContextProperties BuildAppContextProperties() { }

	// RVA: 0x13A500C Offset: 0x13A500C VA: 0x13A500C Slot: 7
	public SessionProperties BuildSessionProperties() { }

	// RVA: 0x13A5254 Offset: 0x13A5254 VA: 0x13A5254
	public static void SetAttributionSnapshot(IEnumerable<ExperimentAssignment> assignments, string configHash) { }

	// RVA: 0x13A5384 Offset: 0x13A5384 VA: 0x13A5384
	public static void SetInventorySource(Func<IMessage> source) { }

	// RVA: 0x13A53E4 Offset: 0x13A53E4 VA: 0x13A53E4 Slot: 8
	public IMessage BuildInventory() { }

	// RVA: 0x13A54C8 Offset: 0x13A54C8 VA: 0x13A54C8 Slot: 9
	public IEnumerable<ExperimentProperties> GetActiveExperiments() { }

	// RVA: 0x13A4E48 Offset: 0x13A4E48 VA: 0x13A4E48
	private string GetNetworkTypeInternal() { }

	// RVA: 0x13A4680 Offset: 0x13A4680 VA: 0x13A4680
	private static string ReadNetworkType() { }

	// RVA: 0x13A5A1C Offset: 0x13A5A1C VA: 0x13A5A1C Slot: 10
	public string GetPlatform() { }

	// RVA: 0x13A4B10 Offset: 0x13A4B10 VA: 0x13A4B10
	private string GetAdvertisingIdInternal() { }

	// RVA: 0x13A4A68 Offset: 0x13A4A68 VA: 0x13A4A68 Slot: 11
	public string GetUserId() { }

	// RVA: 0x13A46FC Offset: 0x13A46FC VA: 0x13A46FC
	private static string ReadUserId() { }

	// RVA: 0x13A5A74 Offset: 0x13A5A74 VA: 0x13A5A74
	private static void .cctor() { }
}

// Namespace: 