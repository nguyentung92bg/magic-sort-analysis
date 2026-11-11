public class MergeMiniGameGeneratorItemTutorial : MergeMiniGameTutorialBase // TypeDefIndex: 3634
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
	private GameObject _generatorItemsText; // 0x68
	private MergeBoardCell _generatorCell; // 0x70
	private TaskCompletionSource<bool> _completionSource; // 0x78

	// Methods

	// RVA: 0x3FB4534 Offset: 0x3FB4534 VA: 0x3FB4534 Slot: 4
	public override Task<bool> TryStartTutorial() { }

	// RVA: 0x3FB4890 Offset: 0x3FB4890 VA: 0x3FB4890
	private MergeBoardCell FindGeneratorCell() { }

	// RVA: 0x3FB4B18 Offset: 0x3FB4B18 VA: 0x3FB4B18
	private void OnGeneratorItemClicked(int generatedItemSetId, int generatedItemLevel, int generatorCellId) { }

	// RVA: 0x3FB4F48 Offset: 0x3FB4F48 VA: 0x3FB4F48 Slot: 6
	public override void Dispose() { }

	// RVA: 0x3FB50B0 Offset: 0x3FB50B0 VA: 0x3FB50B0
	private void OnDestroy() { }

	// RVA: 0x3FB490C Offset: 0x3FB490C VA: 0x3FB490C
	private void HighlightCell(MergeBoardCell cell) { }

	// RVA: 0x3FB4D74 Offset: 0x3FB4D74 VA: 0x3FB4D74
	private void ResetCell(MergeBoardCell cell) { }

	// RVA: 0x3FB51BC Offset: 0x3FB51BC VA: 0x3FB51BC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FB51CC Offset: 0x3FB51CC VA: 0x3FB51CC
	private void <OnGeneratorItemClicked>b__9_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial