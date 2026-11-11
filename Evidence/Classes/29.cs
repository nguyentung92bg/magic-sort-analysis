public class AndroidTikTokBusinessImp : ITikTokBusiness // TypeDefIndex: 29
{
	// Fields
	private static AndroidJavaObject tikTokBusinessSdk; // 0x0

	// Methods

	// RVA: 0x19F2D38 Offset: 0x19F2D38 VA: 0x19F2D38 Slot: 5
	public void InitializeSdk(TikTokConfig config, Action<bool, int, string> completionHandler) { }

	// RVA: 0x19F4668 Offset: 0x19F4668 VA: 0x19F4668 Slot: 4
	public void InitializeSdk(TikTokConfig config) { }

	// RVA: 0x19F3980 Offset: 0x19F3980 VA: 0x19F3980
	private static void initTikTokBusinessSdk() { }

	// RVA: 0x19F4670 Offset: 0x19F4670 VA: 0x19F4670 Slot: 6
	public void FetchDeferredDeeplink(Action<string, int, string> completionHandler) { }

	// RVA: 0x19F4814 Offset: 0x19F4814 VA: 0x19F4814 Slot: 7
	public void Identify(string externalId, string externalUserName, string phoneNumber, string email) { }

	// RVA: 0x19F49B0 Offset: 0x19F49B0 VA: 0x19F49B0 Slot: 8
	public void Logout() { }

	// RVA: 0x19F4A78 Offset: 0x19F4A78 VA: 0x19F4A78 Slot: 9
	public void TrackTTEvent(TikTokBaseEvent baseEvent) { }

	// RVA: 0x19F4DFC Offset: 0x19F4DFC VA: 0x19F4DFC Slot: 10
	public void StartTrack() { }

	// RVA: 0x19F4EC4 Offset: 0x19F4EC4 VA: 0x19F4EC4 Slot: 11
	public void IOS_requestTrackingAuthorization(Action<ulong> completionHandler) { }

	// RVA: 0x19F4EC8 Offset: 0x19F4EC8 VA: 0x19F4EC8 Slot: 12
	public string IOS_GetAdvertisingIdentifier() { }

	// RVA: 0x19F3AEC Offset: 0x19F3AEC VA: 0x19F3AEC
	public static AndroidJavaObject GetGameActivity() { }

	// RVA: 0x19F3B90 Offset: 0x19F3B90 VA: 0x19F3B90
	private static string getAppId(Dictionary<string, string> configParams) { }

	// RVA: 0x19F3DBC Offset: 0x19F3DBC VA: 0x19F3DBC
	private static bool disableLaunchTrack(Dictionary<string, string> configParams) { }

	// RVA: 0x19F3E80 Offset: 0x19F3E80 VA: 0x19F3E80
	private static bool disableAutoTrack(Dictionary<string, string> configParams) { }

	// RVA: 0x19F3F44 Offset: 0x19F3F44 VA: 0x19F3F44
	private static bool disableTrack(Dictionary<string, string> configParams) { }

	// RVA: 0x19F4008 Offset: 0x19F4008 VA: 0x19F4008
	private static bool disableRetentionTrack(Dictionary<string, string> configParams) { }

	// RVA: 0x19F40CC Offset: 0x19F40CC VA: 0x19F40CC
	private static bool openDebugMode(Dictionary<string, string> configParams) { }

	// RVA: 0x19F4190 Offset: 0x19F4190 VA: 0x19F4190
	private static bool OpenLimitedDataUse(Dictionary<string, string> configParams) { }

	// RVA: 0x19F4318 Offset: 0x19F4318 VA: 0x19F4318
	private static bool disableEDPTrack(Dictionary<string, string> configParams) { }

	// RVA: 0x19F43DC Offset: 0x19F43DC VA: 0x19F43DC
	private static bool isLowPerformanceDevice(Dictionary<string, string> configParams) { }

	// RVA: 0x19F4254 Offset: 0x19F4254 VA: 0x19F4254
	private static bool disableAppAdTrack(Dictionary<string, string> configParams) { }

	// RVA: 0x19F44A0 Offset: 0x19F44A0 VA: 0x19F44A0
	private static string getLogLevel(Dictionary<string, string> configParams) { }

	// RVA: 0x19F3CF8 Offset: 0x19F3CF8 VA: 0x19F3CF8
	private static bool disableInstallTrack(Dictionary<string, string> configParams) { }

	// RVA: 0x19F3A38 Offset: 0x19F3A38 VA: 0x19F3A38
	private static string getAcceceToken(Dictionary<string, string> configParams) { }

	// RVA: 0x19F3C44 Offset: 0x19F3C44 VA: 0x19F3C44
	private static string getTTAppId(Dictionary<string, string> configParams) { }

	// RVA: 0x19F4F08 Offset: 0x19F4F08 VA: 0x19F4F08
	public void .ctor() { }
}

// Namespace: SDK