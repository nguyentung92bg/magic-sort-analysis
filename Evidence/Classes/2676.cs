public class TryShowSkyJumpWithStageStepIncreasedOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2676
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2336AB4 Offset: 0x2336AB4 VA: 0x2336AB4 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2336ABC Offset: 0x2336ABC VA: 0x2336ABC Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2336AC4 Offset: 0x2336AC4 VA: 0x2336AC4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2336ACC Offset: 0x2336ACC VA: 0x2336ACC
	private void set_IsShowed(bool value) { }

	// RVA: 0x2336AD8 Offset: 0x2336AD8 VA: 0x2336AD8 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSkyJumpWithStageStepIncreasedOnLobbyReturnCommand.<ExecuteAsync>d__9))]
	// RVA: 0x2336AE0 Offset: 0x2336AE0 VA: 0x2336AE0 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2336BD0 Offset: 0x2336BD0 VA: 0x2336BD0 Slot: 11
	public void Dispose() { }

	// RVA: 0x2336BD4 Offset: 0x2336BD4 VA: 0x2336BD4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2336C68 Offset: 0x2336C68 VA: 0x2336C68 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2336C70 Offset: 0x2336C70 VA: 0x2336C70
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]