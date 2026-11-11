public class EditorBottleView : EditorAItemView // TypeDefIndex: 326
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRendererFront; // 0x20
	[SerializeField]
	private List<BottleByHeight> _bottleByHeights; // 0x28
	private BottleByHeight _bottleByHeight; // 0x30
	private float _bottleBoundsHeightOffset; // 0x38
	private float _bottleBoundsHeightExtraMargin; // 0x3C

	// Properties
	public float BottleBoundsHeightOffset { get; }
	public float BottleBoundsHeightExtraMargin { get; }

	// Methods

	// RVA: 0x3DDFCA0 Offset: 0x3DDFCA0 VA: 0x3DDFCA0
	public float get_BottleBoundsHeightOffset() { }

	// RVA: 0x3DDFCA8 Offset: 0x3DDFCA8 VA: 0x3DDFCA8
	public float get_BottleBoundsHeightExtraMargin() { }

	// RVA: 0x3DDFCB0 Offset: 0x3DDFCB0 VA: 0x3DDFCB0 Slot: 4
	public override void Initialize() { }

	// RVA: 0x3DDFCB4 Offset: 0x3DDFCB4 VA: 0x3DDFCB4 Slot: 7
	public override void Show() { }

	// RVA: 0x3DDFCD8 Offset: 0x3DDFCD8 VA: 0x3DDFCD8 Slot: 8
	public override void Hide() { }

	// RVA: 0x3DDFCFC Offset: 0x3DDFCFC VA: 0x3DDFCFC Slot: 5
	public override void Spawn() { }

	// RVA: 0x3DDE9AC Offset: 0x3DDE9AC VA: 0x3DDE9AC
	public void Prepare(int height, int bottleAndWaterVariant, int frontSortOrder, int backSortOrder) { }

	// RVA: 0x3DDFF4C Offset: 0x3DDFF4C VA: 0x3DDFF4C Slot: 6
	public override void Recycle() { }

	// RVA: 0x3DDEC6C Offset: 0x3DDEC6C VA: 0x3DDEC6C
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x3DDFDA0 Offset: 0x3DDFDA0 VA: 0x3DDFDA0
	private void SetBottleHeightAndVariant(int height, int variant) { }

	// RVA: 0x3DDFFAC Offset: 0x3DDFFAC VA: 0x3DDFFAC
	private void EnableBottleVisuals(BottleByHeight bottleByHeight) { }

	// RVA: 0x3DE0020 Offset: 0x3DE0020 VA: 0x3DE0020
	private void DisableBottleVisuals(BottleByHeight bottleByHeight) { }

	// RVA: 0x3DDF170 Offset: 0x3DDF170 VA: 0x3DDF170
	public void HideBottle() { }

	// RVA: 0x3DE00E8 Offset: 0x3DE00E8 VA: 0x3DE00E8
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag