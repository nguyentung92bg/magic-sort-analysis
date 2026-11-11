public class ProfileSpriteHttpProvider : IProfileSpriteProvider, IDisposable // TypeDefIndex: 3743
{
	// Fields
	private float _coolDownDurationBetweenDownloadAsSeconds; // 0x10
	private float _coolDownDurationAsSeconds; // 0x14
	private float _maxCoolDownDurationAsSeconds; // 0x18
	private DateTime _coolDownEndTime; // 0x20
	private bool _isAnyRequestFailed; // 0x28
	private readonly HttpProxy _httpProxy; // 0x30
	private CancellationTokenSource _cancellationTokenSource; // 0x38
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x40

	// Methods

	// RVA: 0x3E08450 Offset: 0x3E08450 VA: 0x3E08450
	public void .ctor(HttpProxy httpProxy) { }

	// RVA: 0x3E08524 Offset: 0x3E08524 VA: 0x3E08524 Slot: 4
	public void Initialize(ProfileSpriteCacheService profileSpriteCacheService, CustomUpdater customUpdater, IPlayerService playerService) { }

	// RVA: 0x3E08D18 Offset: 0x3E08D18 VA: 0x3E08D18 Slot: 5
	public bool IsInitialized() { }

	// RVA: 0x3E08FFC Offset: 0x3E08FFC VA: 0x3E08FFC Slot: 6
	public void TryLoadRequestedSprites(List<ProfileSpriteCacheRequest> profileSpriteCacheRequests) { }

	[AsyncStateMachine(typeof(ProfileSpriteHttpProvider.<LoadSpritesAsync>d__12))]
	// RVA: 0x3E096F0 Offset: 0x3E096F0 VA: 0x3E096F0
	private Task LoadSpritesAsync(ProfileSpriteCacheRequest profileSpriteCacheRequest) { }

	// RVA: 0x3E097F4 Offset: 0x3E097F4 VA: 0x3E097F4
	private Texture2D LoadImage(byte[] data) { }

	// RVA: 0x3E0986C Offset: 0x3E0986C VA: 0x3E0986C
	public bool CanProvide(ProfileSpriteCacheRequest cacheRequest) { }

	[AsyncStateMachine(typeof(ProfileSpriteHttpProvider.<LoadImageDataHttpAsync>d__15))]
	// RVA: 0x3E09874 Offset: 0x3E09874 VA: 0x3E09874
	private Task<byte[]> LoadImageDataHttpAsync(string url) { }

	// RVA: 0x3E0863C Offset: 0x3E0863C VA: 0x3E0863C Slot: 7
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts