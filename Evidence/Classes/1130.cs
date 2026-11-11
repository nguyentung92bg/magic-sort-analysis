public class InLevelTextViewVariation // TypeDefIndex: 1130
{
	// Fields
	public GameObject parentObject; // 0x10
	public TextMeshPro levelId; // 0x18
	public TextMeshPro levelName; // 0x20
	[Header("Background Sprites")]
	public Sprite defaultLevelSprite; // 0x28
	public Sprite hardLevelSprite; // 0x30
	public Sprite superHardLevelSprite; // 0x38
	public SpriteRenderer background; // 0x40
	[Header("Skull Sprites")]
	public Sprite hardSkullsSprite; // 0x48
	public Sprite superHardSkullsSprite; // 0x50
	public SpriteRenderer skullsRenderer; // 0x58
	public GameObject flagHard; // 0x60
	public GameObject flagSuperHard; // 0x68

	// Methods

	// RVA: 0x160CE48 Offset: 0x160CE48 VA: 0x160CE48
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.Common.Scripts