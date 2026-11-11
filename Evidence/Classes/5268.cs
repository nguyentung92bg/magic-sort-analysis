public class HandledException : Exception // TypeDefIndex: 5268
{
	// Fields
	private readonly string _customStackTrace; // 0x90

	// Properties
	public override string StackTrace { get; }

	// Methods

	// RVA: 0x1CB43DC Offset: 0x1CB43DC VA: 0x1CB43DC
	public void .ctor(string message, string stackTrace) { }

	// RVA: 0x1CCAB3C Offset: 0x1CCAB3C VA: 0x1CCAB3C Slot: 10
	public override string get_StackTrace() { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts