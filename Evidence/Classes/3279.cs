public class TryToShowOnePlusFreeOfferLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3279
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

	// RVA: 0x359300C Offset: 0x359300C VA: 0x359300C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3593014 Offset: 0x3593014 VA: 0x3593014 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x359301C Offset: 0x359301C VA: 0x359301C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3593024 Offset: 0x3593024 VA: 0x3593024
	private void set_IsShowed(bool value) { }

	// RVA: 0x3593030 Offset: 0x3593030 VA: 0x3593030
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x3593060 Offset: 0x3593060 VA: 0x3593060 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryToShowOnePlusFreeOfferLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3593068 Offset: 0x3593068 VA: 0x3593068 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3593154 Offset: 0x3593154 VA: 0x3593154 Slot: 11
	public void Dispose() { }

	// RVA: 0x3593158 Offset: 0x3593158 VA: 0x3593158 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x35931DC Offset: 0x35931DC VA: 0x35931DC Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: 
[CompilerGenerated]