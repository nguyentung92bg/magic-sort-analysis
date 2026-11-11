public class MiniGameBoard : MonoBehaviour // TypeDefIndex: 3529
{
	// Fields
	[SerializeField]
	private Transform _itemsParent; // 0x18
	[SerializeField]
	private TextMeshPro _keyCountText; // 0x20
	[SerializeField]
	private Animation _animation; // 0x28
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x30
	private MiniGameController _controller; // 0x38
	private MiniGameBoardCell[] _cells; // 0x40
	private MiniGameBoardItem[] _items; // 0x48
	private MiniGameBoardItemHider[] _itemsHiders; // 0x50
	private Vector2Int _boardSize; // 0x58

	// Methods

	// RVA: 0x2185FB0 Offset: 0x2185FB0 VA: 0x2185FB0
	public void Initialize(MiniGameController controller, MiniGameLevelData levelData) { }

	// RVA: 0x21860D0 Offset: 0x21860D0 VA: 0x21860D0
	private void InitializeCells() { }

	// RVA: 0x2186260 Offset: 0x2186260 VA: 0x2186260
	private void InitializeItems(MiniGameLevelData levelData) { }

	// RVA: 0x2186570 Offset: 0x2186570 VA: 0x2186570
	private void InitializeItemHiders() { }

	// RVA: 0x2186A10 Offset: 0x2186A10 VA: 0x2186A10
	private HashSet<MiniGameBoardCell> GetItemCells(MiniGameLevelItemPlacementData itemPlacementData, MiniGameItemData itemData) { }

	// RVA: 0x2186BC8 Offset: 0x2186BC8 VA: 0x2186BC8
	private void OnCellSelected(int cellId) { }

	// RVA: 0x2186874 Offset: 0x2186874 VA: 0x2186874
	public void UpdateTridentCountText() { }

	// RVA: 0x2186EB0 Offset: 0x2186EB0 VA: 0x2186EB0
	public bool AreAllItemsCollected() { }

	// RVA: 0x2186B7C Offset: 0x2186B7C VA: 0x2186B7C
	public MiniGameBoardCell GetCellAt(int cellIndex) { }

	// RVA: 0x2186F78 Offset: 0x2186F78 VA: 0x2186F78
	public MiniGameBoardCell[] GetCells() { }

	// RVA: 0x2186F80 Offset: 0x2186F80 VA: 0x2186F80
	public MiniGameBoardItem[] GetItems() { }

	// RVA: 0x2186F88 Offset: 0x2186F88 VA: 0x2186F88
	public int GetItemIndex(MiniGameBoardBasicItem basicItem) { }

	// RVA: 0x218703C Offset: 0x218703C VA: 0x218703C
	public List<MiniGameBoardBoosterItem> GetBoosterItems() { }

	// RVA: 0x21871B0 Offset: 0x21871B0 VA: 0x21871B0
	public int GetCollectedBoosterCount() { }

	// RVA: 0x2187278 Offset: 0x2187278 VA: 0x2187278
	public void UpdateItemHiders() { }

	// RVA: 0x2187450 Offset: 0x2187450 VA: 0x2187450
	public Vector2Int GetBoardSize() { }

	// RVA: 0x2187458 Offset: 0x2187458 VA: 0x2187458
	public void PlayEnterAnimation() { }

	// RVA: 0x2187498 Offset: 0x2187498 VA: 0x2187498
	public void PlayExitAnimation() { }

	// RVA: 0x21874D8 Offset: 0x21874D8 VA: 0x21874D8
	public void Dispose() { }

	// RVA: 0x21877AC Offset: 0x21877AC VA: 0x21877AC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]