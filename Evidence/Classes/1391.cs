public class RegularLevelManager : ILevelManager, IService, IInitializable, IDisposable // TypeDefIndex: 1391
{
	// Fields
	private readonly ILevelModelService _levelModelService; // 0x10
	private readonly IPlayerService _playerService; // 0x18
	private readonly AdService _adService; // 0x20
	private readonly MagicBottleService _magicBottleService; // 0x28
	private readonly SnitchService _snitchService; // 0x30
	[CompilerGenerated]
	private RegularLevel <Level>k__BackingField; // 0x38
	private LevelState _levelState; // 0x40
	private LevelAndLevelConfigModel _levelAndLevelConfigModel; // 0x48

	// Properties
	public LevelState LevelState { get; }
	public RegularLevel Level { get; set; }

	// Methods

	// RVA: 0x1F1E1E4 Offset: 0x1F1E1E4 VA: 0x1F1E1E4 Slot: 4
	public LevelState get_LevelState() { }

	[CompilerGenerated]
	// RVA: 0x1F1E1EC Offset: 0x1F1E1EC VA: 0x1F1E1EC
	public RegularLevel get_Level() { }

	[CompilerGenerated]
	// RVA: 0x1F1E1F4 Offset: 0x1F1E1F4 VA: 0x1F1E1F4
	private void set_Level(RegularLevel value) { }

	// RVA: 0x1F1E1FC Offset: 0x1F1E1FC VA: 0x1F1E1FC
	public void .ctor(AdService adService, ILevelModelService levelModelService, IPlayerService playerService, MagicBottleService magicBottleService, SnitchService snitchService) { }

	// RVA: 0x1F1E28C Offset: 0x1F1E28C VA: 0x1F1E28C Slot: 17
	public void Initialize() { }

	// RVA: 0x1F1E294 Offset: 0x1F1E294 VA: 0x1F1E294 Slot: 5
	public void StartLevel() { }

	// RVA: 0x1F1E960 Offset: 0x1F1E960 VA: 0x1F1E960 Slot: 6
	public void PauseLevel() { }

	// RVA: 0x1F1E99C Offset: 0x1F1E99C VA: 0x1F1E99C Slot: 7
	public void ResumeLevel() { }

	// RVA: 0x1F1E9D8 Offset: 0x1F1E9D8 VA: 0x1F1E9D8 Slot: 8
	public void StuckLevel(StuckType stuckType) { }

	// RVA: 0x1F1EAB0 Offset: 0x1F1EAB0 VA: 0x1F1EAB0 Slot: 9
	public void PlayOnLevel(List<PlayOnBehaviourType> behaviours) { }

	// RVA: 0x1F1EAEC Offset: 0x1F1EAEC VA: 0x1F1EAEC Slot: 10
	public void LoseLevel() { }

	// RVA: 0x1F1EB14 Offset: 0x1F1EB14 VA: 0x1F1EB14 Slot: 11
	public void QuitLevel() { }

	// RVA: 0x1F1EB3C Offset: 0x1F1EB3C VA: 0x1F1EB3C Slot: 12
	public void WinLevel() { }

	// RVA: 0x1F1EB64 Offset: 0x1F1EB64 VA: 0x1F1EB64 Slot: 14
	public ALevel GetLevel() { }

	// RVA: 0x1F1EB6C Offset: 0x1F1EB6C VA: 0x1F1EB6C Slot: 15
	public void TryIntroduceNewBlocker() { }

	// RVA: 0x1F1EB84 Offset: 0x1F1EB84 VA: 0x1F1EB84 Slot: 16
	public bool HasNewBlockerToIntroduce() { }

	// RVA: 0x1F1EBA8 Offset: 0x1F1EBA8 VA: 0x1F1EBA8 Slot: 13
	public void EndLevel() { }

	// RVA: 0x1F1EBAC Offset: 0x1F1EBAC VA: 0x1F1EBAC Slot: 18
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService