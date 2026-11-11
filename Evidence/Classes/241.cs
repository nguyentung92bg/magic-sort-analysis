public class AddBoardItemCommand : IUndoableCommand, ICommand // TypeDefIndex: 241
{
	// Fields
	private Vector2 _position; // 0x10
	private int _layer; // 0x18
	private Color _color; // 0x1C
	private int _id; // 0x2C

	// Methods

	// RVA: 0x37A1EA4 Offset: 0x37A1EA4 VA: 0x37A1EA4
	public void .ctor(Vector2 position, int layer, Color color, int id) { }

	[AsyncStateMachine(typeof(AddBoardItemCommand.<ExecuteAsync>d__5))]
	// RVA: 0x37A1F10 Offset: 0x37A1F10 VA: 0x37A1F10 Slot: 5
	public Task ExecuteAsync() { }

	// RVA: 0x37A1FDC Offset: 0x37A1FDC VA: 0x37A1FDC Slot: 4
	public void Undo() { }

	// RVA: 0x37A1FE0 Offset: 0x37A1FE0 VA: 0x37A1FE0 Slot: 6
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]