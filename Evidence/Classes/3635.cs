public class MergeMiniGameMergeItemTutorial : MergeMiniGameTutorialBase // TypeDefIndex: 3635
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

	// RVA: 0x3FB5250 Offset: 0x3FB5250 VA: 0x3FB5250 Slot: 4
	public override Task<bool> TryStartTutorial() { }

	// RVA: 0x3FB593C Offset: 0x3FB593C VA: 0x3FB593C
	private bool TryGetMergeableCells(out MergeBoardCell cell1, out MergeBoardCell cell2) { }

	// RVA: 0x3FB5EEC Offset: 0x3FB5EEC VA: 0x3FB5EEC
	private void OnMergePerformed() { }

	// RVA: 0x3FB6170 Offset: 0x3FB6170 VA: 0x3FB6170 Slot: 5
	public override void Initialize() { }

	// RVA: 0x3FB6268 Offset: 0x3FB6268 VA: 0x3FB6268 Slot: 6
	public override void Dispose() { }

	// RVA: 0x3FB6418 Offset: 0x3FB6418 VA: 0x3FB6418
	private void OnDestroy() { }

	// RVA: 0x3FB65D4 Offset: 0x3FB65D4 VA: 0x3FB65D4
	private void OnMergeItemSpawned(MergeBoardCell cellItem) { }

	// RVA: 0x3FB5CE0 Offset: 0x3FB5CE0 VA: 0x3FB5CE0
	private void HighlightCell(MergeBoardCell cell) { }

	// RVA: 0x3FB5768 Offset: 0x3FB5768 VA: 0x3FB5768
	private void ResetCell(MergeBoardCell cell) { }

	// RVA: 0x3FB66A0 Offset: 0x3FB66A0 VA: 0x3FB66A0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FB66B0 Offset: 0x3FB66B0 VA: 0x3FB66B0
	private void <TryStartTutorial>b__8_0() { }

	[CompilerGenerated]
	// RVA: 0x3FB6800 Offset: 0x3FB6800 VA: 0x3FB6800
	private void <OnMergePerformed>b__10_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI.Tutorial