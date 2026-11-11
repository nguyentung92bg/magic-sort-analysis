public interface IReturnToHomeSequenceCommand : ICommand // TypeDefIndex: 1001
{
	// Properties
	public abstract bool ShouldShowForce { get; }
	public abstract bool IsShowed { get; }
	public abstract bool IsShowPopup { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool IsSkippable();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool ShouldTerminateTheFlow();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract bool get_ShouldShowForce();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_IsShowed();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool get_IsShowPopup();
}

// Namespace: Modules.Infrastructure.Common.Scripts.CommandNS