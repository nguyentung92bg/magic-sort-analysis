public class MergeMiniGameController : MonoBehaviour // TypeDefIndex: 3694
{
	// Fields
	[SerializeField]
	private MergeStagesProgressBarView _progressBarView; // 0x18
	[SerializeField]
	private MergeBottomUIController _bottomUIController; // 0x20
	[SerializeField]
	private MergeBoard _board; // 0x28
	[SerializeField]
	private NewItemFoundPopUp _newItemFoundPopUp; // 0x30
	[SerializeField]
	private MergeMiniGameAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private MergeHintController _hintController; // 0x40
	[SerializeField]
	private MergeMiniGameGrandPrizeController _grandPrizeController; // 0x48
	[SerializeField]
	private MergeMiniGameTutorialController _tutorialController; // 0x50
	private MergeStuckChecker _stuckChecker; // 0x58
	private MergeMiniGameService _service; // 0x60
	private MergeMiniGameSelectionSystem _selectionSystem; // 0x68
	private MergeMiniGameViewModel _viewModel; // 0x70
	private Sequence _mergeAnimationSequence; // 0x78
	private Sequence _generatorItemSequence; // 0x80
	private Sequence _itemCollectedSequence; // 0x88

	// Methods

	// RVA: 0x41139A0 Offset: 0x41139A0 VA: 0x41139A0
	public MergeBoard GetBoard() { }

	// RVA: 0x41139A8 Offset: 0x41139A8 VA: 0x41139A8
	public void Initialize(MergeMiniGameViewModel viewModel) { }

	// RVA: 0x4113E78 Offset: 0x4113E78 VA: 0x4113E78
	public void Snap(MergeDragSelection dragSelection) { }

	// RVA: 0x4113F54 Offset: 0x4113F54 VA: 0x4113F54
	public void Swap(MergeDragSelection dragSelection) { }

	// RVA: 0x411409C Offset: 0x411409C VA: 0x411409C
	public void ReturnToInitialPosition(MergeDragSelection dragSelection) { }

	// RVA: 0x4114194 Offset: 0x4114194 VA: 0x4114194
	public void Merge(MergeDragSelection dragSelection) { }

	// RVA: 0x4114410 Offset: 0x4114410 VA: 0x4114410
	private MergeMiniGameItemModel ProcessMerge(MergeBoardCell originCell, MergeBoardCell targetCell, int mergeSetId, int mergeLevel, MergeResultViewModel mergeAnimationViewModel) { }

	// RVA: 0x411475C Offset: 0x411475C VA: 0x411475C
	private void NotifyNeighborCellsOnMerge(int mergeIndex, MergeResultViewModel result) { }

	// RVA: 0x4114A24 Offset: 0x4114A24 VA: 0x4114A24
	private void ScatterByProducts(MergeMiniGameItemModel mergedItem, MergeBoardCell targetCell, MergeResultViewModel result) { }

	// RVA: 0x4114D48 Offset: 0x4114D48 VA: 0x4114D48
	private void TryPopulateBoardWithScatterItemsFromQueue() { }

	// RVA: 0x4115990 Offset: 0x4115990 VA: 0x4115990
	public List<MergeItem> SpawnItem(int cellIndex, List<MergeMiniGameItemModel> itemModels, bool setPosition = False) { }

	// RVA: 0x4114E0C Offset: 0x4114E0C VA: 0x4114E0C
	private void PlayMergeAnimation(MergeResultViewModel mergeResult) { }

	// RVA: 0x411630C Offset: 0x411630C VA: 0x411630C
	private void OnGeneratorButtonClicked() { }

	// RVA: 0x411671C Offset: 0x411671C VA: 0x411671C
	private bool HasEnoughEnergy(int multiplier) { }

	// RVA: 0x4116968 Offset: 0x4116968 VA: 0x4116968
	public int GetEnergyCount() { }

	// RVA: 0x4116748 Offset: 0x4116748 VA: 0x4116748
	private bool HasAvailableSpaceOnBoard() { }

	// RVA: 0x4116760 Offset: 0x4116760 VA: 0x4116760
	private void SpendEnergy(int amount) { }

	// RVA: 0x41168CC Offset: 0x41168CC VA: 0x41168CC
	private int GetGeneratorButtonSpawnItemLevel() { }

	// RVA: 0x4116984 Offset: 0x4116984 VA: 0x4116984
	private void OnGeneratorItemClicked(int generatedItemSetID, int generatedItemLevel, int generatorCellId) { }

	// RVA: 0x4116E08 Offset: 0x4116E08 VA: 0x4116E08
	private void PlayGeneratorItemMoveAnimation(List<MergeItem> item, Transform from, Transform to) { }

	// RVA: 0x4116950 Offset: 0x4116950 VA: 0x4116950
	private MergeBoardCell GetEmptyCell() { }

	// RVA: 0x4115D2C Offset: 0x4115D2C VA: 0x4115D2C
	private MergeBoardCell GetNearestEmptyCell(int positionIndex) { }

	// RVA: 0x4116FDC Offset: 0x4116FDC VA: 0x4116FDC
	private void OnItemCollected(int setId, int level, int cellIndex) { }

	// RVA: 0x4116FFC Offset: 0x4116FFC VA: 0x4116FFC
	public void CollectItem(int setId, int level, int cellIndex) { }

	// RVA: 0x4117040 Offset: 0x4117040 VA: 0x4117040
	private void PlayItemCollectedAnimation() { }

	// RVA: 0x4117100 Offset: 0x4117100 VA: 0x4117100
	private Tween PlayScatterItemFromQueueAnim() { }

	// RVA: 0x41173E0 Offset: 0x41173E0 VA: 0x41173E0
	private void OnMultiplierChanged(int multiplier) { }

	// RVA: 0x411747C Offset: 0x411747C VA: 0x411747C
	private void UpdateUnlockedMultipliers() { }

	// RVA: 0x41174B8 Offset: 0x41174B8 VA: 0x41174B8
	public void Dispose() { }

	// RVA: 0x4116038 Offset: 0x4116038 VA: 0x4116038
	private Sequence PlayRewardAnimation(int level, Vector3 position, bool isFinalItem) { }

	// RVA: 0x41178C0 Offset: 0x41178C0 VA: 0x41178C0
	private Sequence PlayPostRewardSequence(int level, Vector3 position, bool isFinalItem, TweenCallback onComplete) { }

	// RVA: 0x411788C Offset: 0x411788C VA: 0x411788C
	public void SuspendHint() { }

	// RVA: 0x4117AB0 Offset: 0x4117AB0 VA: 0x4117AB0
	public void ResumeHint() { }

	// RVA: 0x4117ACC Offset: 0x4117ACC VA: 0x4117ACC
	public bool HasValidMerge() { }

	// RVA: 0x4117B04 Offset: 0x4117B04 VA: 0x4117B04
	public bool HasCollectibleInBoard() { }

	// RVA: 0x411587C Offset: 0x411587C VA: 0x411587C
	private void TryShowGeneratorTutorial(MergeMiniGameItemModel mergeItemModel) { }

	// RVA: 0x41158C8 Offset: 0x41158C8 VA: 0x41158C8
	private void TryShowRewardedTutorial(MergeMiniGameItemModel mergeItemModel, MergeBoardCell cell) { }

	// RVA: 0x4115934 Offset: 0x4115934 VA: 0x4115934
	private void TryShowBubbleTutorial() { }

	// RVA: 0x4117BE8 Offset: 0x4117BE8 VA: 0x4117BE8
	private bool TryGetMergeableCellsForBubbleTutorial(out MergeBoardCell cell1, out MergeBoardCell cell2) { }

	// RVA: 0x41180CC Offset: 0x41180CC VA: 0x41180CC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x41180D4 Offset: 0x41180D4 VA: 0x41180D4
	private void <PlayPostRewardSequence>b__45_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board