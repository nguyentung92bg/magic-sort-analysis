public class SpecialOfferHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3327
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3461CC4 Offset: 0x3461CC4 VA: 0x3461CC4 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3461CCC Offset: 0x3461CCC VA: 0x3461CCC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3461CD4 Offset: 0x3461CD4 VA: 0x3461CD4
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(SpecialOfferHomeWelcomingCommand.<ExecuteAsync>d__6))]
	// RVA: 0x3461CE0 Offset: 0x3461CE0 VA: 0x3461CE0 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3461DCC Offset: 0x3461DCC VA: 0x3461DCC Slot: 10
	public void Dispose() { }

	// RVA: 0x3461DD0 Offset: 0x3461DD0 VA: 0x3461DD0 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x3461DD4 Offset: 0x3461DD4 VA: 0x3461DD4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3461DDC Offset: 0x3461DDC VA: 0x3461DDC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3461DE4 Offset: 0x3461DE4 VA: 0x3461DE4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]