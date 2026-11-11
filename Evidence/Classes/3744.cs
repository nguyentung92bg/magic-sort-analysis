public class ProfileSpritePersistenceProvider : IProfileSpriteProvider, IDisposable, ILateInitializable, IFrameUpdate // TypeDefIndex: 3744
{
	// Fields
	private ProfileSpritePersistenceService _profileSpritePersistenceService; // 0x10
	[TupleElementNames(new[] { "task", "request", "data", "texture" })]
	private readonly List<ValueTuple<Task<ValueTuple<byte[], Texture2D>>, ProfileSpriteCacheRequest>> _loadingProcesses; // 0x18
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x20
	private const int MaxLoadingTasks = 3;
	private int _activeProcessCount; // 0x28

	// Methods

	// RVA: 0x3E08480 Offset: 0x3E08480 VA: 0x3E08480 Slot: 4
	public void Initialize(ProfileSpriteCacheService profileSpriteCacheService, CustomUpdater customUpdater, IPlayerService playerService) { }

	// RVA: 0x3E08D20 Offset: 0x3E08D20 VA: 0x3E08D20 Slot: 5
	public bool IsInitialized() { }

	// RVA: 0x3E0920C Offset: 0x3E0920C VA: 0x3E0920C Slot: 6
	public void TryLoadRequestedSprites(List<ProfileSpriteCacheRequest> profileSpriteCacheRequests) { }

	// RVA: 0x3E0948C Offset: 0x3E0948C VA: 0x3E0948C
	public bool CanProvide(ProfileSpriteCacheRequest cacheRequest) { }

	// RVA: 0x3E08650 Offset: 0x3E08650 VA: 0x3E08650 Slot: 7
	public void Dispose() { }

	// RVA: 0x3E08D14 Offset: 0x3E08D14 VA: 0x3E08D14 Slot: 9
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x3E0A43C Offset: 0x3E0A43C VA: 0x3E0A43C
	private void CheckSpriteRequests() { }

	// RVA: 0x3E095E8 Offset: 0x3E095E8 VA: 0x3E095E8
	public void AddToCache(ProfileSpriteCacheRequest profileSpriteCacheRequest, byte[] data) { }

	// RVA: 0x3E09474 Offset: 0x3E09474 VA: 0x3E09474
	public void RemoveFromCache(ProfileSpriteCacheRequest profileSpriteCacheRequests) { }

	// RVA: 0x3E085E0 Offset: 0x3E085E0 VA: 0x3E085E0 Slot: 8
	public void LateInitialize() { }

	// RVA: 0x3E083C8 Offset: 0x3E083C8 VA: 0x3E083C8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts