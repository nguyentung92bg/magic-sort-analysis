public abstract class MiniGameBoardItem : MonoBehaviour // TypeDefIndex: 3538
{
	// Fields
	[CompilerGenerated]
	private MiniGameItemData <ItemData>k__BackingField; // 0x18
	[CompilerGenerated]
	private MiniGameLevelItemPlacementData <ItemPlacementData>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <IsCollected>k__BackingField; // 0x28
	protected HashSet<MiniGameBoardCell> _cells; // 0x30

	// Properties
	public MiniGameItemData ItemData { get; set; }
	public MiniGameLevelItemPlacementData ItemPlacementData { get; set; }
	public bool IsCollected { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x218A850 Offset: 0x218A850 VA: 0x218A850
	public MiniGameItemData get_ItemData() { }

	[CompilerGenerated]
	// RVA: 0x218A858 Offset: 0x218A858 VA: 0x218A858
	protected void set_ItemData(MiniGameItemData value) { }

	[CompilerGenerated]
	// RVA: 0x218A860 Offset: 0x218A860 VA: 0x218A860
	public MiniGameLevelItemPlacementData get_ItemPlacementData() { }

	[CompilerGenerated]
	// RVA: 0x218A868 Offset: 0x218A868 VA: 0x218A868
	protected void set_ItemPlacementData(MiniGameLevelItemPlacementData value) { }

	[CompilerGenerated]
	// RVA: 0x218A870 Offset: 0x218A870 VA: 0x218A870
	public bool get_IsCollected() { }

	[CompilerGenerated]
	// RVA: 0x218A878 Offset: 0x218A878 VA: 0x218A878
	protected void set_IsCollected(bool value) { }

	// RVA: 0x2187824 Offset: 0x2187824 VA: 0x2187824 Slot: 4
	public virtual void Initialize(MiniGameItemData itemData, MiniGameLevelItemPlacementData itemPlacementData) { }

	// RVA: 0x2186B20 Offset: 0x2186B20 VA: 0x2186B20
	public void InitializeCells(HashSet<MiniGameBoardCell> cells) { }

	// RVA: 0x218A884 Offset: 0x218A884 VA: 0x218A884
	private void UpdatePosition() { }

	// RVA: 0x218AA9C Offset: 0x218AA9C VA: 0x218AA9C
	public bool TryCollect() { }

	// RVA: 0x218AAD0 Offset: 0x218AAD0 VA: 0x218AAD0
	public int GetActiveCellCount() { }

	// RVA: 0x218AB1C Offset: 0x218AB1C VA: 0x218AB1C
	public HashSet<MiniGameBoardCell> GetActiveCells() { }

	// RVA: 0x218ACDC Offset: 0x218ACDC VA: 0x218ACDC
	public HashSet<MiniGameBoardCell> GetCells() { }

	// RVA: 0x218ACE4 Offset: 0x218ACE4 VA: 0x218ACE4
	public void CollectImmediately() { }

	// RVA: 0x218ACF0 Offset: 0x218ACF0 VA: 0x218ACF0 Slot: 5
	public virtual void Dispose() { }

	// RVA: 0x21884EC Offset: 0x21884EC VA: 0x21884EC
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.Board