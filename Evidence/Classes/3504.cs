public class TryShowMiniGamePopUpOpenCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3504
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MiniGameService _service; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x20B9078 Offset: 0x20B9078 VA: 0x20B9078 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x20B9080 Offset: 0x20B9080 VA: 0x20B9080 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x20B9088 Offset: 0x20B9088 VA: 0x20B9088 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x20B9090 Offset: 0x20B9090 VA: 0x20B9090
	private void set_IsShowed(bool value) { }

	// RVA: 0x20B909C Offset: 0x20B909C VA: 0x20B909C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x20B9128 Offset: 0x20B9128 VA: 0x20B9128 Slot: 11
	public void Dispose() { }

	// RVA: 0x20B912C Offset: 0x20B912C VA: 0x20B912C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x20B9150 Offset: 0x20B9150 VA: 0x20B9150 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowMiniGamePopUpOpenCommand.<ExecuteAsync>d__13))]
	// RVA: 0x20B9158 Offset: 0x20B9158 VA: 0x20B9158 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x20B9244 Offset: 0x20B9244 VA: 0x20B9244
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI