public class UpdateService : IService, IInitializable, IDisposable // TypeDefIndex: 4948
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private int _softUpdateShownCount; // 0x18

	// Methods

	// RVA: 0x3E25FD8 Offset: 0x3E25FD8 VA: 0x3E25FD8
	public void .ctor(RemoteConfigs remoteConfigs) { }

	// RVA: 0x3E26008 Offset: 0x3E26008 VA: 0x3E26008 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E26010 Offset: 0x3E26010 VA: 0x3E26010 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E25A48 Offset: 0x3E25A48 VA: 0x3E25A48
	public bool CanShowSoftUpdate() { }

	// RVA: 0x3E26014 Offset: 0x3E26014 VA: 0x3E26014
	public bool IsSoftUpdateRequired() { }

	// RVA: 0x3E25F5C Offset: 0x3E25F5C VA: 0x3E25F5C
	public void SoftUpdateShowned() { }

	// RVA: 0x3E257B0 Offset: 0x3E257B0 VA: 0x3E257B0
	public bool IsForceUpdateRequired() { }

	// RVA: 0x3E26040 Offset: 0x3E26040 VA: 0x3E26040
	public string GetAppStoreUrl() { }

	// RVA: 0x3E2606C Offset: 0x3E2606C VA: 0x3E2606C
	public string GetPlayStoreUrl() { }
}

// Namespace: Modules.Contexts.Application.Vibration.Scripts
[Serializable]