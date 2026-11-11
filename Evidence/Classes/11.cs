public class ChampionsLeagueLobbyButton : MonoBehaviour, ISecondUpdate // TypeDefIndex: 11
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private LobbyIconCollectibleAnimation _lobbyIconCollectibleAnimation; // 0x20
	[SerializeField]
	private GameObject _root; // 0x28
	[SerializeField]
	private Timer _championsLeagueTimer; // 0x30
	[SerializeField]
	private List<ChampionsLeagueLobbyCupView> _cupViews; // 0x38
	[SerializeField]
	private GameObject _preJoinScoreParent; // 0x40
	[SerializeField]
	private TextMeshPro _preJoinScoreText; // 0x48
	[SerializeField]
	private GameObject _leagueScoreParent; // 0x50
	[SerializeField]
	private TextMeshPro _leagueScoreText; // 0x58
	[SerializeField]
	private LobbyIconVariantController _variantController; // 0x60
	private ChampionsLeagueService _championsLeagueService; // 0x68
	private CustomUpdater _customUpdater; // 0x70
	private bool _secondsUpdaterEnabled; // 0x78

	// Methods

	// RVA: 0x19ECC00 Offset: 0x19ECC00 VA: 0x19ECC00
	private void Awake() { }

	// RVA: 0x19ECDD8 Offset: 0x19ECDD8 VA: 0x19ECDD8
	private void OnDestroy() { }

	// RVA: 0x19ECF10 Offset: 0x19ECF10 VA: 0x19ECF10
	private void OnChampionsLeagueEventStateChanged() { }

	// RVA: 0x19ED22C Offset: 0x19ED22C VA: 0x19ED22C
	private void OnEnable() { }

	// RVA: 0x19ED230 Offset: 0x19ED230 VA: 0x19ED230 Slot: 4
	public void SecondUpdate() { }

	// RVA: 0x19ECF14 Offset: 0x19ECF14 VA: 0x19ECF14
	private void UpdateState() { }

	// RVA: 0x19ED274 Offset: 0x19ED274 VA: 0x19ED274
	private void UpdateCupViews(int elo) { }

	[AsyncStateMachine(typeof(ChampionsLeagueLobbyButton.<OnButtonClick>d__20))]
	// RVA: 0x19ED3E0 Offset: 0x19ED3E0 VA: 0x19ED3E0
	private void OnButtonClick() { }

	// RVA: 0x19ED478 Offset: 0x19ED478 VA: 0x19ED478
	public Tween PlayCollectibleAnimation() { }

	// RVA: 0x19ED504 Offset: 0x19ED504 VA: 0x19ED504
	public void .ctor() { }
}

// Namespace: 