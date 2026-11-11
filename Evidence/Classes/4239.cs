public class TryShowJetpackRacePopUpOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4239
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

	// RVA: 0x1C656D4 Offset: 0x1C656D4 VA: 0x1C656D4 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1C656DC Offset: 0x1C656DC VA: 0x1C656DC Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1C656E4 Offset: 0x1C656E4 VA: 0x1C656E4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1C656EC Offset: 0x1C656EC VA: 0x1C656EC
	private void set_IsShowed(bool value) { }

	// RVA: 0x1C656F8 Offset: 0x1C656F8 VA: 0x1C656F8
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x1C65728 Offset: 0x1C65728 VA: 0x1C65728 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowJetpackRacePopUpOnLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x1C65730 Offset: 0x1C65730 VA: 0x1C65730 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x1C65820 Offset: 0x1C65820 VA: 0x1C65820 Slot: 11
	public void Dispose() { }

	// RVA: 0x1C65824 Offset: 0x1C65824 VA: 0x1C65824 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1C658BC Offset: 0x1C658BC VA: 0x1C658BC Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: 
[CompilerGenerated]