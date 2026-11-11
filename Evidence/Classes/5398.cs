public class TryShowAccountDeletionInProgressCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 5398
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private AccountDeleteService _deleteService; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool IsShowed { get; set; }
	public bool ShouldShowForce { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1861ADC Offset: 0x1861ADC VA: 0x1861ADC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1861AE4 Offset: 0x1861AE4 VA: 0x1861AE4
	private void set_IsShowed(bool value) { }

	// RVA: 0x1861AF0 Offset: 0x1861AF0 VA: 0x1861AF0 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1861B08 Offset: 0x1861B08 VA: 0x1861B08 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x1861BD4 Offset: 0x1861BD4 VA: 0x1861BD4 Slot: 10
	public void Dispose() { }

	// RVA: 0x1861BD8 Offset: 0x1861BD8 VA: 0x1861BD8 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1861BFC Offset: 0x1861BFC VA: 0x1861BFC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowAccountDeletionInProgressCommand.<ExecuteAsync>d__12))]
	// RVA: 0x1861C04 Offset: 0x1861C04 VA: 0x1861C04 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x1861CF0 Offset: 0x1861CF0 VA: 0x1861CF0
	public void .ctor() { }
}

// Namespace: I2.Loc