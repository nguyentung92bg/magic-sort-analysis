public class TryShowDailyRewardHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4511
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private DailyRewardService _dailyRewardService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x38D90CC Offset: 0x38D90CC VA: 0x38D90CC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x38D90D4 Offset: 0x38D90D4 VA: 0x38D90D4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38D90DC Offset: 0x38D90DC VA: 0x38D90DC
	private void set_IsShowed(bool value) { }

	// RVA: 0x38D90E8 Offset: 0x38D90E8 VA: 0x38D90E8 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x38D9174 Offset: 0x38D9174 VA: 0x38D9174 Slot: 10
	public void Dispose() { }

	// RVA: 0x38D9178 Offset: 0x38D9178 VA: 0x38D9178 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x38D919C Offset: 0x38D919C VA: 0x38D919C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowDailyRewardHomeWelcomingCommand.<ExecuteAsync>d__11))]
	// RVA: 0x38D91A4 Offset: 0x38D91A4 VA: 0x38D91A4 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x38D9290 Offset: 0x38D9290 VA: 0x38D9290
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]