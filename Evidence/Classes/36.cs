public static class TikTokBusinessSDK // TypeDefIndex: 36
{
	// Fields
	public static string TikTokUnitySDKVersion; // 0x0

	// Methods

	// RVA: 0x19F7174 Offset: 0x19F7174 VA: 0x19F7174
	public static void InitializeSdk(TikTokConfig config) { }

	// RVA: 0x19F7268 Offset: 0x19F7268 VA: 0x19F7268
	public static void InitializeSdk(TikTokConfig config, Action<bool, int, string> completionHandler) { }

	// RVA: 0x19F7400 Offset: 0x19F7400 VA: 0x19F7400
	public static void FetchDeferredDeeplink(Action<string, int, string> completionHandler) { }

	// RVA: 0x19F74F8 Offset: 0x19F74F8 VA: 0x19F74F8
	public static void Identify(string externalId, string externalUserName, string phoneNumber, string email) { }

	// RVA: 0x19F78CC Offset: 0x19F78CC VA: 0x19F78CC
	public static void Logout() { }

	// RVA: 0x19F0F4C Offset: 0x19F0F4C VA: 0x19F0F4C
	public static void TrackTTEvent(TikTokBaseEvent baseEvent) { }

	// RVA: 0x19F79B4 Offset: 0x19F79B4 VA: 0x19F79B4
	public static void StartTrack() { }

	// RVA: 0x19F7A9C Offset: 0x19F7A9C VA: 0x19F7A9C
	public static void IOS_requestTrackingAuthorization(Action<ulong> completionHandler) { }

	// RVA: 0x19F7B8C Offset: 0x19F7B8C VA: 0x19F7B8C
	public static string IOS_GetAdvertisingIdentifier() { }

	// RVA: 0x19F7C74 Offset: 0x19F7C74 VA: 0x19F7C74
	private static void .cctor() { }
}

// Namespace: SDK