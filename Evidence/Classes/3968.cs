public class TryShowMagicPassTutorialCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3968
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

	// RVA: 0x38EE454 Offset: 0x38EE454 VA: 0x38EE454 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x38EE45C Offset: 0x38EE45C VA: 0x38EE45C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x38EE464 Offset: 0x38EE464 VA: 0x38EE464 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38EE46C Offset: 0x38EE46C VA: 0x38EE46C
	private void set_IsShowed(bool value) { }

	// RVA: 0x38EE478 Offset: 0x38EE478 VA: 0x38EE478 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x38EE504 Offset: 0x38EE504 VA: 0x38EE504 Slot: 11
	public void Dispose() { }

	// RVA: 0x38EE508 Offset: 0x38EE508 VA: 0x38EE508 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x38EE52C Offset: 0x38EE52C VA: 0x38EE52C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowMagicPassTutorialCommand.<ExecuteAsync>d__13))]
	// RVA: 0x38EE534 Offset: 0x38EE534 VA: 0x38EE534 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x38EE620 Offset: 0x38EE620 VA: 0x38EE620
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI