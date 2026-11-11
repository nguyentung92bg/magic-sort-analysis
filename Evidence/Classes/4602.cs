public class CollectionPackOpeningAnimationHandler : MonoBehaviour // TypeDefIndex: 4602
{
	// Fields
	[SerializeField]
	private CollectionAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private CollectionCardViewFactory _collectionCardViewFactory; // 0x20
	[SerializeField]
	private CollectionCardPackVisualsConfig _collectionCardPackVisualsConfig; // 0x28
	[SerializeField]
	private SpriteRenderer _packIconSpriteRenderer; // 0x30
	[SerializeField]
	private SpriteRenderer _packBaseSpriteRenderer; // 0x38
	[SerializeField]
	private SpriteRenderer _packBaseBackSpriteRenderer; // 0x40
	[SerializeField]
	private SpriteRenderer _packCapSpriteRenderer; // 0x48
	[SerializeField]
	private SpriteRenderer _packShadowSpriteRenderer; // 0x50
	[SerializeField]
	private Transform _packVisualsContainer; // 0x58
	[SerializeField]
	private Transform _packCardsSpawnParent; // 0x60
	[SerializeField]
	private CollectionCardStarView _starViewPrefab; // 0x68
	[SerializeField]
	private Animation _animation; // 0x70
	private List<CollectionCardView> _cardViews; // 0x78
	private List<CollectionCardStarView> _starViews; // 0x80
	private Vector3 _packCapDefaultPosition; // 0x88
	private Vector3 _packBaseDefaultPosition; // 0x94
	private Vector3 _cardsSpawnParentDefaultPosition; // 0xA0
	private Vector3 _cardsSpawnParentDefaultScale; // 0xAC

	// Methods

	// RVA: 0x3A69018 Offset: 0x3A69018 VA: 0x3A69018
	private void Awake() { }

	// RVA: 0x3A690BC Offset: 0x3A690BC VA: 0x3A690BC
	public Tween PlayCardPackOpenSequence(OpenedCardPackData openedCardPack, List<Transform> layoutParent) { }

	// RVA: 0x3A69F4C Offset: 0x3A69F4C VA: 0x3A69F4C
	public Tween OpenPackInstantly() { }

	// RVA: 0x3A6A2DC Offset: 0x3A6A2DC VA: 0x3A6A2DC
	public Tween PlayCardPackClaimSequence(Transform duplicatedStarsMoveTransform) { }

	// RVA: 0x3A694A0 Offset: 0x3A694A0 VA: 0x3A694A0
	private void CreateCardViews(OpenedCardPackData openedCardPack) { }

	// RVA: 0x3A6AC1C Offset: 0x3A6AC1C VA: 0x3A6AC1C
	private void UpdatePackSprites(OpenedCardPackData openedCardPack) { }

	// RVA: 0x3A69A50 Offset: 0x3A69A50 VA: 0x3A69A50
	private Tween MoveCardsToLayout(List<Transform> targetLayoutParent) { }

	// RVA: 0x3A6A364 Offset: 0x3A6A364 VA: 0x3A6A364
	private Tween ScaleOutDuplicatedCards(Transform duplicatedStarsMoveTransform) { }

	// RVA: 0x3A6ACFC Offset: 0x3A6ACFC VA: 0x3A6ACFC
	private void CreateDuplicatedCarStarView(CollectionCardView cardView) { }

	// RVA: 0x3A6AEB4 Offset: 0x3A6AEB4 VA: 0x3A6AEB4
	public Tween CompleteOpenPackAnimationInstantly() { }

	// RVA: 0x3A6AF84 Offset: 0x3A6AF84 VA: 0x3A6AF84
	public void Dispose() { }

	// RVA: 0x3A6B324 Offset: 0x3A6B324 VA: 0x3A6B324
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A6B32C Offset: 0x3A6B32C VA: 0x3A6B32C
	private void <MoveCardsToLayout>b__24_0() { }

	[CompilerGenerated]
	// RVA: 0x3A6B350 Offset: 0x3A6B350 VA: 0x3A6B350
	private void <CompleteOpenPackAnimationInstantly>b__27_0() { }
}

// Namespace: 