public class TryShowMagicPassFinishedCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3964
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MagicPassService _service; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x38ED91C Offset: 0x38ED91C VA: 0x38ED91C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x38ED924 Offset: 0x38ED924 VA: 0x38ED924 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x38ED92C Offset: 0x38ED92C VA: 0x38ED92C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38ED934 Offset: 0x38ED934 VA: 0x38ED934
	private void set_IsShowed(bool value) { }

	// RVA: 0x38ED940 Offset: 0x38ED940 VA: 0x38ED940 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x38ED9CC Offset: 0x38ED9CC VA: 0x38ED9CC Slot: 11
	public void Dispose() { }

	// RVA: 0x38ED9D0 Offset: 0x38ED9D0 VA: 0x38ED9D0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x38ED9F4 Offset: 0x38ED9F4 VA: 0x38ED9F4 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowMagicPassFinishedCommand.<ExecuteAsync>d__13))]
	// RVA: 0x38ED9FC Offset: 0x38ED9FC VA: 0x38ED9FC Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x38EDACC Offset: 0x38EDACC VA: 0x38EDACC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]