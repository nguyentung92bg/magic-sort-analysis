public class ItemPartGenerator : IGenerator<AItemPart> // TypeDefIndex: 1544
{
	// Fields
	private readonly ItemPartType _itemPartType; // 0x10
	private readonly AItemPartView _itemPartViewPrefab; // 0x18
	private readonly ITransform _parent; // 0x20

	// Methods

	// RVA: 0x2300E98 Offset: 0x2300E98 VA: 0x2300E98
	public void .ctor(ItemPartType itemPartType, AItemPartView itemPartViewPrefab, ITransform parent) { }

	// RVA: 0x2301494 Offset: 0x2301494 VA: 0x2301494 Slot: 4
	public AItemPart Generate() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation
[CreateAssetMenu(fileName = "ItemPartPairs", menuName = "Factory/ItemPartPairs")]