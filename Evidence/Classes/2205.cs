public class TeamInfoTooltip : MonoBehaviour // TypeDefIndex: 2205
{
	// Fields
	[SerializeField]
	private Button _kickButton; // 0x18
	[SerializeField]
	private Button _promoteButton; // 0x20
	[SerializeField]
	private Button _demoteButton; // 0x28
	[SerializeField]
	private Button _viewProfileButton; // 0x30
	[SerializeField]
	private GameObject[] _buttonHolders; // 0x38
	[SerializeField]
	private float _perButtonWidth; // 0x40
	[SerializeField]
	private float _horizontalSpacing; // 0x44
	[SerializeField]
	private RectTransform _contentHolder; // 0x48
	[SerializeField]
	private SpriteRenderer _bgRenderer; // 0x50
	[SerializeField]
	private GameObject _arrowUp; // 0x58
	[SerializeField]
	private GameObject _arrowDown; // 0x60
	private TeamMemberViewModel _targetUser; // 0x68
	private int _coLeaderCountInTeam; // 0x70
	private TeamsService _teamsService; // 0x78
	private Camera _camera; // 0x80

	// Methods

	// RVA: 0x2EFDB40 Offset: 0x2EFDB40 VA: 0x2EFDB40
	public void Show(TooltipArgs args) { }

	// RVA: 0x2EFE5A8 Offset: 0x2EFE5A8 VA: 0x2EFE5A8
	public void Hide() { }

	// RVA: 0x2EFE5CC Offset: 0x2EFE5CC VA: 0x2EFE5CC
	private void Awake() { }

	// RVA: 0x2EFE7B8 Offset: 0x2EFE7B8 VA: 0x2EFE7B8
	private void OnDestroy() { }

	// RVA: 0x2EFE930 Offset: 0x2EFE930 VA: 0x2EFE930
	private void OnKickButtonSelected() { }

	// RVA: 0x2EFEAC0 Offset: 0x2EFEAC0 VA: 0x2EFEAC0
	private void OnPromoteButtonSelected() { }

	// RVA: 0x2EFEC4C Offset: 0x2EFEC4C VA: 0x2EFEC4C
	private void OnDemoteButtonSelected() { }

	// RVA: 0x2EFECCC Offset: 0x2EFECCC VA: 0x2EFECCC
	private void OnProfileButtonSelected() { }

	// RVA: 0x2EFED50 Offset: 0x2EFED50 VA: 0x2EFED50
	private void Update() { }

	// RVA: 0x2EFE4DC Offset: 0x2EFE4DC VA: 0x2EFE4DC
	private void SetTooltipSize(int buttonCount) { }

	// RVA: 0x2EFE560 Offset: 0x2EFE560 VA: 0x2EFE560
	private void SetTooltipOrientation(bool reversed) { }

	// RVA: 0x2EFED90 Offset: 0x2EFED90 VA: 0x2EFED90
	private bool IsClickInsideTooltip(Vector2 clickPosition) { }

	// RVA: 0x2EFEE5C Offset: 0x2EFEE5C VA: 0x2EFEE5C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI