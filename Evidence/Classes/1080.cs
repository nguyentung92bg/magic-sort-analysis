public class EgoAreYouSureButtonController : EndGameOfferButtonController // TypeDefIndex: 1080
{
	// Fields
	[SerializeField]
	private GameObject _playButtonContainer; // 0x20
	[SerializeField]
	private GameObject _playOnWithRewardedButtonContainer; // 0x28
	[SerializeField]
	private GameObject _playOnWithMultipleBottlesButtonContainer; // 0x30
	[SerializeField]
	private PlayOnButton _playOnButton; // 0x38
	[SerializeField]
	private PlayOnButton _playOnButtonWithAb; // 0x40
	[SerializeField]
	private PlayOnWithRewardedButton _playOnWithRewardedButton; // 0x48
	[SerializeField]
	private PlayOnButton _playOnWithMultipleBottlesButton; // 0x50
	[SerializeField]
	private Button _closeButton; // 0x58

	// Methods

	// RVA: 0x16F26C8 Offset: 0x16F26C8 VA: 0x16F26C8 Slot: 4
	public override void Initialize() { }

	// RVA: 0x16F26CC Offset: 0x16F26CC VA: 0x16F26CC
	private void HandleRewardedAb() { }

	// RVA: 0x16F2A20 Offset: 0x16F2A20 VA: 0x16F2A20 Slot: 5
	protected override void RegisterButtons() { }

	// RVA: 0x16F2CDC Offset: 0x16F2CDC VA: 0x16F2CDC Slot: 6
	protected override void UnregisterButtons() { }

	// RVA: 0x16F2F98 Offset: 0x16F2F98 VA: 0x16F2F98
	private void CloseButtonOnOnSelectSuccessEvent() { }

	// RVA: 0x16F2FF8 Offset: 0x16F2FF8 VA: 0x16F2FF8
	private void PlayOnButtonOnOnPlayOnUsed() { }

	// RVA: 0x16F2878 Offset: 0x16F2878 VA: 0x16F2878
	private bool IsRewardedButtonEnabled() { }

	// RVA: 0x16F3000 Offset: 0x16F3000 VA: 0x16F3000
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]