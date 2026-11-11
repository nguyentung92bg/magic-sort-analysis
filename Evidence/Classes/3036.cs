public class MultiplierService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3036
{
	// Fields
	private readonly RemoteConfigs _remoteConfigs; // 0x10
	private readonly IPlayerService _playerService; // 0x18
	private readonly MiniGameService _miniGameService; // 0x20
	private readonly DuckFestivalService _duckFestivalService; // 0x28
	private readonly TeamArenaService _teamArenaService; // 0x30
	private readonly TeamQuestService _teamQuestService; // 0x38
	private readonly MergeMiniGameService _mergeMiniGameService; // 0x40
	private readonly AdConfigService _adConfigConfigService; // 0x48
	private readonly MagicPassService _magicPassService; // 0x50
	private readonly MagicStreakGaeService _magicStreakGaeService; // 0x58
	private readonly StrikeShowService _strikeShowService; // 0x60
	private readonly MultiplierDataService _dataService; // 0x68
	private int _selectedMultiplier; // 0x70
	private int _selectedMultiplierIndex; // 0x74
	private bool _multiplierTooltipDisplayed; // 0x78
	private const string TooltipDisplayedKey = "MultiplierTooltipDisplayed";

	// Methods

	// RVA: 0x315B8F8 Offset: 0x315B8F8 VA: 0x315B8F8
	public void .ctor(RemoteConfigs remoteConfigs, IPlayerService playerService, MiniGameService miniGameService, DuckFestivalService duckFestivalService, TeamArenaService teamArenaService, TeamQuestService teamQuestService, MergeMiniGameService mergeMiniGameService, AdConfigService adConfigService, MagicPassService magicPassService, MagicStreakGaeService magicStreakGaeService, StrikeShowService strikeShowService, MultiplierDataService dataService) { }

	// RVA: 0x315BA2C Offset: 0x315BA2C VA: 0x315BA2C Slot: 4
	public void Initialize() { }

	// RVA: 0x315BBB8 Offset: 0x315BBB8 VA: 0x315BBB8 Slot: 5
	public void Dispose() { }

	// RVA: 0x315BAD0 Offset: 0x315BAD0 VA: 0x315BAD0
	public void ResetMultiplier(LevelDifficultyType difficulty) { }

	// RVA: 0x315BC0C Offset: 0x315BC0C VA: 0x315BC0C
	public void UpdateMultiplier(LevelDifficultyType difficulty) { }

	// RVA: 0x315BCC8 Offset: 0x315BCC8 VA: 0x315BCC8
	public int GetCurrentMultiplier() { }

	// RVA: 0x315BCF8 Offset: 0x315BCF8 VA: 0x315BCF8
	public bool TryGetPlayOnPrice(LevelDifficultyType difficulty, int playOnUsage, out int price) { }

	// RVA: 0x315BE20 Offset: 0x315BE20 VA: 0x315BE20
	public bool TryGetPlayOnPriceByMultiplier(int multiplier, LevelDifficultyType difficulty, int playOnUsage, out int price) { }

	// RVA: 0x315BF44 Offset: 0x315BF44 VA: 0x315BF44
	public void TryIncreaseMultiplier(LevelDifficultyType difficulty) { }

	// RVA: 0x315C0D4 Offset: 0x315C0D4 VA: 0x315C0D4
	public void TryDecreaseMultiplier(LevelDifficultyType difficulty) { }

	// RVA: 0x315C024 Offset: 0x315C024 VA: 0x315C024
	private bool IsLocked() { }

	// RVA: 0x315C1B0 Offset: 0x315C1B0 VA: 0x315C1B0
	public MultiplierViewModel GetViewModel(LevelDifficultyType difficulty, bool forLeveWin = False) { }

	// RVA: 0x315C3F8 Offset: 0x315C3F8 VA: 0x315C3F8
	private List<MultiplierEventCurrencyViewModel> GetMultiplierRewards(LevelDifficultyType difficulty, bool isFirstTry, bool forLevelWin) { }

	// RVA: 0x315CE20 Offset: 0x315CE20 VA: 0x315CE20
	private MultiplierCurrencyType GetStrikeShowCurrencyType() { }

	// RVA: 0x315BB8C Offset: 0x315BB8C VA: 0x315BB8C
	private MultiplierConfigModel GetConfig() { }

	// RVA: 0x315BBBC Offset: 0x315BBBC VA: 0x315BBBC
	private List<int> GetMultipliersByDifficulty(LevelDifficultyType difficultyType) { }

	// RVA: 0x315C3A8 Offset: 0x315C3A8 VA: 0x315C3A8
	private int GetDefaultMultiplierByDifficulty(LevelDifficultyType difficultyType) { }

	// RVA: 0x315CE60 Offset: 0x315CE60 VA: 0x315CE60
	public bool IsTagEnabled() { }

	// RVA: 0x315CE7C Offset: 0x315CE7C VA: 0x315CE7C
	public bool ShouldShowMultiplier(LevelDifficultyType difficulty) { }

	// RVA: 0x315CF08 Offset: 0x315CF08 VA: 0x315CF08
	public bool IsEligible() { }

	// RVA: 0x315D0E8 Offset: 0x315D0E8 VA: 0x315D0E8
	public bool TryGetPriceByCurrency(CurrencyType currencyType, out int price) { }

	// RVA: 0x315D240 Offset: 0x315D240 VA: 0x315D240
	private LevelDifficultyType GetDifficulty() { }

	// RVA: 0x315CC28 Offset: 0x315CC28 VA: 0x315CC28
	private bool ShouldShowIncreaseMultiplierTooltip() { }

	// RVA: 0x315D3AC Offset: 0x315D3AC VA: 0x315D3AC
	public void IncreaseMultiplierTooltipDisplayed() { }

	// RVA: 0x315D478 Offset: 0x315D478 VA: 0x315D478
	public void UpdateMultiplierSelected() { }

	// RVA: 0x315D54C Offset: 0x315D54C VA: 0x315D54C
	public int GetMultiplierStatusForAnalytic() { }

	// RVA: 0x315D57C Offset: 0x315D57C VA: 0x315D57C
	public void TooltipDisplayed() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WelcomeBack.Scripts
[Serializable]