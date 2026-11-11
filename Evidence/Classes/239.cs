public class GridRenderer : ImmediateModeShapeDrawer // TypeDefIndex: 239
{
	// Fields
	[SerializeField]
	private int _gridSize; // 0x1C
	[SerializeField]
	private float _cellSize; // 0x20
	[SerializeField]
	private Color _gridColor; // 0x24
	[SerializeField]
	private float _lineWidth; // 0x34
	[SerializeField]
	private bool _isActive; // 0x38

	// Methods

	// RVA: 0x37A13D4 Offset: 0x37A13D4 VA: 0x37A13D4
	public void Show() { }

	// RVA: 0x37A13E0 Offset: 0x37A13E0 VA: 0x37A13E0
	public void Hide() { }

	// RVA: 0x37A13E8 Offset: 0x37A13E8 VA: 0x37A13E8
	public Vector2 GetRoundedSnapPosition(Vector2 position) { }

	// RVA: 0x37A1568 Offset: 0x37A1568 VA: 0x37A1568
	public Vector2 GetFloorSnapPosition(Vector2 position) { }

	// RVA: 0x37A1588 Offset: 0x37A1588 VA: 0x37A1588
	public float GetCellSize() { }

	// RVA: 0x37A1590 Offset: 0x37A1590 VA: 0x37A1590 Slot: 4
	public override void DrawShapes(Camera cam) { }

	// RVA: 0x37A1E78 Offset: 0x37A1E78 VA: 0x37A1E78
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]