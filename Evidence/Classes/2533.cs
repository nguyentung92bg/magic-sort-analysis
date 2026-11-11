public class TryShowStrikeShowPopupCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2533
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private StrikeShowStateService _stateService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x2B02D8C Offset: 0x2B02D8C VA: 0x2B02D8C Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2B02DC8 Offset: 0x2B02DC8 VA: 0x2B02DC8 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2B02DD0 Offset: 0x2B02DD0 VA: 0x2B02DD0
	private void set_IsShowed(bool value) { }

	// RVA: 0x2B02DDC Offset: 0x2B02DDC VA: 0x2B02DDC Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x2B02DE4 Offset: 0x2B02DE4 VA: 0x2B02DE4 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x2B02E6C Offset: 0x2B02E6C VA: 0x2B02E6C Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(TryShowStrikeShowPopupCommand.<ExecuteAsync>d__11))]
	// RVA: 0x2B02E84 Offset: 0x2B02E84 VA: 0x2B02E84 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2B02F70 Offset: 0x2B02F70 VA: 0x2B02F70 Slot: 11
	public void Dispose() { }

	// RVA: 0x2B02F74 Offset: 0x2B02F74 VA: 0x2B02F74 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2B02F7C Offset: 0x2B02F7C VA: 0x2B02F7C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts