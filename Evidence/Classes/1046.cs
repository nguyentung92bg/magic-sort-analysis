public class RefillPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1046
{
	// Fields
	[SerializeField]
	private LifeRewardedButton _lifeRewardedButton; // 0x18
	[SerializeField]
	private RefillButton _refillButtonWithAd; // 0x20
	[SerializeField]
	private RefillButton _refillButtonWithoutAd; // 0x28
	[SerializeField]
	private RefillButton _refillButtonWithFreeLives; // 0x30
	[SerializeField]
	private FreeLivesButton _freeLivesButton; // 0x38
	[SerializeField]
	private GameObject _backgroundWithAd; // 0x40
	[SerializeField]
	private GameObject _backgroundWithoutAd; // 0x48
	[SerializeField]
	private GameObject _gameObjectWithAd; // 0x50
	[SerializeField]
	private GameObject _gameObjectWithoutAd; // 0x58
	[SerializeField]
	private GameObject _gameObjectWithFreeLives; // 0x60
	[SerializeField]
	private MagicPassOfferView _magicPassOfferView; // 0x68
	[SerializeField]
	private Button _closeButton; // 0x70
	private bool _fromClose; // 0x78
	private RefillButton _currentRefillButton; // 0x80

	// Methods

	// RVA: 0x16E9D64 Offset: 0x16E9D64 VA: 0x16E9D64 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x16EA1F8 Offset: 0x16EA1F8 VA: 0x16EA1F8
	private void OnMagicPassActivated() { }

	// RVA: 0x16EA26C Offset: 0x16EA26C VA: 0x16EA26C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x16EA300 Offset: 0x16EA300 VA: 0x16EA300 Slot: 6
	public Task Hide() { }

	// RVA: 0x16EA648 Offset: 0x16EA648 VA: 0x16EA648 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x16EA650 Offset: 0x16EA650 VA: 0x16EA650
	private void Awake() { }

	// RVA: 0x16EA6DC Offset: 0x16EA6DC VA: 0x16EA6DC
	private void OnDestroy() { }

	// RVA: 0x16EA768 Offset: 0x16EA768 VA: 0x16EA768
	private void OnCloseButtonSelected() { }

	// RVA: 0x16EA44C Offset: 0x16EA44C VA: 0x16EA44C
	private void TryShowInviteFriends() { }

	// RVA: 0x16EA774 Offset: 0x16EA774 VA: 0x16EA774
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.QuitAreYouSurePopUpNS.Scripts