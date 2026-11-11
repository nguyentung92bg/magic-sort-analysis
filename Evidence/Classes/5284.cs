public class GrandSROptions // TypeDefIndex: 5284
{
	// Fields
	public static readonly GrandSROptions Instance; // 0x0
	private CheatLevelModelService _cheatLevelModelService; // 0x10
	private IPlayerService _playerService; // 0x18
	private RewardService _rewardService; // 0x20
	private InventoryService _inventoryService; // 0x28
	private VibrationService _vibrationService; // 0x30
	private AdService _adService; // 0x38
	private LevelModelService _levelModelService; // 0x40
	[CompilerGenerated]
	private bool <BulkShuffle>k__BackingField; // 0x48
	[CompilerGenerated]
	private int <ReceivedCardCount>k__BackingField; // 0x4C

	// Properties
	[Category("General")]
	public int CurrentLevel { get; set; }
	[Category("General")]
	public int ForceSeedIndex { get; set; }
	[Category("GamePlay")]
	public bool BulkShuffle { get; set; }
	[Category("Mini Game")]
	public int MiniGameStage { get; set; }
	[Category("Mini Game")]
	public int MiniGameSeedIndex { get; set; }
	[Category("General")]
	public bool IsLogEnabled { get; set; }
	[Category("Inventory")]
	public int Life { get; set; }
	[Category("Inventory")]
	public int Coin { get; set; }
	[Category("Inventory")]
	public int ExtraBottle { get; set; }
	[Category("Inventory")]
	public int Shuffle { get; set; }
	[Category("Inventory")]
	public int Undo { get; set; }
	[Category("Inventory")]
	public int MegaShuffle { get; set; }
	[Category("Inventory")]
	public int Reveal { get; set; }
	[Category("Store")]
	public int SpecialOfferRank { get; set; }
	[Category("Ads")]
	public bool IsRewardedSkipEnabled { get; set; }
	[Category("Collection Test")]
	public int ReceivedCardCount { get; set; }
	[Category("GrandAB")]
	public string GrandABConfigStatus { get; }
	[Category("GrandAB")]
	public string EffectiveLevelConfigName { get; }

	// Methods

	// RVA: 0x1CCC710 Offset: 0x1CCC710 VA: 0x1CCC710
	private void .ctor() { }

	// RVA: 0x1CCC720 Offset: 0x1CCC720 VA: 0x1CCC720
	public void CacheLevelServices(CheatLevelModelService cheatLevelModelService, IPlayerService playerService) { }

	// RVA: 0x1CCC750 Offset: 0x1CCC750 VA: 0x1CCC750
	public void CacheAdService(AdService adService) { }

	// RVA: 0x1CCC758 Offset: 0x1CCC758 VA: 0x1CCC758
	public void CacheInventoryService(InventoryService inventoryService) { }

	// RVA: 0x1CCC760 Offset: 0x1CCC760 VA: 0x1CCC760
	public void CacheRewardServices(RewardService rewardService) { }

	// RVA: 0x1CCC768 Offset: 0x1CCC768 VA: 0x1CCC768
	public void CacheVibrationService(VibrationService vibrationService) { }

	// RVA: 0x1CCC770 Offset: 0x1CCC770 VA: 0x1CCC770
	public void CacheLevelModelService(LevelModelService levelModelService) { }

	// RVA: 0x1CCC778 Offset: 0x1CCC778 VA: 0x1CCC778
	public int get_CurrentLevel() { }

	// RVA: 0x1CCC81C Offset: 0x1CCC81C VA: 0x1CCC81C
	public void set_CurrentLevel(int value) { }

	[Category("General")]
	// RVA: 0x1CCC8C8 Offset: 0x1CCC8C8 VA: 0x1CCC8C8
	public void ResetLevelLoading() { }

	// RVA: 0x1CCC944 Offset: 0x1CCC944 VA: 0x1CCC944
	public int get_ForceSeedIndex() { }

	// RVA: 0x1CCC960 Offset: 0x1CCC960 VA: 0x1CCC960
	public void set_ForceSeedIndex(int value) { }

	[Category("General")]
	// RVA: 0x1CCC97C Offset: 0x1CCC97C VA: 0x1CCC97C
	public void DeleteAllOnlyLocal() { }

	[Category("General")]
	// RVA: 0x1CCC994 Offset: 0x1CCC994 VA: 0x1CCC994
	public void DeleteAllWithRemote() { }

	[Category("General")]
	// RVA: 0x1CCCA20 Offset: 0x1CCCA20 VA: 0x1CCCA20
	public void DeleteAllDataWithRemoteTestAndProd() { }

	[Category("GamePlay")]
	// RVA: 0x1CCCAAC Offset: 0x1CCCAAC VA: 0x1CCCAAC
	public void RecalculateIsStuck() { }

	[CompilerGenerated]
	// RVA: 0x1CCCBA8 Offset: 0x1CCCBA8 VA: 0x1CCCBA8
	public bool get_BulkShuffle() { }

	[CompilerGenerated]
	// RVA: 0x1CCCBB0 Offset: 0x1CCCBB0 VA: 0x1CCCBB0
	public void set_BulkShuffle(bool value) { }

	[Category("GamePlay")]
	// RVA: 0x1CCCBBC Offset: 0x1CCCBBC VA: 0x1CCCBBC
	public void WinLevel() { }

	[Category("GamePlay")]
	// RVA: 0x1CCCCA4 Offset: 0x1CCCCA4 VA: 0x1CCCCA4
	public void LoseLevel() { }

	[Category("GamePlay")]
	// RVA: 0x1CCCD90 Offset: 0x1CCCD90 VA: 0x1CCCD90
	public void NextLevel() { }

	[Category("GamePlay")]
	// RVA: 0x1CCD044 Offset: 0x1CCD044 VA: 0x1CCD044
	public void PreviousLevel() { }

	[Category("GamePlay")]
	// RVA: 0x1CCD268 Offset: 0x1CCD268 VA: 0x1CCD268
	public void RestartLevel() { }

	[Category("GamePlay")]
	// RVA: 0x1CCD478 Offset: 0x1CCD478 VA: 0x1CCD478
	public void ActivateSnitch() { }

	[Category("GamePlay")]
	// RVA: 0x1CCD574 Offset: 0x1CCD574 VA: 0x1CCD574
	public void IncreaseSnitchProgress() { }

	[Category("GamePlay")]
	// RVA: 0x1CCD65C Offset: 0x1CCD65C VA: 0x1CCD65C
	public void ResetSnitchProgress() { }

	[Category("GamePlay")]
	// RVA: 0x1CCD744 Offset: 0x1CCD744 VA: 0x1CCD744
	public void ResetMegaShuffleIntroduction() { }

	[Category("GamePlay")]
	// RVA: 0x1CCD7E8 Offset: 0x1CCD7E8 VA: 0x1CCD7E8
	public void ResetRevealIntroduction() { }

	[Category("WindQuest")]
	// RVA: 0x1CCD88C Offset: 0x1CCD88C VA: 0x1CCD88C
	public void IncreaseWindQuestProgressBy1() { }

	[Category("WindQuest")]
	// RVA: 0x1CCD90C Offset: 0x1CCD90C VA: 0x1CCD90C
	public void IncreaseWindQuestProgressBy5() { }

	[Category("WindQuest")]
	// RVA: 0x1CCD98C Offset: 0x1CCD98C VA: 0x1CCD98C
	public void IncreaseWindQuestProgressBy50() { }

	[Category("WindQuest")]
	// RVA: 0x1CCDA0C Offset: 0x1CCDA0C VA: 0x1CCDA0C
	public void FulfillShowRequirement() { }

	[Category("WindQuest")]
	// RVA: 0x1CCDA88 Offset: 0x1CCDA88 VA: 0x1CCDA88
	public void FailWindQuest() { }

	[Category("ChampionsLeague")]
	// RVA: 0x1CCDB04 Offset: 0x1CCDB04 VA: 0x1CCDB04
	public void PreJoin() { }

	[Category("ChampionsLeague")]
	// RVA: 0x1CCDB80 Offset: 0x1CCDB80 VA: 0x1CCDB80
	public void ResetLeaderboard() { }

	[Category("ChampionsLeague")]
	// RVA: 0x1CCDBFC Offset: 0x1CCDBFC VA: 0x1CCDBFC
	public void IncreaseLeaderboardProgress() { }

	[Category("ChampionsLeague")]
	// RVA: 0x1CCDC78 Offset: 0x1CCDC78 VA: 0x1CCDC78
	public void IncreaseProgressBy10() { }

	[Category("Boat Rush")]
	// RVA: 0x1CCDCF4 Offset: 0x1CCDCF4 VA: 0x1CCDCF4
	public void WinBoatRushStage() { }

	[Category("StrikeShow")]
	// RVA: 0x1CCDD90 Offset: 0x1CCDD90 VA: 0x1CCDD90
	public void StrikeShowSimulateLevelWin() { }

	[Category("StrikeShow")]
	// RVA: 0x1CCDE14 Offset: 0x1CCDE14 VA: 0x1CCDE14
	public void StrikeShowSimulateLevelLose() { }

	[Category("StrikeShow")]
	// RVA: 0x1CCDE90 Offset: 0x1CCDE90 VA: 0x1CCDE90
	public void StrikeShowResetEvent() { }

	[Category("StrikeShow")]
	// RVA: 0x1CCDF5C Offset: 0x1CCDF5C VA: 0x1CCDF5C
	public void IncreaseStrikeShowProgressBy10() { }

	[Category("StrikeShow")]
	// RVA: 0x1CCE038 Offset: 0x1CCE038 VA: 0x1CCE038
	public void StrikeShowOpenPromotionPopupPromoted() { }

	[Category("StrikeShow")]
	// RVA: 0x1CCE2EC Offset: 0x1CCE2EC VA: 0x1CCE2EC
	public void StrikeShowOpenPromotionPopupDemoted() { }

	[Category("StrikeShow")]
	// RVA: 0x1CCE340 Offset: 0x1CCE340 VA: 0x1CCE340
	public void StrikeShowOpenPromotionPopupUnchanged() { }

	// RVA: 0x1CCE08C Offset: 0x1CCE08C VA: 0x1CCE08C
	private static void OpenStrikeShowPromotionPopup(StrikeShowPromotionState promotionState, StrikeShowLeagueType league) { }

	[Category("Mini Game")]
	// RVA: 0x1CCE394 Offset: 0x1CCE394 VA: 0x1CCE394
	public void AddMiniGame10Trident() { }

	[Category("Mini Game")]
	// RVA: 0x1CCE4D4 Offset: 0x1CCE4D4 VA: 0x1CCE4D4
	public void AddMiniGame100Trident() { }

	[Category("Mini Game")]
	// RVA: 0x1CCE558 Offset: 0x1CCE558 VA: 0x1CCE558
	public void ResetMiniGameIntroduction() { }

	// RVA: 0x1CCE618 Offset: 0x1CCE618 VA: 0x1CCE618
	public int get_MiniGameStage() { }

	// RVA: 0x1CCE6A4 Offset: 0x1CCE6A4 VA: 0x1CCE6A4
	public void set_MiniGameStage(int value) { }

	// RVA: 0x1CCE810 Offset: 0x1CCE810 VA: 0x1CCE810
	public int get_MiniGameSeedIndex() { }

	// RVA: 0x1CCE89C Offset: 0x1CCE89C VA: 0x1CCE89C
	public void set_MiniGameSeedIndex(int value) { }

	// RVA: 0x1CCE458 Offset: 0x1CCE458 VA: 0x1CCE458
	private void UpdateMiniGameLobbyButton() { }

	[Category("DuckFestival")]
	// RVA: 0x1CCE980 Offset: 0x1CCE980 VA: 0x1CCE980
	public void TryIncreaseScore() { }

	[Category("DuckFestival")]
	// RVA: 0x1CCEA04 Offset: 0x1CCEA04 VA: 0x1CCEA04
	public void TryIncreaseScoreBy10() { }

	[Category("MagicStreak")]
	// RVA: 0x1CCEAA0 Offset: 0x1CCEAA0 VA: 0x1CCEAA0
	public void IncreaseMagicStreakProgress() { }

	[Category("TreasureDrill")]
	// RVA: 0x1CCEB20 Offset: 0x1CCEB20 VA: 0x1CCEB20
	public void IncreaseTreasureDrillProgress() { }

	[Category("TreasureDrill")]
	// RVA: 0x1CCEB9C Offset: 0x1CCEB9C VA: 0x1CCEB9C
	public void IncreaseTreasureDrillProgressBy10() { }

	[Category("TreasureDrill")]
	// RVA: 0x1CCEC30 Offset: 0x1CCEC30 VA: 0x1CCEC30
	public void SetUnPurchased() { }

	[Category("WheelOfFortune")]
	// RVA: 0x1CCECB8 Offset: 0x1CCECB8 VA: 0x1CCECB8
	public void Add1Currency() { }

	[Category("WheelOfFortune")]
	// RVA: 0x1CCED40 Offset: 0x1CCED40 VA: 0x1CCED40
	public void Add10Currency() { }

	[Category("WheelOfFortune")]
	// RVA: 0x1CCEDC8 Offset: 0x1CCEDC8 VA: 0x1CCEDC8
	public void IncreaseWheelOfFortuneProgress() { }

	[Category("WheelOfFortune")]
	// RVA: 0x1CCEE44 Offset: 0x1CCEE44 VA: 0x1CCEE44
	public void IncreaseWheelOfFortuneProgressBy5() { }

	[Category("TeamQuest")]
	// RVA: 0x1CCEED8 Offset: 0x1CCEED8 VA: 0x1CCEED8
	public void IncreaseTeamProgressBy10() { }

	[Category("TeamQuest")]
	// RVA: 0x1CCEF58 Offset: 0x1CCEF58 VA: 0x1CCEF58
	public void IncreaseTeamProgressBy100() { }

	[Category("Reward")]
	// RVA: 0x1CCEFD8 Offset: 0x1CCEFD8 VA: 0x1CCEFD8
	public void PlayLevelWinCauldronRewardAnimation() { }

	// RVA: 0x1CCF1EC Offset: 0x1CCF1EC VA: 0x1CCF1EC
	public bool get_IsLogEnabled() { }

	// RVA: 0x1CCF22C Offset: 0x1CCF22C VA: 0x1CCF22C
	public void set_IsLogEnabled(bool value) { }

	[Category("General")]
	// RVA: 0x1CCF278 Offset: 0x1CCF278 VA: 0x1CCF278
	public void RestartGame() { }

	// RVA: 0x1CCCFB4 Offset: 0x1CCCFB4 VA: 0x1CCCFB4
	public int get_Life() { }

	// RVA: 0x1CCCFD4 Offset: 0x1CCCFD4 VA: 0x1CCCFD4
	public void set_Life(int value) { }

	[Category("Inventory")]
	// RVA: 0x1CCF314 Offset: 0x1CCF314 VA: 0x1CCF314
	public void ResetLimitlessLife() { }

	// RVA: 0x1CCF344 Offset: 0x1CCF344 VA: 0x1CCF344
	public int get_Coin() { }

	// RVA: 0x1CCF364 Offset: 0x1CCF364 VA: 0x1CCF364
	public void set_Coin(int value) { }

	[Category("Inventory")]
	// RVA: 0x1CCF3D4 Offset: 0x1CCF3D4 VA: 0x1CCF3D4
	public void ResetCoin() { }

	// RVA: 0x1CCF3DC Offset: 0x1CCF3DC VA: 0x1CCF3DC
	public int get_ExtraBottle() { }

	// RVA: 0x1CCF3FC Offset: 0x1CCF3FC VA: 0x1CCF3FC
	public void set_ExtraBottle(int value) { }

	[Category("Inventory")]
	// RVA: 0x1CCF46C Offset: 0x1CCF46C VA: 0x1CCF46C
	public void ResetBottle() { }

	// RVA: 0x1CCF474 Offset: 0x1CCF474 VA: 0x1CCF474
	public int get_Shuffle() { }

	// RVA: 0x1CCF494 Offset: 0x1CCF494 VA: 0x1CCF494
	public void set_Shuffle(int value) { }

	[Category("Inventory")]
	// RVA: 0x1CCF504 Offset: 0x1CCF504 VA: 0x1CCF504
	public void ResetShuffle() { }

	// RVA: 0x1CCF50C Offset: 0x1CCF50C VA: 0x1CCF50C
	public int get_Undo() { }

	// RVA: 0x1CCF52C Offset: 0x1CCF52C VA: 0x1CCF52C
	public void set_Undo(int value) { }

	[Category("Inventory")]
	// RVA: 0x1CCF59C Offset: 0x1CCF59C VA: 0x1CCF59C
	public void ResetUndo() { }

	[Category("Inventory")]
	// RVA: 0x1CCF5A4 Offset: 0x1CCF5A4 VA: 0x1CCF5A4
	public void GiveDuckMultiplier() { }

	[Category("Inventory")]
	// RVA: 0x1CCF654 Offset: 0x1CCF654 VA: 0x1CCF654
	public void ResetDuckMultiplier() { }

	[Category("Inventory")]
	// RVA: 0x1CCF674 Offset: 0x1CCF674 VA: 0x1CCF674
	public void ResetInventory() { }

	// RVA: 0x1CCF74C Offset: 0x1CCF74C VA: 0x1CCF74C
	public int get_MegaShuffle() { }

	// RVA: 0x1CCF76C Offset: 0x1CCF76C VA: 0x1CCF76C
	public void set_MegaShuffle(int value) { }

	[Category("Inventory")]
	// RVA: 0x1CCF6D4 Offset: 0x1CCF6D4 VA: 0x1CCF6D4
	public void ResetMegaShuffle() { }

	// RVA: 0x1CCF7DC Offset: 0x1CCF7DC VA: 0x1CCF7DC
	public int get_Reveal() { }

	// RVA: 0x1CCF6DC Offset: 0x1CCF6DC VA: 0x1CCF6DC
	public void set_Reveal(int value) { }

	// RVA: 0x1CCF7FC Offset: 0x1CCF7FC VA: 0x1CCF7FC
	public int get_SpecialOfferRank() { }

	// RVA: 0x1CCF844 Offset: 0x1CCF844 VA: 0x1CCF844
	public void set_SpecialOfferRank(int value) { }

	[Category("Player")]
	// RVA: 0x1CCF908 Offset: 0x1CCF908 VA: 0x1CCF908
	public void CopyUserID() { }

	[Category("Player")]
	// RVA: 0x1CCF9C0 Offset: 0x1CCF9C0 VA: 0x1CCF9C0
	public void SetUserTypeAsBldRoas() { }

	[Category("Player")]
	// RVA: 0x1CCFA74 Offset: 0x1CCFA74 VA: 0x1CCFA74
	public void SetUserTypeIAP() { }

	[Category("Player")]
	// RVA: 0x1CCFB28 Offset: 0x1CCFB28 VA: 0x1CCFB28
	public void SetUserSegmentNonPurchaser() { }

	[Category("Player")]
	// RVA: 0x1CCFBDC Offset: 0x1CCFBDC VA: 0x1CCFBDC
	public void SetUserSegmentPoor() { }

	[Category("Player")]
	// RVA: 0x1CCFC90 Offset: 0x1CCFC90 VA: 0x1CCFC90
	public void SetUserSegmentHamsi() { }

	[Category("Player")]
	// RVA: 0x1CCFD44 Offset: 0x1CCFD44 VA: 0x1CCFD44
	public void SetUserSegmentDolphin() { }

	[Category("Player")]
	// RVA: 0x1CCFDF8 Offset: 0x1CCFDF8 VA: 0x1CCFDF8
	public void SetUserSegmentWhale() { }

	[Category("Ads")]
	// RVA: 0x1CCFEAC Offset: 0x1CCFEAC VA: 0x1CCFEAC
	public void ShowMaxDebugger() { }

	[Category("Ads")]
	// RVA: 0x1CD006C Offset: 0x1CD006C VA: 0x1CD006C
	public void ShowInterstitial() { }

	[Category("Ads")]
	// RVA: 0x1CD008C Offset: 0x1CD008C VA: 0x1CD008C
	public void ShowRewarded() { }

	[Category("Ads")]
	// RVA: 0x1CD00AC Offset: 0x1CD00AC VA: 0x1CD00AC
	public void ShowBanner() { }

	[Category("Ads")]
	// RVA: 0x1CD00C8 Offset: 0x1CD00C8 VA: 0x1CD00C8
	public void HideBanner() { }

	[AsyncStateMachine(typeof(GrandSROptions.<ShowNoAdsOffer>d__131))]
	[Category("Ads")]
	// RVA: 0x1CD00E4 Offset: 0x1CD00E4 VA: 0x1CD00E4
	public void ShowNoAdsOffer() { }

	// RVA: 0x1CD017C Offset: 0x1CD017C VA: 0x1CD017C
	public bool get_IsRewardedSkipEnabled() { }

	// RVA: 0x1CD0198 Offset: 0x1CD0198 VA: 0x1CD0198
	public void set_IsRewardedSkipEnabled(bool value) { }

	[Category("TestingException")]
	// RVA: 0x1CD01B8 Offset: 0x1CD01B8 VA: 0x1CD01B8
	public void SendHandledExceptionToCrashlytics() { }

	// RVA: 0x1CD022C Offset: 0x1CD022C VA: 0x1CD022C
	public void CheckHasNotification() { }

	[Category("TowerWinStreak")]
	// RVA: 0x1CD0324 Offset: 0x1CD0324 VA: 0x1CD0324
	public void OpenTowerWinStreak() { }

	[Category("TowerWinStreak")]
	// RVA: 0x1CD040C Offset: 0x1CD040C VA: 0x1CD040C
	public void IncreaseTowerWinStreak() { }

	[Category("JetpackRace")]
	// RVA: 0x1CD0498 Offset: 0x1CD0498 VA: 0x1CD0498
	public void OpenJetpackRacePopUp() { }

	[Category("SkyJump")]
	// RVA: 0x1CD0580 Offset: 0x1CD0580 VA: 0x1CD0580
	public void OpenSkyJumpPopUp() { }

	[Category("SkyJump")]
	// RVA: 0x1CD0668 Offset: 0x1CD0668 VA: 0x1CD0668
	public void OpenSkyJumpWinPopUp() { }

	[Category("SkyJump")]
	// RVA: 0x1CD0750 Offset: 0x1CD0750 VA: 0x1CD0750
	public void OpenSkyJumpSearchPopUp() { }

	[Category("BulkRewards")]
	// RVA: 0x1CD0838 Offset: 0x1CD0838 VA: 0x1CD0838
	public void GiveInAppBulkRewards() { }

	[Category("BulkRewards")]
	// RVA: 0x1CD0A54 Offset: 0x1CD0A54 VA: 0x1CD0A54
	public void GiveJetpackRaceBulkRewards() { }

	[Category("Daily")]
	// RVA: 0x1CD0C70 Offset: 0x1CD0C70 VA: 0x1CD0C70
	public void OpenDailyScene() { }

	[Category("Daily")]
	// RVA: 0x1CD0D5C Offset: 0x1CD0D5C VA: 0x1CD0D5C
	public void UnlockAllDailyLevels() { }

	[Category("Daily")]
	// RVA: 0x1CD0DD8 Offset: 0x1CD0DD8 VA: 0x1CD0DD8
	public void Claim6MonthDays() { }

	[Category("Daily")]
	// RVA: 0x1CD0F14 Offset: 0x1CD0F14 VA: 0x1CD0F14
	public void ClaimFirst23MonthDays() { }

	[Category("Daily")]
	// RVA: 0x1CD1050 Offset: 0x1CD1050 VA: 0x1CD1050
	public void Claim13MonthDays() { }

	[Category("Daily")]
	// RVA: 0x1CD118C Offset: 0x1CD118C VA: 0x1CD118C
	public void Claim28MonthDays() { }

	[Category("Daily")]
	// RVA: 0x1CD12C8 Offset: 0x1CD12C8 VA: 0x1CD12C8
	public void Claim28MonthDaysOfPreviousMonth() { }

	[Category("Daily")]
	// RVA: 0x1CD1410 Offset: 0x1CD1410 VA: 0x1CD1410
	public void RemoveClaimedDays() { }

	[Category("Daily")]
	// RVA: 0x1CD15EC Offset: 0x1CD15EC VA: 0x1CD15EC
	public void ByPassRemoteTimeCheck() { }

	[Category("MagicBottle")]
	// RVA: 0x1CD166C Offset: 0x1CD166C VA: 0x1CD166C
	public void PlayMagicBottleCongratsAnimation() { }

	[Category("MagicBottle")]
	// RVA: 0x1CD17AC Offset: 0x1CD17AC VA: 0x1CD17AC
	public void ResetMagicBottleProgress() { }

	[Category("MagicBottle")]
	// RVA: 0x1CD1838 Offset: 0x1CD1838 VA: 0x1CD1838
	public void GainMagicBottle() { }

	[Category("Performance")]
	// RVA: 0x1CD18B4 Offset: 0x1CD18B4 VA: 0x1CD18B4
	public void LogTargetFrameRate() { }

	[Category("Performance")]
	// RVA: 0x1CD18B8 Offset: 0x1CD18B8 VA: 0x1CD18B8
	public void LogScreenResolution() { }

	[Category("Performance")]
	// RVA: 0x1CD18BC Offset: 0x1CD18BC VA: 0x1CD18BC
	public void SetScreenResolutionToHalf() { }

	[Category("Performance")]
	// RVA: 0x1CD191C Offset: 0x1CD191C VA: 0x1CD191C
	public void SetScreenResolutionTo3div4() { }

	[Category("Performance")]
	// RVA: 0x1CD1988 Offset: 0x1CD1988 VA: 0x1CD1988
	public void SetScreenResolutionTo4div5() { }

	[Category("Performance")]
	// RVA: 0x1CD19F4 Offset: 0x1CD19F4 VA: 0x1CD19F4
	public void LogScreenDpi() { }

	[Category("Performance")]
	// RVA: 0x1CD1A60 Offset: 0x1CD1A60 VA: 0x1CD1A60
	public void SetScreenResolutionTo1div4() { }

	[Category("Language")]
	// RVA: 0x1CD1AC0 Offset: 0x1CD1AC0 VA: 0x1CD1AC0
	public void SetLanguageEnglish() { }

	[Category("Language")]
	// RVA: 0x1CD1B28 Offset: 0x1CD1B28 VA: 0x1CD1B28
	public void SetLanguageTurkish() { }

	[Category("Language")]
	// RVA: 0x1CD1B90 Offset: 0x1CD1B90 VA: 0x1CD1B90
	public void SetLanguageDutch() { }

	[Category("Language")]
	// RVA: 0x1CD1BF8 Offset: 0x1CD1BF8 VA: 0x1CD1BF8
	public void SetLanguageGerman() { }

	[Category("Language")]
	// RVA: 0x1CD1C60 Offset: 0x1CD1C60 VA: 0x1CD1C60
	public void SetLanguageFrench() { }

	[Category("Language")]
	// RVA: 0x1CD1CC8 Offset: 0x1CD1CC8 VA: 0x1CD1CC8
	public void SetLanguageItalian() { }

	[Category("Language")]
	// RVA: 0x1CD1D30 Offset: 0x1CD1D30 VA: 0x1CD1D30
	public void SetLanguagePortuguese() { }

	[Category("Language")]
	// RVA: 0x1CD1D98 Offset: 0x1CD1D98 VA: 0x1CD1D98
	public void SetLanguageSpanish() { }

	[Category("Language")]
	// RVA: 0x1CD1E00 Offset: 0x1CD1E00 VA: 0x1CD1E00
	public void SetLanguageRussian() { }

	[Category("Language")]
	// RVA: 0x1CD1E68 Offset: 0x1CD1E68 VA: 0x1CD1E68
	public void SetLanguageJapanese() { }

	[Category("Language")]
	// RVA: 0x1CD1ED0 Offset: 0x1CD1ED0 VA: 0x1CD1ED0
	public void SetLanguageKorean() { }

	[Category("TestingReward")]
	// RVA: 0x1CD1F38 Offset: 0x1CD1F38 VA: 0x1CD1F38
	public void Queue5MinutesLifeReward() { }

	[Category("TestingReward")]
	// RVA: 0x1CD2000 Offset: 0x1CD2000 VA: 0x1CD2000
	public void Queue5MinutesLifeReward100Times() { }

	[Category("TestingReward")]
	// RVA: 0x1CD20DC Offset: 0x1CD20DC VA: 0x1CD20DC
	public void QueueCoinReward() { }

	[Category("TestingReward")]
	// RVA: 0x1CD215C Offset: 0x1CD215C VA: 0x1CD215C
	public void Queue15ShuffleReward100Times() { }

	[Category("TestingReward")]
	// RVA: 0x1CD21FC Offset: 0x1CD21FC VA: 0x1CD21FC
	public void Queue1ShuffleReward100Times() { }

	[Category("TestingReward")]
	// RVA: 0x1CD229C Offset: 0x1CD229C VA: 0x1CD229C
	public void GiveQueuedRewards() { }

	// RVA: 0x1CD22B8 Offset: 0x1CD22B8 VA: 0x1CD22B8
	public void CacheMagicStreakGaeService(MagicStreakGaeService MagicStreakGaeService) { }

	// RVA: 0x1CD22BC Offset: 0x1CD22BC VA: 0x1CD22BC
	public void OpenMagicLabPopUp() { }

	// RVA: 0x1CD231C Offset: 0x1CD231C VA: 0x1CD231C
	public void CompleteMagicLabStage1() { }

	// RVA: 0x1CD2334 Offset: 0x1CD2334 VA: 0x1CD2334
	public void CompleteMagicLabStage1_SuperHardLevel() { }

	// RVA: 0x1CD23B8 Offset: 0x1CD23B8 VA: 0x1CD23B8
	public void CompleteMagicLabStage1_JetpackRace() { }

	// RVA: 0x1CD243C Offset: 0x1CD243C VA: 0x1CD243C
	public void CompleteMagicLabStage1_MagicStreak() { }

	// RVA: 0x1CD24C0 Offset: 0x1CD24C0 VA: 0x1CD24C0
	public void CompleteMagicLabStage1_BroomStreak() { }

	// RVA: 0x1CD2544 Offset: 0x1CD2544 VA: 0x1CD2544
	public void CompleteMagicLabStage2() { }

	// RVA: 0x1CD255C Offset: 0x1CD255C VA: 0x1CD255C
	public void CompleteMagicLabStage2_SuperHardLevel() { }

	// RVA: 0x1CD25F8 Offset: 0x1CD25F8 VA: 0x1CD25F8
	public void CompleteMagicLabStage2_JetpackRace() { }

	// RVA: 0x1CD2694 Offset: 0x1CD2694 VA: 0x1CD2694
	public void CompleteMagicLabStage2_MagicStreak() { }

	// RVA: 0x1CD2718 Offset: 0x1CD2718 VA: 0x1CD2718
	public void CompleteMagicLabStage2_BroomStreak() { }

	// RVA: 0x1CD279C Offset: 0x1CD279C VA: 0x1CD279C
	public void CompleteMagicLabStage3() { }

	// RVA: 0x1CD27B4 Offset: 0x1CD27B4 VA: 0x1CD27B4
	public void CompleteMagicLabStage3_SuperHardLevel() { }

	// RVA: 0x1CD2850 Offset: 0x1CD2850 VA: 0x1CD2850
	public void CompleteMagicLabStage3_JetpackRace() { }

	// RVA: 0x1CD28EC Offset: 0x1CD28EC VA: 0x1CD28EC
	public void CompleteMagicLabStage3_MagicStreak() { }

	// RVA: 0x1CD2970 Offset: 0x1CD2970 VA: 0x1CD2970
	public void CompleteMagicLabStage3_BroomStreak() { }

	// RVA: 0x1CD29F4 Offset: 0x1CD29F4 VA: 0x1CD29F4
	public void CompleteMagicLabStage4() { }

	// RVA: 0x1CD2A0C Offset: 0x1CD2A0C VA: 0x1CD2A0C
	public void CompleteMagicLabStage4_SuperHardLevel() { }

	// RVA: 0x1CD2AA8 Offset: 0x1CD2AA8 VA: 0x1CD2AA8
	public void CompleteMagicLabStage4_JetpackRace() { }

	// RVA: 0x1CD2B44 Offset: 0x1CD2B44 VA: 0x1CD2B44
	public void CompleteMagicLabStage4_MagicStreak() { }

	// RVA: 0x1CD2BC8 Offset: 0x1CD2BC8 VA: 0x1CD2BC8
	public void CompleteMagicLabStage4_BroomStreak() { }

	// RVA: 0x1CD2C4C Offset: 0x1CD2C4C VA: 0x1CD2C4C
	public void CompleteMagicLabStage5() { }

	// RVA: 0x1CD2C64 Offset: 0x1CD2C64 VA: 0x1CD2C64
	public void CompleteMagicLabStage5_SuperHardLevel() { }

	// RVA: 0x1CD2D00 Offset: 0x1CD2D00 VA: 0x1CD2D00
	public void CompleteMagicLabStage5_JetpackRace() { }

	// RVA: 0x1CD2D9C Offset: 0x1CD2D9C VA: 0x1CD2D9C
	public void CompleteMagicLabStage5_MagicStreak() { }

	// RVA: 0x1CD2E20 Offset: 0x1CD2E20 VA: 0x1CD2E20
	public void CompleteMagicLabStage5_BroomStreak() { }

	[Category("JetpackRace")]
	// RVA: 0x1CD2EA4 Offset: 0x1CD2EA4 VA: 0x1CD2EA4
	public void JetpackRaceWithStageWin() { }

	[Category("Collection Test")]
	// RVA: 0x1CD2F40 Offset: 0x1CD2F40 VA: 0x1CD2F40
	public void OpenPack1() { }

	[Category("Collection Test")]
	// RVA: 0x1CD334C Offset: 0x1CD334C VA: 0x1CD334C
	public void OpenPack2() { }

	[Category("Collection Test")]
	// RVA: 0x1CD33B4 Offset: 0x1CD33B4 VA: 0x1CD33B4
	public void OpenPack3() { }

	[Category("Collection Test")]
	// RVA: 0x1CD341C Offset: 0x1CD341C VA: 0x1CD341C
	public void OpenPack4() { }

	[Category("Collection Test")]
	// RVA: 0x1CD3484 Offset: 0x1CD3484 VA: 0x1CD3484
	public void OpenPack5() { }

	[Category("Collection Test")]
	[DisplayName("OpenPacks 2,4")]
	// RVA: 0x1CD34EC Offset: 0x1CD34EC VA: 0x1CD34EC
	public void OpenPack24() { }

	[Category("Collection Test")]
	[DisplayName("OpenPacks 1,3,5")]
	// RVA: 0x1CD3564 Offset: 0x1CD3564 VA: 0x1CD3564
	public void OpenPack135() { }

	[Category("Collection Test")]
	// RVA: 0x1CD35D4 Offset: 0x1CD35D4 VA: 0x1CD35D4
	public void OpenPack5Silently() { }

	[AsyncStateMachine(typeof(GrandSROptions.<CompleteNextTheme>d__217))]
	[Category("Collection Test")]
	// RVA: 0x1CD36B4 Offset: 0x1CD36B4 VA: 0x1CD36B4
	public void CompleteNextTheme() { }

	[Category("Collection Test")]
	// RVA: 0x1CD3750 Offset: 0x1CD3750 VA: 0x1CD3750
	public void CompleteNextThemeUntilLastCard() { }

	[Category("Collection Test")]
	[AsyncStateMachine(typeof(GrandSROptions.<CompleteCollection>d__219))]
	// RVA: 0x1CD3B0C Offset: 0x1CD3B0C VA: 0x1CD3B0C
	public void CompleteCollection() { }

	[Category("Collection Test")]
	// RVA: 0x1CD3BC4 Offset: 0x1CD3BC4 VA: 0x1CD3BC4
	public void ResetCollection() { }

	[Category("Collection Test")]
	// RVA: 0x1CD3C40 Offset: 0x1CD3C40 VA: 0x1CD3C40
	public void ResetCardInventory() { }

	[AsyncStateMachine(typeof(GrandSROptions.<ResetPlayerTokens>d__222))]
	[Category("Collection Test")]
	// RVA: 0x1CD3CBC Offset: 0x1CD3CBC VA: 0x1CD3CBC
	public void ResetPlayerTokens() { }

	[CompilerGenerated]
	// RVA: 0x1CD3D54 Offset: 0x1CD3D54 VA: 0x1CD3D54
	public int get_ReceivedCardCount() { }

	[CompilerGenerated]
	// RVA: 0x1CD3D5C Offset: 0x1CD3D5C VA: 0x1CD3D5C
	public void set_ReceivedCardCount(int value) { }

	[Category("Collection Test")]
	[AsyncStateMachine(typeof(GrandSROptions.<OpenCardReceivedPopup>d__227))]
	// RVA: 0x1CD3D64 Offset: 0x1CD3D64 VA: 0x1CD3D64
	public void OpenCardReceivedPopup() { }

	// RVA: 0x1CD2FA8 Offset: 0x1CD2FA8 VA: 0x1CD2FA8
	private void OpenPack(int[] packIds) { }

	[Category("Game Center Test")]
	[AsyncStateMachine(typeof(GrandSROptions.<GameCenterLogin>d__229))]
	// RVA: 0x1CD3E1C Offset: 0x1CD3E1C VA: 0x1CD3E1C
	public void GameCenterLogin() { }

	[Category("Game Center Test")]
	// RVA: 0x1CD3EB4 Offset: 0x1CD3EB4 VA: 0x1CD3EB4
	public void OpenGameCenterDashboard() { }

	[Category("Magic Pass")]
	// RVA: 0x1CD3F30 Offset: 0x1CD3F30 VA: 0x1CD3F30
	public void ResetMagicPassProgress() { }

	[Category("Magic Pass")]
	// RVA: 0x1CD407C Offset: 0x1CD407C VA: 0x1CD407C
	public void AddMagicPass5Progres() { }

	[Category("Magic Pass")]
	// RVA: 0x1CD410C Offset: 0x1CD410C VA: 0x1CD410C
	public void AddMagicPass10Progress() { }

	[Category("Magic Pass")]
	// RVA: 0x1CD4114 Offset: 0x1CD4114 VA: 0x1CD4114
	public void AddMagicPass20Progress() { }

	// RVA: 0x1CD4084 Offset: 0x1CD4084 VA: 0x1CD4084
	public void AddMagicPassProgress(int progress) { }

	[Category("Magic Pass")]
	// RVA: 0x1CD411C Offset: 0x1CD411C VA: 0x1CD411C
	public void CompleteMagicPassDefaultSteps() { }

	[Category("Magic Pass")]
	// RVA: 0x1CD42FC Offset: 0x1CD42FC VA: 0x1CD42FC
	public void CompleteMagicPassVaultSteps() { }

	// RVA: 0x1CD3FC0 Offset: 0x1CD3FC0 VA: 0x1CD3FC0
	private void UpdateMagicPassLobbyButton() { }

	[Category("Magic Pass")]
	// RVA: 0x1CD4504 Offset: 0x1CD4504 VA: 0x1CD4504
	public void OpenMagicPassVaultPopUp() { }

	[Category("Lobby Events Service")]
	// RVA: 0x1CD4640 Offset: 0x1CD4640 VA: 0x1CD4640
	public void DebugLobbyEvents() { }

	[Category("Team Arena")]
	// RVA: 0x1CD46BC Offset: 0x1CD46BC VA: 0x1CD46BC
	public void IncreaseEventScoreBy1() { }

	[Category("Team Arena")]
	// RVA: 0x1CD47A0 Offset: 0x1CD47A0 VA: 0x1CD47A0
	public void IncreaseEventScoreBy10() { }

	// RVA: 0x1CD4884 Offset: 0x1CD4884 VA: 0x1CD4884
	public string get_GrandABConfigStatus() { }

	// RVA: 0x1CD4958 Offset: 0x1CD4958 VA: 0x1CD4958
	public string get_EffectiveLevelConfigName() { }

	[Category("GrandAB")]
	// RVA: 0x1CD4A0C Offset: 0x1CD4A0C VA: 0x1CD4A0C
	public void DumpGrandABSnapshot() { }

	// RVA: 0x1CD4A98 Offset: 0x1CD4A98 VA: 0x1CD4A98
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]