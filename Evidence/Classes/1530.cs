public class BottleView : AItemView // TypeDefIndex: 1530
{
	// Fields
	[CompilerGenerated]
	private BottleOutlines <BottleOutlines>k__BackingField; // 0x20
	[SerializeField]
	private Animation _animation; // 0x28
	[SerializeField]
	private SpriteRenderer _spriteRendererFront; // 0x30
	[SerializeField]
	private SpriteRenderer _spriteRendererBack; // 0x38
	[SerializeField]
	private SpriteRenderer _additiveSprite; // 0x40
	[SerializeField]
	private SpriteRenderer _multiplySprite; // 0x48
	[SerializeField]
	private List<BottleByHeight> _bottleByHeights; // 0x50
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x58
	[SerializeField]
	private WaterParticleView _waterParticleView; // 0x60
	[SerializeField]
	private ParticleSystem _revealParticleFor4Unit; // 0x68
	[SerializeField]
	private ParticleSystem _revealParticleFor2Unit; // 0x70
	[SerializeField]
	private ParticleSystem _revealParticleFor1Unit; // 0x78
	[SerializeField]
	private BottleStopperView _bottleStopperView; // 0x80
	[SerializeField]
	private BottleFillAnimationConfig _bottleFillAnimationConfig; // 0x88
	[SerializeField]
	public BottleShuffleAnimationConfig _bottleShuffleAnimationConfig; // 0x90
	[SerializeField]
	public BottleShuffleAnimationConfig _bottleShuffleAnimationConfigForGenerator; // 0x98
	[SerializeField]
	private BottleAnimationForGeneratorConfig _bottleAnimationForGeneratorConfig; // 0xA0
	[SerializeField]
	private BottleRevealAnimationConfig _bottleRevealAnimationConfigFor4Unit; // 0xA8
	[SerializeField]
	private BottleRevealAnimationConfig _bottleRevealAnimationConfigFor2Unit; // 0xB0
	[SerializeField]
	private BottleRevealAnimationConfig _bottleRevealAnimationConfigFor1Unit; // 0xB8
	[SerializeField]
	private DailyBottleStretchAnimationConfig _dailyBottleStretchAnimationConfig; // 0xC0
	[SerializeField]
	private Transform _snitchTargetPosition; // 0xC8
	[SerializeField]
	private ParticleSystem _snitchHitToBottleFx; // 0xD0
	[SerializeField]
	private BottleCompleteAnimationController _bottleCompleteAnimationController; // 0xD8
	[SerializeField]
	private ParticleSystem _bottleEmptyParticle; // 0xE0
	[SerializeField]
	private Transform _superChargerEffects; // 0xE8
	[SerializeField]
	private Animation _superChargerAnimation; // 0xF0
	[CompilerGenerated]
	private float <BottleBoundsHeightOffset>k__BackingField; // 0xF8
	[CompilerGenerated]
	private float <BottleBoundsHeightExtraMargin>k__BackingField; // 0xFC
	private BottleRevealAnimationConfig _bottleRevealAnimationConfig; // 0x100
	private Tween _scaleTween; // 0x108
	private BottleByHeight _bottleByHeight; // 0x110

	// Properties
	public BottleOutlines BottleOutlines { get; set; }
	public WaterParticleView WaterParticleView { get; }
	public float BottleBoundsHeightOffset { get; set; }
	public float BottleBoundsHeightExtraMargin { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22FBDA8 Offset: 0x22FBDA8 VA: 0x22FBDA8
	public BottleOutlines get_BottleOutlines() { }

	[CompilerGenerated]
	// RVA: 0x22FBDB0 Offset: 0x22FBDB0 VA: 0x22FBDB0
	private void set_BottleOutlines(BottleOutlines value) { }

	// RVA: 0x22FBDB8 Offset: 0x22FBDB8 VA: 0x22FBDB8
	public WaterParticleView get_WaterParticleView() { }

	[CompilerGenerated]
	// RVA: 0x22FBDC0 Offset: 0x22FBDC0 VA: 0x22FBDC0
	public float get_BottleBoundsHeightOffset() { }

	[CompilerGenerated]
	// RVA: 0x22FBDC8 Offset: 0x22FBDC8 VA: 0x22FBDC8
	private void set_BottleBoundsHeightOffset(float value) { }

	[CompilerGenerated]
	// RVA: 0x22FBDD0 Offset: 0x22FBDD0 VA: 0x22FBDD0
	public float get_BottleBoundsHeightExtraMargin() { }

	[CompilerGenerated]
	// RVA: 0x22FBDD8 Offset: 0x22FBDD8 VA: 0x22FBDD8
	private void set_BottleBoundsHeightExtraMargin(float value) { }

	// RVA: 0x22FBDE0 Offset: 0x22FBDE0 VA: 0x22FBDE0 Slot: 5
	public override void Initialize() { }

	// RVA: 0x22FBDE4 Offset: 0x22FBDE4 VA: 0x22FBDE4 Slot: 8
	public override void Show() { }

	// RVA: 0x22FBE08 Offset: 0x22FBE08 VA: 0x22FBE08 Slot: 9
	public override void Hide() { }

	// RVA: 0x22FBE2C Offset: 0x22FBE2C VA: 0x22FBE2C Slot: 6
	public override void Spawn() { }

	// RVA: 0x22FBF18 Offset: 0x22FBF18 VA: 0x22FBF18
	public void Prepare(int height, int bottleAndWaterVariant, int frontSortOrder, int backSortOrder) { }

	// RVA: 0x22FC208 Offset: 0x22FC208 VA: 0x22FC208 Slot: 7
	public override void Recycle() { }

	[Button]
	// RVA: 0x22FC370 Offset: 0x22FC370 VA: 0x22FC370
	public void OnFilled(int bottleHeight, ColorAndColorId winParticleColor, Sorting sorting, bool hasAnimationBlockingBlocker) { }

	[Button]
	// RVA: 0x22FC6F8 Offset: 0x22FC6F8 VA: 0x22FC6F8
	public void OnUndoFilled() { }

	// RVA: 0x22FC710 Offset: 0x22FC710 VA: 0x22FC710
	public Transform GetWaterLineTransformLeft() { }

	// RVA: 0x22FC72C Offset: 0x22FC72C VA: 0x22FC72C
	public Transform GetWaterLineTransformRight() { }

	// RVA: 0x22FC748 Offset: 0x22FC748 VA: 0x22FC748
	public Vector3 GetBlobUpPosition() { }

	// RVA: 0x22FC7D8 Offset: 0x22FC7D8 VA: 0x22FC7D8
	public WaterLineStartView GetRightWaterLineStartView() { }

	// RVA: 0x22FC7F4 Offset: 0x22FC7F4 VA: 0x22FC7F4
	public WaterLineStartView GetLeftWaterLineStartView() { }

	// RVA: 0x22FC810 Offset: 0x22FC810 VA: 0x22FC810
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x22FBFD4 Offset: 0x22FBFD4 VA: 0x22FBFD4
	private void SetBottleHeightAndVariant(int height, int variant) { }

	// RVA: 0x22FC854 Offset: 0x22FC854 VA: 0x22FC854
	private void EnableBottleVisuals(BottleByHeight bottleByHeight) { }

	// RVA: 0x22FC954 Offset: 0x22FC954 VA: 0x22FC954
	private void DisableBottleVisuals(BottleByHeight bottleByHeight) { }

	// RVA: 0x22FCA1C Offset: 0x22FCA1C VA: 0x22FCA1C
	public void BottleRevealAnimation(int bottleHeight, float delay) { }

	// RVA: 0x22FCE3C Offset: 0x22FCE3C VA: 0x22FCE3C
	public void HideBottle() { }

	[Button]
	// RVA: 0x22FCEC4 Offset: 0x22FCEC4 VA: 0x22FCEC4
	public void MagicBottleRevealAnimation() { }

	// RVA: 0x22FCF14 Offset: 0x22FCF14 VA: 0x22FCF14
	public Tween PlayShuffleAnimation(Vector3 initialPosition) { }

	// RVA: 0x22FD6F8 Offset: 0x22FD6F8 VA: 0x22FD6F8
	public Tween PlayShuffleAnimationForGenerator(Vector3 initialPosition) { }

	// RVA: 0x22FDAE4 Offset: 0x22FDAE4 VA: 0x22FDAE4
	public Tween PlayGeneratorFillAnimation() { }

	// RVA: 0x22FDCCC Offset: 0x22FDCCC VA: 0x22FDCCC
	public Tween PlayGeneratorExplosionAnimation(Vector3 toPosition) { }

	// RVA: 0x22FDFDC Offset: 0x22FDFDC VA: 0x22FDFDC
	public Tween PlayGeneratorClipsAnimation(Vector3 toPosition) { }

	// RVA: 0x22FE0B0 Offset: 0x22FE0B0 VA: 0x22FE0B0
	public void DailyBottleStretchIn() { }

	// RVA: 0x22FE160 Offset: 0x22FE160 VA: 0x22FE160
	public void DailyBottleStretchOut() { }

	// RVA: 0x22FE210 Offset: 0x22FE210 VA: 0x22FE210
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x22FE22C Offset: 0x22FE22C VA: 0x22FE22C
	public Vector3 GetCenterPosition() { }

	// RVA: 0x22FE27C Offset: 0x22FE27C VA: 0x22FE27C
	public void PlaySnitchHitToBottleFx() { }

	// RVA: 0x22FE298 Offset: 0x22FE298 VA: 0x22FE298
	public void PlayEmptyBottleFx() { }

	// RVA: 0x22FE2B4 Offset: 0x22FE2B4 VA: 0x22FE2B4
	public void PlaySuperChargerAnimation(float speed = 1) { }

	// RVA: 0x22FE354 Offset: 0x22FE354 VA: 0x22FE354
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x22FE364 Offset: 0x22FE364 VA: 0x22FE364
	private void <DailyBottleStretchIn>b__68_0(float value) { }

	[CompilerGenerated]
	// RVA: 0x22FE4C8 Offset: 0x22FE4C8 VA: 0x22FE4C8
	private void <DailyBottleStretchOut>b__69_0(float value) { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[CreateAssetMenu(fileName = "ConfigsByBottleHeight", menuName = "Configs/ConfigsByBottleHeight")]