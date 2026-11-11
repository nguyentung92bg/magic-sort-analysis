public interface ITikTokBusiness // TypeDefIndex: 32
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void InitializeSdk(TikTokConfig config);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void InitializeSdk(TikTokConfig config, Action<bool, int, string> completionHandler);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void FetchDeferredDeeplink(Action<string, int, string> completionHandler);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Identify(string externalId, string externalUserName, string phoneNumber, string email);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Logout();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void TrackTTEvent(TikTokBaseEvent baseEvent);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void StartTrack();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void IOS_requestTrackingAuthorization(Action<ulong> completionHandler);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract string IOS_GetAdvertisingIdentifier();
}

// Namespace: SDK