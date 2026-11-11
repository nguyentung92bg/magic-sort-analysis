public class OtherUserProfilePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2972
{
	// Fields
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x18
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x20
	[SerializeField]
	private ProfileNameStyleView _profileNameStyleView; // 0x28
	[SerializeField]
	private List<Button> _profilePopupCloseButtons; // 0x30
	[SerializeField]
	private TMP_Text _levelText; // 0x38
	[SerializeField]
	private TMP_Text _firstTryWinCountText; // 0x40
	[SerializeField]
	private TMP_Text _weeklyWinCountText; // 0x48
	[SerializeField]
	private TMP_Text _skyJumpWinCountText; // 0x50
	[SerializeField]
	private TMP_Text _helpsMadeText; // 0x58
	[SerializeField]
	private TMP_Text _collectionFinishedText; // 0x60
	[SerializeField]
	private TMP_Text _duckFestWinCountText; // 0x68
	[SerializeField]
	private TMP_Text _jetPackRaceWinsText; // 0x70
	[SerializeField]
	private TMP_Text _boatRushWinCountText; // 0x78
	[Header("Champions League Stats")]
	[SerializeField]
	private TextMeshPro _currentLeagueText; // 0x80
	[SerializeField]
	private SpriteRenderer _currentLeagueCup; // 0x88
	[SerializeField]
	private TextMeshPro _top3WinsText; // 0x90
	[SerializeField]
	private List<TextMeshPro> _masterLeagueWinCountTexts; // 0x98
	[SerializeField]
	private List<Sprite> _masterLeagueCupSprites; // 0xA0
	[SerializeField]
	private TextMeshPro _teamNameText; // 0xA8
	[SerializeField]
	private SpriteRenderer _teamBadge; // 0xB0
	[SerializeField]
	private TeamsBadgeConfig _badgeConfig; // 0xB8
	[SerializeField]
	private Sprite _noTeamBadgeSprite; // 0xC0
	[SerializeField]
	private SpriteRenderer _tokenSpriteRenderer; // 0xC8
	[SerializeField]
	private Button _teamsButton; // 0xD0
	[SerializeField]
	private FriendProfileController _friendProfileController; // 0xD8
	[SerializeField]
	private PopupAnimationController _animationController; // 0xE0
	private Tween _animationTween; // 0xE8
	private OtherUserProfilePopupArguements _args; // 0xF0

	// Methods

	// RVA: 0x2AE1298 Offset: 0x2AE1298 VA: 0x2AE1298 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2AE18F8 Offset: 0x2AE18F8 VA: 0x2AE18F8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2AE19A0 Offset: 0x2AE19A0 VA: 0x2AE19A0 Slot: 6
	public Task Hide() { }

	// RVA: 0x2AE1C24 Offset: 0x2AE1C24 VA: 0x2AE1C24 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2AE18DC Offset: 0x2AE18DC VA: 0x2AE18DC
	private void ShowPopupAsync() { }

	[AsyncStateMachine(typeof(OtherUserProfilePopup.<ClosePopupAsync>d__33))]
	// RVA: 0x2AE1C2C Offset: 0x2AE1C2C VA: 0x2AE1C2C
	private void ClosePopupAsync() { }

	// RVA: 0x2AE1CB8 Offset: 0x2AE1CB8 VA: 0x2AE1CB8
	private void Awake() { }

	// RVA: 0x2AE1EC0 Offset: 0x2AE1EC0 VA: 0x2AE1EC0
	private void OnDestroy() { }

	// RVA: 0x2AE20C8 Offset: 0x2AE20C8 VA: 0x2AE20C8
	private void ClosePopup() { }

	// RVA: 0x2AE20CC Offset: 0x2AE20CC VA: 0x2AE20CC
	private void OnTeamsButtonSelected() { }

	// RVA: 0x2AE1334 Offset: 0x2AE1334 VA: 0x2AE1334
	private void UpdateViews() { }

	// RVA: 0x2AE217C Offset: 0x2AE217C VA: 0x2AE217C
	private void UpdateWinCountText(TMP_Text text, int winCount) { }

	// RVA: 0x2AE234C Offset: 0x2AE234C VA: 0x2AE234C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Profile.Scripts