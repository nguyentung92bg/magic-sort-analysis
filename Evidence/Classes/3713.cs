public interface IProfileSpriteProvider : IDisposable // TypeDefIndex: 3713
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(ProfileSpriteCacheService profileSpriteCacheService, CustomUpdater customUpdater, IPlayerService playerService);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool IsInitialized();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void TryLoadRequestedSprites(List<ProfileSpriteCacheRequest> profileSpriteCacheRequests);
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts
[Serializable]