public class MiniGameController : MonoBehaviour // TypeDefIndex: 3550
{
	// Fields
	[SerializeField]
	private MiniGameBoardConfig _boardConfig; // 0x18
	[SerializeField]
	private MiniGameItemDataConfig _itemDataConfig; // 0x20
	[SerializeField]
	private MiniGameLevelsConfig _levelsConfig; // 0x28
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private MiniGameTutorialController _tutorialController; // 0x38
	[SerializeField]
	private MiniGameBoardItemSlotsContainer _itemSlotsContainer; // 0x40
	[SerializeField]
	private MiniGameProgressBarView _progressBarView; // 0x48
	[SerializeField]
	private MiniGameTridentView _tridentViewPrefab; // 0x50
	[SerializeField]
	private Button _revealAllButton; // 0x58
	[SerializeField]
	private Transform _revealAllButtonParent; // 0x60
	[SerializeField]
	private Transform _inputBlocker; // 0x68
	[SerializeField]
	private Transform[] _allStagesCompletedTransforms; // 0x70
	private MiniGameLevelData _currentLevelData; // 0x78
	private MiniGameBoard _currentBoard; // 0x80
	private MiniGameBoard _nextStageBoard; // 0x88
	private MiniGameService _service; // 0x90
	private List<MiniGameTridentView> _tridentViews; // 0x98
	private List<Sequence> _hitSequences; // 0xA0
	private Sequence _revealSequence; // 0xA8
	private bool _hasMaxTridentCount; // 0xB0
	private Sequence _offerPopupSequence; // 0xB8

	// Methods

	// RVA: 0x21830A8 Offset: 0x21830A8 VA: 0x21830A8
	public void Initialize() { }

	// RVA: 0x218C0B8 Offset: 0x218C0B8 VA: 0x218C0B8
	private void InitializeCurrentLevel() { }

	// RVA: 0x218C1A4 Offset: 0x218C1A4 VA: 0x218C1A4
	private void InitializeBoard() { }

	// RVA: 0x218C2D4 Offset: 0x218C2D4 VA: 0x218C2D4
	private void InitializeItemSlots() { }

	// RVA: 0x218C33C Offset: 0x218C33C VA: 0x218C33C
	private void InitializeLastState() { }

	// RVA: 0x218C728 Offset: 0x218C728 VA: 0x218C728
	private void InitializeRevealButton() { }

	// RVA: 0x218C7C8 Offset: 0x218C7C8 VA: 0x218C7C8
	private void InitializeTutorialController() { }

	// RVA: 0x2186C00 Offset: 0x2186C00 VA: 0x2186C00
	public void OnCellSelected(MiniGameBoardCell cell) { }

	// RVA: 0x218D2A0 Offset: 0x218D2A0 VA: 0x218D2A0
	private void HitCell(MiniGameBoardCell cell) { }

	// RVA: 0x218D2F4 Offset: 0x218D2F4 VA: 0x218D2F4
	private MiniGameCellHitResult ProcessCellHitResult(MiniGameBoardCell cell) { }

	// RVA: 0x218D488 Offset: 0x218D488 VA: 0x218D488
	private void PlayCellHitSequence(MiniGameCellHitResult cellHitResult) { }

	// RVA: 0x218C99C Offset: 0x218C99C VA: 0x218C99C
	private List<MiniGameBoardItem> TryCollectItems() { }

	// RVA: 0x218E584 Offset: 0x218E584 VA: 0x218E584
	private Dictionary<MiniGameBoardBasicItem, MiniGameBoardItemSlot> GetCollectedItemsSlotMap(List<MiniGameBoardItem> collectedItems) { }

	// RVA: 0x218DFA8 Offset: 0x218DFA8 VA: 0x218DFA8
	private Dictionary<MiniGameBoardBoosterItem, List<MiniGameBoardCell>> ProcessBoosterHitCells(List<MiniGameBoardItem> collectedItems) { }

	// RVA: 0x218EE50 Offset: 0x218EE50 VA: 0x218EE50
	private Tween PlayStageCompletedSequence(int completedStageIndex) { }

	// RVA: 0x218F9B4 Offset: 0x218F9B4 VA: 0x218F9B4
	private Tween PlayAllStagesCompletedSequence() { }

	// RVA: 0x218EAD4 Offset: 0x218EAD4 VA: 0x218EAD4
	private void CreateNextStageBoard() { }

	// RVA: 0x218D25C Offset: 0x218D25C VA: 0x218D25C
	private bool HasTrident() { }

	// RVA: 0x218FDA0 Offset: 0x218FDA0 VA: 0x218FDA0
	private int GetTridentCount() { }

	// RVA: 0x218D284 Offset: 0x218D284 VA: 0x218D284
	private void SpendTrident() { }

	// RVA: 0x218CB74 Offset: 0x218CB74 VA: 0x218CB74
	private bool HasMaxTridentCount() { }

	// RVA: 0x218CBE4 Offset: 0x218CBE4 VA: 0x218CBE4
	private void UpdateTridentCountText() { }

	// RVA: 0x2186E08 Offset: 0x2186E08 VA: 0x2186E08
	public string GetTridentCountText() { }

