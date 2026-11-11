public class TryToShowSpecialOfferLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3329
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

	// RVA: 0x3462188 Offset: 0x3462188 VA: 0x3462188 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3462190 Offset: 0x3462190 VA: 0x3462190 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3462198 Offset: 0x3462198 VA: 0x3462198 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x34621A0 Offset: 0x34621A0 VA: 0x34621A0
	private void set_IsShowed(bool value) { }

	// RVA: 0x34621AC Offset: 0x34621AC VA: 0x34621AC
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x34621DC Offset: 0x34621DC VA: 0x34621DC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryToShowSpecialOfferLobbyReturnCommand.<ExecuteAsync>d__11))]
	// RVA: 0x34621E4 Offset: 0x34621E4 VA: 0x34621E4 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x34622D0 Offset: 0x34622D0 VA: 0x34622D0 Slot: 11
	public void Dispose() { }

	// RVA: 0x34622D4 Offset: 0x34622D4 VA: 0x34622D4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x346235C Offset: 0x346235C VA: 0x346235C Slot: 6
	public bool ShouldTerminateTheFlow() { }
}

// Namespace: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts
[Serializable]