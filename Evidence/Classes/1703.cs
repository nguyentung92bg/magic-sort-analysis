public class FrogView : AItemView // TypeDefIndex: 1703
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer _colorSpriteRenderer; // 0x28
	[SerializeField]
	private ParticleSystem _particleSystem; // 0x30
	[SerializeField]
	private Transform _snitchTarget; // 0x38

	// Methods

	// RVA: 0x2752784 Offset: 0x2752784 VA: 0x2752784 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2752788 Offset: 0x2752788 VA: 0x2752788 Slot: 6
	public override void Spawn() { }

	// RVA: 0x27520D0 Offset: 0x27520D0 VA: 0x27520D0
	public void Prepare(Sorting sorting, FrogType frogType) { }

	// RVA: 0x2752940 Offset: 0x2752940 VA: 0x2752940
	private void SetType(FrogType frogType) { }

	// RVA: 0x2752A24 Offset: 0x2752A24 VA: 0x2752A24 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2752A28 Offset: 0x2752A28 VA: 0x2752A28
	public void PlayParticles() { }

	// RVA: 0x2752A44 Offset: 0x2752A44 VA: 0x2752A44 Slot: 8
	public override void Show() { }

	// RVA: 0x2752A68 Offset: 0x2752A68 VA: 0x2752A68 Slot: 9
	public override void Hide() { }

	// RVA: 0x27528D0 Offset: 0x27528D0 VA: 0x27528D0
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x2752A8C Offset: 0x2752A8C VA: 0x2752A8C
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2752AA8 Offset: 0x2752AA8 VA: 0x2752AA8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework
[CreateAssetMenu(fileName = "FireworkAnimationConfig", menuName = "Configs/FireworkAnimationConfig")]