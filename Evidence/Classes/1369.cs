public abstract class ALevel // TypeDefIndex: 1369
{
	// Fields
	[CompilerGenerated]
	private LevelWinOrStuckSystem <LevelWinOrStuckSystem>k__BackingField; // 0x10
	[CompilerGenerated]
	private BoosterManager <BoosterManager>k__BackingField; // 0x18
	[CompilerGenerated]
	private LevelStats <LevelStats>k__BackingField; // 0x20
	[CompilerGenerated]
	private LevelTimeTracker <LevelTimeTracker>k__BackingField; // 0x28
	[CompilerGenerated]
	private SelectionSystem <SelectionSystem>k__BackingField; // 0x30
	protected PlayOnManager PlayOnManager; // 0x38
	protected BottleCollections BottleCollections; // 0x40

	// Properties
	public LevelWinOrStuckSystem LevelWinOrStuckSystem { get; set; }
	public BoosterManager BoosterManager { get; set; }
	public LevelStats LevelStats { get; set; }
	public LevelTimeTracker LevelTimeTracker { get; set; }
	public SelectionSystem SelectionSystem { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1F16F28 Offset: 0x1F16F28 VA: 0x1F16F28
	public LevelWinOrStuckSystem get_LevelWinOrStuckSystem() { }

	[CompilerGenerated]
	// RVA: 0x1F16F30 Offset: 0x1F16F30 VA: 0x1F16F30
	protected void set_LevelWinOrStuckSystem(LevelWinOrStuckSystem value) { }

	[CompilerGenerated]
	// RVA: 0x1F16F38 Offset: 0x1F16F38 VA: 0x1F16F38
	public BoosterManager get_BoosterManager() { }

	[CompilerGenerated]
	// RVA: 0x1F16F40 Offset: 0x1F16F40 VA: 0x1F16F40
	protected void set_BoosterManager(BoosterManager value) { }

	[CompilerGenerated]
	// RVA: 0x1F16F48 Offset: 0x1F16F48 VA: 0x1F16F48
	public LevelStats get_LevelStats() { }

	[CompilerGenerated]
	// RVA: 0x1F16F50 Offset: 0x1F16F50 VA: 0x1F16F50
	protected void set_LevelStats(LevelStats value) { }

	[CompilerGenerated]
	// RVA: 0x1F16F58 Offset: 0x1F16F58 VA: 0x1F16F58
	public LevelTimeTracker get_LevelTimeTracker() { }

	[CompilerGenerated]
	// RVA: 0x1F16F60 Offset: 0x1F16F60 VA: 0x1F16F60
	protected void set_LevelTimeTracker(LevelTimeTracker value) { }

	[CompilerGenerated]
	// RVA: 0x1F16F68 Offset: 0x1F16F68 VA: 0x1F16F68
	public SelectionSystem get_SelectionSystem() { }

	[CompilerGenerated]
	// RVA: 0x1F16F70 Offset: 0x1F16F70 VA: 0x1F16F70
	protected void set_SelectionSystem(SelectionSystem value) { }

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Start(LevelAndLevelConfigModel levelAndLevelConfigModel);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void Stuck(StuckType stuckType);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Pause();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Resume();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void PlayOn(List<PlayOnBehaviourType> behaviours);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract StuckType GetLastStuckType();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void End();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract int GetCurrentPlayOnPrice();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract bool TryUsePlayOn();

	[AsyncStateMachine(typeof(ALevel.<TryUsePlayOnWithRewarded>d__31))]
	// RVA: 0x1F16F78 Offset: 0x1F16F78 VA: 0x1F16F78
	public Task<bool> TryUsePlayOnWithRewarded() { }

	// RVA: 0x1F1708C Offset: 0x1F1708C VA: 0x1F1708C
	public bool IsMultipleBottlePlayOn() { }

	// RVA: 0x1F170A8 Offset: 0x1F170A8 VA: 0x1F170A8
	public List<PlayOnBehaviourType> GetDefaultPlayOnBehaviour() { }

	// RVA: 0x1F0F560 Offset: 0x1F0F560 VA: 0x1F0F560
	public int GetCompletedBottleCount() { }

	// RVA: 0x1F1710C Offset: 0x1F1710C VA: 0x1F1710C
	protected void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts