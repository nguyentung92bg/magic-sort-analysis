public class WelcomeBackStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3053
{
	// Fields
	private readonly WelcomeBackService _welcomeBackService; // 0x10
	private WelcomeBackState _lastState; // 0x18

	// Methods

	// RVA: 0x316026C Offset: 0x316026C VA: 0x316026C
	public void .ctor(WelcomeBackService welcomeBackService) { }

	// RVA: 0x31602A4 Offset: 0x31602A4 VA: 0x31602A4 Slot: 4
	public void Initialize() { }

	// RVA: 0x31602A8 Offset: 0x31602A8 VA: 0x31602A8 Slot: 5
	public void Dispose() { }

	// RVA: 0x315F394 Offset: 0x315F394 VA: 0x315F394
	public void UpdateState() { }

	// RVA: 0x31602AC Offset: 0x31602AC VA: 0x31602AC
	private WelcomeBackState GetState() { }

	// RVA: 0x315ED24 Offset: 0x315ED24 VA: 0x315ED24
	public bool CanSendRequest() { }

	// RVA: 0x315F37C Offset: 0x315F37C VA: 0x315F37C
	public bool CanClaimReward() { }

	// RVA: 0x316030C Offset: 0x316030C VA: 0x316030C
	public bool ShouldShowPopup() { }
}

// Namespace: 
[CompilerGenerated]