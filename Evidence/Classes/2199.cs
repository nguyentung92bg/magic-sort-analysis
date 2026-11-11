public class TeamEditPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2199
{
	// Fields
	[SerializeField]
	private Button _saveButton; // 0x18
	[SerializeField]
	private Button _chooseBadgeButton; // 0x20
	[SerializeField]
	private Button[] _closeButtons; // 0x28
	[SerializeField]
	private Button _minLevelDecButton; // 0x30
	[SerializeField]
	private Button _minLevelIncButton; // 0x38
	[SerializeField]
	private TMP_Text _minLevelText; // 0x40
	[SerializeField]
	private SpriteRenderer _selectedBadgeImage; // 0x48
	[SerializeField]
	private TMP_Text _teamNameText; // 0x50
	[SerializeField]
	private TMP_InputField _teamDescriptionInput; // 0x58
	[SerializeField]
	private TeamTypeToggleView _toggleView; // 0x60
	[SerializeField]
	private BadgeSelectionView _badgeSelectionView; // 0x68
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x70
	[SerializeField]
	private Canvas _inputCanvas; // 0x78
	private TeamViewModel _teamModel; // 0x80
	private int _editedBadgeId; // 0x88
	private int _minLevel; // 0x8C
	private int _levelStep; // 0x90
	private IPlayerService _playerService; // 0x98
	private TeamsService _teamsService; // 0xA0

	// Methods

	// RVA: 0x2EFAD64 Offset: 0x2EFAD64 VA: 0x2EFAD64 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFAF3C Offset: 0x2EFAF3C VA: 0x2EFAF3C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFAFE0 Offset: 0x2EFAFE0 VA: 0x2EFAFE0 Slot: 6
	public Task Hide() { }

	// RVA: 0x2EFB08C Offset: 0x2EFB08C VA: 0x2EFB08C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2EFB094 Offset: 0x2EFB094 VA: 0x2EFB094
	private void Awake() { }

	// RVA: 0x2EFB4B8 Offset: 0x2EFB4B8 VA: 0x2EFB4B8
	private void OnDestroy() { }

	// RVA: 0x2EFAE0C Offset: 0x2EFAE0C VA: 0x2EFAE0C
	private void Initialize() { }

	// RVA: 0x2EFBCD4 Offset: 0x2EFBCD4 VA: 0x2EFBCD4
	private void OnCloseSelected() { }

	// RVA: 0x2EFBD48 Offset: 0x2EFBD48 VA: 0x2EFBD48
	private void OnChooseBadgeSelected() { }

	// RVA: 0x2EFBD80 Offset: 0x2EFBD80 VA: 0x2EFBD80
	private void OnTeamsBadgeSelected(int selectedBadgeId) { }

	// RVA: 0x2EFBDF8 Offset: 0x2EFBDF8 VA: 0x2EFBDF8
	private void OnMinLevelDecSelected() { }

	// RVA: 0x2EFBE3C Offset: 0x2EFBE3C VA: 0x2EFBE3C
	private void OnMinLevelIncSelected() { }

	// RVA: 0x2EFBF28 Offset: 0x2EFBF28 VA: 0x2EFBF28
	private void OnBadgeSelectionViewClosed() { }

	// RVA: 0x2EFBF48 Offset: 0x2EFBF48 VA: 0x2EFBF48
	private void OnDescriptionChanged(string description) { }

	// RVA: 0x2EFBFD0 Offset: 0x2EFBFD0 VA: 0x2EFBFD0
	private void OnSaveSelected() { }

	// RVA: 0x2EFC1C0 Offset: 0x2EFC1C0 VA: 0x2EFC1C0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI