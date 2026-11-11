public class RemoveBoardItemCommand : IUndoableCommand, ICommand // TypeDefIndex: 247
{
	// Fields
	private Vector2 _position; // 0x10
	private int _layer; // 0x18
	private Color _color; // 0x1C
	private int _id; // 0x2C

	// Methods

	// RVA: 0x37A2678 Offset: 0x37A2678 VA: 0x37A2678
	public void .ctor(Vector2 position, int layer, Color color, int id) { }

	[AsyncStateMachine(typeof(RemoveBoardItemCommand.<ExecuteAsync>d__5))]
	// RVA: 0x37A26E4 Offset: 0x37A26E4 VA: 0x37A26E4 Slot: 5
	public Task ExecuteAsync() { }

	// RVA: 0x37A27B0 Offset: 0x37A27B0 VA: 0x37A27B0 Slot: 4
	public void Undo() { }

	// RVA: 0x37A2834 Offset: 0x37A2834 VA: 0x37A2834 Slot: 6
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]