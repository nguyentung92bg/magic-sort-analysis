public class GiveDailyProgressBarStepRewards : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1357
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private CancellationToken _cancellationToken; // 0x18
	private LevelAndLevelConfigModel _lastWinLevelAndLevelConfigModel; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F14304 Offset: 0x1F14304 VA: 0x1F14304 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F1430C Offset: 0x1F1430C VA: 0x1F1430C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F14314 Offset: 0x1F14314 VA: 0x1F14314 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F1431C Offset: 0x1F1431C VA: 0x1F1431C
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F14328 Offset: 0x1F14328 VA: 0x1F14328 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F14364 Offset: 0x1F14364 VA: 0x1F14364 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F1436C Offset: 0x1F1436C VA: 0x1F1436C Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(GiveDailyProgressBarStepRewards.<ExecuteAsync>d__13))]
	// RVA: 0x1F14374 Offset: 0x1F14374 VA: 0x1F14374 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(GiveDailyProgressBarStepRewards.<GiveDailyLevelProgressbarStepRewards>d__14))]
	// RVA: 0x1F14460 Offset: 0x1F14460 VA: 0x1F14460
	private Task GiveDailyLevelProgressbarStepRewards() { }

	// RVA: 0x1F14550 Offset: 0x1F14550 VA: 0x1F14550 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F14554 Offset: 0x1F14554 VA: 0x1F14554
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]