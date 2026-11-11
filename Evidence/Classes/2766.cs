public class TryShowSkyJumpJoinPopUpOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2766
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

	// RVA: 0x2F19FD0 Offset: 0x2F19FD0 VA: 0x2F19FD0 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2F19FD8 Offset: 0x2F19FD8 VA: 0x2F19FD8 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2F19FE0 Offset: 0x2F19FE0 VA: 0x2F19FE0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2F19FE8 Offset: 0x2F19FE8 VA: 0x2F19FE8
	private void set_IsShowed(bool value) { }

	// RVA: 0x2F19FF4 Offset: 0x2F19FF4 VA: 0x2F19FF4
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x2F1A024 Offset: 0x2F1A024 VA: 0x2F1A024 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSkyJumpJoinPopUpOnLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x2F1A02C Offset: 0x2F1A02C VA: 0x2F1A02C Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2F1A11C Offset: 0x2F1A11C VA: 0x2F1A11C Slot: 11
	public void Dispose() { }

	// RVA: 0x2F1A120 Offset: 0x2F1A120 VA: 0x2F1A120 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2F1A1B4 Offset: 0x2F1A1B4 VA: 0x2F1A1B4 Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: 
[CompilerGenerated]