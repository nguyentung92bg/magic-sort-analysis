public abstract class ChangeColorOfCellCommand : IUndoableCommand, ICommand // TypeDefIndex: 243
{
	// Fields
	private Vector2 _position; // 0x10
	private int _layer; // 0x18
	private Color _color; // 0x1C
	private int _id; // 0x2C
	private readonly Color _nextColor; // 0x30
	private Color _previousColor; // 0x40

	// Methods

	// RVA: 0x37A20EC Offset: 0x37A20EC VA: 0x37A20EC
	public void .ctor(Vector2 position, int layer, Color color, int id, Color nextColor) { }

	[AsyncStateMachine(typeof(ChangeColorOfCellCommand.<ExecuteAsync>d__7))]
	// RVA: 0x37A2170 Offset: 0x37A2170 VA: 0x37A2170 Slot: 5
	public Task ExecuteAsync() { }

	// RVA: 0x37A225C Offset: 0x37A225C VA: 0x37A225C Slot: 4
	public void Undo() { }

	// RVA: 0x37A2260 Offset: 0x37A2260 VA: 0x37A2260
	private void ChangeColorOfCell(Color color) { }

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void SetCellColor(Color color);

	// RVA: 0x37A2264 Offset: 0x37A2264 VA: 0x37A2264 Slot: 6
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]