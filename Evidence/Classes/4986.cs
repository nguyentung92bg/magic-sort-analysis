public class TikTokStatSender : IService, IInitializable, IDisposable // TypeDefIndex: 4986
{
	// Fields
	private TikTokInitializer _tikTokInitializer; // 0x10

	// Methods

	// RVA: 0x3E2AAA4 Offset: 0x3E2AAA4 VA: 0x3E2AAA4
	public void .ctor(TikTokInitializer tikTokInitializer) { }

	// RVA: 0x3E2AAD4 Offset: 0x3E2AAD4 VA: 0x3E2AAD4 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2AAD8 Offset: 0x3E2AAD8 VA: 0x3E2AAD8
	public void SendAdRevenueEvent(MaxSdkBase.AdInfo adInfo) { }

	// RVA: 0x3E2ADB4 Offset: 0x3E2ADB4 VA: 0x3E2ADB4
	private void TrackEvent(TikTokBaseEvent eventToSend) { }

	// RVA: 0x3E2AE30 Offset: 0x3E2AE30 VA: 0x3E2AE30
	private static string CreateEventId() { }

	// RVA: 0x3E2AE78 Offset: 0x3E2AE78 VA: 0x3E2AE78 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.Sound.Scripts