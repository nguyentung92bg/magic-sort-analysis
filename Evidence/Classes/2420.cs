public class TryShowTeamArenaEventCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2420
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private TeamArenaService _teamArenaService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x296EBDC Offset: 0x296EBDC VA: 0x296EBDC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x296EBFC Offset: 0x296EBFC VA: 0x296EBFC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x296EC04 Offset: 0x296EC04 VA: 0x296EC04
	private void set_IsShowed(bool value) { }

	// RVA: 0x296EC10 Offset: 0x296EC10 VA: 0x296EC10 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x296EC18 Offset: 0x296EC18 VA: 0x296EC18 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowTeamArenaEventCommand.<ExecuteAsync>d__10))]
	// RVA: 0x296ECA0 Offset: 0x296ECA0 VA: 0x296ECA0 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x296ED8C Offset: 0x296ED8C VA: 0x296ED8C Slot: 11
	public void Dispose() { }

	// RVA: 0x296ED90 Offset: 0x296ED90 VA: 0x296ED90 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x296EDA8 Offset: 0x296EDA8 VA: 0x296EDA8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x296EDB0 Offset: 0x296EDB0 VA: 0x296EDB0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]