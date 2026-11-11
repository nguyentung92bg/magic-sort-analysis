public class MergeMiniGameCollectibleItemTutorial : MergeMiniGameTutorialBase // TypeDefIndex: 3630
{
	// Fields
	[SerializeField]
	private int _itemRaycastOrder; // 0x48
	[SerializeField]
	private Transform _cellDefaultParent; // 0x50
	[SerializeField]
	private Transform _itemDefaultParent; // 0x58
	[SerializeField]
	private int _itemDefaultRaycastOrder; // 0x60
	[SerializeField]
	private GameObject _collectibleItemsText; // 0x68
	private MergeBoardCell _collectibleCell; // 0x70
	private readonly List<MergeItem> _highlightedItems; // 0x78
	private TaskCompletionSource<bool> _completionSource; // 0x80

	// Methods

	// RVA: 0x3FB299C Offset: 0x3FB299C VA: 0x3FB299C Slot: 4
	public override Task<bool> TryStartTutorial() { }

	// RVA: 0x3FB3170 Offset: 0x3FB3170 VA: 0x3FB3170
	public void SetTargetCell(MergeBoardCell cell) { }

	// RVA: 0x3FB2D20 Offset: 0x3FB2D20 VA: 0x3FB2D20
	private MergeBoardCell FindCollectibleCell() { }

	// RVA: 0x3FB3178 Offset: 0x3FB3178 VA: 0x3FB3178
	private void OnItemCollected(int setId, int itemLevel, int cellIndex) { }

	// RVA: 0x3FB361C Offset: 0x3FB361C VA: 0x3FB361C Slot: 6
	public override void Dispose() { }

	// RVA: 0x3FB3784 Offset: 0x3FB3784 VA: 0x3FB3784
	private void OnDestroy() { }

	// RVA: 0x3FB2E5C Offset: 0x3FB2E5C VA: 0x3FB2E5C
	private void HighlightCell(MergeBoardCell cell) { }

	// RVA: 0x3FB33D4 Offset: 0x3FB33D4 VA: 0x3FB33D4
	private void ResetCell(MergeBoardCell cell) { }

	// RVA: 0x3FB3890 Offset: 0x3FB3890 VA: 0x3FB3890
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FB3920 Offset: 0x3FB3920 VA: 0x3FB3920
	private void <OnItemCollected>b__11_0() { }
}

// Namespace: 
[CompilerGenerated]