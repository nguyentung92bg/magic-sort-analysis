public class ProfileSpriteConfig : ScriptableObject // TypeDefIndex: 2952
{
	// Fields
	public List<ProfileSprite> images; // 0x18
	public ProfileSprite FacebookSprite; // 0x20
	public ProfileSprite FacebookDefaultSprite; // 0x28
	public ProfileSprite DefaultSprite; // 0x30
	public List<ProfileTokenSprite> tokens; // 0x38
	public List<string> frames; // 0x40
	public List<string> nameStyles; // 0x48

	// Methods

	// RVA: 0x298CE68 Offset: 0x298CE68 VA: 0x298CE68
	public GameObject InstantiateAndGetTokenUIPart(string tokenId, Transform parent) { }

	// RVA: 0x298CFEC Offset: 0x298CFEC VA: 0x298CFEC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts
[Serializable]