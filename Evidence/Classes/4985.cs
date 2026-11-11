public class TikTokInitializer : MonoBehaviour // TypeDefIndex: 4985
{
	// Fields
	private string IOSAppId; // 0x18
	private string IOSTikTokAppId; // 0x20
	private string AndroidAppId; // 0x28
	private string AndroidTikTokAppId; // 0x30
	private bool _isInitialized; // 0x38

	// Properties
	public bool IsInitialized { get; }

	// Methods

	// RVA: 0x3E2A714 Offset: 0x3E2A714 VA: 0x3E2A714
	public bool get_IsInitialized() { }

	// RVA: 0x3E2A71C Offset: 0x3E2A71C VA: 0x3E2A71C
	public void InitializeTikTok() { }

	// RVA: 0x3E2A864 Offset: 0x3E2A864 VA: 0x3E2A864
	private void OnTikTokInitialized(bool success, int code, string message) { }

	// RVA: 0x3E2A964 Offset: 0x3E2A964 VA: 0x3E2A964
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.TrackingSystems.Scripts