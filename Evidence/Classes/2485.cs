public class StrikeShowLeaderboardView : MonoBehaviour // TypeDefIndex: 2485
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private StrikeShowLeaderboardViewAdapter _viewAdapter; // 0x28

	// Methods

	// RVA: 0x2AFA458 Offset: 0x2AFA458 VA: 0x2AFA458
	public void SetRows(List<StrikeShowLeaderboardPlayerViewModel> players, bool isLeagueEnabled) { }

	// RVA: 0x2AFA584 Offset: 0x2AFA584 VA: 0x2AFA584
	public void Dispose() { }

	// RVA: 0x2AFB62C Offset: 0x2AFB62C VA: 0x2AFB62C
	private static List<IStrikeShowLeaderboardRowViewModel> BuildRowViewModels(List<StrikeShowLeaderboardPlayerViewModel> players, bool isLeagueEnabled) { }

	// RVA: 0x2AFB9E4 Offset: 0x2AFB9E4 VA: 0x2AFB9E4
	private void MoveToMyRow(List<IStrikeShowLeaderboardRowViewModel> rows) { }

	// RVA: 0x2AFBAE8 Offset: 0x2AFBAE8 VA: 0x2AFBAE8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI