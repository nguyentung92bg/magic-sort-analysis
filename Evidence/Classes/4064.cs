public class TryShowMagicBottlePopUpOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4064
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MagicBottleService _magicBottleService; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3762564 Offset: 0x3762564 VA: 0x3762564 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x376256C Offset: 0x376256C VA: 0x376256C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3762574 Offset: 0x3762574 VA: 0x3762574 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x376257C Offset: 0x376257C VA: 0x376257C
	private void set_IsShowed(bool value) { }

	// RVA: 0x3762588 Offset: 0x3762588 VA: 0x3762588 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowMagicBottlePopUpOnLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3762654 Offset: 0x3762654 VA: 0x3762654 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3762740 Offset: 0x3762740 VA: 0x3762740 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3762764 Offset: 0x3762764 VA: 0x3762764 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x376276C Offset: 0x376276C VA: 0x376276C Slot: 11
	public void Dispose() { }

	// RVA: 0x3762770 Offset: 0x3762770 VA: 0x3762770
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts