public class BoatRushBannerUserView : MonoBehaviour // TypeDefIndex: 4850
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
	private TMP_Text _userRank; // 0x48
	[SerializeField]
	private TMP_Text _remainingScore; // 0x50
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

	// RVA: 0x40F6228 Offset: 0x40F6228 VA: 0x40F6228
	public void SetViewModel(BoatRushLeaderboardPlayerViewModel viewModel, int maxReachableScore) { }

	// RVA: 0x40F64EC Offset: 0x40F64EC VA: 0x40F64EC
	public void SetRankView(int rank) { }

	// RVA: 0x40F6544 Offset: 0x40F6544 VA: 0x40F6544
	public Sequence AnimateRankChangeView(int newRank, float scaleDuration, AnimationCurve scaleInCurve, AnimationCurve scaleOutCurve) { }

	// RVA: 0x40F6898 Offset: 0x40F6898 VA: 0x40F6898
	public int GetRank() { }

	// RVA: 0x40F68A0 Offset: 0x40F68A0 VA: 0x40F68A0
	public bool IsMe() { }

	// RVA: 0x40F64A0 Offset: 0x40F64A0 VA: 0x40F64A0
	public void SetRankText(int rank) { }

	// RVA: 0x40F68A8 Offset: 0x40F68A8 VA: 0x40F68A8
	public void SetSortingGroupOrder(int order) { }

	// RVA: 0x40F68C4 Offset: 0x40F68C4 VA: 0x40F68C4
	public void Show() { }

	// RVA: 0x40F68E8 Offset: 0x40F68E8 VA: 0x40F68E8
	public void Hide() { }

	// RVA: 0x40F690C Offset: 0x40F690C VA: 0x40F690C
	public void Dispose() { }

	// RVA: 0x40F6910 Offset: 0x40F6910 VA: 0x40F6910
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]