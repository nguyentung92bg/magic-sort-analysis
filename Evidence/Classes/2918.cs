public class ChestSpriteConfig : ScriptableObject // TypeDefIndex: 2918
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private List<ChestSpriteModel> <_chestSpriteModels>k__BackingField; // 0x18
	[SerializeField]
	[CompilerGenerated]
	private List<ChestSpriteLibraryModel> <ChestSpriteLibraryModels>k__BackingField; // 0x20

	// Properties
	private List<ChestSpriteModel> _chestSpriteModels { get; set; }
	private List<ChestSpriteLibraryModel> ChestSpriteLibraryModels { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2984DCC Offset: 0x2984DCC VA: 0x2984DCC
	private List<ChestSpriteModel> get__chestSpriteModels() { }

	[CompilerGenerated]
	// RVA: 0x2984DD4 Offset: 0x2984DD4 VA: 0x2984DD4
	private void set__chestSpriteModels(List<ChestSpriteModel> value) { }

	[CompilerGenerated]
	// RVA: 0x2984DDC Offset: 0x2984DDC VA: 0x2984DDC
	private List<ChestSpriteLibraryModel> get_ChestSpriteLibraryModels() { }

	[CompilerGenerated]
	// RVA: 0x2984DE4 Offset: 0x2984DE4 VA: 0x2984DE4
	private void set_ChestSpriteLibraryModels(List<ChestSpriteLibraryModel> value) { }

	// RVA: 0x2984DEC Offset: 0x2984DEC VA: 0x2984DEC
	public Sprite GetSprite(int chestId) { }

	// RVA: 0x2984E7C Offset: 0x2984E7C VA: 0x2984E7C
	public SpriteLibraryAsset GetSpriteLibrary(int chestId) { }

	// RVA: 0x2984F0C Offset: 0x2984F0C VA: 0x2984F0C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Chest.Scripts
[Serializable]