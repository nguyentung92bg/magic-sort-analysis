public class TryShowSkyJumpWithStageResultOnLobbyReturn : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2674
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x23364F8 Offset: 0x23364F8 VA: 0x23364F8 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2336500 Offset: 0x2336500 VA: 0x2336500 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2336508 Offset: 0x2336508 VA: 0x2336508 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2336510 Offset: 0x2336510 VA: 0x2336510
	private void set_IsShowed(bool value) { }

	// RVA: 0x233651C Offset: 0x233651C VA: 0x233651C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSkyJumpWithStageResultOnLobbyReturn.<ExecuteAsync>d__9))]
	// RVA: 0x2336524 Offset: 0x2336524 VA: 0x2336524 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2336614 Offset: 0x2336614 VA: 0x2336614 Slot: 11
	public void Dispose() { }

	// RVA: 0x2336618 Offset: 0x2336618 VA: 0x2336618 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x23366A8 Offset: 0x23366A8 VA: 0x23366A8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x23366B0 Offset: 0x23366B0 VA: 0x23366B0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]