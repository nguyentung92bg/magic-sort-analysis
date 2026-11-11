public class CollectionController : MonoBehaviour // TypeDefIndex: 4590
{
	// Fields
	[SerializeField]
	private Transform _mainContainer; // 0x18
	[SerializeField]
	private Transform _comingSoonContainer; // 0x20
	[SerializeField]
	private CollectionView _collectionUI; // 0x28
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x30
	[SerializeField]
	private ProfileSpriteConfig _profileSpriteConfig; // 0x38
	[SerializeField]
	private CollectionThemeView[] _themeViews; // 0x40
	[SerializeField]
	private CollectionProgressView _progressView; // 0x48
	[SerializeField]
	private ScrollBar _scrollBar; // 0x50
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x58
	[SerializeField]
	private CollectionThemeScrollViewAdapter _scrollViewAdapter; // 0x60
	[SerializeField]
	private CollectionThemeScrollContainerView _scrollContainerView; // 0x68
	[SerializeField]
	private TextMeshPro _collectionCoinRewardsText; // 0x70
	[SerializeField]
	private TextMeshPro _collectionBoosterRewardsText; // 0x78
	[SerializeField]
	private SpriteRenderer _collectionTokenRenderer; // 0x80
	[SerializeField]
	private Transform _coinReward; // 0x88
	[SerializeField]
	private Transform _boosterReward; // 0x90
	[SerializeField]
	private Transform _coinRewardWithTokenAnchor; // 0x98
	[SerializeField]
	private Transform _boosterRewardWithTokenAnchor; // 0xA0
	[SerializeField]
	private Transform _coinRewardNoTokenAnchor; // 0xA8
	[SerializeField]
	private Transform _boosterRewardNoTokenAnchor; // 0xB0
	[SerializeField]
	private Button _bonusChestButton; // 0xB8
	[SerializeField]
	private Button _infoButton; // 0xC0
	[SerializeField]
	private Button _tokenButton; // 0xC8
	[SerializeField]
	private ToolbarButton _chestToolbarButton; // 0xD0
	[SerializeField]
	private ToolbarButton _cardsToolbarButton; // 0xD8
	[SerializeField]
	private TextMeshPro _comingSoonText; // 0xE0
	[SerializeField]
	private Timer _timer; // 0xE8
	private CollectionService _service; // 0xF0
	private CollectionViewModel _viewModel; // 0xF8
	private CollectionThemeSpriteLibrary _collectionThemeSpriteLibrary; // 0x100
	private const string coming_soon_localization_term = "CollectionNewComingSoon";
	private const string unlock_localization_term = "CollectionUnlock";
	private const string cards_tooltip_text = "CollectionCollectCardsToComplete";

	// Methods

	// RVA: 0x3A662F0 Offset: 0x3A662F0 VA: 0x3A662F0
	public void Initialize() { }

	// RVA: 0x3A667B8 Offset: 0x3A667B8 VA: 0x3A667B8
	public void Dispose() { }

	// RVA: 0x3A66534 Offset: 0x3A66534 VA: 0x3A66534
	private void UpdateView() { }

	// RVA: 0x3A66B6C Offset: 0x3A66B6C VA: 0x3A66B6C
	private void InitializeUI() { }

	// RVA: 0x3A66B8C Offset: 0x3A66B8C VA: 0x3A66B8C
	private void InitializeThemes() { }

	// RVA: 0x3A676F0 Offset: 0x3A676F0 VA: 0x3A676F0
	private void UpdateScrollbar() { }

	// RVA: 0x3A66C98 Offset: 0x3A66C98 VA: 0x3A66C98
	private void InitializeRewards() { }

	// RVA: 0x3A670A8 Offset: 0x3A670A8 VA: 0x3A670A8
	private void InitializeProgress() { }

	// RVA: 0x3A6699C Offset: 0x3A6699C VA: 0x3A6699C
	private void SetComingSoonViewActive(bool isActive) { }

	// RVA: 0x3A679D4 Offset: 0x3A679D4 VA: 0x3A679D4
	private void OnPageSelected(PageType pageType) { }

	// RVA: 0x3A67A34 Offset: 0x3A67A34 VA: 0x3A67A34
	private void OnBonusChestClicked() { }

	// RVA: 0x3A67B04 Offset: 0x3A67B04 VA: 0x3A67B04
	private void OnInfoButtonClicked() { }

	// RVA: 0x3A67BEC Offset: 0x3A67BEC VA: 0x3A67BEC
	private void OnTokenClicked() { }

	// RVA: 0x3A67170 Offset: 0x3A67170 VA: 0x3A67170
	private void UpdateTimerView(DateTime endDate) { }

	// RVA: 0x3A67D4C Offset: 0x3A67D4C VA: 0x3A67D4C
	public void Show() { }

	// RVA: 0x3A67D50 Offset: 0x3A67D50 VA: 0x3A67D50
	public void Hide() { }

	// RVA: 0x3A67D54 Offset: 0x3A67D54 VA: 0x3A67D54
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A67D5C Offset: 0x3A67D5C VA: 0x3A67D5C
	private bool <InitializeRewards>b__39_2(ProfileTokenSprite token) { }
}

// Namespace: 
[CompilerGenerated]