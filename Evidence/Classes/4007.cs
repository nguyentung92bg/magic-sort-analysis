public class TryShowMagicLabCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4007
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MagicLabService _magicLabService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3755EF8 Offset: 0x3755EF8 VA: 0x3755EF8 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3755F00 Offset: 0x3755F00 VA: 0x3755F00 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3755F08 Offset: 0x3755F08 VA: 0x3755F08 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3755F10 Offset: 0x3755F10 VA: 0x3755F10
	private void set_IsShowed(bool value) { }

	// RVA: 0x3755F1C Offset: 0x3755F1C VA: 0x3755F1C
	public void .ctor() { }

	// RVA: 0x3755F24 Offset: 0x3755F24 VA: 0x3755F24 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x3755FB0 Offset: 0x3755FB0 VA: 0x3755FB0 Slot: 11
	public void Dispose() { }

	// RVA: 0x3755FB4 Offset: 0x3755FB4 VA: 0x3755FB4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3755FEC Offset: 0x3755FEC VA: 0x3755FEC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3755FCC Offset: 0x3755FCC VA: 0x3755FCC
	private bool ShouldOpenAutomaticallyOnLobbyReturn() { }

	[AsyncStateMachine(typeof(TryShowMagicLabCommand.<ExecuteAsync>d__15))]
	// RVA: 0x3755FF4 Offset: 0x3755FF4 VA: 0x3755FF4 Slot: 10
	public Task ExecuteAsync() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI