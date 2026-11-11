public interface IHomeWelcomingSequenceCommand : ICommand // TypeDefIndex: 1256
{
	// Properties
	public abstract bool ShouldShowForce { get; }
	public abstract bool IsShowed { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool IsSkippable();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool ShouldTerminateTheFlow();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool get_ShouldShowForce();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_IsShowed();
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts