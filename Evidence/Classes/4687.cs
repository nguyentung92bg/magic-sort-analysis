public class ChampionsLeaguePromotionAnimationHandler : MonoBehaviour // TypeDefIndex: 4687
{
	// Fields
	[SerializeField]
	private Transform _parent; // 0x18
	[SerializeField]
	private float _scrollAmountPerCup; // 0x20
	[SerializeField]
	private List<ChampionsLeaguePromotionCupView> _cupViews; // 0x28
	[SerializeField]
	private List<GameObject> _arrows; // 0x30
	[SerializeField]
	private FloatOptions _scrollOptions; // 0x38
	[SerializeField]
	private GameObject _congratulationsParent; // 0x40
	[SerializeField]
	private List<Fadeable> _congratulationsFadeables; // 0x48
	[SerializeField]
	private FloatOptions _congratulationsFadeOptions; // 0x50
	[SerializeField]
	private GameObject _winParent; // 0x58
	[SerializeField]
	private List<Fadeable> _winFadeables; // 0x60
	[SerializeField]
	private FloatOptions _winFadeOptions; // 0x68
	[SerializeField]
	private Vector2Options _winMoveOptions; // 0x70
	[SerializeField]
	private GameObject _staleParent; // 0x78
	[SerializeField]
	private TextMeshPro _leagueNameText; // 0x80
	[SerializeField]
	private TextMeshPro _winDescriptionText; // 0x88
	[SerializeField]
	private TextMeshPro _staleLeagueNameText; // 0x90
	[SerializeField]
	private TextMeshPro _staleDescriptionText; // 0x98
	[SerializeField]
	private TextMeshPro _loseDescriptionText; // 0xA0
	[SerializeField]
	private TextMeshPro _rankText; // 0xA8
	[SerializeField]
	private float _particleActivationTime; // 0xB0
	[SerializeField]
	private float _winBlastActivationTime; // 0xB4

	// Methods

	[Button]
	// RVA: 0x3B1FCD0 Offset: 0x3B1FCD0 VA: 0x3B1FCD0
	public void Initialize(PromotionInfo info, int rank, string localizedLeagueName, int minRankToMoveUp) { }

	// RVA: 0x3B210A4 Offset: 0x3B210A4 VA: 0x3B210A4
	private void SetScrollPosition(int index) { }

	// RVA: 0x3B21110 Offset: 0x3B21110 VA: 0x3B21110
	private Tween GetScrollTween(int index) { }

	// RVA: 0x3B214A8 Offset: 0x3B214A8 VA: 0x3B214A8
	private float GetScrollPosition(int index) { }

	// RVA: 0x3B214B8 Offset: 0x3B214B8 VA: 0x3B214B8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI