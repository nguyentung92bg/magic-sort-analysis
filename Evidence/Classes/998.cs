public class CommandHistoryManager // TypeDefIndex: 998
{
	// Fields
	private readonly Stack<IUndoableCommand> _executedCommands; // 0x10
	private readonly Stack<IUndoableCommand> _undoneCommands; // 0x18

	// Methods

	// RVA: 0x40EB854 Offset: 0x40EB854 VA: 0x40EB854
	public void .ctor() { }

	// RVA: 0x40EB90C Offset: 0x40EB90C VA: 0x40EB90C
	public void ExecuteCommand(IUndoableCommand command) { }

	// RVA: 0x40EB9F8 Offset: 0x40EB9F8 VA: 0x40EB9F8
	public void Undo() { }

	// RVA: 0x40EBB08 Offset: 0x40EBB08 VA: 0x40EBB08
	public void Redo() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.CommandNS