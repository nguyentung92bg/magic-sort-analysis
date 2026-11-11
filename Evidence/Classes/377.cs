public class IdfaService // TypeDefIndex: 377
{
	// Fields
	private string _cachedIdfa; // 0x10
	private bool _isIdfaCached; // 0x18
	private bool _requestedForGoogleAdId; // 0x19
	private TaskCompletionSource<bool> _responseReceived; // 0x20

	// Methods

	// RVA: 0x3DE9D6C Offset: 0x3DE9D6C VA: 0x3DE9D6C
	public string GetIdfa() { }

	// RVA: 0x3DE9DF0 Offset: 0x3DE9DF0 VA: 0x3DE9DF0
	public bool IsIdfaCached() { }

	[AsyncStateMachine(typeof(IdfaService.<RequestATTAndCacheIdfa>d__6))]
	// RVA: 0x3DE9DF8 Offset: 0x3DE9DF8 VA: 0x3DE9DF8
	public Task RequestATTAndCacheIdfa() { }

	// RVA: 0x3DE9EE4 Offset: 0x3DE9EE4 VA: 0x3DE9EE4
	private void OnGoogleAdIdReceived(string googleAdId) { }

	// RVA: 0x3DE9F08 Offset: 0x3DE9F08 VA: 0x3DE9F08
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Utils.DeviceUtils.Scripts