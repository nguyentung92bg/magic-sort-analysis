public class TryPlayMagicStreakRewardAnimationLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3827
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3CF167C Offset: 0x3CF167C VA: 0x3CF167C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3CF1684 Offset: 0x3CF1684 VA: 0x3CF1684 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3CF168C Offset: 0x3CF168C VA: 0x3CF168C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3CF1694 Offset: 0x3CF1694 VA: 0x3CF1694
	private void set_IsShowed(bool value) { }

	// RVA: 0x3CF16A0 Offset: 0x3CF16A0 VA: 0x3CF16A0 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryPlayMagicStreakRewardAnimationLobbyReturnCommand.<ExecuteAsync>d__9))]
	// RVA: 0x3CF16A8 Offset: 0x3CF16A8 VA: 0x3CF16A8 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3CF1798 Offset: 0x3CF1798 VA: 0x3CF1798 Slot: 11
	public void Dispose() { }

	// RVA: 0x3CF179C Offset: 0x3CF179C VA: 0x3CF179C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3CF1824 Offset: 0x3CF1824 VA: 0x3CF1824 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3CF182C Offset: 0x3CF182C VA: 0x3CF182C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]