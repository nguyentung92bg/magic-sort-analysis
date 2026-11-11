public class ItemPairs : ScriptableObject // TypeDefIndex: 1549
{
	// Fields
	[SerializeField]
	public List<ItemPair> _pairs; // 0x18

	// Methods

	// RVA: 0x2304620 Offset: 0x2304620 VA: 0x2304620
	public static AItem GenerateItem(ItemType itemType) { }

	// RVA: 0x2304C5C Offset: 0x2304C5C VA: 0x2304C5C
	public static ItemType ToItemType(int itemId) { }

	// RVA: 0x2304C7C Offset: 0x2304C7C VA: 0x2304C7C
	public static int ToItemId(ItemType itemType) { }

	// RVA: 0x2304CA0 Offset: 0x2304CA0 VA: 0x2304CA0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation