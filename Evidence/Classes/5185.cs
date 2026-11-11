public class TryShowPurchaseCompletedPopUpForNotRequestedInAppsCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 5185
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private IAPManager _iapManager; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x138CCB8 Offset: 0x138CCB8 VA: 0x138CCB8 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x138CCC0 Offset: 0x138CCC0 VA: 0x138CCC0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x138CCC8 Offset: 0x138CCC8 VA: 0x138CCC8
	private void set_IsShowed(bool value) { }

	// RVA: 0x138CCD4 Offset: 0x138CCD4 VA: 0x138CCD4 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x138CD9C Offset: 0x138CD9C VA: 0x138CD9C Slot: 10
	public void Dispose() { }

	[AsyncStateMachine(typeof(TryShowPurchaseCompletedPopUpForNotRequestedInAppsCommand.<ExecuteAsync>d__10))]
	// RVA: 0x138CDA0 Offset: 0x138CDA0 VA: 0x138CDA0 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x138CE8C Offset: 0x138CE8C VA: 0x138CE8C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x138CE94 Offset: 0x138CE94 VA: 0x138CE94 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x138CE9C Offset: 0x138CE9C VA: 0x138CE9C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts.VerificationService
[Serializable]