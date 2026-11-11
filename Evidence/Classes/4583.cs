public class CollectionCardView : BasicView // TypeDefIndex: 4583
{
	// Fields
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x28
	[SerializeField]
	[Header("Locked View")]
	private Transform _lockedViewParent; // 0x30
	[SerializeField]
	private TextMeshPro _lockedCardNameText; // 0x38
	[SerializeField]
	private Transform[] _lockedStars; // 0x40
	[SerializeField]
	private Transform _lockedNormalFrame; // 0x48
	[SerializeField]
	private Transform _lockedGoldFrame; // 0x50
	[SerializeField]
	[Header("Unlocked View")]
	private Transform _unlockedViewParent; // 0x58
	[SerializeField]
	private TextMeshPro _unlockedCardNameText; // 0x60
	[SerializeField]
	private Transform _unlockedNormalFrame; // 0x68
	[SerializeField]
	private Transform _unlockedGoldFrame; // 0x70
	[SerializeField]
	private Transform[] _unlockedStars; // 0x78
	[SerializeField]
	private Transform _newCardBadge; // 0x80
	[SerializeField]
	private TextMeshPro _extraCardCountText; // 0x88
	[SerializeField]
	private SpriteRenderer _extraCardCountRenderer; // 0x90
	[SerializeField]
	private SpriteRenderer _cardIconRenderer; // 0x98
	[SerializeField]
	private SpriteRenderer _cardNameBackgroundRenderer; // 0xA0
	[SerializeField]
	private Button _button; // 0xA8
	[SerializeField]
	[Header("Pack Open Animation")]
	private ParticleSystem _cardClaimParticle; // 0xB0
	[SerializeField]
	private ParticleSystem _spawnStarParticle; // 0xB8
	[SerializeField]
	private SortingGroup _sortingGroup; // 0xC0
	private CollectionCardData _cardData; // 0xC8
	private bool _isLocked; // 0xD0
	private bool _isNew; // 0xD1
	private int _defaultSortOrder; // 0xD4
	private CollectionService _service; // 0xD8
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0xE0

	// Properties
	public override int Id { get; set; }

	// Methods

	// RVA: 0x3776BBC Offset: 0x3776BBC VA: 0x3776BBC
	public void Initialize(CollectionCardData cardData, Sprite cardIcon) { }

	// RVA: 0x377A6EC Offset: 0x377A6EC VA: 0x377A6EC
	private void InitializeLockedView(CollectionCardData cardData) { }

	// RVA: 0x377A7F8 Offset: 0x377A7F8 VA: 0x377A7F8
	private void InitializeUnlockedView(CollectionCardData cardData, Sprite cardIcon) { }

	// RVA: 0x3776CD0 Offset: 0x3776CD0 VA: 0x3776CD0
	public void SetLockedViewActive(bool isActive) { }

	// RVA: 0x3776D00 Offset: 0x3776D00 VA: 0x3776D00
	public void SetUnlockedViewActive(bool isActive) { }

	// RVA: 0x377AB28 Offset: 0x377AB28 VA: 0x377AB28
	public bool IsLocked() { }

	// RVA: 0x377AB30 Offset: 0x377AB30 VA: 0x377AB30
	public bool IsNew() { }

	// RVA: 0x377AAF8 Offset: 0x377AAF8 VA: 0x377AAF8
	public void SetExtraCardCountActive(bool isActive) { }

	// RVA: 0x3778FA8 Offset: 0x3778FA8 VA: 0x3778FA8
	public void PlaySpawnStarClaimParticle() { }

	// RVA: 0x3779028 Offset: 0x3779028 VA: 0x3779028
	public void StopSpawnStarClaimParticle() { }

	// RVA: 0x3778EE0 Offset: 0x3778EE0 VA: 0x3778EE0
	public void PlayClaimParticle() { }

	// RVA: 0x3778F40 Offset: 0x3778F40 VA: 0x3778F40
	public void StopClaimParticle() { }

	// RVA: 0x377AB38 Offset: 0x377AB38 VA: 0x377AB38
	public CollectionCardData GetCardData() { }

	// RVA: 0x377AB40 Offset: 0x377AB40 VA: 0x377AB40
	public Button GetButton() { }

	// RVA: 0x377AB48 Offset: 0x377AB48 VA: 0x377AB48
	public void IncreaseSortOrder(int delta) { }

	[CompilerGenerated]
	// RVA: 0x377AB84 Offset: 0x377AB84 VA: 0x377AB84 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x377AB8C Offset: 0x377AB8C VA: 0x377AB8C Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x377AB94 Offset: 0x377AB94 VA: 0x377AB94 Slot: 7
	public override void Initialize() { }

	// RVA: 0x377AB98 Offset: 0x377AB98 VA: 0x377AB98 Slot: 8
	public override void Recycle() { }

	// RVA: 0x377AC60 Offset: 0x377AC60 VA: 0x377AC60
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI
[CreateAssetMenu(fileName = "CollectionCardViewFactory", menuName = "Factory/CollectionCardViewFactory")]