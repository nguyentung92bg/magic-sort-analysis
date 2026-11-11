public class LevelEntranceHandler // TypeDefIndex: 1376
{
	// Fields
	private readonly BottleCollections _bottleCollections; // 0x10
	private readonly LevelEntranceAnimationConfig _levelEntranceAnimationConfig; // 0x18
	private readonly LevelAndLevelConfigModel _levelAndLevelConfigModel; // 0x20
	private readonly MagicBottleInGameManager _magicBottleInGameManager; // 0x28
	private readonly SnitchInGameManager _snitchInGameManager; // 0x30
	private readonly SuperChargerInGameManager _superChargerInGameManager; // 0x38
	private BottleCollection _currentBottleCollection; // 0x40

	// Methods

	// RVA: 0x1F17428 Offset: 0x1F17428 VA: 0x1F17428
	public void .ctor(BottleCollections bottleCollections, LevelAndLevelConfigModel levelAndLevelConfigModel, MagicBottleInGameManager magicBottleInGameManager, SnitchInGameManager snitchInGameManager, SuperChargerInGameManager superChargerInGameManager) { }

	// RVA: 0x1F17540 Offset: 0x1F17540 VA: 0x1F17540
	public void EnterTheLevel() { }

	// RVA: 0x1F178C8 Offset: 0x1F178C8 VA: 0x1F178C8
	private void BeforeAnimationsStart() { }

	// RVA: 0x1F17E70 Offset: 0x1F17E70 VA: 0x1F17E70
	private void OnAnimationsCompleted() { }

	// RVA: 0x1F1780C Offset: 0x1F1780C VA: 0x1F1780C
	private bool ShouldAddMagicBottle() { }

	// RVA: 0x1F17DA4 Offset: 0x1F17DA4 VA: 0x1F17DA4
	private bool IsSnitchActive() { }

	// RVA: 0x1F17C78 Offset: 0x1F17C78 VA: 0x1F17C78
	private Tween PlayMagicBottleAnimations(int bottleRowCount, int highestBottleCountInOneRow) { }

	// RVA: 0x1F17C94 Offset: 0x1F17C94 VA: 0x1F17C94
	private bool ShouldPlaySuperChargerMagicBottleAnimations() { }

	// RVA: 0x1F17D74 Offset: 0x1F17D74 VA: 0x1F17D74
	private Tween PlaySuperChargerMagicBottleAnimations(int bottleRowCount, int highestBottleCountInOneRow) { }

	// RVA: 0x1F17828 Offset: 0x1F17828 VA: 0x1F17828
	private void InitializeSuperChargerInGameManager() { }

	// RVA: 0x1F179EC Offset: 0x1F179EC VA: 0x1F179EC
	private Sequence MoveBottlesToInLevelPosition(BottleCollection bottleCollection) { }

	// RVA: 0x1F17F60 Offset: 0x1F17F60 VA: 0x1F17F60
	public void PlayBoardMoveAnimation() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts