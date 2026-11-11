public class BottleCollections // TypeDefIndex: 1789
{
	// Fields
	[CompilerGenerated]
	private BottleCollection <BottleCollection>k__BackingField; // 0x10
	private readonly List<BottleCollection> _bottleCollections; // 0x18
	private int _currentBottleCollectionIndex; // 0x20

	// Properties
	public BottleCollection BottleCollection { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2D94684 Offset: 0x2D94684 VA: 0x2D94684
	public BottleCollection get_BottleCollection() { }

	[CompilerGenerated]
	// RVA: 0x2D9468C Offset: 0x2D9468C VA: 0x2D9468C
	private void set_BottleCollection(BottleCollection value) { }

	// RVA: 0x2D94694 Offset: 0x2D94694 VA: 0x2D94694
	public void GenerateBottleCollections(LevelAndLevelConfigModel levelAndLevelConfigModel, bool isDaily) { }

	// RVA: 0x2D948C8 Offset: 0x2D948C8 VA: 0x2D948C8
	private static BottleCollection GenerateBottleCollection(List<BottleItemModel> bottleModels, bool isDaily, LevelDifficultyType levelDifficultyType) { }

	// RVA: 0x2D94A34 Offset: 0x2D94A34 VA: 0x2D94A34
	public int GetBottleCollectionIndex() { }

	// RVA: 0x2D94A3C Offset: 0x2D94A3C VA: 0x2D94A3C
	public bool TryGetPreviousBottleCollection(out BottleCollection bottleCollection) { }

	// RVA: 0x2D94ACC Offset: 0x2D94ACC VA: 0x2D94ACC
	public void NextBottleCollection() { }

	// RVA: 0x2D94B58 Offset: 0x2D94B58 VA: 0x2D94B58
	public bool IsLastCollection() { }

	// RVA: 0x2D94BB0 Offset: 0x2D94BB0 VA: 0x2D94BB0
	public void Deinitialize() { }

	// RVA: 0x2D94C3C Offset: 0x2D94C3C VA: 0x2D94C3C
	public bool IsCollectionCleared() { }

	// RVA: 0x2D94E88 Offset: 0x2D94E88 VA: 0x2D94E88
	public bool IsCollectionStuck() { }

	// RVA: 0x2D95288 Offset: 0x2D95288 VA: 0x2D95288
	public List<ABlockerItem> GetBlockers() { }

	// RVA: 0x2D9537C Offset: 0x2D9537C VA: 0x2D9537C
	public bool HasLongBottle() { }

	// RVA: 0x2D954F0 Offset: 0x2D954F0 VA: 0x2D954F0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]