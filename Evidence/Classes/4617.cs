public class CollectionThemesPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4617
{
	// Fields
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x18
	[SerializeField]
	private List<CollectionCardView> _cardViews; // 0x20
	[SerializeField]
	private SpriteRenderer _background; // 0x28
	[SerializeField]
	private SpriteRenderer _titleBackground; // 0x30
	[SerializeField]
	private TextMeshPro _titleText; // 0x38
	[SerializeField]
	private CollectionProgressView _progressView; // 0x40
	[SerializeField]
	private Transform _rewardParent; // 0x48
	[SerializeField]
	private TextMeshPro _activePageText; // 0x50
	[SerializeField]
	private Button _nextThemeButton; // 0x58
	[SerializeField]
	private Button _previousThemeButton; // 0x60
	[SerializeField]
	private CollectionCardSendRequestView _sendRequestView; // 0x68
	[SerializeField]
	private ToolbarButton _cardsToolbarButton; // 0x70
	[SerializeField]
	private List<SpriteRenderer> _titleIcons; // 0x78
	private Sprite _titleIcon; // 0x80
	private CollectionViewModel _viewModel; // 0x88
	private List<CollectionThemeData> _allThemesData; // 0x90
	private CollectionThemeData _activeThemeData; // 0x98
	private int _activeThemeIndex; // 0xA0
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0xA8
	private const string card_tooltip_localization_term = "CollectionCollectCardsToSet";

	// Methods

	// RVA: 0x3A6E45C Offset: 0x3A6E45C VA: 0x3A6E45C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A6E738 Offset: 0x3A6E738 VA: 0x3A6E738
	private void OnCardClicked(int cardIndex) { }

	// RVA: 0x3A6E708 Offset: 0x3A6E708 VA: 0x3A6E708
	private void UpdateVisuals() { }

	// RVA: 0x3A6E800 Offset: 0x3A6E800 VA: 0x3A6E800
	private void UpdatePopupVisuals() { }

	// RVA: 0x3A6EA28 Offset: 0x3A6EA28 VA: 0x3A6EA28
	private void UpdateProgress() { }

	// RVA: 0x3A6EBAC Offset: 0x3A6EBAC VA: 0x3A6EBAC
	private void UpdateCardVisuals() { }

	// RVA: 0x3A6ECA0 Offset: 0x3A6ECA0 VA: 0x3A6ECA0
	private void UpdatePageText() { }

	// RVA: 0x3A6F05C Offset: 0x3A6F05C VA: 0x3A6F05C
	private void OnNextThemeButtonClicked() { }

	// RVA: 0x3A6F0F0 Offset: 0x3A6F0F0 VA: 0x3A6F0F0
	private void OnPreviousThemeButtonClicked() { }

	// RVA: 0x3A6ED7C Offset: 0x3A6ED7C VA: 0x3A6ED7C
	private void MarkActiveThemeCardsAsSeen() { }

	// RVA: 0x3A6F188 Offset: 0x3A6F188 VA: 0x3A6F188 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A6F264 Offset: 0x3A6F264 VA: 0x3A6F264 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A6F318 Offset: 0x3A6F318 VA: 0x3A6F318 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A6F320 Offset: 0x3A6F320 VA: 0x3A6F320
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A6F328 Offset: 0x3A6F328 VA: 0x3A6F328
	private bool <UpdateProgress>b__24_0(CollectionThemeRewardModel reward) { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI
[CreateAssetMenu(fileName = "CollectionThemeSpriteLibrary", menuName = "Configs/CollectionThemeSpriteLibrary")]
[Serializable]