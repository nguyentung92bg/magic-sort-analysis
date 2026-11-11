public class HomeUIRoot : UIRoot // TypeDefIndex: 2877
{
	// Fields
	[SerializeField]
	private HomeController _homeController; // 0x40
	[SerializeField]
	private HomeStoreController _homeStoreController; // 0x48
	[SerializeField]
	private LeaderboardController _leaderboardController; // 0x50
	[SerializeField]
	private TeamsController _teamsController; // 0x58
	[SerializeField]
	private SwipeMenuManager _swipeMenuManager; // 0x60
	[SerializeField]
	private ProfileButton _profileButton; // 0x68
	[SerializeField]
	private CollectionController _collectionController; // 0x70
	[SerializeField]
	private SettingsController _settingsController; // 0x78
	[SerializeField]
	private Transform _bottomPanel; // 0x80
	private HomeAnimationsConfig _homeAnimationsConfig; // 0x88
	private Vector3 _bottomPanelInitialPosition; // 0x90

	// Properties
	public HomeController HomeController { get; }
	public HomeStoreController HomeStoreController { get; }
	public LeaderboardController LeaderboardController { get; }
	public TeamsController TeamsController { get; }
	public SwipeMenuManager SwipeMenuManager { get; }
	public ProfileButton ProfileButton { get; }
	public CollectionController CollectionController { get; }

	// Methods

	// RVA: 0x297B8F8 Offset: 0x297B8F8 VA: 0x297B8F8
	public HomeController get_HomeController() { }

	// RVA: 0x297B900 Offset: 0x297B900 VA: 0x297B900
	public HomeStoreController get_HomeStoreController() { }

	// RVA: 0x297B908 Offset: 0x297B908 VA: 0x297B908
	public LeaderboardController get_LeaderboardController() { }

	// RVA: 0x297B910 Offset: 0x297B910 VA: 0x297B910
	public TeamsController get_TeamsController() { }

	// RVA: 0x297B918 Offset: 0x297B918 VA: 0x297B918
	public SwipeMenuManager get_SwipeMenuManager() { }

	// RVA: 0x297B920 Offset: 0x297B920 VA: 0x297B920
	public ProfileButton get_ProfileButton() { }

	// RVA: 0x297B928 Offset: 0x297B928 VA: 0x297B928
	public CollectionController get_CollectionController() { }

	// RVA: 0x297B930 Offset: 0x297B930 VA: 0x297B930 Slot: 13
	public override void Awake() { }

	// RVA: 0x297B970 Offset: 0x297B970 VA: 0x297B970 Slot: 11
	public override void Initialize() { }

	// RVA: 0x297BA80 Offset: 0x297BA80 VA: 0x297BA80 Slot: 14
	public override void Show() { }

	// RVA: 0x297BAD8 Offset: 0x297BAD8 VA: 0x297BAD8 Slot: 15
	public override void Hide() { }

	// RVA: 0x297BB30 Offset: 0x297BB30 VA: 0x297BB30
	public void HideHomeUI() { }

	// RVA: 0x297BCB4 Offset: 0x297BCB4 VA: 0x297BCB4
	public Sequence ShowHomeUI() { }

	// RVA: 0x297BDD4 Offset: 0x297BDD4 VA: 0x297BDD4 Slot: 12
	public override void Dispose() { }

	// RVA: 0x297BE30 Offset: 0x297BE30 VA: 0x297BE30
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts