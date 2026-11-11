public class ChangeInputModeCommand : IUndoableCommand, ICommand // TypeDefIndex: 245
{
	// Fields
	private EditorInputType _newEditorInputType; // 0x10
	private EditorInputType _currentEditorInputType; // 0x14
	private EditorInputSystem _editorInputSystem; // 0x18

	// Methods

	// RVA: 0x37A2370 Offset: 0x37A2370 VA: 0x37A2370
	public void .ctor(EditorInputSystem editorInputSystem, EditorInputType newEditorInputType) { }

	[AsyncStateMachine(typeof(ChangeInputModeCommand.<ExecuteAsync>d__4))]
	// RVA: 0x37A23AC Offset: 0x37A23AC VA: 0x37A23AC Slot: 5
	public Task ExecuteAsync() { }

	// RVA: 0x37A2498 Offset: 0x37A2498 VA: 0x37A2498 Slot: 4
	public void Undo() { }

	// RVA: 0x37A24B8 Offset: 0x37A24B8 VA: 0x37A24B8
	private void SetInputMode(EditorInputType editorInputType) { }

	// RVA: 0x37A24D4 Offset: 0x37A24D4 VA: 0x37A24D4 Slot: 6
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]