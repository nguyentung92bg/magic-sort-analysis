public class TryToShowNoAdsOfferLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3323
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

	// RVA: 0x3460CBC Offset: 0x3460CBC VA: 0x3460CBC Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3460CC4 Offset: 0x3460CC4 VA: 0x3460CC4 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3460CCC Offset: 0x3460CCC VA: 0x3460CCC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3460CD4 Offset: 0x3460CD4 VA: 0x3460CD4
	private void set_IsShowed(bool value) { }

	// RVA: 0x3460CE0 Offset: 0x3460CE0 VA: 0x3460CE0
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x3460D10 Offset: 0x3460D10 VA: 0x3460D10 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryToShowNoAdsOfferLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3460D18 Offset: 0x3460D18 VA: 0x3460D18 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3460E04 Offset: 0x3460E04 VA: 0x3460E04 Slot: 11
	public void Dispose() { }

	// RVA: 0x3460E08 Offset: 0x3460E08 VA: 0x3460E08 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3460F60 Offset: 0x3460F60 VA: 0x3460F60 Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: 
[CompilerGenerated]