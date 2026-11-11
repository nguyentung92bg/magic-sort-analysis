public class MosaicView : AItemView // TypeDefIndex: 1673
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private MosaicAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private Transform _bottomPivot; // 0x30
	[SerializeField]
	private Transform _snitchPivot; // 0x38
	[SerializeField]
	private Transform _shakePivot; // 0x40
	[SerializeField]
	private List<MosaicSizeContainer> _containers; // 0x48
	[SerializeField]
	private List<MosaicTargetLayout> _targetLayouts; // 0x50
	[SerializeField]
	private List<MosaicTargetView> _targets; // 0x58
	[SerializeField]
	private Animation _animation; // 0x60
	private Sequence _completeSequence; // 0x68
	private readonly List<MosaicTargetView> _activeTargets; // 0x70

	// Methods

	// RVA: 0x2749294 Offset: 0x2749294 VA: 0x2749294 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2749298 Offset: 0x2749298 VA: 0x2749298 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2746954 Offset: 0x2746954 VA: 0x2746954
	public void Prepare(Sorting sorting, int bottlesCount, List<ColorId> requiredColors) { }

	// RVA: 0x27493A0 Offset: 0x27493A0 VA: 0x27493A0
	private void SetUpTargets(List<ColorId> requiredColors, int bottlesCount) { }

	// RVA: 0x2749954 Offset: 0x2749954 VA: 0x2749954
	private Sequence UpdateTargetContainer(ColorId waterColorId, BottleItem completedBottle) { }

	// RVA: 0x274753C Offset: 0x274753C VA: 0x274753C
	public void PlayProgressAnimation(ColorId waterColorId, BottleItem completedBottle) { }

	// RVA: 0x2747624 Offset: 0x2747624 VA: 0x2747624
	public Sequence PlayCompleteAnimation(List<BottleItem> belongingBottles, ColorId waterColorId, BottleItem completedBottle) { }

	// RVA: 0x2749D44 Offset: 0x2749D44 VA: 0x2749D44
	private static AnimationCurve Flattened(AnimationCurve src, float amount) { }

	// RVA: 0x2749EE8 Offset: 0x2749EE8 VA: 0x2749EE8
	private Sequence PlayMosaicDestroyAnimation(List<BottleItem> belongingBottles) { }

	// RVA: 0x274760C Offset: 0x274760C VA: 0x274760C
	public MosaicConfigsForSize GetMosaicConfigsForSize(int size) { }

	// RVA: 0x274A978 Offset: 0x274A978 VA: 0x274A978 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2746DFC Offset: 0x2746DFC VA: 0x2746DFC
	public void ResetView() { }

	// RVA: 0x274AAC0 Offset: 0x274AAC0 VA: 0x274AAC0 Slot: 8
	public override void Show() { }

	// RVA: 0x274AAE4 Offset: 0x274AAE4 VA: 0x274AAE4 Slot: 9
	public override void Hide() { }

	// RVA: 0x27475C8 Offset: 0x27475C8 VA: 0x27475C8
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x2747D60 Offset: 0x2747D60 VA: 0x2747D60
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x274AB08 Offset: 0x274AB08 VA: 0x274AB08
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic