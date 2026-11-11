public class CollectionThemeCompletedHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4607
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private CollectionService _service; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3A6C954 Offset: 0x3A6C954 VA: 0x3A6C954 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3A6C95C Offset: 0x3A6C95C VA: 0x3A6C95C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3A6C964 Offset: 0x3A6C964 VA: 0x3A6C964
	private void set_IsShowed(bool value) { }

	// RVA: 0x3A6C970 Offset: 0x3A6C970 VA: 0x3A6C970 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x3A6C9FC Offset: 0x3A6C9FC VA: 0x3A6C9FC Slot: 10
	public void Dispose() { }

	// RVA: 0x3A6CA00 Offset: 0x3A6CA00 VA: 0x3A6CA00 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3A6CA28 Offset: 0x3A6CA28 VA: 0x3A6CA28 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(CollectionThemeCompletedHomeWelcomingCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3A6CA30 Offset: 0x3A6CA30 VA: 0x3A6CA30 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3A6CB1C Offset: 0x3A6CB1C VA: 0x3A6CB1C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI