public class CollectionBonusChestPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4568
{
	// Fields
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x18
	[SerializeField]
	private TextMeshPro _starCountText; // 0x20
	[SerializeField]
	private List<CollectionBonusChestBuyButton> _chestButtons; // 0x28
	[SerializeField]
	private List<ToolbarButton> _toolbarButtons; // 0x30
	[SerializeField]
	private TextMeshPro _collectionNameText; // 0x38
	[SerializeField]
	private List<SpriteRenderer> _titleIcons; // 0x40
	[SerializeField]
	private SpriteRenderer _titleFrame; // 0x48
	[SerializeField]
	private SpriteRenderer _popUpBackground; // 0x50
	[SerializeField]
	private SpriteRenderer _popUpBanner; // 0x58
	[SerializeField]
	private SpriteRenderer _youHaveContentFrame; // 0x60
	[SerializeField]
	private SpriteRenderer _youHaveContentBorder; // 0x68
	[SerializeField]
	private SpriteRenderer _youHaveContentInner; // 0x70
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x78
	private CollectionThemeSpriteLibrary _collectionThemeSpriteLibrary; // 0x80

	// Methods

	// RVA: 0x37757B4 Offset: 0x37757B4 VA: 0x37757B4 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3775BB0 Offset: 0x3775BB0 VA: 0x3775BB0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3775C8C Offset: 0x3775C8C VA: 0x3775C8C Slot: 6
	public Task Hide() { }

	// RVA: 0x3775D40 Offset: 0x3775D40 VA: 0x3775D40 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3775D48 Offset: 0x3775D48 VA: 0x3775D48
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI