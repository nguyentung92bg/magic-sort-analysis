public class TeamsAskCardThemeView : BasicView // TypeDefIndex: 2153
{
	// Fields
	[SerializeField]
	private TMP_Text _themeNameText; // 0x28
	[SerializeField]
	private TMP_Text _cardCountText; // 0x30
	[SerializeField]
	private SpriteRenderer _headerRenderer; // 0x38
	[SerializeField]
	private Transform _cardsHolder; // 0x40
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x48
	[SerializeField]
	private CollectionCardViewFactory _cardViewFactory; // 0x50
	[SerializeField]
	private TeamsAskCardThemeView.CardPlacementSettings _placementSettings; // 0x58
	[SerializeField]
	private CollectionCardView[] _cards; // 0x80
	[SerializeField]
	private TeamsAskCardViewButton[] _buttons; // 0x88
	private string _selectedCardId; // 0x90
	private TeamsAskCardThemeViewModel _viewModel; // 0x98
	private CollectionService _collectionService; // 0xA0
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0xA8

	// Properties
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3451B60 Offset: 0x3451B60 VA: 0x3451B60 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x3451B68 Offset: 0x3451B68 VA: 0x3451B68 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x3451B70 Offset: 0x3451B70 VA: 0x3451B70 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3451B74 Offset: 0x3451B74 VA: 0x3451B74
	public Vector3 GetSizeByCardCount(int cardCount) { }

	// RVA: 0x3451C38 Offset: 0x3451C38 VA: 0x3451C38 Slot: 8
	public override void Recycle() { }

	// RVA: 0x34513F4 Offset: 0x34513F4 VA: 0x34513F4
	public void SetViewModel(TeamsAskCardThemeViewModel viewModel) { }

	// RVA: 0x3451F90 Offset: 0x3451F90 VA: 0x3451F90
	private void Awake() { }

	// RVA: 0x34520F0 Offset: 0x34520F0 VA: 0x34520F0
	private void OnDestroy() { }

	// RVA: 0x3451CA0 Offset: 0x3451CA0 VA: 0x3451CA0
	private void InitializeHeaderBg() { }

	// RVA: 0x3451D0C Offset: 0x3451D0C VA: 0x3451D0C
	private void InitializeMissingCards() { }

	// RVA: 0x345201C Offset: 0x345201C VA: 0x345201C
	private void SubscribeToCardSelected() { }

	// RVA: 0x34520F4 Offset: 0x34520F4 VA: 0x34520F4
	private void UnsubscribeFromCardSelected() { }

	// RVA: 0x3452360 Offset: 0x3452360 VA: 0x3452360
	private void OnCardSelected(CollectionCardData cardData, TeamsAskCardViewButton selectedButton) { }

	[Button]
	// RVA: 0x345253C Offset: 0x345253C VA: 0x345253C
	private void InitialzeViewsEditor() { }

	// RVA: 0x34527C0 Offset: 0x34527C0 VA: 0x34527C0
	public string GetSelectedCardId() { }

	// RVA: 0x34527C8 Offset: 0x34527C8 VA: 0x34527C8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI