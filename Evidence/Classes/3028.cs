public class CountryLeaderboardController : MonoBehaviour // TypeDefIndex: 3028
{
	// Fields
	private PermanentLeaderboardService _leaderboardService; // 0x18
	private IPlayerService _playerService; // 0x20
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x28
	[SerializeField]
	private ScrollBar _scrollBar; // 0x30
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x38
	[FormerlySerializedAs("_worldViewAdapter")]
	[SerializeField]
	private WorldLeaderboardViewAdapter _viewAdapter; // 0x40
	private List<PermanentLeaderboardPlayerViewModel> _degreeViewModels; // 0x48
	private List<PermanentLeaderboardPlayerViewModel> _viewModels; // 0x50
	private ObjectPool<PermanentLeaderboardPlayerViewModel> _viewModelPool; // 0x58
	[SerializeField]
	private List<PermanentLeaderboardDegreeElementView> _leaderboardDegrees; // 0x60
	[SerializeField]
	[FormerlySerializedAs("_stickyScrollElementController")]
	private StickyScrollElementsController _stickyScrollElementsController; // 0x68
	[SerializeField]
	private GameObject _noInternetConnectionGameObject; // 0x70
	[SerializeField]
	private GameObject _visibleParentGameObject; // 0x78
	[SerializeField]
	private GameObject _heroImage; // 0x80

	// Methods

	// RVA: 0x2AEF3B0 Offset: 0x2AEF3B0 VA: 0x2AEF3B0
	public void Initialize() { }

	// RVA: 0x2AEFD64 Offset: 0x2AEFD64 VA: 0x2AEFD64
	public void Show() { }

	// RVA: 0x2AEF9BC Offset: 0x2AEF9BC VA: 0x2AEF9BC
	public void Hide() { }

	// RVA: 0x2AEF66C Offset: 0x2AEF66C VA: 0x2AEF66C
	public void Deinitialize() { }

	// RVA: 0x2AF18D8 Offset: 0x2AF18D8 VA: 0x2AF18D8
	private void UpdateLeaderboards() { }

	// RVA: 0x2AF235C Offset: 0x2AF235C VA: 0x2AF235C
	private void UpdateDegrees() { }

	// RVA: 0x2AF1B3C Offset: 0x2AF1B3C VA: 0x2AF1B3C
	private void UpdateViewModels() { }

	// RVA: 0x2AF2484 Offset: 0x2AF2484 VA: 0x2AF2484
	private void ClearViewModels() { }

	// RVA: 0x2AF2714 Offset: 0x2AF2714 VA: 0x2AF2714
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Multiplier
[Serializable]