public class TeamChangePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2197
{
	// Fields
	[SerializeField]
	private Button[] _closeButtons; // 0x18
	[SerializeField]
	private Button _changeButton; // 0x20
	[SerializeField]
	private TMP_Text _curTeamText; // 0x28
	[SerializeField]
	private TMP_Text _newTeamText; // 0x30
	[SerializeField]
	private SpriteRenderer _curTeamBadge; // 0x38
	[SerializeField]
	private SpriteRenderer _newTeamBadge; // 0x40
	[SerializeField]
	private GameObject _warningContainer; // 0x48
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0x50
	[SerializeField]
	private float _defaultHeight; // 0x58
	[SerializeField]
	private float _heightWithWarning; // 0x5C
	[SerializeField]
	private TeamPopupHeightAdjuster _heightAdjuster; // 0x60
	private TeamChangePopupArguments _arguments; // 0x68

	// Methods

	// RVA: 0x2EFA508 Offset: 0x2EFA508 VA: 0x2EFA508 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFA778 Offset: 0x2EFA778 VA: 0x2EFA778 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2EFA81C Offset: 0x2EFA81C VA: 0x2EFA81C Slot: 6
	public Task Hide() { }

	// RVA: 0x2EFA8C8 Offset: 0x2EFA8C8 VA: 0x2EFA8C8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2EFA5BC Offset: 0x2EFA5BC VA: 0x2EFA5BC
	private void UpdateView() { }

	// RVA: 0x2EFAA40 Offset: 0x2EFAA40 VA: 0x2EFAA40
	private void Awake() { }

	// RVA: 0x2EFAB60 Offset: 0x2EFAB60 VA: 0x2EFAB60
	private void OnDestroy() { }

	// RVA: 0x2EFAC80 Offset: 0x2EFAC80 VA: 0x2EFAC80
	private void OnCloseButtonSelected() { }

	// RVA: 0x2EFACDC Offset: 0x2EFACDC VA: 0x2EFACDC
	private void OnChangeButtonSelected() { }

	// RVA: 0x2EFAD38 Offset: 0x2EFAD38 VA: 0x2EFAD38
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI