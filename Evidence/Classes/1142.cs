public class LevelWinOrStuckSystem : IFrameUpdate // TypeDefIndex: 1142
{
	// Fields
	[CompilerGenerated]
	private SelectionSystem <SelectionSystem>k__BackingField; // 0x10
	private readonly BottleCollections _bottleCollections; // 0x18
	private readonly ILevelManager _levelManager; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private readonly LevelEntranceHandler _levelEntranceHandler; // 0x30
	private readonly LevelTimer _levelTimer; // 0x38
	private CustomUpdater _customUpdater; // 0x40
	private bool _isLevelWinOrHasNoMoveRequested; // 0x48

	// Properties
	public SelectionSystem SelectionSystem { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x160FFF8 Offset: 0x160FFF8 VA: 0x160FFF8
	public SelectionSystem get_SelectionSystem() { }

	[CompilerGenerated]
	// RVA: 0x1610000 Offset: 0x1610000 VA: 0x1610000
	public void set_SelectionSystem(SelectionSystem value) { }

	// RVA: 0x1610008 Offset: 0x1610008 VA: 0x1610008
	public void .ctor(BottleCollections bottleCollections, LevelEntranceHandler levelEntranceHandler, LevelTimer levelTimer) { }

	// RVA: 0x1610184 Offset: 0x1610184 VA: 0x1610184 Slot: 4
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x16101AC Offset: 0x16101AC VA: 0x16101AC
	private void CheckAndApplyTimeIsUp() { }

	// RVA: 0x16102F8 Offset: 0x16102F8 VA: 0x16102F8
	private void CheckAndApplyLevelWinOrHasNoMove() { }

	// RVA: 0x161088C Offset: 0x161088C VA: 0x161088C
	public void RequestLevelWinOrStuckCheck() { }

	// RVA: 0x1610548 Offset: 0x1610548 VA: 0x1610548
	private bool IsAlreadyInStuckOrWinOrLoseState() { }

	// RVA: 0x1610608 Offset: 0x1610608 VA: 0x1610608
	private bool IsTimeUp() { }

	// RVA: 0x1610628 Offset: 0x1610628 VA: 0x1610628
	public bool IsBoardStopped() { }

	// RVA: 0x1610898 Offset: 0x1610898 VA: 0x1610898
	private bool IsThereAnyAnimationRunning() { }

	// RVA: 0x1610738 Offset: 0x1610738 VA: 0x1610738
	public bool HasNoMove() { }

	// RVA: 0x16109DC Offset: 0x16109DC VA: 0x16109DC
	public void Deinitialize() { }

	// RVA: 0x16109C0 Offset: 0x16109C0 VA: 0x16109C0
	public bool IsLevelStuck() { }

	// RVA: 0x1610A78 Offset: 0x1610A78 VA: 0x1610A78
	public void TrySolveSpecialStuck() { }

	// RVA: 0x1610C58 Offset: 0x1610C58 VA: 0x1610C58
	public bool BottleWithCustomHeightCanSolveStuck(int bottleHeight) { }
}

// Namespace: Modules.Contexts.GamePlay.Systems.Scripts.TimeNS