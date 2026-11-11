public class TryShowDailyRewardBulkGiveAnimationHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4507
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x38D86A8 Offset: 0x38D86A8 VA: 0x38D86A8 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x38D86B0 Offset: 0x38D86B0 VA: 0x38D86B0
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x38D86B8 Offset: 0x38D86B8 VA: 0x38D86B8 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38D86C0 Offset: 0x38D86C0 VA: 0x38D86C0
	private void set_IsShowed(bool value) { }

	// RVA: 0x38D86CC Offset: 0x38D86CC VA: 0x38D86CC Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowDailyRewardBulkGiveAnimationHomeWelcomingCommand.<ExecuteAsync>d__9))]
	// RVA: 0x38D86D4 Offset: 0x38D86D4 VA: 0x38D86D4 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x38D87C0 Offset: 0x38D87C0 VA: 0x38D87C0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x38D884C Offset: 0x38D884C VA: 0x38D884C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x38D8854 Offset: 0x38D8854 VA: 0x38D8854 Slot: 10
	public void Dispose() { }

	// RVA: 0x38D8858 Offset: 0x38D8858 VA: 0x38D8858
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]