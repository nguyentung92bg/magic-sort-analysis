public class UserProfileService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, ILateUpdate // TypeDefIndex: 2988
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private readonly ISaveLoad<UserProfileModel> _saveLoad; // 0x28
	private UserProfileModel _cachedSelfProfile; // 0x30
	private bool _isMarkedForLateUpdate; // 0x38

	// Methods

	// RVA: 0x2AE54A8 Offset: 0x2AE54A8 VA: 0x2AE54A8
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, IPlayerService playerService, ISaveLoad<UserProfileModel> saveLoad) { }

	// RVA: 0x2AE551C Offset: 0x2AE551C VA: 0x2AE551C Slot: 4
	public void Initialize() { }

	// RVA: 0x2AE55F4 Offset: 0x2AE55F4 VA: 0x2AE55F4 Slot: 6
	public void InitializeData() { }

	// RVA: 0x2AE56B0 Offset: 0x2AE56B0 VA: 0x2AE56B0 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AE56BC Offset: 0x2AE56BC VA: 0x2AE56BC Slot: 7
	public void LateUpdate() { }

	// RVA: 0x2AE5778 Offset: 0x2AE5778 VA: 0x2AE5778
	public UserProfileModel GetCachedSelfProfile() { }

	// RVA: 0x2AE57E0 Offset: 0x2AE57E0 VA: 0x2AE57E0
	private void MarkDataForLateUpdate() { }

	[AsyncStateMachine(typeof(UserProfileService.<TryFetchAndCacheSelfProfile>d__13))]
	// RVA: 0x2AE55F8 Offset: 0x2AE55F8 VA: 0x2AE55F8
	private void TryFetchAndCacheSelfProfile() { }

	[AsyncStateMachine(typeof(UserProfileService.<FetchAsync>d__14))]
	// RVA: 0x2AE57EC Offset: 0x2AE57EC VA: 0x2AE57EC
	public Task<UserProfileModel> FetchAsync(string userPublicId) { }

	// RVA: 0x2AE5918 Offset: 0x2AE5918 VA: 0x2AE5918
	public void IncreaseBoatRushWinCount() { }

	// RVA: 0x2AE5938 Offset: 0x2AE5938 VA: 0x2AE5938
	public void IncreaseChampionsLeagueTopThreeFinishes() { }

	// RVA: 0x2AE5958 Offset: 0x2AE5958 VA: 0x2AE5958
	public void IncreaseDuckFestWinCount() { }

	// RVA: 0x2AE5978 Offset: 0x2AE5978 VA: 0x2AE5978
	public void IncreaseWeeklyHelpsMade() { }
}

// Namespace: 
[CompilerGenerated]