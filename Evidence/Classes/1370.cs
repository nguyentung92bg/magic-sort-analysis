public interface ILevelManager : IService, IInitializable, IDisposable // TypeDefIndex: 1370
{
	// Properties
	public abstract LevelState LevelState { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract LevelState get_LevelState();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void StartLevel();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void PauseLevel();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void ResumeLevel();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void StuckLevel(StuckType stuckType);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void PlayOnLevel(List<PlayOnBehaviourType> behaviours);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void LoseLevel();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void QuitLevel();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void WinLevel();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void EndLevel();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract ALevel GetLevel();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void TryIntroduceNewBlocker();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract bool HasNewBlockerToIntroduce();
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts
[CreateAssetMenu(fileName = "InLevelBoosterAnimationConfig", menuName = "Configs/InLevelBoosterAnimationConfig", order = 1)]