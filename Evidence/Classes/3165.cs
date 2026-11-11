public class TryToShowWatchAndWinLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3165
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

	// RVA: 0x32FFF6C Offset: 0x32FFF6C VA: 0x32FFF6C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x32FFF74 Offset: 0x32FFF74 VA: 0x32FFF74 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x32FFF7C Offset: 0x32FFF7C VA: 0x32FFF7C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x32FFF84 Offset: 0x32FFF84 VA: 0x32FFF84
	private void set_IsShowed(bool value) { }

	// RVA: 0x32FFF90 Offset: 0x32FFF90 VA: 0x32FFF90
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x32FFFC0 Offset: 0x32FFFC0 VA: 0x32FFFC0 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryToShowWatchAndWinLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x32FFFC8 Offset: 0x32FFFC8 VA: 0x32FFFC8 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x33000B4 Offset: 0x33000B4 VA: 0x33000B4 Slot: 11
	public void Dispose() { }

	// RVA: 0x33000B8 Offset: 0x33000B8 VA: 0x33000B8 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3300140 Offset: 0x3300140 VA: 0x3300140 Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: 
[CompilerGenerated]