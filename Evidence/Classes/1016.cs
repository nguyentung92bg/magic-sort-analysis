public interface ITryAgainCommand : ICommand // TypeDefIndex: 1016
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool ShouldTerminateTheFlow();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int GetPriority();
}

// Namespace: 
[CompilerGenerated]