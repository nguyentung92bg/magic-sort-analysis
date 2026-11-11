public class TeamArenaInfoView : MonoBehaviour, ITeamChatEventView // TypeDefIndex: 2377
{
	// Fields
	[SerializeField]
	private GameObject _container; // 0x18
	[SerializeField]
	private TMP_Text _rankText; // 0x20
	[SerializeField]
	private TMP_Text _scoreText; // 0x28
	[SerializeField]
	private Timer _timer; // 0x30
	[SerializeField]
	private Button _navigationButton; // 0x38
	[SerializeField]
	private TeamChatController _chatController; // 0x40
	[SerializeField]
	private Transform _toggleContainer; // 0x48
	[SerializeField]
	private Button _toggleButton; // 0x50
	[SerializeField]
	private Vector3 _hidePosition; // 0x58
	[SerializeField]
	private Vector3 _showPosition; // 0x64
	[SerializeField]
	private SpriteRenderer _arrowSprite; // 0x70
	[SerializeField]
	private float _toggleDuration; // 0x78
	[SerializeField]
	private AnimationCurve _animationCurve; // 0x80
	[CompilerGenerated]
	private bool <IsVisible>k__BackingField; // 0x88
	[CompilerGenerated]
	private bool <Expanded>k__BackingField; // 0x89

	// Properties
	public bool IsVisible { get; set; }
	public bool Expanded { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2964BA8 Offset: 0x2964BA8 VA: 0x2964BA8
	public bool get_IsVisible() { }

	[CompilerGenerated]
	// RVA: 0x2964BB0 Offset: 0x2964BB0 VA: 0x2964BB0
	private void set_IsVisible(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2964BBC Offset: 0x2964BBC VA: 0x2964BBC
	public bool get_Expanded() { }

	[CompilerGenerated]
	// RVA: 0x2964BC4 Offset: 0x2964BC4 VA: 0x2964BC4
	private void set_Expanded(bool value) { }

	// RVA: 0x2964BD0 Offset: 0x2964BD0 VA: 0x2964BD0
	public void Initialize(TeamArenaInfoViewModel viewModel) { }

	// RVA: 0x2964D48 Offset: 0x2964D48 VA: 0x2964D48 Slot: 4
	public bool IsExpanded() { }

	// RVA: 0x2964D50 Offset: 0x2964D50 VA: 0x2964D50 Slot: 5
	public bool IsViewVisible() { }

	// RVA: 0x2964D58 Offset: 0x2964D58 VA: 0x2964D58
	private void OnEnable() { }

	// RVA: 0x2964E38 Offset: 0x2964E38 VA: 0x2964E38
	private void OnDisable() { }

	// RVA: 0x2964F4C Offset: 0x2964F4C VA: 0x2964F4C
	private void OnNavigationButtonSelected() { }

	// RVA: 0x29651C0 Offset: 0x29651C0 VA: 0x29651C0
	private void OnToggleSelected() { }

	// RVA: 0x2965328 Offset: 0x2965328 VA: 0x2965328
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups