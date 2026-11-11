public class ItemGenerator : IGenerator<AItem> // TypeDefIndex: 1548
{
	// Fields
	private readonly ItemType _itemType; // 0x10
	private readonly AItemView _itemViewPrefab; // 0x18
	private readonly ITransform _parent; // 0x20

	// Methods

	// RVA: 0x2301BC4 Offset: 0x2301BC4 VA: 0x2301BC4
	public void .ctor(ItemType itemType, AItemView itemViewPrefab, ITransform parent) { }

	// RVA: 0x2304508 Offset: 0x2304508 VA: 0x2304508 Slot: 4
	public AItem Generate() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation
[CreateAssetMenu(fileName = "Items", menuName = "Factory/Items")]