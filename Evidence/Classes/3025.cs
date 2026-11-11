public class WorldLeaderboardController : MonoBehaviour // TypeDefIndex: 3025
{
	// Fields
	private PermanentLeaderboardService _leaderboardService; // 0x18
	private IPlayerService _playerService; // 0x20
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x28
	[SerializeField]
	private ScrollBar _scrollBar; // 0x30
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x38
	[SerializeField]
	private WorldLeaderboardViewAdapter _viewAdapter; // 0x40
	private List<PermanentLeaderboardPlayerViewModel> _degreeViewModels; // 0x48
	private List<PermanentLeaderboardPlayerViewModel> _viewModels; // 0x50
	private ObjectPool<PermanentLeaderboardPlayerViewModel> _viewModelPool; // 0x58
	[SerializeField]
	private List<PermanentLeaderboardDegreeElementView> _leaderboardDegrees; // 0x60
	[SerializeField]
	private StickyScrollElementsController _stickyScrollElementsController; // 0x68
	[SerializeField]
	private GameObject _noInternetConnectionGameObject; // 0x70
	[SerializeField]
	private GameObject _visibleParentGameObject; // 0x78
	[SerializeField]
	private GameObject _heroImage; // 0x80

	// Methods

	// RVA: 0x2AEF1C8 Offset: 0x2AEF1C8 VA: 0x2AEF1C8
	public void Initialize() { }

	// RVA: 0x2AEF598 Offset: 0x2AEF598 VA: 0x2AEF598
	public void Deinitialize() { }

	// RVA: 0x2AEFD20 Offset: 0x2AEFD20 VA: 0x2AEFD20
	public void Show() { }

	// RVA: 0x2AEF998 Offset: 0x2AEF998 VA: 0x2AEF998
	public void Hide() { }

	// RVA: 0x2AF06BC Offset: 0x2AF06BC VA: 0x2AF06BC
	private void UpdateLeaderboards() { }

	// RVA: 0x2AF1140 Offset: 0x2AF1140 VA: 0x2AF1140
	private void UpdateDegrees() { }

	// RVA: 0x2AF0920 Offset: 0x2AF0920 VA: 0x2AF0920
	private void UpdateViewModels() { }

	// RVA: 0x2AF1268 Offset: 0x2AF1268 VA: 0x2AF1268
	private void ClearViewModels() { }

	// RVA: 0x2AF14F8 Offset: 0x2AF14F8 VA: 0x2AF14F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI.World