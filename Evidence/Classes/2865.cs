public class PreGameAnimationConfig : ScriptableObject // TypeDefIndex: 2865
{
	// Fields
	[SerializeField]
	private List<MultiplierDifficultySpriteConfig> _multiplierSpriteConfigs; // 0x18
	[SerializeField]
	private Sprite[] _eventCurrencySprites; // 0x20

	// Methods

	// RVA: 0x2DD2D60 Offset: 0x2DD2D60 VA: 0x2DD2D60
	public bool TryGetMultiplierSpriteConfig(LevelDifficultyType difficulty, out MultiplierDifficultySpriteConfig spriteConfig) { }

	// RVA: 0x2DD2EF4 Offset: 0x2DD2EF4 VA: 0x2DD2EF4
	public Sprite GetEventCurrencySprite(MultiplierCurrencyType currencyType) { }

	// RVA: 0x2DD2F48 Offset: 0x2DD2F48 VA: 0x2DD2F48
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.PreGame.Scripts