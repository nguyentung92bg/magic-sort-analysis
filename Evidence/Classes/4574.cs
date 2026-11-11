public class CollectionCardReceivedHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4574
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private CollectionService _service; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x37761E8 Offset: 0x37761E8 VA: 0x37761E8 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x37761F0 Offset: 0x37761F0 VA: 0x37761F0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x37761F8 Offset: 0x37761F8 VA: 0x37761F8
	private void set_IsShowed(bool value) { }

	// RVA: 0x3776204 Offset: 0x3776204 VA: 0x3776204 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x3776290 Offset: 0x3776290 VA: 0x3776290 Slot: 10
	public void Dispose() { }

	// RVA: 0x3776294 Offset: 0x3776294 VA: 0x3776294 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x37762B8 Offset: 0x37762B8 VA: 0x37762B8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(CollectionCardReceivedHomeWelcomingCommand.<ExecuteAsync>d__11))]
	// RVA: 0x37762C0 Offset: 0x37762C0 VA: 0x37762C0 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x37763AC Offset: 0x37763AC VA: 0x37763AC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI