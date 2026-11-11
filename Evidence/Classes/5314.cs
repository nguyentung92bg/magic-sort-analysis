public class InstallAndInitializeApplicationContextServicesCommand : ICommand // TypeDefIndex: 5314
{
	// Fields
	private readonly Container _container; // 0x10
	private readonly ApplicationContextMonoReferences _applicationContextMonoReferences; // 0x18

	// Methods

	// RVA: 0x1B4E1AC Offset: 0x1B4E1AC VA: 0x1B4E1AC
	public void .ctor(Container container, ApplicationContextMonoReferences applicationContextMonoReferences) { }

	[AsyncStateMachine(typeof(InstallAndInitializeApplicationContextServicesCommand.<ExecuteAsync>d__3))]
	// RVA: 0x1B535CC Offset: 0x1B535CC VA: 0x1B535CC Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x1B536B8 Offset: 0x1B536B8 VA: 0x1B536B8 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.Common.Scripts.Commands