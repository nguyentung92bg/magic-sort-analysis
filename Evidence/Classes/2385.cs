public class TeamArenaEventResultController : MonoBehaviour // TypeDefIndex: 2385
{
	// Fields
	[SerializeField]
	private Button _claimButton; // 0x18
	[SerializeField]
	private TeamArenaLeaderboardController _leaderboardController; // 0x20
	[SerializeField]
	private TMP_Text _rankText; // 0x28
	[SerializeField]
	private TeamArenaLeaderboardRewardView _rewardView; // 0x30
	[SerializeField]
	private GameObject _noRewardView; // 0x38
	[SerializeField]
	private GameObject _noContributionView; // 0x40
	[SerializeField]
	private Transform _tabHolder; // 0x48
	[SerializeField]
	private float _tabsDefaultPosY; // 0x50
	[SerializeField]
	private float _tabsNoContributionPosY; // 0x54
	private TeamArenaEventResultViewModel _viewModel; // 0x58

	// Methods

	// RVA: 0x2966104 Offset: 0x2966104 VA: 0x2966104
	public void Show(TeamArenaEventResultViewModel viewModel) { }

	// RVA: 0x29660E0 Offset: 0x29660E0 VA: 0x29660E0
	public void Hide() { }

	// RVA: 0x296793C Offset: 0x296793C VA: 0x296793C
	private void Awake() { }

	// RVA: 0x2967ADC Offset: 0x2967ADC VA: 0x2967ADC
	private void OnDestroy() { }

	// RVA: 0x2967C7C Offset: 0x2967C7C VA: 0x2967C7C
	private void OnClaimButtonSelected() { }

	// RVA: 0x2967F08 Offset: 0x2967F08 VA: 0x2967F08
	private void OnTabSelected(string tabName) { }

	// RVA: 0x29664E4 Offset: 0x29664E4 VA: 0x29664E4
	public void Dipose() { }

	// RVA: 0x29678D4 Offset: 0x29678D4 VA: 0x29678D4
	private void SetupNoContributionView(bool showNoContribution) { }

	// RVA: 0x29682A0 Offset: 0x29682A0 VA: 0x29682A0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups