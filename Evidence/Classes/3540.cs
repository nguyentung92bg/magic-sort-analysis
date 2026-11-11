public class MiniGameBoardItemSlot : MonoBehaviour // TypeDefIndex: 3540
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x18
	[SerializeField]
	private Transform _itemPlacementTransform; // 0x20
	private MiniGameBoardBasicItem _slotItem; // 0x28

	// Methods

	// RVA: 0x218AD54 Offset: 0x218AD54 VA: 0x218AD54
	public void Initialize(MiniGameItemData itemData, Vector3 slotPosition, Vector3 slotScale) { }

	// RVA: 0x2188150 Offset: 0x2188150 VA: 0x2188150
	public void SetItem(MiniGameBoardBasicItem item) { }

	// RVA: 0x218ADF4 Offset: 0x218ADF4 VA: 0x218ADF4
	public Tween MoveSlotItemStageCompletedParticlesToTarget(Transform targetTransform) { }

	// RVA: 0x218AE0C Offset: 0x218AE0C VA: 0x218AE0C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]