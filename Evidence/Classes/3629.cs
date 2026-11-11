public class MergeMiniGameBubbleTutorial : MergeMiniGameTutorialBase // TypeDefIndex: 3629
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
	private GameObject _mergeItemsText; // 0x68
	private MergeBoardCell _tutorialCell1; // 0x70
	private MergeBoardCell _tutorialCell2; // 0x78
	private TaskCompletionSource<bool> _completionSource; // 0x80

	// Methods

	// RVA: 0x3FB1B48 Offset: 0x3FB1B48 VA: 0x3FB1B48 Slot: 4
	public override Task<bool> TryStartTutorial() { }

	// RVA: 0x3FB2100 Offset: 0x3FB2100 VA: 0x3FB2100
	private void OnMergePerformed() { }

	// RVA: 0x3FB2580 Offset: 0x3FB2580 VA: 0x3FB2580 Slot: 6
	public override void Dispose() { }

	// RVA: 0x3FB266C Offset: 0x3FB266C VA: 0x3FB266C
	private void OnDestroy() { }

	// RVA: 0x3FB1EF4 Offset: 0x3FB1EF4 VA: 0x3FB1EF4
	private void HighlightCell(MergeBoardCell cell) { }

	// RVA: 0x3FB2384 Offset: 0x3FB2384 VA: 0x3FB2384
	private void ResetCell(MergeBoardCell cell) { }

	// RVA: 0x3FB2780 Offset: 0x3FB2780 VA: 0x3FB2780
	public void SetCells(MergeBoardCell cell1, MergeBoardCell cell2) { }

	// RVA: 0x3FB27B0 Offset: 0x3FB27B0 VA: 0x3FB27B0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FB27C8 Offset: 0x3FB27C8 VA: 0x3FB27C8
	private void <TryStartTutorial>b__8_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB2918 Offset: 0x3FB2918 VA: 0x3FB2918
	private void <OnMergePerformed>b__9_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial