public class SafeView : AItemView // TypeDefIndex: 1645
{
	// Fields
	[SerializeField]
	private SafeAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x28
	[SerializeField]
	private Transform _bottomPivot; // 0x30
	[SerializeField]
	private Transform _snitchPivot; // 0x38
	[SerializeField]
	private List<SafeSizeContainer> _containers; // 0x40
	[SerializeField]
	private Transform _lockTransform; // 0x48
	[SerializeField]
	private Transform _lockCircleSize1; // 0x50
	[SerializeField]
	private Transform _lockCircleDefault; // 0x58
	[SerializeField]
	private Transform _lockHandleTransform; // 0x60
	[SerializeField]
	private TextMeshPro _lockCountText; // 0x68
	[SerializeField]
	private Transform _lockMask; // 0x70
	[SerializeField]
	private Transform _lockCountTextParent; // 0x78
	[SerializeField]
	private AnimationClip _lockRotationOnCompleteClip; // 0x80
	[SerializeField]
	private AnimationClip _defaultClip; // 0x88
	[SerializeField]
	private Animation _animation; // 0x90
	[SerializeField]
	private Transform _lockHandleArms; // 0x98
	[SerializeField]
	private Transform _lockHandleArmsWithBlur; // 0xA0
	[SerializeField]
	private Transform _lockHandleScaleTransform; // 0xA8
	[SerializeField]
	private List<SpriteRenderer> _shadowRenderers; // 0xB0
	private float _completeRotationAnimationSpeed; // 0xB8
	private int _remainingBottleCompletions; // 0xBC
	private Sequence _progressSequence; // 0xC0
	private Sequence _completeSequence; // 0xC8

	// Methods

	// RVA: 0x2616038 Offset: 0x2616038 VA: 0x2616038 Slot: 5
	public override void Initialize() { }

	// RVA: 0x261603C Offset: 0x261603C VA: 0x261603C Slot: 6
	public override void Spawn() { }

	// RVA: 0x2613D1C Offset: 0x2613D1C VA: 0x2613D1C
	public void Prepare(Sorting sorting, int bottlesCount, int remainingBottleCompletions) { }

	// RVA: 0x2616144 Offset: 0x2616144 VA: 0x2616144
	private void UpdateLockCountText() { }

	// RVA: 0x2614B9C Offset: 0x2614B9C VA: 0x2614B9C
	public void PlayProgressAnimation() { }

	// RVA: 0x2615464 Offset: 0x2615464 VA: 0x2615464
	public Sequence PlayCompleteAnimation(List<BottleItem> belongingBottles) { }

	// RVA: 0x261617C Offset: 0x261617C VA: 0x261617C
	private Sequence ReturnToDefaultSequence(float targetAngleForHandle, float targetAngleForCount, float countTextChangeTime, float totalDuration) { }

	// RVA: 0x2616410 Offset: 0x2616410 VA: 0x2616410
	private Sequence PlayCompleteSequence(List<BottleItem> belongingBottles) { }

	// RVA: 0x261666C Offset: 0x261666C VA: 0x261666C
	private Sequence UpdateAndRotateCountText() { }

	// RVA: 0x2616854 Offset: 0x2616854 VA: 0x2616854
	private Sequence PlaySafeDestroyAnimation(List<BottleItem> belongingBottles) { }

	// RVA: 0x261544C Offset: 0x261544C VA: 0x261544C
	public SafeConfigsForSize GetSafeConfigsForSize(int size) { }

	// RVA: 0x26172F0 Offset: 0x26172F0 VA: 0x26172F0 Slot: 7
	public override void Recycle() { }

	// RVA: 0x261428C Offset: 0x261428C VA: 0x261428C
	public void ResetView() { }

	// RVA: 0x2617308 Offset: 0x2617308 VA: 0x2617308 Slot: 8
	public override void Show() { }

	// RVA: 0x2617370 Offset: 0x2617370 VA: 0x2617370 Slot: 9
	public override void Hide() { }

	// RVA: 0x2615408 Offset: 0x2615408 VA: 0x2615408
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x2617394 Offset: 0x2617394 VA: 0x2617394
	private void PlayCompleteRotationClip() { }

	// RVA: 0x2616830 Offset: 0x2616830 VA: 0x2616830
	private void SetCompleteRotationAnimationSpeed() { }

	// RVA: 0x2617338 Offset: 0x2617338 VA: 0x2617338
	private void PlayDefaultClip() { }

	// RVA: 0x2615D24 Offset: 0x2615D24 VA: 0x2615D24
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x261740C Offset: 0x261740C VA: 0x261740C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2617414 Offset: 0x2617414 VA: 0x2617414
	private void <PlayProgressAnimation>b__27_0() { }

	[CompilerGenerated]
	// RVA: 0x2617440 Offset: 0x2617440 VA: 0x2617440
	private void <PlayProgressAnimation>b__27_1() { }

	[CompilerGenerated]
	// RVA: 0x26174C4 Offset: 0x26174C4 VA: 0x26174C4
	private void <ReturnToDefaultSequence>b__29_0() { }

	[CompilerGenerated]
	// RVA: 0x26174F0 Offset: 0x26174F0 VA: 0x26174F0
	private void <ReturnToDefaultSequence>b__29_1() { }

	[CompilerGenerated]
	// RVA: 0x261751C Offset: 0x261751C VA: 0x261751C
	private void <UpdateAndRotateCountText>b__31_0() { }

	[CompilerGenerated]
	// RVA: 0x2617548 Offset: 0x2617548 VA: 0x2617548
	private void <UpdateAndRotateCountText>b__31_1() { }

	[CompilerGenerated]
	// RVA: 0x2617608 Offset: 0x2617608 VA: 0x2617608
	private void <UpdateAndRotateCountText>b__31_2() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow