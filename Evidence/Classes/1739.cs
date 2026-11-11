public class DuckView : AItemView // TypeDefIndex: 1739
{
	// Fields
	[SerializeField]
	private DuckAnimationConfig _config; // 0x20
	[SerializeField]
	private DuckHouseColorConfig _coverConfig; // 0x28
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x30
	[SerializeField]
	private SpriteRenderer _glowSpriteRenderer; // 0x38
	[SerializeField]
	private ParticleSystem _trailParticle; // 0x40
	[SerializeField]
	private ParticleSystem _hitParticle; // 0x48
	[SerializeField]
	private ParticleSystem[] _trailParticles; // 0x50
	[SerializeField]
	private ParticleSystem[] _glowParticles; // 0x58
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x60

	// Properties
	public DuckAnimationConfig Config { get; }

	// Methods

	// RVA: 0x2F53EA4 Offset: 0x2F53EA4 VA: 0x2F53EA4
	public DuckAnimationConfig get_Config() { }

	// RVA: 0x2F53EAC Offset: 0x2F53EAC VA: 0x2F53EAC Slot: 5
	public override void Initialize() { }

	// RVA: 0x2F53EB0 Offset: 0x2F53EB0 VA: 0x2F53EB0 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2F52D80 Offset: 0x2F52D80 VA: 0x2F52D80
	public void Prepare(Sorting sorting, DuckType duckType) { }

	// RVA: 0x2F541AC Offset: 0x2F541AC VA: 0x2F541AC Slot: 7
	public override void Recycle() { }

	// RVA: 0x2F541B0 Offset: 0x2F541B0 VA: 0x2F541B0 Slot: 8
	public override void Show() { }

	// RVA: 0x2F541D4 Offset: 0x2F541D4 VA: 0x2F541D4 Slot: 9
	public override void Hide() { }

	// RVA: 0x2F5411C Offset: 0x2F5411C VA: 0x2F5411C
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x2F541F8 Offset: 0x2F541F8 VA: 0x2F541F8
	private void SetVfxSorting(Sorting sorting) { }

	// RVA: 0x2F5418C Offset: 0x2F5418C VA: 0x2F5418C
	private void ResetVfxSortingGroup() { }

	// RVA: 0x2F53FD8 Offset: 0x2F53FD8 VA: 0x2F53FD8
	private void SetParticleColor(DuckHouseColorData colorData) { }

	// RVA: 0x2F5363C Offset: 0x2F5363C VA: 0x2F5363C
	public float GetUnlockAnimationDuration() { }

	// RVA: 0x2F53658 Offset: 0x2F53658 VA: 0x2F53658
	public Sequence PlayUnlockAnimation(Vector3 targetPosition, Vector3 keyPosition, float lockPositionY, Vector3 bottleRootPosition, Sorting hideSorting, float revealDelay = 0) { }

	// RVA: 0x2F54740 Offset: 0x2F54740 VA: 0x2F54740
	private Tween ScaleAnim() { }

	// RVA: 0x2F5425C Offset: 0x2F5425C VA: 0x2F5425C
	private Tween MovePrepareAnim(Vector3 bottleRootPosition) { }

	// RVA: 0x2F542F8 Offset: 0x2F542F8 VA: 0x2F542F8
	private Tween SqueezePrepareAnim() { }

	// RVA: 0x2F54368 Offset: 0x2F54368 VA: 0x2F54368
	private Tween SlowDownAnim() { }

	// RVA: 0x2F543D8 Offset: 0x2F543D8 VA: 0x2F543D8
	private Tween StretchBackAnim() { }

	// RVA: 0x2F54448 Offset: 0x2F54448 VA: 0x2F54448
	private Tween RotationAnim() { }

	// RVA: 0x2F546C8 Offset: 0x2F546C8 VA: 0x2F546C8
	private Tween HideAnim() { }

	// RVA: 0x2F547E8 Offset: 0x2F547E8 VA: 0x2F547E8
	public void PlayCompletedBySnitch() { }

	// RVA: 0x2F5494C Offset: 0x2F5494C VA: 0x2F5494C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F54954 Offset: 0x2F54954 VA: 0x2F54954
	private void <PlayCompletedBySnitch>b__30_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Common.Serialization