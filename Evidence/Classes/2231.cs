public class FreeLivesPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2231
{
	// Fields
	[SerializeField]
	private LifeRewardedButton _rewardedButton; // 0x18
	[SerializeField]
	private LifeRewardedButton _rewardedButtonNoLife; // 0x20
	[SerializeField]
	private TMP_Text _totalFreeLivesText; // 0x28
	[SerializeField]
	private FreeLiveViewAdapter _viewAdapter; // 0x30
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x38
	[SerializeField]
	private ScrollBar _scrollbar; // 0x40
	[SerializeField]
	private GameObject _noLifePanel; // 0x48
	[SerializeField]
	private GameObject _livesPanel; // 0x50
	[SerializeField]
	private Button _requestButton; // 0x58
	[SerializeField]
	private GameObject _requestButtonContainer; // 0x60
	[SerializeField]
	private Button[] _closeButtons; // 0x68
	private List<FreeLiveViewModel> _freeLives; // 0x70
	private bool _anyLifeClaimed; // 0x78
	private TeamsService _teamsService; // 0x80

	// Properties
	private int _livesCount { get; }

	// Methods

	// RVA: 0x2F04574 Offset: 0x2F04574 VA: 0x2F04574
	private int get__livesCount() { }

	// RVA: 0x2F045C0 Offset: 0x2F045C0 VA: 0x2F045C0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2F04848 Offset: 0x2F04848 VA: 0x2F04848 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F048EC Offset: 0x2F048EC VA: 0x2F048EC Slot: 6
	public Task Hide() { }

	// RVA: 0x2F04998 Offset: 0x2F04998 VA: 0x2F04998 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F049A0 Offset: 0x2F049A0 VA: 0x2F049A0
	private void Awake() { }

	// RVA: 0x2F04BC0 Offset: 0x2F04BC0 VA: 0x2F04BC0
	private void OnDestroy() { }

	// RVA: 0x2F04D40 Offset: 0x2F04D40 VA: 0x2F04D40
	private void OnRequestButtonSelected() { }

	// RVA: 0x2F04660 Offset: 0x2F04660 VA: 0x2F04660
	private void UpdateView() { }

	// RVA: 0x2F04E08 Offset: 0x2F04E08 VA: 0x2F04E08
	private void OnLifeClaimed(string messageId, string userId) { }

	// RVA: 0x2F05040 Offset: 0x2F05040 VA: 0x2F05040
	private void CloseButtonSelected() { }

	// RVA: 0x2F050F0 Offset: 0x2F050F0 VA: 0x2F050F0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI.FreeLives