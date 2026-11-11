public class CheatLevelModelService : IService, IInitializable, IDisposable // TypeDefIndex: 1392
{
	// Fields
	[CompilerGenerated]
	private string <LevelId>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <Variant>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <Difficulty>k__BackingField; // 0x1C
	[CompilerGenerated]
	private LevelModel <LevelModel>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <IsCheatEnabled>k__BackingField; // 0x28
	private IPlayerService _playerService; // 0x30
	private LevelModelRemoteService _levelModelRemoveService; // 0x38
	private LevelModelPersistenceService _levelModelPersistenceService; // 0x40

	// Properties
	public string LevelId { get; set; }
	public int Variant { get; set; }
	public int Difficulty { get; set; }
	public LevelModel LevelModel { get; set; }
	public bool IsCheatEnabled { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1E89EC4 Offset: 0x1E89EC4 VA: 0x1E89EC4
	public string get_LevelId() { }

	[CompilerGenerated]
	// RVA: 0x1E89ECC Offset: 0x1E89ECC VA: 0x1E89ECC
	public void set_LevelId(string value) { }

	[CompilerGenerated]
	// RVA: 0x1E89ED4 Offset: 0x1E89ED4 VA: 0x1E89ED4
	public int get_Variant() { }

	[CompilerGenerated]
	// RVA: 0x1E89EDC Offset: 0x1E89EDC VA: 0x1E89EDC
	public void set_Variant(int value) { }

	[CompilerGenerated]
	// RVA: 0x1E89EE4 Offset: 0x1E89EE4 VA: 0x1E89EE4
	public int get_Difficulty() { }

	[CompilerGenerated]
	// RVA: 0x1E89EEC Offset: 0x1E89EEC VA: 0x1E89EEC
	public void set_Difficulty(int value) { }

	[CompilerGenerated]
	// RVA: 0x1E89EF4 Offset: 0x1E89EF4 VA: 0x1E89EF4
	public LevelModel get_LevelModel() { }

	[CompilerGenerated]
	// RVA: 0x1E89EFC Offset: 0x1E89EFC VA: 0x1E89EFC
	private void set_LevelModel(LevelModel value) { }

	[CompilerGenerated]
	// RVA: 0x1E89F04 Offset: 0x1E89F04 VA: 0x1E89F04
	public bool get_IsCheatEnabled() { }

	[CompilerGenerated]
	// RVA: 0x1E89F0C Offset: 0x1E89F0C VA: 0x1E89F0C
	public void set_IsCheatEnabled(bool value) { }

	// RVA: 0x1E89F18 Offset: 0x1E89F18 VA: 0x1E89F18
	public void .ctor(IPlayerService playerService, LevelModelRemoteService levelModelRemoveService, LevelModelPersistenceService levelModelPersistenceService) { }

	// RVA: 0x1E89F80 Offset: 0x1E89F80 VA: 0x1E89F80 Slot: 4
	public void Initialize() { }

	// RVA: 0x1E89F8C Offset: 0x1E89F8C VA: 0x1E89F8C
	public void EnableCheat(string levelId) { }

	// RVA: 0x1E89F9C Offset: 0x1E89F9C VA: 0x1E89F9C
	public void EnableCheat(LevelModel levelModel) { }

	// RVA: 0x1E89FAC Offset: 0x1E89FAC VA: 0x1E89FAC Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.Levels.Scripts.LevelModelService