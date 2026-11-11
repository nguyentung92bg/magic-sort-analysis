public class TryShowTowerWinStreakCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1299
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

	// RVA: 0x1F0728C Offset: 0x1F0728C VA: 0x1F0728C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F07294 Offset: 0x1F07294 VA: 0x1F07294 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F0729C Offset: 0x1F0729C VA: 0x1F0729C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F072A4 Offset: 0x1F072A4 VA: 0x1F072A4
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F072B0 Offset: 0x1F072B0 VA: 0x1F072B0
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x1F072E0 Offset: 0x1F072E0 VA: 0x1F072E0 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F072E8 Offset: 0x1F072E8 VA: 0x1F072E8 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F072EC Offset: 0x1F072EC VA: 0x1F072EC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F07398 Offset: 0x1F07398 VA: 0x1F07398 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F0730C Offset: 0x1F0730C VA: 0x1F0730C
	private bool ShouldOpenAutomaticallyOnLobbyReturn(out TowerWinStreakSource towerWinStreakSource) { }

	[AsyncStateMachine(typeof(TryShowTowerWinStreakCommand.<ExecuteAsync>d__15))]
	// RVA: 0x1F073D4 Offset: 0x1F073D4 VA: 0x1F073D4 Slot: 10
	public Task ExecuteAsync() { }
}

// Namespace: 
[CompilerGenerated]