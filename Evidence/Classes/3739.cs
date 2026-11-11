public class ProfileSpriteCacheService : IService, IInitializable, IDisposable, IFrameUpdate, ILateInitializable // TypeDefIndex: 3739
{
	// Fields
	private Dictionary<string, Sprite> _profileSpriteDictionary; // 0x10
	private ProfileSpriteService _profileSpriteService; // 0x18
	private CustomUpdater _customUpdater; // 0x20
	private List<ProfileSpriteCacheRequest> _profileSpriteCacheRequests; // 0x28
	private List<ProfileSpriteCacheRequest> _retryProfileSpriteCacheRequests; // 0x30
	private HashSet<string> _profileSpriteCacheRequestsPublicIds; // 0x38
	private ProfileSpriteHttpProvider _profileSpriteHttpProvider; // 0x40
	private ProfileSpritePersistenceProvider _profileSpritePersistenceProvider; // 0x48
	private bool _isTryingLoadSprites; // 0x50
	private bool _isRequestListChanged; // 0x51
	private readonly HttpProxy _httpProxy; // 0x58
	private IPlayerService _playerService; // 0x60

	// Methods

	// RVA: 0x3E08134 Offset: 0x3E08134 VA: 0x3E08134
	public void .ctor(ProfileSpriteService profileSpriteService, CustomUpdater customUpdater, HttpProxy httpProxy, IPlayerService playerService) { }

	// RVA: 0x3E081A8 Offset: 0x3E081A8 VA: 0x3E081A8 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E085C0 Offset: 0x3E085C0 VA: 0x3E085C0 Slot: 7
	public void LateInitialize() { }

	// RVA: 0x3E085F8 Offset: 0x3E085F8 VA: 0x3E085F8 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E08654 Offset: 0x3E08654 VA: 0x3E08654
	public void RequestCacheSprite(string imageId, string imageUrl, string publicId) { }

	// RVA: 0x3E088B8 Offset: 0x3E088B8 VA: 0x3E088B8
	public void RequestCacheSprites(List<WeeklyLeaderBoardPlayer> players) { }

	// RVA: 0x3E08A90 Offset: 0x3E08A90 VA: 0x3E08A90
	public void RequestCacheSprites(List<PermanentLeaderboardPlayerViewModel> players) { }

	// RVA: 0x3E08704 Offset: 0x3E08704 VA: 0x3E08704
	private void RequestCacheSpriteInternal(ProfileSpriteCacheRequest profileSpriteCacheRequest) { }

	// RVA: 0x3E08C68 Offset: 0x3E08C68 VA: 0x3E08C68 Slot: 6
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x3E08D40 Offset: 0x3E08D40 VA: 0x3E08D40
	private void CheckProfileSpriteCacheRequests() { }

	// RVA: 0x3E093D4 Offset: 0x3E093D4 VA: 0x3E093D4
	private void AssignProviderTypeTo(ProfileSpriteCacheRequest cacheRequest) { }

	// RVA: 0x3E094A4 Offset: 0x3E094A4 VA: 0x3E094A4
	public void OnProfileSpriteLoadSuccess(ProfileSpriteCacheRequest profileSpriteCacheRequest, Texture2D texture, byte[] data) { }

	// RVA: 0x3E09600 Offset: 0x3E09600 VA: 0x3E09600
	public void OnProfileSpriteLoadFail(ProfileSpriteCacheRequest profileSpriteCacheRequest) { }

	// RVA: 0x3E09630 Offset: 0x3E09630 VA: 0x3E09630
	public Sprite GetSprite(string profileId, string pictureId) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts