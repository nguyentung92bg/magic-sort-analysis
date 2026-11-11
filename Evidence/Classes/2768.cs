public class TryShowSkyJumpResultOnLobbyReturn : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2768
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2F1A608 Offset: 0x2F1A608 VA: 0x2F1A608 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2F1A610 Offset: 0x2F1A610 VA: 0x2F1A610 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2F1A618 Offset: 0x2F1A618 VA: 0x2F1A618 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2F1A620 Offset: 0x2F1A620 VA: 0x2F1A620
	private void set_IsShowed(bool value) { }

	// RVA: 0x2F1A62C Offset: 0x2F1A62C VA: 0x2F1A62C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSkyJumpResultOnLobbyReturn.<ExecuteAsync>d__9))]
	// RVA: 0x2F1A634 Offset: 0x2F1A634 VA: 0x2F1A634 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2F1A724 Offset: 0x2F1A724 VA: 0x2F1A724 Slot: 11
	public void Dispose() { }

	// RVA: 0x2F1A728 Offset: 0x2F1A728 VA: 0x2F1A728 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2F1A7B8 Offset: 0x2F1A7B8 VA: 0x2F1A7B8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2F1A7C0 Offset: 0x2F1A7C0 VA: 0x2F1A7C0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]