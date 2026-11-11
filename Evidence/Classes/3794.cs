public class MagicStreakTournamentLeaderboardElement : BasicView // TypeDefIndex: 3794
{
	// Fields
	[SerializeField]
	private int _id; // 0x24
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private MagicStreakTournamentSpriteConfig _spriteConfig; // 0x30
	[SerializeField]
	public TextMeshPro _userNameText; // 0x38
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x40
	[SerializeField]
	private MagicStreakTournamentLeaderboardElementMedalView _medalView; // 0x48
	[SerializeField]
	private MagicStreakTournamentLeaderboardElementBackgroundView _backgroundView; // 0x50
	[SerializeField]
	private MagicStreakTournamentLeaderboardElementRewardView _rewardView; // 0x58
	[SerializeField]
	private MagicStreakTournamentLeaderboardElementRewardImage _hatImage; // 0x60
	private static readonly int ShineLocation; // 0x0

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	// RVA: 0x3E155A8 Offset: 0x3E155A8 VA: 0x3E155A8
	public void Awake() { }

	// RVA: 0x3E155B0 Offset: 0x3E155B0 VA: 0x3E155B0
	public void SetModel(MagicStreakTournamentLeaderboardPlayerViewModel playerViewModel) { }

	// RVA: 0x3E1598C Offset: 0x3E1598C VA: 0x3E1598C
	public void UpdateHatCountTween(int currentCount, int targetCount, float duration) { }

	// RVA: 0x3E15B98 Offset: 0x3E15B98 VA: 0x3E15B98
	public void AnimateRankChange(int currentRankIndex, int newRankIndex, float calculateScrollDuration) { }

	// RVA: 0x3E15DA4 Offset: 0x3E15DA4 VA: 0x3E15DA4
	public void SetHatCountForRankUpAnim(int count) { }

	// RVA: 0x3E15DBC Offset: 0x3E15DBC VA: 0x3E15DBC
	public void SetAndPlayShineEffect(float duration) { }

	// RVA: 0x3E15F94 Offset: 0x3E15F94 VA: 0x3E15F94
	public void AddSortingGroup(string popupGroup, int index) { }

	// RVA: 0x3E1608C Offset: 0x3E1608C VA: 0x3E1608C
	public void RemoveSortingGroup() { }

	// RVA: 0x3E16148 Offset: 0x3E16148 VA: 0x3E16148 Slot: 5
	public override int get_Id() { }

	// RVA: 0x3E16150 Offset: 0x3E16150 VA: 0x3E16150 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3E16158 Offset: 0x3E16158 VA: 0x3E16158
	public Vector3 get_Size() { }

	// RVA: 0x3E16180 Offset: 0x3E16180 VA: 0x3E16180 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3E16184 Offset: 0x3E16184 VA: 0x3E16184
	public void OnDestroy() { }

	// RVA: 0x3E16190 Offset: 0x3E16190 VA: 0x3E16190 Slot: 8
	public override void Recycle() { }

	// RVA: 0x3E161DC Offset: 0x3E161DC VA: 0x3E161DC
	public void SetRankDisplay(int rank) { }

	// RVA: 0x3E1624C Offset: 0x3E1624C VA: 0x3E1624C
	public void .ctor() { }

	// RVA: 0x3E16254 Offset: 0x3E16254 VA: 0x3E16254
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.Leaderboard