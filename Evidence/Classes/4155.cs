public class TryShowJetpackRaceWithStagePopUpOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4155
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

	// RVA: 0x3A8D988 Offset: 0x3A8D988 VA: 0x3A8D988 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3A8D990 Offset: 0x3A8D990 VA: 0x3A8D990 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3A8D998 Offset: 0x3A8D998 VA: 0x3A8D998 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3A8D9A0 Offset: 0x3A8D9A0 VA: 0x3A8D9A0
	private void set_IsShowed(bool value) { }

	// RVA: 0x3A8D9AC Offset: 0x3A8D9AC VA: 0x3A8D9AC
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x3A8D9DC Offset: 0x3A8D9DC VA: 0x3A8D9DC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowJetpackRaceWithStagePopUpOnLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3A8D9E4 Offset: 0x3A8D9E4 VA: 0x3A8D9E4 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3A8DAD8 Offset: 0x3A8DAD8 VA: 0x3A8DAD8 Slot: 11
	public void Dispose() { }

	// RVA: 0x3A8DADC Offset: 0x3A8DADC VA: 0x3A8DADC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3A8DB70 Offset: 0x3A8DB70 VA: 0x3A8DB70 Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI
[CreateAssetMenu(fileName = "JetpackRaceWithStageAnimationConfig", menuName = "Configs/JetpackRaceWithStageAnimationConfig", order = 1)]