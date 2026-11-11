public class JetpackRaceWithStageBannerUserView : MonoBehaviour // TypeDefIndex: 4163
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
	private TextMeshPro _userRank; // 0x48
	[SerializeField]
	private TextMeshPro _remainingScore; // 0x50
	[SerializeField]
	private GameObject _goldMedal; // 0x58
	[SerializeField]
	private GameObject _defaultMedal; // 0x60
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x68
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x70
	[SerializeField]
	private ProfileFrameView _profileFrameView; // 0x78
	[SerializeField]
	private ProfileNameStyleView _profileNameStyleView; // 0x80
	private bool _isMe; // 0x88
	private int _score; // 0x8C
	private int _rank; // 0x90

	// Methods

	// RVA: 0x3B0A8FC Offset: 0x3B0A8FC VA: 0x3B0A8FC
	public void SetViewModel(JetpackRaceWithStageLeaderboardPlayerViewModel viewModel) { }

	// RVA: 0x3B0ABB8 Offset: 0x3B0ABB8 VA: 0x3B0ABB8
	public void SetRankView(int rank) { }

	// RVA: 0x3B0AC10 Offset: 0x3B0AC10 VA: 0x3B0AC10
	public Sequence AnimateRankChangeView(int newRank, float scaleDuration, AnimationCurve scaleInCurve, AnimationCurve scaleOutCurve) { }

	// RVA: 0x3B0AF64 Offset: 0x3B0AF64 VA: 0x3B0AF64
	public int GetRank() { }

	// RVA: 0x3B0AF6C Offset: 0x3B0AF6C VA: 0x3B0AF6C
	public bool IsMe() { }

	// RVA: 0x3B0AB6C Offset: 0x3B0AB6C VA: 0x3B0AB6C
	public void SetRankText(int rank) { }

	// RVA: 0x3B0AF74 Offset: 0x3B0AF74 VA: 0x3B0AF74
	public void SetSortingGroupOrder(int order) { }

	// RVA: 0x3B0AF90 Offset: 0x3B0AF90 VA: 0x3B0AF90
	public void Show() { }

	// RVA: 0x3B0AFB4 Offset: 0x3B0AFB4 VA: 0x3B0AFB4
	public void Hide() { }

	// RVA: 0x3B0AFD8 Offset: 0x3B0AFD8 VA: 0x3B0AFD8
	public void Dispose() { }

	// RVA: 0x3B0AFDC Offset: 0x3B0AFDC VA: 0x3B0AFDC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]