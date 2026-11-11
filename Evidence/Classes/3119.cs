public class TryShowWebPurchaseCompletedCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3119
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private WebShopService _webShopService; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x316E5E8 Offset: 0x316E5E8 VA: 0x316E5E8 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x316E644 Offset: 0x316E644 VA: 0x316E644 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x316E64C Offset: 0x316E64C VA: 0x316E64C
	private void set_IsShowed(bool value) { }

	// RVA: 0x316E658 Offset: 0x316E658 VA: 0x316E658 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x316E728 Offset: 0x316E728 VA: 0x316E728 Slot: 10
	public void Dispose() { }

	[AsyncStateMachine(typeof(TryShowWebPurchaseCompletedCommand.<ExecuteAsync>d__10))]
	// RVA: 0x316E72C Offset: 0x316E72C VA: 0x316E72C Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x316E81C Offset: 0x316E81C VA: 0x316E81C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x316E834 Offset: 0x316E834 VA: 0x316E834 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x316E83C Offset: 0x316E83C VA: 0x316E83C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]