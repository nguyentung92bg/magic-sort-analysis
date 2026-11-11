public class DailyLevel : ALevel // TypeDefIndex: 1415
{
	// Fields
	private InputService _inputService; // 0x48
	private GameplayInputSystem _gameplayInputSystem; // 0x50
	private LevelEntranceHandler _levelEntranceHandler; // 0x58
	private LevelTimer _levelTimer; // 0x60
	private StuckType _stuckType; // 0x68

	// Methods

	// RVA: 0x1E8F014 Offset: 0x1E8F014 VA: 0x1E8F014 Slot: 4
	public override void Start(LevelAndLevelConfigModel levelAndLevelConfigModel) { }

	// RVA: 0x1E8FA10 Offset: 0x1E8FA10 VA: 0x1E8FA10 Slot: 5
	public override void Stuck(StuckType stuckType) { }

	// RVA: 0x1E8FAF4 Offset: 0x1E8FAF4 VA: 0x1E8FAF4 Slot: 6
	public override void Pause() { }

	// RVA: 0x1E8FBB0 Offset: 0x1E8FBB0 VA: 0x1E8FBB0 Slot: 8
	public override void PlayOn(List<PlayOnBehaviourType> behaviours) { }

	// RVA: 0x1E8FD58 Offset: 0x1E8FD58 VA: 0x1E8FD58 Slot: 7
	public override void Resume() { }

	// RVA: 0x1E8FE0C Offset: 0x1E8FE0C VA: 0x1E8FE0C Slot: 9
	public override StuckType GetLastStuckType() { }

	// RVA: 0x1E8FE14 Offset: 0x1E8FE14 VA: 0x1E8FE14 Slot: 10
	public override void End() { }

	// RVA: 0x1E90204 Offset: 0x1E90204 VA: 0x1E90204 Slot: 11
	public override int GetCurrentPlayOnPrice() { }

	// RVA: 0x1E90220 Offset: 0x1E90220 VA: 0x1E90220 Slot: 12
	public override bool TryUsePlayOn() { }

	// RVA: 0x1E9023C Offset: 0x1E9023C VA: 0x1E9023C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1E90244 Offset: 0x1E90244 VA: 0x1E90244
	private void <PlayOn>b__8_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.DailyLevels