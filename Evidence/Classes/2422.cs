public class TryShowTeamArenaJoinCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2422
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

	// RVA: 0x296F0EC Offset: 0x296F0EC VA: 0x296F0EC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x296F10C Offset: 0x296F10C VA: 0x296F10C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x296F114 Offset: 0x296F114 VA: 0x296F114
	private void set_IsShowed(bool value) { }

	// RVA: 0x296F120 Offset: 0x296F120 VA: 0x296F120 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x296F128 Offset: 0x296F128 VA: 0x296F128 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x296F1B0 Offset: 0x296F1B0 VA: 0x296F1B0 Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(TryShowTeamArenaJoinCommand.<ExecuteAsync>d__11))]
	// RVA: 0x296F1C8 Offset: 0x296F1C8 VA: 0x296F1C8 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x296F2B4 Offset: 0x296F2B4 VA: 0x296F2B4 Slot: 11
	public void Dispose() { }

	// RVA: 0x296F2B8 Offset: 0x296F2B8 VA: 0x296F2B8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x296F2C0 Offset: 0x296F2C0 VA: 0x296F2C0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts