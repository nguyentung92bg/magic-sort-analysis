public class FriendsInvitePopup : MonoBehaviour, IPopUp // TypeDefIndex: 4366
{
	// Fields
	[SerializeField]
	private Button _inviteButton; // 0x18
	[SerializeField]
	private Button _infoButton; // 0x20
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x28
	[SerializeField]
	private GameObject _rewardsContainer; // 0x30
	[SerializeField]
	private List<GameObject> _plusPool; // 0x38
	[SerializeField]
	private Transform _rewardParent; // 0x40
	[SerializeField]
	private float _rewardContainerWidth; // 0x48
	[SerializeField]
	private float _perRewardWidth; // 0x4C
	[SerializeField]
	private float _spacingBetweenRewards; // 0x50
	[SerializeField]
	private TMP_Text _inviteFriendText; // 0x58
	private ReferralService _referralService; // 0x60
	private List<CurrencyView> _currencyViews; // 0x68

	// Methods

	// RVA: 0x1B8FDD8 Offset: 0x1B8FDD8 VA: 0x1B8FDD8
	private void Awake() { }

	// RVA: 0x1B8FFF8 Offset: 0x1B8FFF8 VA: 0x1B8FFF8
	private void OnDestroy() { }

	// RVA: 0x1B900D8 Offset: 0x1B900D8 VA: 0x1B900D8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1B90374 Offset: 0x1B90374 VA: 0x1B90374 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1B90408 Offset: 0x1B90408 VA: 0x1B90408 Slot: 6
	public Task Hide() { }

	// RVA: 0x1B90698 Offset: 0x1B90698 VA: 0x1B90698 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1B906A0 Offset: 0x1B906A0 VA: 0x1B906A0
	private void OnInviteButtonSelected() { }

	// RVA: 0x1B906FC Offset: 0x1B906FC VA: 0x1B906FC
	private void OnInfoButtonSelected() { }

	[Button]
	// RVA: 0x1B90108 Offset: 0x1B90108 VA: 0x1B90108
	private void UpdateView() { }

	// RVA: 0x1B907E4 Offset: 0x1B907E4 VA: 0x1B907E4
	private void InitializeRewardPositions() { }

	// RVA: 0x1B908D0 Offset: 0x1B908D0 VA: 0x1B908D0
	private void InitializePlusSigns() { }

	// RVA: 0x1B904BC Offset: 0x1B904BC VA: 0x1B904BC
	private void ReturnViews() { }

	// RVA: 0x1B90A58 Offset: 0x1B90A58 VA: 0x1B90A58
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts.UI