public class WeeklyTournamentLeaderboardController : MonoBehaviour // TypeDefIndex: 1990
{
	// Fields
	private WeeklyTournamentService _weeklyTournamentService; // 0x18
	[SerializeField]
	private WeeklyTournamentInProgressView _weeklyTournamentInProgressView; // 0x20
	[SerializeField]
	private WeeklyTournamentInResultView _weeklyTournamentInResultView; // 0x28
	private List<WeeklyTournamentLeaderboardPlayerViewModel> _degreeViewModels; // 0x30
	private List<WeeklyTournamentLeaderboardPlayerViewModel> _viewModels; // 0x38
	[SerializeField]
	private GameObject _noInternetConnectionGameObject; // 0x40
	[SerializeField]
	private GameObject _visibleParentGameObject; // 0x48
	[SerializeField]
	private GameObject _heroImage; // 0x50
	private bool _isInitialized; // 0x58
	private HomeUIRoot _homeUIRoot; // 0x60

	// Methods

	// RVA: 0x32DDEF4 Offset: 0x32DDEF4 VA: 0x32DDEF4
	public void Awake() { }

	// RVA: 0x32DE084 Offset: 0x32DE084 VA: 0x32DE084
	public void OnDestroy() { }

	// RVA: 0x32DE1BC Offset: 0x32DE1BC VA: 0x32DE1BC
	public void Initialize() { }

	// RVA: 0x32DE290 Offset: 0x32DE290 VA: 0x32DE290
	public void Dispose() { }

	// RVA: 0x32DE2C0 Offset: 0x32DE2C0 VA: 0x32DE2C0
	public void Show() { }

	// RVA: 0x32DE4FC Offset: 0x32DE4FC VA: 0x32DE4FC
	public void Hide() { }

	// RVA: 0x32DE348 Offset: 0x32DE348 VA: 0x32DE348
	private void UpdateView() { }

	// RVA: 0x32DE520 Offset: 0x32DE520 VA: 0x32DE520
	private void UpdateViewModels() { }

	// RVA: 0x32DE6E8 Offset: 0x32DE6E8 VA: 0x32DE6E8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts.UI