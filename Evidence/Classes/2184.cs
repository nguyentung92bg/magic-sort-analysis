public class CreateView : MonoBehaviour // TypeDefIndex: 2184
{
	// Fields
	[SerializeField]
	private TMP_InputField _nameInput; // 0x18
	[SerializeField]
	private TMP_InputField _descriptionInput; // 0x20
	[SerializeField]
	private TMP_Text _nameInputPlaceholder; // 0x28
	[SerializeField]
	private TMP_Text _descriptionInputPlaceholder; // 0x30
	[SerializeField]
	private Button _chooseBadgeButton; // 0x38
	[SerializeField]
	private Button _nameInputActivator; // 0x40
	[SerializeField]
	private Button _descriptionInputActivator; // 0x48
	[SerializeField]
	private Button _requiredLevelLeftButton; // 0x50
	[SerializeField]
	private Button _requiredLevelRightButton; // 0x58
	[SerializeField]
	private TMP_Text _requiredLevelText; // 0x60
	[SerializeField]
	private TMP_Text _costText; // 0x68
	[SerializeField]
	private Button _createButton; // 0x70
	[SerializeField]
	private SpriteRenderer _selectedBadge; // 0x78
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x80
	[SerializeField]
	private TeamTypeToggleView _toggleView; // 0x88
	[SerializeField]
	private BadgeSelectionView _badgeSelectionView; // 0x90
	private IPlayerService _playerService; // 0x98
	private InventoryService _inventoryService; // 0xA0
	private TeamsService _teamsService; // 0xA8
	private int _requiredLevel; // 0xB0
	private int _selectedBadgeId; // 0xB4
	private int _levelStep; // 0xB8

	// Methods

	// RVA: 0x345CC94 Offset: 0x345CC94 VA: 0x345CC94
	public void Show() { }

	// RVA: 0x345CEC0 Offset: 0x345CEC0 VA: 0x345CEC0
	public void Hide() { }

	// RVA: 0x345CEE4 Offset: 0x345CEE4 VA: 0x345CEE4
	public void Initialize() { }

	// RVA: 0x345D388 Offset: 0x345D388 VA: 0x345D388
	public void Dispose() { }

	// RVA: 0x345D738 Offset: 0x345D738 VA: 0x345D738
	private void OnChooseButtonSelected() { }

	// RVA: 0x345D758 Offset: 0x345D758 VA: 0x345D758
	private void OnNameInputSelected() { }

	// RVA: 0x345D774 Offset: 0x345D774 VA: 0x345D774
	private void OnDescriptionInputSelected() { }

	// RVA: 0x345D790 Offset: 0x345D790 VA: 0x345D790
	private void OnCreateButtonSelected() { }

	// RVA: 0x345D88C Offset: 0x345D88C VA: 0x345D88C
	private void OnRequiredLevelLeftButtonSelected() { }

	// RVA: 0x345D8D0 Offset: 0x345D8D0 VA: 0x345D8D0
	private void OnRequiredLevelRightButtonSelected() { }

	// RVA: 0x345CDE8 Offset: 0x345CDE8 VA: 0x345CDE8
	private void ResetInputs() { }

	// RVA: 0x345D9BC Offset: 0x345D9BC VA: 0x345D9BC
	private void OnSelectedBadgeUpdated(int badgeId) { }

	// RVA: 0x345DA18 Offset: 0x345DA18 VA: 0x345DA18
	private void OnNameInputChanged(string value) { }

	// RVA: 0x345DAA0 Offset: 0x345DAA0 VA: 0x345DAA0
	private void OnDescriptionInputChanged(string description) { }

	// RVA: 0x345DB28 Offset: 0x345DB28 VA: 0x345DB28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI