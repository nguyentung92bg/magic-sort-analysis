public class TryShowForceUpdateCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4945
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private UpdateService _updateService; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3E25248 Offset: 0x3E25248 VA: 0x3E25248 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3E25250 Offset: 0x3E25250 VA: 0x3E25250 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3E25258 Offset: 0x3E25258 VA: 0x3E25258
	private void set_IsShowed(bool value) { }

	// RVA: 0x3E25264 Offset: 0x3E25264 VA: 0x3E25264 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowForceUpdateCommand.<ExecuteAsync>d__9))]
	// RVA: 0x3E2532C Offset: 0x3E2532C VA: 0x3E2532C Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x3E25418 Offset: 0x3E25418 VA: 0x3E25418 Slot: 10
	public void Dispose() { }

	// RVA: 0x3E2541C Offset: 0x3E2541C VA: 0x3E2541C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3E25424 Offset: 0x3E25424 VA: 0x3E25424 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3E2542C Offset: 0x3E2542C VA: 0x3E2542C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]