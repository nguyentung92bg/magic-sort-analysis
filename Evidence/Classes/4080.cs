public class JourneyService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 4080
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private readonly IPlayerService _playerService; // 0x18
	private readonly AssetManager _assetManager; // 0x20
	private JourneyConfigModel _journeyConfigModel; // 0x28
	private JourneyViewModel _journeyViewModel; // 0x30
	private string _selectedPosterId; // 0x38
	private string _selectedPosterIdKey; // 0x40
	private int _loopedRewardIndex; // 0x48
	private JourneyPosterTimeTracker _journeyPosterTimeTracker; // 0x50
	private ChampionsLeagueService _championsLeagueService; // 0x58
	private CollectionService _collectionService; // 0x60
	private const string fallback_poster_id = "poster1";
	private const string loading_poster_id = "poster_loading";
	private const int poster_download_range = 20;

	// Methods

	// RVA: 0x37633A0 Offset: 0x37633A0 VA: 0x37633A0
	public void .ctor(RemoteConfigs remoteConfigs, IPlayerService playerService, AssetManager assetManager, ChampionsLeagueService championsLeagueService, CollectionService collectionService) { }

	// RVA: 0x3763430 Offset: 0x3763430 VA: 0x3763430 Slot: 4
	public void Initialize() { }

	// RVA: 0x3763434 Offset: 0x3763434 VA: 0x3763434 Slot: 6
	public void InitializeData() { }

	// RVA: 0x37635FC Offset: 0x37635FC VA: 0x37635FC
	private void UpdateRewardsForCollection() { }

	// RVA: 0x3763FE4 Offset: 0x3763FE4 VA: 0x3763FE4
	private RewardModel GetBackoffRewardForBackType(int packType) { }

	// RVA: 0x376383C Offset: 0x376383C VA: 0x376383C
	private void InitializeSelectedPosterId() { }

	// RVA: 0x3764208 Offset: 0x3764208 VA: 0x3764208
	private void CheckSelectedPosterIdExistInConfig() { }

	// RVA: 0x37642B0 Offset: 0x37642B0 VA: 0x37642B0
	public string GetSelectedPosterId() { }

	// RVA: 0x37642B8 Offset: 0x37642B8 VA: 0x37642B8
	public void SetSelectedPosterId(string posterId) { }

	// RVA: 0x3764584 Offset: 0x3764584 VA: 0x3764584
	public bool HasRewards() { }

	// RVA: 0x3764630 Offset: 0x3764630 VA: 0x3764630
	public bool TryGetPoster(int level, out PosterViewModel posterViewModel) { }

	// RVA: 0x37647C0 Offset: 0x37647C0 VA: 0x37647C0
	public PosterViewModel GetPosterViewModelById(string posterId) { }

	// RVA: 0x376408C Offset: 0x376408C VA: 0x376408C
	private string GetLastUnlockedPosterId() { }

	// RVA: 0x37648FC Offset: 0x37648FC VA: 0x37648FC
	public bool TryGetRewards(int level, out List<RewardModel> rewardModel) { }

	// RVA: 0x37641B0 Offset: 0x37641B0 VA: 0x37641B0
	public string GetFallbackPosterId() { }

	// RVA: 0x3764CE4 Offset: 0x3764CE4 VA: 0x3764CE4
	public string GetLoadingPosterId() { }

	// RVA: 0x3763DA4 Offset: 0x3763DA4 VA: 0x3763DA4
	private void SendPosterTimeTrackingEvent() { }

	// RVA: 0x3764B28 Offset: 0x3764B28 VA: 0x3764B28
	private JourneyPosterConfig GetSmallestLevelConfig() { }

	// RVA: 0x3764A7C Offset: 0x3764A7C VA: 0x3764A7C
	public JourneyViewModel GetJourneyViewModel() { }

	// RVA: 0x3765154 Offset: 0x3765154 VA: 0x3765154
	public void OnLevelWin() { }

	// RVA: 0x3765A00 Offset: 0x3765A00 VA: 0x3765A00
	private void TryLoadPoster() { }

	// RVA: 0x37655DC Offset: 0x37655DC VA: 0x37655DC
	private void UpdateJourneyProgress() { }

	// RVA: 0x376517C Offset: 0x376517C VA: 0x376517C
	private void GenerateAdditionalRewardsFromLoop() { }

	// RVA: 0x3765F4C Offset: 0x3765F4C VA: 0x3765F4C
	private int GetPosterMaxLevel() { }

	// RVA: 0x3763BE4 Offset: 0x3763BE4 VA: 0x3763BE4
	private void PreDownloadPosters() { }

	// RVA: 0x37639AC Offset: 0x37639AC VA: 0x37639AC
	private void PreDownloadAndLoadThumbnails() { }

	// RVA: 0x3763968 Offset: 0x3763968 VA: 0x3763968
	private void PreDownloadAndLoadSelectedPoster() { }

	[AsyncStateMachine(typeof(JourneyService.<AwaitLoadingFallbackPoster>d__41))]
	// RVA: 0x3766234 Offset: 0x3766234 VA: 0x3766234
	public Task AwaitLoadingFallbackPoster() { }

	// RVA: 0x3764D24 Offset: 0x3764D24 VA: 0x3764D24
	private List<IJourneyItemViewModel> MergeTwoModelsIntoIJourneyItemViewModelListSortedByLevel(JourneyRewardsConfig[] rewardsConfigs, JourneyLoopRewardsConfig journeyLoopRewardsConfig, JourneyPosterConfig[] journeyPosterConfigs) { }

	// RVA: 0x37660DC Offset: 0x37660DC VA: 0x37660DC
	private List<IJourneyItemViewModel> TryGeneratePosterConfigs(int maxRewardLevel, int minLevel, JourneyPosterConfig[] journeyPosterConfigs) { }

	// RVA: 0x3765B50 Offset: 0x3765B50 VA: 0x3765B50
	private JourneyRewardsConfig[] TryGenerateLoopConfig(int levelBuffer, int highestLevel) { }

	// RVA: 0x3765E40 Offset: 0x3765E40 VA: 0x3765E40
	private IJourneyItemViewModel CreateItemViewModel(JourneyRewardsConfig journeyRewardsConfig) { }

	// RVA: 0x3766320 Offset: 0x3766320 VA: 0x3766320
	private IJourneyItemViewModel CreateItemViewModel(JourneyPosterConfig journeyPosterConfig) { }

	// RVA: 0x3766448 Offset: 0x3766448 VA: 0x3766448 Slot: 5
	public void Dispose() { }

	[CompilerGenerated]
	// RVA: 0x376646C Offset: 0x376646C VA: 0x376646C
	private bool <HasRewards>b__23_0(IJourneyItemViewModel journeyItemViewModel) { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts