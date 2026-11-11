public class TryToShowEndlessPortalLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3374
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

	// RVA: 0x346B168 Offset: 0x346B168 VA: 0x346B168 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x346B170 Offset: 0x346B170 VA: 0x346B170 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x346B178 Offset: 0x346B178 VA: 0x346B178 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x346B180 Offset: 0x346B180 VA: 0x346B180
	private void set_IsShowed(bool value) { }

	// RVA: 0x346B18C Offset: 0x346B18C VA: 0x346B18C
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x346B1BC Offset: 0x346B1BC VA: 0x346B1BC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryToShowEndlessPortalLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x346B1C4 Offset: 0x346B1C4 VA: 0x346B1C4 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x346B2B0 Offset: 0x346B2B0 VA: 0x346B2B0 Slot: 11
	public void Dispose() { }

	// RVA: 0x346B2B4 Offset: 0x346B2B4 VA: 0x346B2B4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x346B340 Offset: 0x346B340 VA: 0x346B340 Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI
[CreateAssetMenu(fileName = "PawTouchOfferContainerAnimationConfig", menuName = "Configs/PawTouchOfferContainerAnimationConfig")]