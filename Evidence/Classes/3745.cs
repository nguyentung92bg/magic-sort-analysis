internal class ProfileSpritePersistenceCatalog // TypeDefIndex: 3745
{
	// Fields
	private readonly Dictionary<int, ProfileSpritePersistenceCatalogItem> _items; // 0x10

	// Methods

	// RVA: 0x3E0A75C Offset: 0x3E0A75C VA: 0x3E0A75C
	public void .ctor(int itemLength) { }

	// RVA: 0x3E0A7F4 Offset: 0x3E0A7F4 VA: 0x3E0A7F4
	public void Add(ProfileSpritePersistenceCatalogItem catalog) { }

	// RVA: 0x3E0A8E0 Offset: 0x3E0A8E0 VA: 0x3E0A8E0
	public bool Contains(string url) { }

	// RVA: 0x3E0A950 Offset: 0x3E0A950 VA: 0x3E0A950
	public ProfileSpritePersistenceCatalogItem Get(string url) { }

	// RVA: 0x3E0A9C0 Offset: 0x3E0A9C0 VA: 0x3E0A9C0
	public string[] GetCatalogAsText() { }

	// RVA: 0x3E0ABD8 Offset: 0x3E0ABD8 VA: 0x3E0ABD8
	private string GetLineTextFrom(ProfileSpritePersistenceCatalogItem profileSpritePersistenceCatalogItem) { }

	// RVA: 0x3E0AC40 Offset: 0x3E0AC40 VA: 0x3E0AC40
	public List<ProfileSpritePersistenceCatalogItem> GetOutdatedItems(int activeSessionCount) { }

	// RVA: 0x3E0AE78 Offset: 0x3E0AE78 VA: 0x3E0AE78
	public void Remove(string url) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts