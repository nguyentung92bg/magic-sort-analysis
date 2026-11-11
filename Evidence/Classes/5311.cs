public class InitializeNotificationsCommand : ICommand // TypeDefIndex: 5311
{
	// Fields
	private Container _container; // 0x10
	private ApplicationContextMonoReferences _applicationContextMonoReferences; // 0x18

	// Methods

	// RVA: 0x1B530F4 Offset: 0x1B530F4 VA: 0x1B530F4
	public void .ctor(Container container, ApplicationContextMonoReferences applicationContextMonoReferences) { }

	[AsyncStateMachine(typeof(InitializeNotificationsCommand.<ExecuteAsync>d__3))]
	// RVA: 0x1B53138 Offset: 0x1B53138 VA: 0x1B53138 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x1B53224 Offset: 0x1B53224 VA: 0x1B53224 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.Common.Scripts.Commands