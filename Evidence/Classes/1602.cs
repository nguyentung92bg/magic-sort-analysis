public class WoodboxKeyView : AItemView // TypeDefIndex: 1602
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private SpriteRenderer _keyRenderer; // 0x28
	[SerializeField]
	private Animator _keyAnimator; // 0x30
	[SerializeField]
	private ParticleSystem _trailParticle; // 0x38
	[SerializeField]
	private ParticleSystem _keyRevealParticle; // 0x40
	[SerializeField]
	private List<WoodboxKeyVariant> _keyVariants; // 0x48
	private WoodboxKeyVariant _currentVariant; // 0x50

	// Properties
	public KeyAnimationConfig Config { get; }

	// Methods

	// RVA: 0x230D374 Offset: 0x230D374 VA: 0x230D374
	public KeyAnimationConfig get_Config() { }

	// RVA: 0x230D734 Offset: 0x230D734 VA: 0x230D734 Slot: 5
	public override void Initialize() { }

	// RVA: 0x230D738 Offset: 0x230D738 VA: 0x230D738 Slot: 6
	public override void Spawn() { }

	// RVA: 0x230C604 Offset: 0x230C604 VA: 0x230C604
	public void Prepare(Sorting sorting, WoodboxKeyType woodboxKeyType, int blockerVariant) { }

	// RVA: 0x230D744 Offset: 0x230D744 VA: 0x230D744
	private void SetVariant(int variantIndex) { }

	// RVA: 0x230DA00 Offset: 0x230DA00 VA: 0x230DA00 Slot: 7
	public override void Recycle() { }

	// RVA: 0x230D944 Offset: 0x230D944 VA: 0x230D944
	public void SetKeyTypeLibrary(WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x230DA5C Offset: 0x230DA5C VA: 0x230DA5C Slot: 8
	public override void Show() { }

	// RVA: 0x230DA80 Offset: 0x230DA80 VA: 0x230DA80 Slot: 9
	public override void Hide() { }

	// RVA: 0x230D900 Offset: 0x230D900 VA: 0x230D900
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x230DAA4 Offset: 0x230DAA4 VA: 0x230DAA4
	private void CloseGlowIfNeeded() { }

	// RVA: 0x230CDA8 Offset: 0x230CDA8 VA: 0x230CDA8
	public Sequence PlayUnlockAnimation(Vector3 targetPosition, Vector3 keyPosition, float lockPositionY, Vector3 bottleRootPosition, bool isOnQuestionMark, float revealDelay = 0) { }

	// RVA: 0x230DB90 Offset: 0x230DB90 VA: 0x230DB90
	private Tween RotateAnim() { }

	// RVA: 0x230DC1C Offset: 0x230DC1C VA: 0x230DC1C
	private Tween ScaleAnim() { }

	// RVA: 0x230DAE8 Offset: 0x230DAE8 VA: 0x230DAE8
	private Tween MovePrepareAnim(Vector3 bottleRootPosition) { }

	// RVA: 0x230D588 Offset: 0x230D588 VA: 0x230D588
	public void PlayCompletedBySnitch() { }

	// RVA: 0x230DCD0 Offset: 0x230DCD0 VA: 0x230DCD0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x230DCD8 Offset: 0x230DCD8 VA: 0x230DCD8
	private void <PlayCompletedBySnitch>b__23_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox
[Serializable]