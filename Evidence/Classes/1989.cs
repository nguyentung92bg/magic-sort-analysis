public class WeeklyTournamentInResultView : MonoBehaviour // TypeDefIndex: 1989
{
	// Fields
	private WeeklyTournamentService _weeklyTournamentService; // 0x18
	[SerializeField]
	private ScrollBar _scrollBar; // 0x20
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x28
	[SerializeField]
	private WeeklyTournamentLeaderboardViewAdapter _viewAdapter; // 0x30
	private List<WeeklyTournamentLeaderboardPlayerViewModel> _viewModels; // 0x38
	private List<WeeklyTournamentLeaderboardPlayerViewModel> _degreeViewModels; // 0x40
	[SerializeField]
	private List<WeeklyTournamentLeaderboardDegreeElementView> _leaderboardDegrees; // 0x48
	[SerializeField]
	private GameObject _resultPanel; // 0x50
	[SerializeField]
	private Button _claimButton; // 0x58
	[SerializeField]
	private TextMeshPro _claimButtonText; // 0x60
	private RewardModel _shownRewardModel; // 0x68
	private int _rank; // 0x70
	[SerializeField]
	private TextMeshPro _currentRankText; // 0x78
	[SerializeField]
	private GameObject _coinRewardGameObject; // 0x80
	[SerializeField]
	private TextMeshPro _coinRewardText; // 0x88
	[SerializeField]
	private GameObject _thereIsNoRewardGameObject; // 0x90

	// Methods

	// RVA: 0x32DD204 Offset: 0x32DD204 VA: 0x32DD204
	public void Awake() { }

	// RVA: 0x32DD290 Offset: 0x32DD290 VA: 0x32DD290
	public void OnDestroy() { }

	// RVA: 0x32DD31C Offset: 0x32DD31C VA: 0x32DD31C
	public void Initialize(List<WeeklyTournamentLeaderboardPlayerViewModel> viewModels, List<WeeklyTournamentLeaderboardPlayerViewModel> degreeViewModels) { }

	// RVA: 0x32DD3D0 Offset: 0x32DD3D0 VA: 0x32DD3D0
	public void Dispose() { }

	// RVA: 0x32DD478 Offset: 0x32DD478 VA: 0x32DD478
	public void Show() { }

	// RVA: 0x32DD4C8 Offset: 0x32DD4C8 VA: 0x32DD4C8
	public void Hide() { }

	// RVA: 0x32DD4A8 Offset: 0x32DD4A8 VA: 0x32DD4A8
	private void UpdateView() { }

	// RVA: 0x32DD4EC Offset: 0x32DD4EC VA: 0x32DD4EC
	private void UpdateScrollbar() { }

	// RVA: 0x32DD680 Offset: 0x32DD680 VA: 0x32DD680
	private void UpdateDegrees() { }

	// RVA: 0x32DD7A8 Offset: 0x32DD7A8 VA: 0x32DD7A8
	private void UpdateResultView() { }

	[AsyncStateMachine(typeof(WeeklyTournamentInResultView.<OnClaimButtonClicked>d__26))]
	// RVA: 0x32DDA10 Offset: 0x32DDA10 VA: 0x32DDA10
	private void OnClaimButtonClicked() { }

	// RVA: 0x32DDAC8 Offset: 0x32DDAC8 VA: 0x32DDAC8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts.UI