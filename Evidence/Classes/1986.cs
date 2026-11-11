public class WeeklyTournamentInProgressView : MonoBehaviour // TypeDefIndex: 1986
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
	private StickyScrollElementsController _stickyScrollElementsController; // 0x50

	// Methods

	// RVA: 0x32DCAC0 Offset: 0x32DCAC0 VA: 0x32DCAC0
	public void Initialize(List<WeeklyTournamentLeaderboardPlayerViewModel> viewModels, List<WeeklyTournamentLeaderboardPlayerViewModel> degreeViewModels) { }

	// RVA: 0x32DCAF0 Offset: 0x32DCAF0 VA: 0x32DCAF0
	public void Dispose() { }

	// RVA: 0x32DCBA8 Offset: 0x32DCBA8 VA: 0x32DCBA8
	public void Show() { }

	// RVA: 0x32DCBF8 Offset: 0x32DCBF8 VA: 0x32DCBF8
	public void Hide() { }

	// RVA: 0x32DCBE0 Offset: 0x32DCBE0 VA: 0x32DCBE0
	private void UpdateView() { }

	// RVA: 0x32DCC1C Offset: 0x32DCC1C VA: 0x32DCC1C
	private void UpdateScrollbar() { }

	// RVA: 0x32DCE14 Offset: 0x32DCE14 VA: 0x32DCE14
	private void UpdateDegrees() { }

	// RVA: 0x32DD16C Offset: 0x32DD16C VA: 0x32DD16C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]