	// RVA: 0x2186950 Offset: 0x2186950 VA: 0x2186950
	public MiniGameBoardItem CreateItem(MiniGameLevelItemPlacementData itemPlacementData) { }

	// RVA: 0x218F3F8 Offset: 0x218F3F8 VA: 0x218F3F8
	private List<MiniGameBoardCell> GetTargetCellsForBoosterItem(MiniGameBoardBoosterItem boosterItem) { }

	// RVA: 0x218CAFC Offset: 0x218CAFC VA: 0x218CAFC
	private MiniGameBoardItemSlot GetItemSlotByIndex(int itemIndex) { }

	// RVA: 0x218CB14 Offset: 0x218CB14 VA: 0x218CB14
	private MiniGameLevelItemPlacementData GetItemLevelPlacementDataByIndex(int itemIndex) { }

	// RVA: 0x2186B3C Offset: 0x2186B3C VA: 0x2186B3C
	public Vector3 GetBoardItemScaleBySize(Vector2Int boardSize) { }

	// RVA: 0x218E7B8 Offset: 0x218E7B8 VA: 0x218E7B8
	private MiniGameTridentView GetAvailableTridentView() { }

	// RVA: 0x218FDBC Offset: 0x218FDBC VA: 0x218FDBC
	private int GetMaxTridentCountForAllLevels() { }

	// RVA: 0x218CBF4 Offset: 0x218CBF4 VA: 0x218CBF4
	private void SetRevealAllButtonActive(bool isActive) { }

	// RVA: 0x218ECE4 Offset: 0x218ECE4 VA: 0x218ECE4
	private Tween ActivateRevealAllButton() { }

	// RVA: 0x218ECBC Offset: 0x218ECBC VA: 0x218ECBC
	private bool IsRevealAllButtonActive() { }

	// RVA: 0x21900A8 Offset: 0x21900A8 VA: 0x21900A8
	private void OnRevealAllButtonClicked() { }

	[Button]
	// RVA: 0x21900AC Offset: 0x21900AC VA: 0x21900AC
	private void RevealBoard() { }

	// RVA: 0x218EC8C Offset: 0x218EC8C VA: 0x218EC8C
	private void SetInputBlockerActive(bool isActive) { }

	// RVA: 0x218CC24 Offset: 0x218CC24 VA: 0x218CC24
	private MiniGameBoardCell GetTargetTutorialCell() { }

	// RVA: 0x218DC3C Offset: 0x218DC3C VA: 0x218DC3C
	private bool TryActivateBoosterDynamically(MiniGameBoardCell hitCell, List<MiniGameBoardItem> collectedItems) { }

	// RVA: 0x218DE0C Offset: 0x218DE0C VA: 0x218DE0C
	private bool ShouldTridentHitSlowly(MiniGameBoardCell hitCell, List<MiniGameBoardItem> collectedItems) { }

	// RVA: 0x218DAC8 Offset: 0x218DAC8 VA: 0x218DAC8
	private void OpenOfferPopupWithDelay() { }

	// RVA: 0x2183A48 Offset: 0x2183A48 VA: 0x2183A48
	public void Dispose() { }

	// RVA: 0x2190A98 Offset: 0x2190A98 VA: 0x2190A98
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2190B70 Offset: 0x2190B70 VA: 0x2190B70
	private void <PlayStageCompletedSequence>b__35_0() { }

	[CompilerGenerated]
	// RVA: 0x2190B88 Offset: 0x2190B88 VA: 0x2190B88
	private void <PlayStageCompletedSequence>b__35_2() { }

	[CompilerGenerated]
	// RVA: 0x2190BA0 Offset: 0x2190BA0 VA: 0x2190BA0
	private void <PlayStageCompletedSequence>b__35_3() { }

	[CompilerGenerated]
	// RVA: 0x2190BB8 Offset: 0x2190BB8 VA: 0x2190BB8
	private void <PlayStageCompletedSequence>b__35_4() { }

	[CompilerGenerated]
	// RVA: 0x2190BD0 Offset: 0x2190BD0 VA: 0x2190BD0
	private void <PlayStageCompletedSequence>b__35_6() { }

	[CompilerGenerated]
	// RVA: 0x2190BFC Offset: 0x2190BFC VA: 0x2190BFC
	private void <PlayStageCompletedSequence>b__35_7() { }

	[CompilerGenerated]
	// RVA: 0x2190C14 Offset: 0x2190C14 VA: 0x2190C14
	private void <PlayStageCompletedSequence>b__35_8() { }

	[CompilerGenerated]
	// RVA: 0x2190C2C Offset: 0x2190C2C VA: 0x2190C2C
	private void <PlayStageCompletedSequence>b__35_9() { }

	[CompilerGenerated]
	// RVA: 0x2190CAC Offset: 0x2190CAC VA: 0x2190CAC
	private void <ActivateRevealAllButton>b__52_0() { }

	[CompilerGenerated]
	// RVA: 0x2190D2C Offset: 0x2190D2C VA: 0x2190D2C
	private void <RevealBoard>b__55_2() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.Board
[CreateAssetMenu(fileName = "MiniGameItemDataConfig", menuName = "Configs/MiniGameItemDataConfig")]