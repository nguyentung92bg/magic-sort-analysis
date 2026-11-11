public class IvyView : AItemView // TypeDefIndex: 1682
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private SpriteRenderer _spriteRendererForHeight1; // 0x28
	[SerializeField]
	private SpriteRenderer _spriteRendererForHeight2; // 0x30
	[SerializeField]
	private SpriteRenderer _spriteRendererForHeight3; // 0x38
	[SerializeField]
	private SpriteRenderer _spriteRendererForHeight4; // 0x40
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x48
	[SerializeField]
	private Transform _snitchTarget; // 0x50
	[SerializeField]
	private Sprite _revealedSprite; // 0x58
	[SerializeField]
	private Sprite _sprite; // 0x60
	[SerializeField]
	private SpriteRenderer _spriteRendererColor; // 0x68

	// Methods

	// RVA: 0x274CA84 Offset: 0x274CA84 VA: 0x274CA84 Slot: 5
	public override void Initialize() { }

	// RVA: 0x274CA88 Offset: 0x274CA88 VA: 0x274CA88 Slot: 6
	public override void Spawn() { }

	// RVA: 0x274C5EC Offset: 0x274C5EC VA: 0x274C5EC
	public void SetHeight(int height, bool revealed) { }

	// RVA: 0x274C48C Offset: 0x274C48C VA: 0x274C48C
	public void Prepare(Sorting sorting, ColorAndColorId colorAndColorId) { }

	// RVA: 0x274CBF4 Offset: 0x274CBF4 VA: 0x274CBF4 Slot: 7
	public override void Recycle() { }

	// RVA: 0x274CBF8 Offset: 0x274CBF8 VA: 0x274CBF8
	public void PlayParticles() { }

	// RVA: 0x274CC14 Offset: 0x274CC14 VA: 0x274CC14 Slot: 8
	public override void Show() { }

	// RVA: 0x274CC38 Offset: 0x274CC38 VA: 0x274CC38 Slot: 9
	public override void Hide() { }

	// RVA: 0x274CBB0 Offset: 0x274CBB0 VA: 0x274CBB0
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x274CC5C Offset: 0x274CC5C VA: 0x274CC5C
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x274CC78 Offset: 0x274CC78 VA: 0x274CC78
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle