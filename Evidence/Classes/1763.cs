public class CarpetView : AItemView // TypeDefIndex: 1763
{
	// Fields
	[SerializeField]
	private List<CarpetVariant> _carpetVariants; // 0x20
	private CarpetVariant _currentVariant; // 0x28
	private static readonly int Rotation; // 0x0

	// Properties
	public CarpetAnimationConfig Config { get; }

	// Methods

	// RVA: 0x2F5BA7C Offset: 0x2F5BA7C VA: 0x2F5BA7C
	public CarpetAnimationConfig get_Config() { }

	// RVA: 0x2F5CC54 Offset: 0x2F5CC54 VA: 0x2F5CC54 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2F5CC58 Offset: 0x2F5CC58 VA: 0x2F5CC58 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2F5CD60 Offset: 0x2F5CD60 VA: 0x2F5CD60
	private void SetVariant(int variantIndex) { }

	// RVA: 0x2F5A510 Offset: 0x2F5A510 VA: 0x2F5A510
	public void Prepare(Sorting sorting, int bottleCount, int blockerVariant) { }

	// RVA: 0x2F5CF48 Offset: 0x2F5CF48 VA: 0x2F5CF48
	public void UpdateView(int bottleCount, int initialBottleCount) { }

	[Button]
	// RVA: 0x2F5BA98 Offset: 0x2F5BA98 VA: 0x2F5BA98
	public Sequence PlayCarpetAnimation(int hiddenBottleCount, int initialBottleCount, float delay, Vector3 targetBottleWorldPosition) { }

	// RVA: 0x2F5D688 Offset: 0x2F5D688 VA: 0x2F5D688
	private Tween SpiralRotationTween(float rotationDuration, int revolution, AnimationCurve curve) { }

	// RVA: 0x2F5CF4C Offset: 0x2F5CF4C VA: 0x2F5CF4C
	public void SetView(int closedCarpetCount, int initialCarpetCount) { }

	// RVA: 0x2F5D880 Offset: 0x2F5D880 VA: 0x2F5D880 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2F5D884 Offset: 0x2F5D884 VA: 0x2F5D884 Slot: 8
	public override void Show() { }

	// RVA: 0x2F5D8A8 Offset: 0x2F5D8A8 VA: 0x2F5D8A8 Slot: 9
	public override void Hide() { }

	// RVA: 0x2F5B0A0 Offset: 0x2F5B0A0 VA: 0x2F5B0A0
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x2F5D8CC Offset: 0x2F5D8CC VA: 0x2F5D8CC
	public void .ctor() { }

	// RVA: 0x2F5D8D4 Offset: 0x2F5D8D4 VA: 0x2F5D8D4
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Bottle
[CreateAssetMenu(fileName = "Configs/BottleCollectionPlacementConfig", menuName = "Configs/BottleCollectionPlacementConfig")]