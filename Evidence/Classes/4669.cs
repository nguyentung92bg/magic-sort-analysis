public class ChampionsLeagueLeaderboardPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4669
{
	// Fields
	[SerializeField]
	private ChampionsLeagueLeaderboardElementPlacementController _championsLeagueLeaderboard; // 0x18
	[SerializeField]
	private ChampionsLeagueLeaderboardCupSorter _championsLeagueLeaderboardCupSorter; // 0x20
	[SerializeField]
	private ChampionsLeagueLeaderboardEloHeaderController _leagueLeaderboardEloHeaderController; // 0x28
	[SerializeField]
	private Timer _timer; // 0x30
	[SerializeField]
	private ChampionsLeagueLeaderboardInProgressViewState _championsLeagueLeaderboardInProgressViewState; // 0x38
	[SerializeField]
	private ChampionsLeagueLeaderboardClaimViewState _championsLeagueLeaderboardClaimViewState; // 0x40
	[SerializeField]
	private ChampionsLeagueLeaderboardHeroImageView _heroImageView; // 0x48
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x50
	private ChampionsLeagueService _championsLeagueService; // 0x58

	// Methods

	// RVA: 0x3A78A74 Offset: 0x3A78A74 VA: 0x3A78A74 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A78C68 Offset: 0x3A78C68 VA: 0x3A78C68 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A78D1C Offset: 0x3A78D1C VA: 0x3A78D1C Slot: 6
	public Task Hide() { }

	// RVA: 0x3A78DEC Offset: 0x3A78DEC VA: 0x3A78DEC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A78DF4 Offset: 0x3A78DF4 VA: 0x3A78DF4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI