public class ProfileSpriteService : IService, IInitializable, IDisposable // TypeDefIndex: 2978
{
	// Fields
	[CompilerGenerated]
	private ProfileSpriteConfig <ProfileSpriteConfig>k__BackingField; // 0x10
	private IPlayerService _playerService; // 0x18
	private FacebookLoginService _facebookLoginService; // 0x20
	private Sprite facebookProfilePhoto; // 0x28

	// Properties
	public ProfileSpriteConfig ProfileSpriteConfig { get; set; }
	public string FacebookSpriteId { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2AE3780 Offset: 0x2AE3780 VA: 0x2AE3780
	public ProfileSpriteConfig get_ProfileSpriteConfig() { }

	[CompilerGenerated]
	// RVA: 0x2AE3788 Offset: 0x2AE3788 VA: 0x2AE3788
	private void set_ProfileSpriteConfig(ProfileSpriteConfig value) { }

	// RVA: 0x2AE3790 Offset: 0x2AE3790 VA: 0x2AE3790
	public string get_FacebookSpriteId() { }

	// RVA: 0x2AE37B4 Offset: 0x2AE37B4 VA: 0x2AE37B4
	public void .ctor(ProfileSpriteConfig profileSpriteConfig, FacebookLoginService facebookLoginService, IPlayerService playerService) { }

	// RVA: 0x2AE3814 Offset: 0x2AE3814 VA: 0x2AE3814 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AE3854 Offset: 0x2AE3854 VA: 0x2AE3854 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AE3858 Offset: 0x2AE3858 VA: 0x2AE3858
	public List<ProfileSprite> GetAllSprites() { }

	// RVA: 0x2AE3874 Offset: 0x2AE3874 VA: 0x2AE3874
	public string GetActiveProfileId() { }

	// RVA: 0x2AE3924 Offset: 0x2AE3924 VA: 0x2AE3924
	public ProfileSprite GetFacebookProfile() { }

	// RVA: 0x2AE0254 Offset: 0x2AE0254 VA: 0x2AE0254
	public Sprite GetActiveSprite() { }

	// RVA: 0x2AE3940 Offset: 0x2AE3940 VA: 0x2AE3940
	public Sprite FindSpriteById(string id) { }

	// RVA: 0x2AE3BF4 Offset: 0x2AE3BF4 VA: 0x2AE3BF4
	public Sprite FindLeaderboardSpriteById(string id) { }

	// RVA: 0x2AE3B70 Offset: 0x2AE3B70 VA: 0x2AE3B70
	private void TryLoadFacebookPhoto() { }

	// RVA: 0x2AE3834 Offset: 0x2AE3834 VA: 0x2AE3834
	public void LoadProfilePhoto() { }

	// RVA: 0x2AE3DC4 Offset: 0x2AE3DC4 VA: 0x2AE3DC4
	public void DeleteProfilePhoto() { }

	// RVA: 0x2AE3DE4 Offset: 0x2AE3DE4 VA: 0x2AE3DE4
	public List<ProfileTokenSprite> GetAllTokens() { }

	// RVA: 0x2AE225C Offset: 0x2AE225C VA: 0x2AE225C
	public ProfileTokenSprite GetTokenSpriteById(string tokenId) { }

	// RVA: 0x2AE3E08 Offset: 0x2AE3E08 VA: 0x2AE3E08
	public string GetActiveTokenId() { }

	// RVA: 0x2AE0270 Offset: 0x2AE0270 VA: 0x2AE0270
	public ProfileTokenSprite GetActiveTokenSprite() { }

	// RVA: 0x2AE3EB8 Offset: 0x2AE3EB8 VA: 0x2AE3EB8
	public List<string> GetAllFrames() { }

	// RVA: 0x2AE028C Offset: 0x2AE028C VA: 0x2AE028C
	public string GetActiveFrameId() { }

	// RVA: 0x2AE3ED4 Offset: 0x2AE3ED4 VA: 0x2AE3ED4
	public ProfileFrameInfo GetActiveFrameInfo() { }

	// RVA: 0x2AE3FAC Offset: 0x2AE3FAC VA: 0x2AE3FAC
	public List<string> GetAllNameStyles() { }

	// RVA: 0x2AE3FC8 Offset: 0x2AE3FC8 VA: 0x2AE3FC8
	public string GetActiveNameStyleId() { }

	// RVA: 0x2AE4078 Offset: 0x2AE4078 VA: 0x2AE4078
	public ProfileNameStyleInfo GetActiveNameStyleInfo() { }
}

// Namespace: Modules.Contexts.Home.Profile.Scripts