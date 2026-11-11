public class TryShowWelcomeBackHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3055
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private WelcomeBackService _welcomeBackService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3160324 Offset: 0x3160324 VA: 0x3160324 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x316032C Offset: 0x316032C VA: 0x316032C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3160334 Offset: 0x3160334 VA: 0x3160334
	private void set_IsShowed(bool value) { }

	// RVA: 0x3160340 Offset: 0x3160340 VA: 0x3160340 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x31603C4 Offset: 0x31603C4 VA: 0x31603C4 Slot: 10
	public void Dispose() { }

	[AsyncStateMachine(typeof(TryShowWelcomeBackHomeWelcomingCommand.<ExecuteAsync>d__9))]
	// RVA: 0x31603C8 Offset: 0x31603C8 VA: 0x31603C8 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x31604B4 Offset: 0x31604B4 VA: 0x31604B4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x31604BC Offset: 0x31604BC VA: 0x31604BC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x31604C4 Offset: 0x31604C4 VA: 0x31604C4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]