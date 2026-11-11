public class SortKeyView : AItemView // TypeDefIndex: 1620
{
	// Fields
	private const float ExitDuration = 0.25;
	private const float MoveToCenterDuration = 0.5;
	private const float BezierCeilingOffset = 1.5;
	private const float CenterScale = 2.2;
	private const float DisappearDuration = 0.25;
	private const float AppearStartScale = 0.3;
	private const float AppearDuration = 0.35;
	private const float InBottleSpriteAlpha = 0.79607844;
	private const float InBottleGlowAlpha = 0.34117648;
	private const float InBottleSecondaryGlowAlpha = 0.1372549;
	private static readonly Vector3 CenterPosition; // 0x0
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private GameObject _starView; // 0x28
	[SerializeField]
	private GameObject _trail; // 0x30
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x38
	[SerializeField]
	private SpriteRenderer _glowSpriteRenderer; // 0x40
	[SerializeField]
	private SpriteRenderer _secondaryGlowSpriteRenderer; // 0x48
	[SerializeField]
	private ParticleSystem _appearParticle; // 0x50

	// Methods

	// RVA: 0x260D4EC Offset: 0x260D4EC VA: 0x260D4EC Slot: 5
	public override void Initialize() { }

	// RVA: 0x260D4F0 Offset: 0x260D4F0 VA: 0x260D4F0 Slot: 6
	public override void Spawn() { }

	// RVA: 0x260D4FC Offset: 0x260D4FC VA: 0x260D4FC Slot: 7
	public override void Recycle() { }

	// RVA: 0x260C318 Offset: 0x260C318 VA: 0x260C318
	public void Prepare(Sorting sorting) { }

	// RVA: 0x260D500 Offset: 0x260D500 VA: 0x260D500
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x260D6EC Offset: 0x260D6EC VA: 0x260D6EC
	private static Sorting GetMovingSorting() { }

	// RVA: 0x260D5B0 Offset: 0x260D5B0 VA: 0x260D5B0
	private void ResetStarView() { }

	// RVA: 0x260D654 Offset: 0x260D654 VA: 0x260D654
	private void SetTrailActive(bool isActive) { }

	// RVA: 0x260CDA0 Offset: 0x260CDA0 VA: 0x260CDA0
	public void PlayAppearAnimation() { }

	// RVA: 0x260CA6C Offset: 0x260CA6C VA: 0x260CA6C
	public Sequence PlayRevealAnimation(Vector3 bottleTopPosition) { }

	// RVA: 0x260CFA0 Offset: 0x260CFA0 VA: 0x260CFA0
	public Sequence PlayMoveToCenterAnimation() { }

	// RVA: 0x260D310 Offset: 0x260D310 VA: 0x260D310
	public void PlayDisappearAnimation() { }

	// RVA: 0x260D200 Offset: 0x260D200 VA: 0x260D200
	public Transform GetTrailSourceTransform() { }

	// RVA: 0x260D768 Offset: 0x260D768 VA: 0x260D768
	private Vector3 GetCenterPosition() { }

	// RVA: 0x260D7C4 Offset: 0x260D7C4 VA: 0x260D7C4 Slot: 8
	public override void Show() { }

	// RVA: 0x260D7E8 Offset: 0x260D7E8 VA: 0x260D7E8 Slot: 9
	public override void Hide() { }

	// RVA: 0x260D80C Offset: 0x260D80C VA: 0x260D80C
	public void .ctor() { }

	// RVA: 0x260D814 Offset: 0x260D814 VA: 0x260D814
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x260D898 Offset: 0x260D898 VA: 0x260D898
	private void <PlayRevealAnimation>b__27_0() { }

	[CompilerGenerated]
	// RVA: 0x260D90C Offset: 0x260D90C VA: 0x260D90C
	private void <PlayDisappearAnimation>b__29_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch
[Serializable]