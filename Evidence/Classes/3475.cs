public class ChooseOneSpecialOfferHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3475
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x20B1F08 Offset: 0x20B1F08 VA: 0x20B1F08 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x20B1F10 Offset: 0x20B1F10 VA: 0x20B1F10 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x20B1F18 Offset: 0x20B1F18 VA: 0x20B1F18
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(ChooseOneSpecialOfferHomeWelcomingCommand.<ExecuteAsync>d__6))]
	// RVA: 0x20B1F24 Offset: 0x20B1F24 VA: 0x20B1F24 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x20B2010 Offset: 0x20B2010 VA: 0x20B2010 Slot: 10
	public void Dispose() { }

	// RVA: 0x20B2014 Offset: 0x20B2014 VA: 0x20B2014 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x20B2018 Offset: 0x20B2018 VA: 0x20B2018 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x20B2020 Offset: 0x20B2020 VA: 0x20B2020 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x20B2028 Offset: 0x20B2028 VA: 0x20B2028
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]