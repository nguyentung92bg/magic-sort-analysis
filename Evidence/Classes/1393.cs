public interface ILevelModelService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1393
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract LevelAndLevelConfigModel GetRegularLevelAndLevelConfigModel(int level);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract LevelAndLevelConfigModel GetDailyLevelAndLevelConfigModel(DailyLevelInfo dailyLevelInfo);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract LevelAndLevelConfigModel GetDailyTutorialLevelAndLevelConfigModel(DailyLevelInfo dailyLevelInfo);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract LevelConfigModel GetLevelConfigModel(int level);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract LevelDifficultyType GetLevelDifficulty(int level);
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService
[Serializable]