public interface IBroomStreakStepView : IDisposable // TypeDefIndex: 4805
{
	// Properties
	public abstract bool IsUnlocked { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(BroomStreakStepViewModel viewModel);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void SetLocalPosition(Vector3 position);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract Vector3 GetLocalPosition();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract Vector3 GetWorldPosition();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool get_IsUnlocked();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void set_IsUnlocked(bool value);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Unlock();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Lock();
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI