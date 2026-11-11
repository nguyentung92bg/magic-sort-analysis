public class ProfilePopupGeneralStatsView : MonoBehaviour // TypeDefIndex: 2950
{
	// Fields
	[Header("General Stats")]
	[SerializeField]
	private TextMeshPro _firstTryWinCountText; // 0x18
	[SerializeField]
	private TextMeshPro _weeklyWinCountText; // 0x20
	[SerializeField]
	private TextMeshPro _skyJumpWinCountText; // 0x28
	[SerializeField]
	private TextMeshPro _helpsMadeText; // 0x30
	[SerializeField]
	private TextMeshPro _collectionFinishedText; // 0x38
	[SerializeField]
	private TextMeshPro _duckFestWinCountText; // 0x40
	[SerializeField]
	private TextMeshPro _mergeBakeryWinCountText; // 0x48
	[SerializeField]
	private TextMeshPro _boatRushWinCountText; // 0x50
	[SerializeField]
	private TextMeshPro _jetpackRaceWinCountText; // 0x58
	[Header("Champions League Stats")]
	[SerializeField]
	private TextMeshPro _currentLeagueText; // 0x60
	[SerializeField]
	private SpriteRenderer _currentLeagueCup; // 0x68
	[SerializeField]
	private TextMeshPro _top3WinsText; // 0x70
	[SerializeField]
	private List<Sprite> _masterLeagueCupSprites; // 0x78
	[SerializeField]
	private List<TextMeshPro> _masterLeagueWinCountTexts; // 0x80

	// Methods

	// RVA: 0x298C8FC Offset: 0x298C8FC VA: 0x298C8FC
	private void OnEnable() { }

	// RVA: 0x298CD80 Offset: 0x298CD80 VA: 0x298CD80
	private void UpdateWinCountText(TextMeshPro text, int winCount) { }

	// RVA: 0x298CE60 Offset: 0x298CE60 VA: 0x298CE60
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]