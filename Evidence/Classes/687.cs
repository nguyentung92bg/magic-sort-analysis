public class DeviceService : IService, IInitializable, IDisposable // TypeDefIndex: 687
{
	// Fields
	private readonly string[] _tallDeviceModels; // 0x10
	[CompilerGenerated]
	private bool <IsTallDevice>k__BackingField; // 0x18

	// Properties
	public bool IsTallDevice { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40E3474 Offset: 0x40E3474 VA: 0x40E3474
	public bool get_IsTallDevice() { }

	[CompilerGenerated]
	// RVA: 0x40E347C Offset: 0x40E347C VA: 0x40E347C
	private void set_IsTallDevice(bool value) { }

	// RVA: 0x40E3488 Offset: 0x40E3488 VA: 0x40E3488 Slot: 4
	public void Initialize() { }

	// RVA: 0x40E352C Offset: 0x40E352C VA: 0x40E352C Slot: 5
	public void Dispose() { }

	// RVA: 0x40E34B4 Offset: 0x40E34B4 VA: 0x40E34B4
	private bool IsTallDeviceModel(string deviceModel) { }

	// RVA: 0x40E3530 Offset: 0x40E3530 VA: 0x40E3530
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts