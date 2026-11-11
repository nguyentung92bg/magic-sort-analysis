public class TryShowCompensationHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3439
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private CompensationService _compensationService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x20AAC2C Offset: 0x20AAC2C VA: 0x20AAC2C Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x20AAC34 Offset: 0x20AAC34 VA: 0x20AAC34 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x20AAC3C Offset: 0x20AAC3C VA: 0x20AAC3C
	private void set_IsShowed(bool value) { }

	// RVA: 0x20AAC48 Offset: 0x20AAC48 VA: 0x20AAC48 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x20AACCC Offset: 0x20AACCC VA: 0x20AACCC Slot: 10
	public void Dispose() { }

	[AsyncStateMachine(typeof(TryShowCompensationHomeWelcomingCommand.<ExecuteAsync>d__9))]
	// RVA: 0x20AACD0 Offset: 0x20AACD0 VA: 0x20AACD0 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x20AADBC Offset: 0x20AADBC VA: 0x20AADBC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x20AADC4 Offset: 0x20AADC4 VA: 0x20AADC4 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x20AADCC Offset: 0x20AADCC VA: 0x20AADCC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts
[Serializable]