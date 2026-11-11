public class ChargeableBottleView : AItemView // TypeDefIndex: 1751
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroupFront; // 0x20
	[SerializeField]
	private SortingGroup _sortingGroupBack; // 0x28
	[SerializeField]
	private GameObject _frontView; // 0x30
	[SerializeField]
	private GameObject _backView; // 0x38
	[SerializeField]
	private Animation _animation; // 0x40
	[SerializeField]
	public ChargeableBottleAnimationConfig animationConfig; // 0x48
	[SerializeField]
	private GameObject _animationBottle; // 0x50
	[SerializeField]
	private List<SpriteRenderer> _shadowRenderers; // 0x58
	[SerializeField]
	private ParticleSystem _trail; // 0x60
	[SerializeField]
	private ParticleSystem _impactParticle; // 0x68
	[SerializeField]
	private Transform _targetPosition; // 0x70
	private Color _initialColor; // 0x78
	private Color _selectedColor; // 0x88
	private Color _movedColor; // 0x98

	// Methods

	// RVA: 0x2F596D0 Offset: 0x2F596D0 VA: 0x2F596D0 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2F596D4 Offset: 0x2F596D4 VA: 0x2F596D4 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2F583E0 Offset: 0x2F583E0 VA: 0x2F583E0
	public void Prepare(Sorting frontSorting, Sorting backSorting, string countText) { }

	// RVA: 0x2F594FC Offset: 0x2F594FC VA: 0x2F594FC
	public void PlayNewBottleAnimation() { }

	// RVA: 0x2F58CA0 Offset: 0x2F58CA0 VA: 0x2F58CA0
	public void PlayBottleHideAnimation() { }

	// RVA: 0x2F59694 Offset: 0x2F59694 VA: 0x2F59694
	public void HideAnimationBottle() { }

	// RVA: 0x2F58C80 Offset: 0x2F58C80 VA: 0x2F58C80
	public void ShowAnimationBottle() { }

	// RVA: 0x2F58D20 Offset: 0x2F58D20 VA: 0x2F58D20
	public void PlayBottleSelectedAnimation() { }

	// RVA: 0x2F58E84 Offset: 0x2F58E84 VA: 0x2F58E84
	public void PlayBottleDeselectedAnimation() { }

	// RVA: 0x2F58FE8 Offset: 0x2F58FE8 VA: 0x2F58FE8
	public void PlayBottleMove() { }

	// RVA: 0x2F59834 Offset: 0x2F59834 VA: 0x2F59834
	public void PlayBottleMoveEnd() { }

	// RVA: 0x2F585B0 Offset: 0x2F585B0 VA: 0x2F585B0
	public void ShowShadows() { }

	// RVA: 0x2F58474 Offset: 0x2F58474 VA: 0x2F58474
	public void HideShadows() { }

	// RVA: 0x2F59980 Offset: 0x2F59980 VA: 0x2F59980
	public Sequence PlayTrailAnimation(Transform source) { }

	// RVA: 0x2F59B58 Offset: 0x2F59B58 VA: 0x2F59B58
	public Transform GetTrailTargetTransform() { }

	// RVA: 0x2F59354 Offset: 0x2F59354 VA: 0x2F59354
	public void OnTrailReachedToBottle() { }

	// RVA: 0x2F59B60 Offset: 0x2F59B60 VA: 0x2F59B60 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2F59804 Offset: 0x2F59804 VA: 0x2F59804
	public void SetSorting(Sorting frontSorting, Sorting backSorting) { }

	// RVA: 0x2F58940 Offset: 0x2F58940 VA: 0x2F58940
	public void SetFrontSorting(Sorting sorting) { }

	// RVA: 0x2F593E4 Offset: 0x2F593E4 VA: 0x2F593E4
	public void SetBackSorting(Sorting sorting) { }

	// RVA: 0x2F59B64 Offset: 0x2F59B64 VA: 0x2F59B64 Slot: 8
	public override void Show() { }

	// RVA: 0x2F59B88 Offset: 0x2F59B88 VA: 0x2F59B88 Slot: 9
	public override void Hide() { }

	// RVA: 0x2F59BAC Offset: 0x2F59BAC VA: 0x2F59BAC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F59BD8 Offset: 0x2F59BD8 VA: 0x2F59BD8
	private void <PlayTrailAnimation>b__27_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Carpet
[CreateAssetMenu(fileName = "CarpetAnimationConfig", menuName = "Configs/CarpetAnimationConfig")]