public class IceView : AItemView // TypeDefIndex: 1695
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private SpriteRenderer _iceRenderer; // 0x28
	[SerializeField]
	private Sprite[] _widths; // 0x30
	[SerializeField]
	private GameObject[] _widthsShadowGameObjects; // 0x38
	[SerializeField]
	private SpriteMask _maskLeft; // 0x40
	[SerializeField]
	private SpriteMask _maskRight; // 0x48
	[SerializeField]
	private List<GameObject> _fxContainers; // 0x50
	[SerializeField]
	private List<ParticleSystem> _indexParticles; // 0x58
	[SerializeField]
	private Transform _snitchPivot; // 0x60
	private bool _useShadow; // 0x68

	// Methods

	// RVA: 0x274F17C Offset: 0x274F17C VA: 0x274F17C Slot: 5
	public override void Initialize() { }

	// RVA: 0x274F180 Offset: 0x274F180 VA: 0x274F180 Slot: 6
	public override void Spawn() { }

	// RVA: 0x274D4D0 Offset: 0x274D4D0 VA: 0x274D4D0
	public void Prepare(Sorting sorting, int width, bool useShadow) { }

	// RVA: 0x274F288 Offset: 0x274F288 VA: 0x274F288
	public void SetIceSpriteTransformValuesForWidth(int width) { }

	// RVA: 0x274EBE8 Offset: 0x274EBE8 VA: 0x274EBE8
	public void PlayParticleAtIndex(int index) { }

	// RVA: 0x274E694 Offset: 0x274E694 VA: 0x274E694
	public void ToggleLeftMask(bool toggle) { }

	// RVA: 0x274E664 Offset: 0x274E664 VA: 0x274E664
	public void ToggleRightMask(bool toggle) { }

	// RVA: 0x274E71C Offset: 0x274E71C VA: 0x274E71C
	public void SetLeftMaskPosition(Vector3 targetLocalPosition) { }

	// RVA: 0x274E6C4 Offset: 0x274E6C4 VA: 0x274E6C4
	public void SetRightMaskPosition(Vector3 targetLocalPosition) { }

	// RVA: 0x274EDB8 Offset: 0x274EDB8 VA: 0x274EDB8
	public void SetLeftMaskXScale(float xScale) { }

	// RVA: 0x274EC4C Offset: 0x274EC4C VA: 0x274EC4C
	public void SetRightMaskXScale(float xScale) { }

	// RVA: 0x274F478 Offset: 0x274F478 VA: 0x274F478 Slot: 7
	public override void Recycle() { }

	// RVA: 0x274F47C Offset: 0x274F47C VA: 0x274F47C Slot: 8
	public override void Show() { }

	// RVA: 0x274F4A0 Offset: 0x274F4A0 VA: 0x274F4A0 Slot: 9
	public override void Hide() { }

	// RVA: 0x274F4C4 Offset: 0x274F4C4 VA: 0x274F4C4
	public void HideView() { }

	// RVA: 0x274E49C Offset: 0x274E49C VA: 0x274E49C
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x274E820 Offset: 0x274E820 VA: 0x274E820
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x274F4F0 Offset: 0x274F4F0 VA: 0x274F4F0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]