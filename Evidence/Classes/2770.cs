public class TryShowSkyJumpStepIncreasedOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2770
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2F1ABC4 Offset: 0x2F1ABC4 VA: 0x2F1ABC4 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2F1ABCC Offset: 0x2F1ABCC VA: 0x2F1ABCC Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2F1ABD4 Offset: 0x2F1ABD4 VA: 0x2F1ABD4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2F1ABDC Offset: 0x2F1ABDC VA: 0x2F1ABDC
	private void set_IsShowed(bool value) { }

	// RVA: 0x2F1ABE8 Offset: 0x2F1ABE8 VA: 0x2F1ABE8 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSkyJumpStepIncreasedOnLobbyReturnCommand.<ExecuteAsync>d__9))]
	// RVA: 0x2F1ABF0 Offset: 0x2F1ABF0 VA: 0x2F1ABF0 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2F1ACE0 Offset: 0x2F1ACE0 VA: 0x2F1ACE0 Slot: 11
	public void Dispose() { }

	// RVA: 0x2F1ACE4 Offset: 0x2F1ACE4 VA: 0x2F1ACE4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2F1AD78 Offset: 0x2F1AD78 VA: 0x2F1AD78 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2F1AD80 Offset: 0x2F1AD80 VA: 0x2F1AD80
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]