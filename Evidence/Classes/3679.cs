public class MergeBoard : MonoBehaviour // TypeDefIndex: 3679
{
	// Fields
	[SerializeField]
	private float _cellSnapRadius; // 0x18
	[SerializeField]
	private MergeBoardCell[] _cells; // 0x20
	[SerializeField]
	private MergeItemViewFactory _viewFactory; // 0x28
	[SerializeField]
	private MergeItemsSpriteLibrary _spriteLibrary; // 0x30
	[SerializeField]
	private Transform _itemHolder; // 0x38
	[SerializeField]
	private Transform _collectibleTargetTransform; // 0x40
	private MergeMiniGameSelectionSystem _selectionSystem; // 0x48
	private MergeMiniGameController _controller; // 0x50
	private MergeMiniGameViewModel _viewModel; // 0x58
	private const int Columns = 7;

	// Methods

	// RVA: 0x410CB14 Offset: 0x410CB14 VA: 0x410CB14
	public void Initialize(MergeMiniGameController controller, MergeMiniGameViewModel viewModel) { }

	// RVA: 0x410CF08 Offset: 0x410CF08 VA: 0x410CF08
	public MergeBoardCell[] GetCells() { }

	// RVA: 0x410CC0C Offset: 0x410CC0C VA: 0x410CC0C
	private void InitializeCells() { }

	// RVA: 0x410CC6C Offset: 0x410CC6C VA: 0x410CC6C
	private void InitializeItems() { }

	// RVA: 0x410CF90 Offset: 0x410CF90 VA: 0x410CF90
	public MergeBoardCell GetCell(int position) { }

	// RVA: 0x410D134 Offset: 0x410D134 VA: 0x410D134
	public bool TryGetCellWithWorldPosition(Vector2 worldPos, out MergeBoardCell cell) { }

	// RVA: 0x410D25C Offset: 0x410D25C VA: 0x410D25C
	public void MoveItem(MergeItem movedItem, MergeBoardCell targetCell) { }

	// RVA: 0x410D074 Offset: 0x410D074 VA: 0x410D074
	public void PlaceItemOnCell(MergeItem item, MergeBoardCell cell, bool setPosition = False) { }

	// RVA: 0x410D408 Offset: 0x410D408 VA: 0x410D408
	public void Dispose() { }

	// RVA: 0x410CFE0 Offset: 0x410CFE0 VA: 0x410CFE0
	public MergeItem CreateItem(MergeMiniGameItemViewModel itemViewModel) { }

	// RVA: 0x410D6B8 Offset: 0x410D6B8 VA: 0x410D6B8
	public bool HasEmptySpace() { }

	// RVA: 0x410D774 Offset: 0x410D774 VA: 0x410D774
	public MergeBoardCell GetEmptyCell() { }

	// RVA: 0x410D7E0 Offset: 0x410D7E0 VA: 0x410D7E0
	public List<MergeBoardCell> GetEmptyCells() { }

	// RVA: 0x410D91C Offset: 0x410D91C VA: 0x410D91C
	public MergeBoardCell GetNearestEmptyCell(int positionIndex) { }

	// RVA: 0x410DB8C Offset: 0x410DB8C VA: 0x410DB8C
	private List<Vector2Int> GetClockwisePath(Vector2Int origin, int depth) { }

	// RVA: 0x410DF18 Offset: 0x410DF18 VA: 0x410DF18
	private bool IsInsideBoard(Vector2Int pos) { }

	// RVA: 0x410DF70 Offset: 0x410DF70 VA: 0x410DF70
	private MergeBoardCell GetLeftCell(int index) { }

	// RVA: 0x410DFA8 Offset: 0x410DFA8 VA: 0x410DFA8
	private MergeBoardCell GetRightCell(int index) { }

	// RVA: 0x410DFE4 Offset: 0x410DFE4 VA: 0x410DFE4
	private MergeBoardCell GetUpperCell(int index) { }

	// RVA: 0x410DFEC Offset: 0x410DFEC VA: 0x410DFEC
	private MergeBoardCell GetBellowCell(int index) { }

	// RVA: 0x410E000 Offset: 0x410E000 VA: 0x410E000
	public List<MergeBoardCell> GetNeighbors(int index) { }

	// RVA: 0x410E354 Offset: 0x410E354 VA: 0x410E354
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]