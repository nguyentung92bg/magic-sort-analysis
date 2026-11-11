public static class CommandExecutor // TypeDefIndex: 997
{
	// Fields
	private static readonly Queue<ICommand> _commandQueue; // 0x0
	private static bool _isExecuting; // 0x8

	// Methods

	// RVA: 0x40EAF1C Offset: 0x40EAF1C VA: 0x40EAF1C
	public static void QueueCommand(ICommand command) { }

	[AsyncStateMachine(typeof(CommandExecutor.<ExecuteNextCommand>d__3))]
	// RVA: 0x40EAFC8 Offset: 0x40EAFC8 VA: 0x40EAFC8
	private static void ExecuteNextCommand() { }

	// RVA: 0x40EB064 Offset: 0x40EB064 VA: 0x40EB064
	public static bool IsExecuting() { }

	// RVA: 0x40EB0BC Offset: 0x40EB0BC VA: 0x40EB0BC
	private static void .cctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.CommandNS