public class StorePurchaseClickCommand : ICommand // TypeDefIndex: 2564
{
	// Fields
	private string _productId; // 0x10
	private IAPOrigin _iapOrigin; // 0x18
	private IAPContext _iapContext; // 0x1C

	// Methods

	// RVA: 0x24641A8 Offset: 0x24641A8 VA: 0x24641A8
	public void Initialize(IAPOrigin iapOrigin, string productId, IAPContext iapContext) { }

	[AsyncStateMachine(typeof(StorePurchaseClickCommand.<ExecuteAsync>d__4))]
	// RVA: 0x24641DC Offset: 0x24641DC VA: 0x24641DC Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x24642C8 Offset: 0x24642C8 VA: 0x24642C8 Slot: 5
	public void Dispose() { }

	// RVA: 0x24642CC Offset: 0x24642CC VA: 0x24642CC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts