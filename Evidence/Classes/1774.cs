public class BagView : AItemView // TypeDefIndex: 1774
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private TextMeshPro _countText; // 0x28
	[SerializeField]
	private BagTrail[] _trailParticles; // 0x30
	[SerializeField]
	private Transform _tagPivot; // 0x38
	[SerializeField]
	private BagAnimationConfig _animationConfig; // 0x40
	[SerializeField]
	private Animation _animation; // 0x48
	[SerializeField]
	private ParticleSystem _impactParticle; // 0x50
	[SerializeField]
	private GameObject _tagParticleGO; // 0x58
	[SerializeField]
	private SortingGroup _tagParticleSortingGroup; // 0x60
	[SerializeField]
	private ParticleSystem _tagParticle; // 0x68
	private Sequence _progressSequence; // 0x70
	private Sequence _completeSequence; // 0x78
	private Sequence _tagSequence; // 0x80
	private int _targetCount; // 0x88

	// Properties
	public BagAnimationConfig Config { get; }

	// Methods

	// RVA: 0x2F5FBC8 Offset: 0x2F5FBC8 VA: 0x2F5FBC8
	public BagAnimationConfig get_Config() { }

	// RVA: 0x2F5FBD0 Offset: 0x2F5FBD0 VA: 0x2F5FBD0 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2F5FBD4 Offset: 0x2F5FBD4 VA: 0x2F5FBD4 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2F5E240 Offset: 0x2F5E240 VA: 0x2F5E240
	public void Prepare(Sorting sorting, int requiredAmount) { }

	// RVA: 0x2F5E938 Offset: 0x2F5E938 VA: 0x2F5E938
	public void PlayProgressAnimation(int remainingCount, BottleItem completedBottle, BottleItem belongingBottle) { }

	// RVA: 0x2F60264 Offset: 0x2F60264 VA: 0x2F60264
	public void PlayTagAnimation() { }

	// RVA: 0x2F60280 Offset: 0x2F60280 VA: 0x2F60280
	private void RestartTagAnimation(bool fromLeft) { }

	[Button]
	// RVA: 0x2F60324 Offset: 0x2F60324 VA: 0x2F60324
	private Sequence PlayTagAnimation(bool fromLeft) { }

	// RVA: 0x2F5EF04 Offset: 0x2F5EF04 VA: 0x2F5EF04
	public Sequence PlayCompleteAnimation(BottleItem completedBottle, BottleItem belongingBottle) { }

	// RVA: 0x2F5FE38 Offset: 0x2F5FE38 VA: 0x2F5FE38
	private Sequence StartTrailMove(BottleItem completedBottle, BottleItem belongingBottle, bool sameX = False, bool fromLeft = False, bool sameY = False) { }

	// RVA: 0x2F60198 Offset: 0x2F60198 VA: 0x2F60198
	private void AppendBottleSortingRestore(Sequence sequence, BottleItem belongingBottle) { }

	// RVA: 0x2F6046C Offset: 0x2F6046C VA: 0x2F6046C
	private BagTrail GetAvailableTrail() { }

	// RVA: 0x2F5E510 Offset: 0x2F5E510 VA: 0x2F5E510
	public void ResetView() { }

	// RVA: 0x2F604CC Offset: 0x2F604CC VA: 0x2F604CC Slot: 7
	public override void Recycle() { }

	// RVA: 0x2F604D0 Offset: 0x2F604D0 VA: 0x2F604D0 Slot: 8
	public override void Show() { }

	// RVA: 0x2F60550 Offset: 0x2F60550 VA: 0x2F60550 Slot: 9
	public override void Hide() { }

	// RVA: 0x2F5FCDC Offset: 0x2F5FCDC VA: 0x2F5FCDC
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x2F5FD8C Offset: 0x2F5FD8C VA: 0x2F5FD8C
	private void UpdateCountText(int count) { }

	// RVA: 0x2F605C8 Offset: 0x2F605C8 VA: 0x2F605C8
	private void SetTargetCount() { }

	// RVA: 0x2F605D0 Offset: 0x2F605D0 VA: 0x2F605D0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F605D8 Offset: 0x2F605D8 VA: 0x2F605D8
	private void <PlayCompleteAnimation>b__23_0() { }

	[CompilerGenerated]
	// RVA: 0x2F605E0 Offset: 0x2F605E0 VA: 0x2F605E0
	private void <PlayCompleteAnimation>b__23_1() { }

	[CompilerGenerated]
	// RVA: 0x2F605FC Offset: 0x2F605FC VA: 0x2F605FC
	private void <PlayCompleteAnimation>b__23_2() { }

	[CompilerGenerated]
	// RVA: 0x2F606E0 Offset: 0x2F606E0 VA: 0x2F606E0
	private void <PlayCompleteAnimation>b__23_3() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.ItemParts.Scripts.Shadow