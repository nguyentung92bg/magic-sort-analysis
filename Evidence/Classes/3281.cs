public class TryToShowOnePlusOfferRewardsLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3281
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

	// RVA: 0x35935DC Offset: 0x35935DC VA: 0x35935DC Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3593678 Offset: 0x3593678 VA: 0x3593678 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3593680 Offset: 0x3593680 VA: 0x3593680 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3593688 Offset: 0x3593688 VA: 0x3593688
	private void set_IsShowed(bool value) { }

	// RVA: 0x3593694 Offset: 0x3593694 VA: 0x3593694 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryToShowOnePlusOfferRewardsLobbyReturnCommand.<ExecuteAsync>d__10))]
	// RVA: 0x359369C Offset: 0x359369C VA: 0x359369C Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3593788 Offset: 0x3593788 VA: 0x3593788 Slot: 11
	public void Dispose() { }

	// RVA: 0x35935F4 Offset: 0x35935F4 VA: 0x35935F4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x359378C Offset: 0x359378C VA: 0x359378C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3593794 Offset: 0x3593794 VA: 0x3593794
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts
[Serializable]