public class TryToShowChooseOneSpecialOfferLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3479
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

	// RVA: 0x20B29B0 Offset: 0x20B29B0 VA: 0x20B29B0 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x20B29B8 Offset: 0x20B29B8 VA: 0x20B29B8 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x20B29C0 Offset: 0x20B29C0 VA: 0x20B29C0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x20B29C8 Offset: 0x20B29C8 VA: 0x20B29C8
	private void set_IsShowed(bool value) { }

	// RVA: 0x20B29D4 Offset: 0x20B29D4 VA: 0x20B29D4
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x20B2A04 Offset: 0x20B2A04 VA: 0x20B2A04 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryToShowChooseOneSpecialOfferLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x20B2A0C Offset: 0x20B2A0C VA: 0x20B2A0C Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x20B2AF8 Offset: 0x20B2AF8 VA: 0x20B2AF8 Slot: 11
	public void Dispose() { }

	// RVA: 0x20B2AFC Offset: 0x20B2AFC VA: 0x20B2AFC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x20B2B80 Offset: 0x20B2B80 VA: 0x20B2B80 Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts
[CreateAssetMenu(fileName = "MiniGameAnimationConfig", menuName = "Configs/MiniGameAnimationConfig")]