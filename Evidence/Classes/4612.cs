public class CollectionThemeDatabase : ScriptableObject // TypeDefIndex: 4612
{
	// Fields
	[SerializeField]
	private List<CollectionThemeDatabase.ThemeEntry> _themeEntries; // 0x18
	[SerializeField]
	private CollectionThemeSpriteLibrary _fallbackTheme; // 0x20
	[SerializeField]
	private CollectionThemeVisualsConfig _fallbackVisualsConfig; // 0x28

	// Methods

	// RVA: 0x3A669FC Offset: 0x3A669FC VA: 0x3A669FC
	public CollectionThemeSpriteLibrary GetTheme(string id) { }

	// RVA: 0x3A6E110 Offset: 0x3A6E110 VA: 0x3A6E110
	public CollectionThemeVisualsConfig GetVisualsConfig(string id) { }

	// RVA: 0x3A6E284 Offset: 0x3A6E284 VA: 0x3A6E284
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI