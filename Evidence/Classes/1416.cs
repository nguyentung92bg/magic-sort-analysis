public class DailyLevelManager : ILevelManager, IService, IInitializable, IDisposable // TypeDefIndex: 1416
{
	// Fields
	private readonly ILevelModelService _levelModelService; // 0x10
	private readonly IPlayerService _playerService; // 0x18
	private readonly AdService _adService; // 0x20
	private readonly DailyService _dailyService; // 0x28
	private ALevel _level; // 0x30
	private LevelState _levelState; // 0x38
	private LevelAndLevelConfigModel _levelAndLevelConfigModel; // 0x40

	// Properties
	public LevelState LevelState { get; }

	// Methods

	// RVA: 0x1E902EC Offset: 0x1E902EC VA: 0x1E902EC Slot: 4
	public LevelState get_LevelState() { }

	// RVA: 0x1E902F4 Offset: 0x1E902F4 VA: 0x1E902F4
	public void .ctor(AdService adService, ILevelModelService levelModelService, IPlayerService playerService, DailyService dailyService) { }

	// RVA: 0x1E90368 Offset: 0x1E90368 VA: 0x1E90368 Slot: 17
	public void Initialize() { }

	// RVA: 0x1E90370 Offset: 0x1E90370 VA: 0x1E90370 Slot: 5
	public void StartLevel() { }

	// RVA: 0x1E906BC Offset: 0x1E906BC VA: 0x1E906BC Slot: 6
	public void PauseLevel() { }

	// RVA: 0x1E906F8 Offset: 0x1E906F8 VA: 0x1E906F8 Slot: 7
	public void ResumeLevel() { }

	// RVA: 0x1E90734 Offset: 0x1E90734 VA: 0x1E90734 Slot: 8
	public void StuckLevel(StuckType stuckType) { }

	// RVA: 0x1E90770 Offset: 0x1E90770 VA: 0x1E90770 Slot: 9
	public void PlayOnLevel(List<PlayOnBehaviourType> behaviours) { }

	// RVA: 0x1E907B0 Offset: 0x1E907B0 VA: 0x1E907B0 Slot: 10
	public void LoseLevel() { }

	// RVA: 0x1E907D8 Offset: 0x1E907D8 VA: 0x1E907D8 Slot: 11
	public void QuitLevel() { }

	// RVA: 0x1E90800 Offset: 0x1E90800 VA: 0x1E90800 Slot: 12
	public void WinLevel() { }

	// RVA: 0x1E90828 Offset: 0x1E90828 VA: 0x1E90828 Slot: 14
	public ALevel GetLevel() { }

	// RVA: 0x1E90830 Offset: 0x1E90830 VA: 0x1E90830 Slot: 15
	public void TryIntroduceNewBlocker() { }

	// RVA: 0x1E90834 Offset: 0x1E90834 VA: 0x1E90834 Slot: 16
	public bool HasNewBlockerToIntroduce() { }

	// RVA: 0x1E9083C Offset: 0x1E9083C VA: 0x1E9083C Slot: 13
	public void EndLevel() { }

	// RVA: 0x1E90840 Offset: 0x1E90840 VA: 0x1E90840 Slot: 18
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels