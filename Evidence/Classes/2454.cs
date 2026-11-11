public class TryShowSuperChargerPopUpOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2454
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private SuperChargerService _service; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2975638 Offset: 0x2975638 VA: 0x2975638 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x2975640 Offset: 0x2975640 VA: 0x2975640 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2975648 Offset: 0x2975648 VA: 0x2975648 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2975650 Offset: 0x2975650 VA: 0x2975650
	private void set_IsShowed(bool value) { }

	[AsyncStateMachine(typeof(TryShowSuperChargerPopUpOnLobbyReturnCommand.<ExecuteAsync>d__10))]
	// RVA: 0x297565C Offset: 0x297565C VA: 0x297565C Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2975748 Offset: 0x2975748 VA: 0x2975748 Slot: 11
	public void Dispose() { }

	// RVA: 0x297574C Offset: 0x297574C VA: 0x297574C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x2975818 Offset: 0x2975818 VA: 0x2975818 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x297583C Offset: 0x297583C VA: 0x297583C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2975844 Offset: 0x2975844 VA: 0x2975844
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI