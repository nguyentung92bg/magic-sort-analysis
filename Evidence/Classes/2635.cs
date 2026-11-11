public class TryShowSnitchPopUpOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2635
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private SnitchService _service; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2472084 Offset: 0x2472084 VA: 0x2472084 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x247208C Offset: 0x247208C VA: 0x247208C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x2472094 Offset: 0x2472094 VA: 0x2472094 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x247209C Offset: 0x247209C VA: 0x247209C
	private void set_IsShowed(bool value) { }

	// RVA: 0x24720A8 Offset: 0x24720A8 VA: 0x24720A8 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSnitchPopUpOnLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x2472174 Offset: 0x2472174 VA: 0x2472174 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2472260 Offset: 0x2472260 VA: 0x2472260 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2472284 Offset: 0x2472284 VA: 0x2472284 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x247228C Offset: 0x247228C VA: 0x247228C Slot: 11
	public void Dispose() { }

	// RVA: 0x2472290 Offset: 0x2472290 VA: 0x2472290
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]