public class TryShowSkyJumpWithStageJoinPopUpOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2672
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private readonly ReturnToHomeSequenceService _returnHomeService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2335EC0 Offset: 0x2335EC0 VA: 0x2335EC0 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2335EC8 Offset: 0x2335EC8 VA: 0x2335EC8 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2335ED0 Offset: 0x2335ED0 VA: 0x2335ED0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2335ED8 Offset: 0x2335ED8 VA: 0x2335ED8
	private void set_IsShowed(bool value) { }

	// RVA: 0x2335EE4 Offset: 0x2335EE4 VA: 0x2335EE4
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x2335F14 Offset: 0x2335F14 VA: 0x2335F14 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSkyJumpWithStageJoinPopUpOnLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x2335F1C Offset: 0x2335F1C VA: 0x2335F1C Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x233600C Offset: 0x233600C VA: 0x233600C Slot: 11
	public void Dispose() { }

	// RVA: 0x2336010 Offset: 0x2336010 VA: 0x2336010 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x23360A4 Offset: 0x23360A4 VA: 0x23360A4 Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: 
[CompilerGenerated]