public class TryShowSnitchPopUpCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 2633
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private SnitchService _service; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2471ABC Offset: 0x2471ABC VA: 0x2471ABC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2471AC4 Offset: 0x2471AC4 VA: 0x2471AC4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2471ACC Offset: 0x2471ACC VA: 0x2471ACC
	public void set_IsShowed(bool value) { }

	// RVA: 0x2471AD8 Offset: 0x2471AD8 VA: 0x2471AD8 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowSnitchPopUpCommand.<ExecuteAsync>d__9))]
	// RVA: 0x2471BA0 Offset: 0x2471BA0 VA: 0x2471BA0 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x2471C8C Offset: 0x2471C8C VA: 0x2471C8C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2471CB0 Offset: 0x2471CB0 VA: 0x2471CB0 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2471CB8 Offset: 0x2471CB8 VA: 0x2471CB8 Slot: 10
	public void Dispose() { }

	// RVA: 0x2471CBC Offset: 0x2471CBC VA: 0x2471CBC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]