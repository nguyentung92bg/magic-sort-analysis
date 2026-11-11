public class EndlessPortalHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 3372
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x346ABC0 Offset: 0x346ABC0 VA: 0x346ABC0 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x346ABC8 Offset: 0x346ABC8 VA: 0x346ABC8 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x346ABD0 Offset: 0x346ABD0 VA: 0x346ABD0
	public void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(EndlessPortalHomeWelcomingCommand.<ExecuteAsync>d__6))]
	// RVA: 0x346ABDC Offset: 0x346ABDC VA: 0x346ABDC Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x346ACC8 Offset: 0x346ACC8 VA: 0x346ACC8 Slot: 10
	public void Dispose() { }

	// RVA: 0x346ACCC Offset: 0x346ACCC VA: 0x346ACCC Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x346ACD0 Offset: 0x346ACD0 VA: 0x346ACD0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x346ACD8 Offset: 0x346ACD8 VA: 0x346ACD8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x346ACE0 Offset: 0x346ACE0 VA: 0x346ACE0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]