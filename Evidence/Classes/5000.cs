public class CustomIntervalUpdater : IService, IInitializable, IDisposable // TypeDefIndex: 5000
{
	// Fields
	private LoginService _loginService; // 0x10
	private CustomUpdater _customUpdater; // 0x18
	private ServerCommunicationModelService _serverCommunicationModelService; // 0x20
	private bool _isInitialized; // 0x28

	// Methods

	// RVA: 0x3E2D954 Offset: 0x3E2D954 VA: 0x3E2D954
	public void .ctor(LoginService loginService, CustomUpdater customUpdater, ServerCommunicationModelService serverCommunicationModelService) { }

	// RVA: 0x3E2D9B4 Offset: 0x3E2D9B4 VA: 0x3E2D9B4
	public void CommunicateWithBackend() { }

	// RVA: 0x3E2DA28 Offset: 0x3E2DA28 VA: 0x3E2DA28 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2DAD0 Offset: 0x3E2DAD0 VA: 0x3E2DAD0 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts