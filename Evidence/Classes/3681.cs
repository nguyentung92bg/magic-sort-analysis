public class MergeBoardCell : MonoBehaviour // TypeDefIndex: 3681
{
	// Fields
	[SerializeField]
	private SpriteRenderer _viewParent; // 0x18
	[SerializeField]
	private Transform _cursor; // 0x20
	[SerializeField]
	private SpriteRenderer _mergeableHintGlow; // 0x28
	[SerializeField]
	private GameObject _mergeableHintParticle; // 0x30
	[SerializeField]
	private MergeMiniGameAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private GameObject _mergeParticle; // 0x40
	[SerializeField]
	private GameObject _generatorHitParticle; // 0x48
	[SerializeField]
	private Transform _scatterQueueParticle; // 0x50
	[SerializeField]
	private ParticleSystem _hintParticle; // 0x58
	[CompilerGenerated]
	private Lock <AnimationLock>k__BackingField; // 0x60
	private bool _unselectableAnimationIsPlaying; // 0x68
	[CompilerGenerated]
	private int <Index>k__BackingField; // 0x6C
	private Sequence _unselectableAnimationSequence; // 0x70
	private Sequence _mergeableHintAppearSequence; // 0x78
	private Sequence _mergeableHintDisappearSequence; // 0x80
	private Sequence _onMergeHintDisappearSequence; // 0x88
	private Sequence _generatorItemArrivedSequence; // 0x90
	private Sequence _generatorButtonArrivedSequence; // 0x98
	private readonly List<MergeItem> _items; // 0xA0

	// Properties
	public Lock AnimationLock { get; set; }
	public int Index { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x410E368 Offset: 0x410E368 VA: 0x410E368
	public Lock get_AnimationLock() { }

	[CompilerGenerated]
	// RVA: 0x410E370 Offset: 0x410E370 VA: 0x410E370
	private void set_AnimationLock(Lock value) { }

	[CompilerGenerated]
	// RVA: 0x410E378 Offset: 0x410E378 VA: 0x410E378
	public int get_Index() { }

	[CompilerGenerated]
	// RVA: 0x410E380 Offset: 0x410E380 VA: 0x410E380
	private void set_Index(int value) { }

	// RVA: 0x410CF10 Offset: 0x410CF10 VA: 0x410CF10
	public void Initialize(int id) { }

	// RVA: 0x410E388 Offset: 0x410E388 VA: 0x410E388
	public List<MergeItem> GetItems() { }

	// RVA: 0x410E390 Offset: 0x410E390 VA: 0x410E390
	public bool CanMerge() { }

	// RVA: 0x410D724 Offset: 0x410D724 VA: 0x410D724
	public bool IsEmpty() { }

	// RVA: 0x410E4F4 Offset: 0x410E4F4 VA: 0x410E4F4
	public Tween HideMergeableHint() { }

	// RVA: 0x410D320 Offset: 0x410D320 VA: 0x410D320
	public void AddItem(MergeItem item) { }

	// RVA: 0x410964C Offset: 0x410964C VA: 0x410964C
	public void RemoveItem(MergeItem item) { }

	// RVA: 0x410E6B8 Offset: 0x410E6B8 VA: 0x410E6B8
	public Sequence PlayCursorAppearAnimation() { }

	// RVA: 0x4109A88 Offset: 0x4109A88 VA: 0x4109A88
	public void HideCursor() { }

	// RVA: 0x410D464 Offset: 0x410D464 VA: 0x410D464
	public void Dispose() { }

	// RVA: 0x410E8E0 Offset: 0x410E8E0 VA: 0x410E8E0
	public void OnDestroy() { }

	// RVA: 0x410E870 Offset: 0x410E870 VA: 0x410E870
	public void ClearItems() { }

	// RVA: 0x410E91C Offset: 0x410E91C VA: 0x410E91C
	public void PlayMergeableHover() { }

	// RVA: 0x410EA44 Offset: 0x410EA44 VA: 0x410EA44
	public void StopMergeableHoverAnim() { }

	// RVA: 0x410EBEC Offset: 0x410EBEC VA: 0x410EBEC
	public IMergeable GetMergeableItem() { }

	// RVA: 0x410ED5C Offset: 0x410ED5C VA: 0x410ED5C
	public void RemoveItems() { }

	// RVA: 0x410EDCC Offset: 0x410EDCC VA: 0x410EDCC
	public bool ShouldItemClearedOnNeighborMerge(out List<int> clearedItems, out int cellIndex) { }

	// RVA: 0x410EF5C Offset: 0x410EF5C VA: 0x410EF5C
	public bool CanSelectAsOrigin() { }

	// RVA: 0x410EF84 Offset: 0x410EF84 VA: 0x410EF84
	public bool CanSelectAsTarget() { }

	// RVA: 0x410EFAC Offset: 0x410EFAC VA: 0x410EFAC
	public bool IsSelectableAsActiveCell() { }

	// RVA: 0x410F110 Offset: 0x410F110 VA: 0x410F110
	public void PlayUnselectableAnimation() { }

	// RVA: 0x410F120 Offset: 0x410F120 VA: 0x410F120
	private void ShakeItemsInCell() { }

	// RVA: 0x410F66C Offset: 0x410F66C VA: 0x410F66C
	public bool HasItem(MergeMiniGameItemType type) { }

	// RVA: 0x410F7D0 Offset: 0x410F7D0 VA: 0x410F7D0
	public int GetItemIndex(MergeMiniGameItemType type) { }

	// RVA: 0x410F884 Offset: 0x410F884 VA: 0x410F884
	public MergeItem GetItem(MergeMiniGameItemType type) { }

	// RVA: 0x410BFE4 Offset: 0x410BFE4 VA: 0x410BFE4
	public void OnGeneratorItemByProductArrived() { }

	// RVA: 0x410C588 Offset: 0x410C588 VA: 0x410C588
	public void PlayGeneratorButtonArrivedParticle() { }

	// RVA: 0x410F934 Offset: 0x410F934 VA: 0x410F934
	public Tween PlayMergeItemAppearAnimation() { }

	// RVA: 0x410FCEC Offset: 0x410FCEC VA: 0x410FCEC
	public void ShowHint(Transform otherItemTransform, bool shouldPlayParticle = False) { }

	// RVA: 0x410FE0C Offset: 0x410FE0C VA: 0x410FE0C
	public void HideHint() { }

	// RVA: 0x410FF10 Offset: 0x410FF10 VA: 0x410FF10
	public Tween SpitItemToScatterQueue(Transform scatterQueueViewTransform) { }

	// RVA: 0x4110020 Offset: 0x4110020 VA: 0x4110020
	public bool HasBlocker() { }

	// RVA: 0x4110198 Offset: 0x4110198 VA: 0x4110198
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x4110220 Offset: 0x4110220 VA: 0x4110220
	private void <HideMergeableHint>b__29_0() { }

	[CompilerGenerated]
	// RVA: 0x4110240 Offset: 0x4110240 VA: 0x4110240
	private void <PlayCursorAppearAnimation>b__32_0() { }

	[CompilerGenerated]
	// RVA: 0x411043C Offset: 0x411043C VA: 0x411043C
	private void <PlayCursorAppearAnimation>b__32_1() { }

	[CompilerGenerated]
	// RVA: 0x411049C Offset: 0x411049C VA: 0x411049C
	private void <StopMergeableHoverAnim>b__38_0() { }

	[CompilerGenerated]
	// RVA: 0x41104BC Offset: 0x41104BC VA: 0x41104BC
	private void <ShakeItemsInCell>b__46_0() { }

	[CompilerGenerated]
	// RVA: 0x41104C4 Offset: 0x41104C4 VA: 0x41104C4
	private void <OnGeneratorItemByProductArrived>b__50_0() { }

	[CompilerGenerated]
	// RVA: 0x41104E4 Offset: 0x41104E4 VA: 0x41104E4
	private void <OnGeneratorItemByProductArrived>b__50_1() { }

	[CompilerGenerated]
	// RVA: 0x4110504 Offset: 0x4110504 VA: 0x4110504
	private void <PlayGeneratorButtonArrivedParticle>b__51_0() { }

	[CompilerGenerated]
	// RVA: 0x4110524 Offset: 0x4110524 VA: 0x4110524
	private void <PlayGeneratorButtonArrivedParticle>b__51_1() { }

	[CompilerGenerated]
	// RVA: 0x4110544 Offset: 0x4110544 VA: 0x4110544
	private void <PlayMergeItemAppearAnimation>b__52_0() { }

	[CompilerGenerated]
	// RVA: 0x4110744 Offset: 0x4110744 VA: 0x4110744
	private void <PlayMergeItemAppearAnimation>b__52_1() { }

	[CompilerGenerated]
	// RVA: 0x4110770 Offset: 0x4110770 VA: 0x4110770
	private void <SpitItemToScatterQueue>b__55_0() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board