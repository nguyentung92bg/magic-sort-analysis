public class OpenDuckFestivalPopUpCommand : ICommand // TypeDefIndex: 4461
{
	// Fields
	private readonly DuckFestivalPopUpImpressionSource _source; // 0x10
	private DuckFestivalLobbyButton _lobbyButton; // 0x18
	private RewardService _rewardService; // 0x20
	private DuckFestivalService _service; // 0x28
	private IPopUpService _popupService; // 0x30

	// Methods

	// RVA: 0x38C7654 Offset: 0x38C7654 VA: 0x38C7654
	public void .ctor(DuckFestivalPopUpImpressionSource source) { }

	// RVA: 0x38CE550 Offset: 0x38CE550 VA: 0x38CE550
	private PopUpArguments GetPopUpArgumentsFor(DuckFestivalPopupStateType popUpToShow) { }

	[AsyncStateMachine(typeof(OpenDuckFestivalPopUpCommand.<ExecuteAsync>d__7))]
	// RVA: 0x38C767C Offset: 0x38C767C VA: 0x38C767C Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(OpenDuckFestivalPopUpCommand.<TryClaimEvent>d__8))]
	// RVA: 0x38CE64C Offset: 0x38CE64C VA: 0x38CE64C
	private Task<bool> TryClaimEvent() { }

	[AsyncStateMachine(typeof(OpenDuckFestivalPopUpCommand.<TryGiveRewards>d__9))]
	// RVA: 0x38CE760 Offset: 0x38CE760 VA: 0x38CE760
	private Task TryGiveRewards() { }

	// RVA: 0x38CE84C Offset: 0x38CE84C VA: 0x38CE84C
	private void UpdateLobbyButton() { }

	// RVA: 0x38CE878 Offset: 0x38CE878 VA: 0x38CE878 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]