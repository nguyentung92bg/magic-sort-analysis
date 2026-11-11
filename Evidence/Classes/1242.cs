public class PlayOnWithRewardedService : IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 1242
{
	// Fields
	private AdService _adService; // 0x10
	private readonly IPlayerService _playerService; // 0x18
	private readonly RemoteTimeService _remoteTimeService; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private readonly PlayOnWithRewardedDataService _dataService; // 0x30
	private readonly ILevelManager _levelManager; // 0x38
	private readonly MultiplierService _multiplierService; // 0x40
	private readonly ILevelModelService _levelModelService; // 0x48
	private int _watchedAdCountInStuck; // 0x50
	[CompilerGenerated]
	private bool <IsEligible>k__BackingField; // 0x54

	// Properties
	public bool IsEligible { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x21495DC Offset: 0x21495DC VA: 0x21495DC
	public bool get_IsEligible() { }

	[CompilerGenerated]
	// RVA: 0x21495E4 Offset: 0x21495E4 VA: 0x21495E4
	private void set_IsEligible(bool value) { }

	// RVA: 0x21495F0 Offset: 0x21495F0 VA: 0x21495F0
	public void .ctor(RemoteTimeService remoteTimeService, PlayOnWithRewardedDataService dataService, IPlayerService playerService, RemoteConfigs remoteConfigs, ILevelManager levelManager, MultiplierService multiplierService, ILevelModelService levelModelService) { }

	// RVA: 0x21496B0 Offset: 0x21496B0 VA: 0x21496B0 Slot: 4
	public void Initialize() { }

	// RVA: 0x21497E0 Offset: 0x21497E0 VA: 0x21497E0 Slot: 5
	public void Dispose() { }

	// RVA: 0x21498B0 Offset: 0x21498B0 VA: 0x21498B0 Slot: 6
	public void InitializeData() { }

	// RVA: 0x21499B8 Offset: 0x21499B8 VA: 0x21499B8
	private void OnLevelStuck() { }

	// RVA: 0x2149B28 Offset: 0x2149B28 VA: 0x2149B28
	public bool IsPlayOnWithRewardedEnabled() { }

	// RVA: 0x21499D8 Offset: 0x21499D8 VA: 0x21499D8
	public bool CanUsePlayOnWithRewarded() { }

	// RVA: 0x2149B44 Offset: 0x2149B44 VA: 0x2149B44
	private bool CheckCanUndoIfRewardIsUndo() { }

	// RVA: 0x2149C28 Offset: 0x2149C28 VA: 0x2149C28
	private bool CanUseWithCurrentRetryCount() { }

	// RVA: 0x2149CF4 Offset: 0x2149CF4 VA: 0x2149CF4
	private bool CanUseWithMultiplier() { }

	// RVA: 0x2149DC8 Offset: 0x2149DC8 VA: 0x2149DC8
	private LevelDifficultyType GetDifficulty() { }

	// RVA: 0x2149EEC Offset: 0x2149EEC VA: 0x2149EEC
	public PlayOnWithRewardedVariantType GetPlayOnWithRewardedVariant() { }

	// RVA: 0x2148E4C Offset: 0x2148E4C VA: 0x2148E4C
	public void RewardedAdWatched() { }

	// RVA: 0x2149B20 Offset: 0x2149B20 VA: 0x2149B20
	private void ResetWatchedAdCountInStuck() { }

	// RVA: 0x2148E3C Offset: 0x2148E3C VA: 0x2148E3C
	public void IncreaseWatchedAdCountInStuck() { }

	// RVA: 0x2149F08 Offset: 0x2149F08 VA: 0x2149F08
	public int GetWatchedAdCountInStuck() { }

	// RVA: 0x2148EA8 Offset: 0x2148EA8 VA: 0x2148EA8
	public bool PlayOnRequirementsSatisfied() { }

	// RVA: 0x2149FAC Offset: 0x2149FAC VA: 0x2149FAC
	public List<PlayOnBehaviourType> GetPlayOnBehaviours() { }

	// RVA: 0x2149D64 Offset: 0x2149D64 VA: 0x2149D64
	public PlayOnBehaviourType GetDefaultPlayOnBehaviour() { }

	// RVA: 0x2149F10 Offset: 0x2149F10 VA: 0x2149F10
	public int GetTargetAdWatchCount() { }

	// RVA: 0x21498B4 Offset: 0x21498B4 VA: 0x21498B4
	private void TryResetDailyWatchCount() { }

	// RVA: 0x2148DE0 Offset: 0x2148DE0 VA: 0x2148DE0
	public bool ShouldShowRewarded() { }

	// RVA: 0x2149DA4 Offset: 0x2149DA4 VA: 0x2149DA4
	private PlayOnRewardedConfigModel GetConfig() { }
}

// Namespace: Modules.Contexts.GamePlay.MagicBottle.Scripts
[CreateAssetMenu(fileName = "MagicBottleAnimationConfig", menuName = "Configs/MagicBottleAnimationConfig")]