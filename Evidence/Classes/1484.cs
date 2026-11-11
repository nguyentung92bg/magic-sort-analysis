public class PlasterView : AItemView // TypeDefIndex: 1484
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private Transform _snitchTarget; // 0x28
	[SerializeField]
	private GameObject _shadow; // 0x30
	[SerializeField]
	private List<PlasterVariant> _plasterVariants; // 0x38
	private PlasterVariant _currentPlasterVariant; // 0x40

	// Methods

	// RVA: 0x248E050 Offset: 0x248E050 VA: 0x248E050 Slot: 5
	public override void Initialize() { }

	// RVA: 0x248E054 Offset: 0x248E054 VA: 0x248E054 Slot: 6
	public override void Spawn() { }

	// RVA: 0x248E0A8 Offset: 0x248E0A8 VA: 0x248E0A8
	private void SetVariant(int variantId) { }

	// RVA: 0x248E208 Offset: 0x248E208 VA: 0x248E208
	private void SetSprite() { }

	// RVA: 0x248D844 Offset: 0x248D844 VA: 0x248D844
	public void Prepare(Sorting sorting, int blockerVariant) { }

	// RVA: 0x248E274 Offset: 0x248E274 VA: 0x248E274 Slot: 7
	public override void Recycle() { }

	// RVA: 0x248E230 Offset: 0x248E230 VA: 0x248E230
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x248DED8 Offset: 0x248DED8 VA: 0x248DED8
	public void PlayParticles() { }

	// RVA: 0x248DEA0 Offset: 0x248DEA0 VA: 0x248DEA0
	public void HidePlasterStaticView() { }

	// RVA: 0x248E294 Offset: 0x248E294 VA: 0x248E294 Slot: 8
	public override void Show() { }

	// RVA: 0x248E2B8 Offset: 0x248E2B8 VA: 0x248E2B8 Slot: 9
	public override void Hide() { }

	// RVA: 0x248DE1C Offset: 0x248DE1C VA: 0x248DE1C
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x248E2DC Offset: 0x248E2DC VA: 0x248E2DC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock