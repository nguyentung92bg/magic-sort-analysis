public abstract class MergeItem : BasicView // TypeDefIndex: 3677
{
	// Fields
	[SerializeField]
	protected MergeItemInputReceiver _inputReceiver; // 0x28
	[SerializeField]
	protected Transform _viewRoot; // 0x30
	[SerializeField]
	protected SpriteRenderer _spriteRenderer; // 0x38
	[SerializeField]
	private SortingGroup _sortingLayer; // 0x40
	[SerializeField]
	private int _initialSortingOrder; // 0x48
	[SerializeField]
	protected MergeMiniGameAnimationConfig _animationConfig; // 0x50
	[SerializeField]
	private GameObject _scatterTrailParticle; // 0x58
	[SerializeField]
	private GameObject _generatorTrailParticle; // 0x60
	private Sequence _launchFromGeneratorButtonSequence; // 0x68
	private const int DraggedSortingOrder = 1000;
	protected MergeMiniGameItemViewModel _itemViewModel; // 0x70
	private Sequence _hintSequence; // 0x78
	[CompilerGenerated]
	private MergeMiniGameItemType <Type>k__BackingField; // 0x80
	[CompilerGenerated]
	private MergeBoardCell <Cell>k__BackingField; // 0x88

	// Properties
	public MergeMiniGameItemType Type { get; set; }
	public MergeBoardCell Cell { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x410A7DC Offset: 0x410A7DC VA: 0x410A7DC
	public MergeMiniGameItemType get_Type() { }

	[CompilerGenerated]
	// RVA: 0x410A7E4 Offset: 0x410A7E4 VA: 0x410A7E4
	private void set_Type(MergeMiniGameItemType value) { }

	[CompilerGenerated]
	// RVA: 0x410A7EC Offset: 0x410A7EC VA: 0x410A7EC
	public MergeBoardCell get_Cell() { }

	[CompilerGenerated]
	// RVA: 0x410A7F4 Offset: 0x410A7F4 VA: 0x410A7F4
	private void set_Cell(MergeBoardCell value) { }

	// RVA: -1 Offset: -1 Slot: 9
	public abstract bool CanMove();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract bool CanMerge();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void OnMerge();

	// RVA: 0x410A7FC Offset: 0x410A7FC VA: 0x410A7FC Slot: 12
	public virtual bool IsClearedByNeighborMerge() { }

	// RVA: 0x410A804 Offset: 0x410A804 VA: 0x410A804 Slot: 13
	public virtual bool HasTapAction() { }

	// RVA: 0x410A80C Offset: 0x410A80C VA: 0x410A80C Slot: 14
	public virtual void ExecuteTapAction() { }

	// RVA: 0x41095BC Offset: 0x41095BC VA: 0x41095BC
	public void SetCell(MergeBoardCell cell) { }

	// RVA: 0x4109800 Offset: 0x4109800 VA: 0x4109800 Slot: 15
	public virtual void Prepare(MergeMiniGameItemViewModel viewModel, Transform parent, Sprite sprite, MergeMiniGameSelectionSystem selectionSystem) { }

	// RVA: 0x4109428 Offset: 0x4109428 VA: 0x4109428 Slot: 16
	public virtual void Dispose() { }

	// RVA: 0x410A84C Offset: 0x410A84C VA: 0x410A84C
	private void SetSprite(Sprite sprite) { }

	// RVA: 0x410A8E0 Offset: 0x410A8E0 VA: 0x410A8E0
	public void OnDragStart() { }

	// RVA: 0x410A908 Offset: 0x410A908 VA: 0x410A908
	public void OnDragEnd() { }

	// RVA: 0x410A90C Offset: 0x410A90C VA: 0x410A90C
	private void OnDestroy() { }

	// RVA: 0x41095C4 Offset: 0x41095C4 VA: 0x41095C4
	protected void ResetSortingOrder() { }

	// RVA: 0x410A968 Offset: 0x410A968 VA: 0x410A968 Slot: 17
	public virtual void OnNeighborMerge() { }

	// RVA: 0x410A96C Offset: 0x410A96C VA: 0x410A96C Slot: 18
	public virtual void OnPlacedToBoard() { }

	// RVA: 0x4109294 Offset: 0x4109294 VA: 0x4109294
	protected void Hide() { }

	// RVA: 0x410A970 Offset: 0x410A970 VA: 0x410A970
	public void Show() { }

	// RVA: 0x410A99C Offset: 0x410A99C VA: 0x410A99C
	public void PlayHint(Transform towards) { }

	// RVA: 0x410A584 Offset: 0x410A584 VA: 0x410A584
	public void StopHint() { }

	// RVA: 0x410ACE8 Offset: 0x410ACE8 VA: 0x410ACE8
	public void PlayMoveSequence(MergeBoardCell targetCell) { }

	// RVA: 0x410AE94 Offset: 0x410AE94 VA: 0x410AE94
	public void PlayLaunchFromGeneratorButtonAnimation(Transform from, Transform target) { }

	// RVA: 0x410B300 Offset: 0x410B300 VA: 0x410B300
	public Tween PlaySelectAnimation() { }

	// RVA: 0x410B3EC Offset: 0x410B3EC VA: 0x410B3EC
	public Sequence PlayGeneratorItemMove(Transform from, Transform target) { }

	// RVA: 0x410B6EC Offset: 0x410B6EC VA: 0x410B6EC
	public Tween PlayScatterMoveSequence(Transform from, Transform target, int i) { }

	// RVA: 0x410B0DC Offset: 0x410B0DC VA: 0x410B0DC
	private Sequence FollowBezierPath(Vector3 fromPosition, Vector3 targetPosition, MergeBoardCell cell) { }

	// RVA: 0x410BAA4 Offset: 0x410BAA4 VA: 0x410BAA4
	public void SetRaycastOrder(int itemRaycastOrder) { }

	// RVA: 0x41095F0 Offset: 0x41095F0 VA: 0x41095F0
	protected void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x410BAC0 Offset: 0x410BAC0 VA: 0x410BAC0
	private void <PlaySelectAnimation>b__42_0(float t) { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board