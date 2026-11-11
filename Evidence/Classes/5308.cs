public class AskIdfaAndInitAdServiceCommand // TypeDefIndex: 5308
{
	// Fields
	private IdfaService _idfaService; // 0x10
	private AdService _adService; // 0x18
	private bool _hasUserConsent; // 0x20

	// Methods

	// RVA: 0x1B52740 Offset: 0x1B52740 VA: 0x1B52740
	public void .ctor(IdfaService idfaService, AdService adService, bool hasUserConsent) { }

	[AsyncStateMachine(typeof(AskIdfaAndInitAdServiceCommand.<ExecuteAsync>d__4))]
	// RVA: 0x1B52798 Offset: 0x1B52798 VA: 0x1B52798
	public Task ExecuteAsync() { }
}

// Namespace: Modules.Contexts.Application.Common.Scripts.Commands