public class MosaicTargetView : MonoBehaviour // TypeDefIndex: 1664
{
	// Fields
	[SerializeField]
	private GameObject TargetGO; // 0x18
	[SerializeField]
	private SpriteRenderer TargetRenderer; // 0x20
	[SerializeField]
	private TargetBreakParticleController TargetParticle; // 0x28
	[SerializeField]
	private MosaicAnimationConfig mosaicAnimationConfig; // 0x30
	[SerializeField]
	private List<GameObject> _targetObjects; // 0x38
	[SerializeField]
	private GameObject _ropeObject; // 0x40
	[SerializeField]
	private BagTrail _trail; // 0x48
	[SerializeField]
	private BagAnimationConfig _bagAnimationConfig; // 0x50
	[SerializeField]
	private GameObject _targetUpGO; // 0x58
	[SerializeField]
	private GameObject _targetPivot; // 0x60
	[SerializeField]
	private MosaicTargetType _targetType; // 0x68
	[SerializeField]
	private Animation _animation; // 0x70
	[SerializeField]
	private MosaicTrailParticles _trailParticles; // 0x78
	[SerializeField]
	private int _defaultSortingOrder; // 0x80
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x88
	[SerializeField]
	private Transform _targetParticleDefaultParent; // 0x90
	private ColorId _targetColor; // 0x98
	private bool _isCompleted; // 0x9C

	// Properties
	public ColorId TargetColor { get; }

	// Methods

	// RVA: 0x27481D0 Offset: 0x27481D0 VA: 0x27481D0
	public ColorId get_TargetColor() { }

	// RVA: 0x27481D8 Offset: 0x27481D8 VA: 0x27481D8
	public void SetUpTargetView(ColorId targetColor, Color targetColorValue, int index) { }

	// RVA: 0x27485C8 Offset: 0x27485C8 VA: 0x27485C8
	public void SetTargetType(MosaicTargetType targetType) { }

	[Button]
	// RVA: 0x2748548 Offset: 0x2748548 VA: 0x2748548
	public void SetUpTargetType() { }

	// RVA: 0x27485D0 Offset: 0x27485D0 VA: 0x27485D0
	public void PlaySwingAnimation() { }

	// RVA: 0x2748664 Offset: 0x2748664 VA: 0x2748664
	public Tween BreakAnimation(BottleItem completedBottle, float randomDelay) { }

	// RVA: 0x2748A7C Offset: 0x2748A7C VA: 0x2748A7C
	private Sequence StartTrailMove(BottleItem completedBottle, bool sameX = False, bool fromLeft = False, bool sameY = False) { }

	// RVA: 0x2748E28 Offset: 0x2748E28 VA: 0x2748E28
	public void Recycle() { }

	// RVA: 0x2748E98 Offset: 0x2748E98 VA: 0x2748E98
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2748EA8 Offset: 0x2748EA8 VA: 0x2748EA8
	private void <BreakAnimation>b__24_0() { }

	[CompilerGenerated]
	// RVA: 0x2749184 Offset: 0x2749184 VA: 0x2749184
	private void <BreakAnimation>b__24_1() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic
[Serializable]