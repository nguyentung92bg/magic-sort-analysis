public class TagView : AItemView // TypeDefIndex: 1618
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private TagItemAssets _tagItemAssets; // 0x28
	[SerializeField]
	private SpriteRenderer _rope1Renderer; // 0x30
	[SerializeField]
	private SpriteRenderer _rope2Renderer; // 0x38
	[SerializeField]
	private SpriteRenderer _tagRenderer; // 0x40
	[SerializeField]
	private Animation _tagAnimation; // 0x48

	// Methods

	// RVA: 0x260BF38 Offset: 0x260BF38 VA: 0x260BF38 Slot: 5
	public override void Initialize() { }

	// RVA: 0x260BF3C Offset: 0x260BF3C VA: 0x260BF3C Slot: 6
	public override void Spawn() { }

	// RVA: 0x260B340 Offset: 0x260B340 VA: 0x260B340
	public void Prepare(Sorting sorting, ColorId colorId) { }

	// RVA: 0x260C088 Offset: 0x260C088 VA: 0x260C088 Slot: 7
	public override void Recycle() { }

	// RVA: 0x260B85C Offset: 0x260B85C VA: 0x260B85C
	public void PlayTagShakeAnimation() { }

	// RVA: 0x260B4C8 Offset: 0x260B4C8 VA: 0x260B4C8
	public void PlayBottleMoveTagAnimation(int pourCount, bool isLeft) { }

	// RVA: 0x260C0EC Offset: 0x260C0EC VA: 0x260C0EC Slot: 8
	public override void Show() { }

	// RVA: 0x260C110 Offset: 0x260C110 VA: 0x260C110 Slot: 9
	public override void Hide() { }

	// RVA: 0x260C044 Offset: 0x260C044 VA: 0x260C044
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x260B458 Offset: 0x260B458 VA: 0x260B458
	public void PlayLevelEntranceTagAnimation() { }

	[Button]
	// RVA: 0x260B74C Offset: 0x260B74C VA: 0x260B74C
	public void PlayTagColorFilledOnOtherBottleAnimation() { }

	// RVA: 0x260C134 Offset: 0x260C134 VA: 0x260C134
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey