public class InstallRuntimeServicesCommand : ICommand // TypeDefIndex: 5315
{
	// Fields
	private Container _container; // 0x10
	private ApplicationContextMonoReferences _applicationContextMonoReferences; // 0x18
	private HttpProxy _httpProxyLogin; // 0x20
	private IPlayerService _playerService; // 0x28

	// Methods

	// RVA: 0x1B4E0F4 Offset: 0x1B4E0F4 VA: 0x1B4E0F4
	public void .ctor(Container container, ApplicationContextMonoReferences applicationContextMonoReferences, HttpProxy httpProxyLogin, IPlayerService playerService) { }

	// RVA: 0x1B59F80 Offset: 0x1B59F80 VA: 0x1B59F80 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x1B5AD28 Offset: 0x1B5AD28 VA: 0x1B5AD28 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Application.Common.Scripts.Commands