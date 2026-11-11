public class TryShowMagicBottlePopUpCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 1294
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MagicBottleService _magicBottleService; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F063F4 Offset: 0x1F063F4 VA: 0x1F063F4 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x1F063FC Offset: 0x1F063FC VA: 0x1F063FC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F06404 Offset: 0x1F06404 VA: 0x1F06404
	public void set_IsShowed(bool value) { }

	// RVA: 0x1F06410 Offset: 0x1F06410 VA: 0x1F06410 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowMagicBottlePopUpCommand.<ExecuteAsync>d__9))]
	// RVA: 0x1F064D8 Offset: 0x1F064D8 VA: 0x1F064D8 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x1F065C4 Offset: 0x1F065C4 VA: 0x1F065C4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F065CC Offset: 0x1F065CC VA: 0x1F065CC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F065D4 Offset: 0x1F065D4 VA: 0x1F065D4 Slot: 10
	public void Dispose() { }

	// RVA: 0x1F065D8 Offset: 0x1F065D8 VA: 0x1F065D8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]