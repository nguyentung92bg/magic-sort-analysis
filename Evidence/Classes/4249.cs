public class JetpackRaceBannerUserView : MonoBehaviour // TypeDefIndex: 4249
{
	// Fields
	[SerializeField]
	private SpriteRenderer _backgroundRenderer; // 0x18
	[SerializeField]
	private SpriteRenderer _numberBackgroundRenderer; // 0x20
	[SerializeField]
	private Sprite _userBackground; // 0x28
	[SerializeField]
	private Sprite _defaultBackground; // 0x30
	[SerializeField]
	private Sprite _defaultNumberBackground; // 0x38
	[SerializeField]
	private Sprite _userNumberBackground; // 0x40
	[SerializeField]
	private TextMeshPro _userName; // 0x48
	[SerializeField]
	private TextMeshPro _userRank; // 0x50
	[SerializeField]
	private TextMeshPro _remainingScore; // 0x58
	[SerializeField]
	private GameObject _goldMedal; // 0x60
	[SerializeField]
	private GameObject _defaultMedal; // 0x68
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x70
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x78
	private bool _isMe; // 0x80
	private int _score; // 0x84
	private int _rank; // 0x88

	// Methods

	// RVA: 0x1C673BC Offset: 0x1C673BC VA: 0x1C673BC
	public void SetViewModel(JetpackRaceLeaderboardPlayerViewModel viewModel) { }

	// RVA: 0x1C67650 Offset: 0x1C67650 VA: 0x1C67650
	public void SetRankView(int rank) { }

	// RVA: 0x1C676A8 Offset: 0x1C676A8 VA: 0x1C676A8
	public Sequence AnimateRankChangeView(int newRank, float scaleDuration, AnimationCurve scaleInCurve, AnimationCurve scaleOutCurve) { }

	// RVA: 0x1C679FC Offset: 0x1C679FC VA: 0x1C679FC
	public int GetRank() { }

	// RVA: 0x1C67A04 Offset: 0x1C67A04 VA: 0x1C67A04
	public bool IsMe() { }

	// RVA: 0x1C67604 Offset: 0x1C67604 VA: 0x1C67604
	public void SetRankText(int rank) { }

	// RVA: 0x1C67A0C Offset: 0x1C67A0C VA: 0x1C67A0C
	public void SetSortingGroupOrder(int order) { }

	// RVA: 0x1C67A28 Offset: 0x1C67A28 VA: 0x1C67A28
	public void Show() { }

	// RVA: 0x1C67A4C Offset: 0x1C67A4C VA: 0x1C67A4C
	public void Hide() { }

	// RVA: 0x1C67A70 Offset: 0x1C67A70 VA: 0x1C67A70
	public void Dispose() { }

	// RVA: 0x1C67A74 Offset: 0x1C67A74 VA: 0x1C67A74
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]