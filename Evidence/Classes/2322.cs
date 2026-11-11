public class TeamQuestLeaderboardElementView : LeaderboardElementView // TypeDefIndex: 2322
{
	// Fields
	[SerializeField]
	private TextMeshPro _rankText; // 0x38
	[SerializeField]
	private TextMeshPro _scoreText; // 0x40
	[SerializeField]
	private GameObject _myPlayerBackground; // 0x48
	[SerializeField]
	private GameObject _otherPlayerBackground; // 0x50
	[SerializeField]
	private GameObject _myPlayerTextBackground; // 0x58
	[SerializeField]
	private GameObject _otherPlayerTextBackground; // 0x60
	[SerializeField]
	private DuckFestivalLeaderboardElementRankImageSelector _rankImageSelector; // 0x68
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x70
	[SerializeField]
	private UserProfileView _userProfileView; // 0x78

	// Methods

	// RVA: 0x2DE0844 Offset: 0x2DE0844 VA: 0x2DE0844
	public void Awake() { }

	// RVA: 0x2DE084C Offset: 0x2DE084C VA: 0x2DE084C Slot: 7
	public override void Initialize() { }

	// RVA: 0x2DE0850 Offset: 0x2DE0850 VA: 0x2DE0850 Slot: 9
	public override void SetModel(ITeamQuestLeaderboardItemViewModel teamQuestLeaderboardItemViewModel) { }

	// RVA: 0x2DE08D4 Offset: 0x2DE08D4 VA: 0x2DE08D4
	public void SetModelInternal(TeamQuestLeaderboardPlayerViewModel teamQuestLeaderboardViewModel) { }

	// RVA: 0x2DE0A68 Offset: 0x2DE0A68 VA: 0x2DE0A68 Slot: 8
	public override void Recycle() { }

	// RVA: 0x2DE0B24 Offset: 0x2DE0B24 VA: 0x2DE0B24
	public void OnDestroy() { }

	// RVA: 0x2DE0B30 Offset: 0x2DE0B30 VA: 0x2DE0B30
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard
[CreateAssetMenu(fileName = "TeamQuestLeaderboardFactory", menuName = "Factory/TeamQuestLeaderboardFactory")]