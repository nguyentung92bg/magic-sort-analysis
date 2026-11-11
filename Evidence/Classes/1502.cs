public class ClayView : AItemView // TypeDefIndex: 1502
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private Transform _snitchTarget; // 0x28
	[SerializeField]
	private GameObject _shadow; // 0x30
	[SerializeField]
	private List<ClayVariant> _clayVariants; // 0x38
	private ClayVariant _currentClayVariant; // 0x40

	// Methods

	// RVA: 0x2491BC0 Offset: 0x2491BC0 VA: 0x2491BC0 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2491BC4 Offset: 0x2491BC4 VA: 0x2491BC4 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2491D00 Offset: 0x2491D00 VA: 0x2491D00
	private void SetVariant(int variantId) { }

	// RVA: 0x2491E60 Offset: 0x2491E60 VA: 0x2491E60
	private void SetSprite() { }

	// RVA: 0x24915E4 Offset: 0x24915E4 VA: 0x24915E4
	public void Prepare(Sorting sorting, int blockerVariant) { }

	// RVA: 0x2491F28 Offset: 0x2491F28 VA: 0x2491F28 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2491A48 Offset: 0x2491A48 VA: 0x2491A48
	public void PlayParticles() { }

	// RVA: 0x2491A04 Offset: 0x2491A04 VA: 0x2491A04
	public void HideStaticView() { }

	// RVA: 0x2491F2C Offset: 0x2491F2C VA: 0x2491F2C Slot: 8
	public override void Show() { }

	// RVA: 0x2491F50 Offset: 0x2491F50 VA: 0x2491F50 Slot: 9
	public override void Hide() { }

	// RVA: 0x2491EE4 Offset: 0x2491EE4 VA: 0x2491EE4
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x249199C Offset: 0x249199C VA: 0x249199C
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2491F74 Offset: 0x2491F74 VA: 0x2491F74
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle
[CreateAssetMenu(fileName = "BottleAnimationForGeneratorConfig", menuName = "Configs/BottleAnimationForGeneratorConfig")]