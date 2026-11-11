public class TryShowMergeMiniGamePopUpOpenCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3666
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MergeMiniGameService _service; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x4108C74 Offset: 0x4108C74 VA: 0x4108C74 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x4108CA0 Offset: 0x4108CA0 VA: 0x4108CA0 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x4108CA8 Offset: 0x4108CA8 VA: 0x4108CA8 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x4108CB0 Offset: 0x4108CB0 VA: 0x4108CB0
	private void set_IsShowed(bool value) { }

	// RVA: 0x4108CBC Offset: 0x4108CBC VA: 0x4108CBC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x4108D48 Offset: 0x4108D48 VA: 0x4108D48 Slot: 11
	public void Dispose() { }

	// RVA: 0x4108D4C Offset: 0x4108D4C VA: 0x4108D4C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x4108D7C Offset: 0x4108D7C VA: 0x4108D7C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowMergeMiniGamePopUpOpenCommand.<ExecuteAsync>d__13))]
	// RVA: 0x4108D84 Offset: 0x4108D84 VA: 0x4108D84 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x4108E70 Offset: 0x4108E70 VA: 0x4108E70
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board