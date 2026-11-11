public class EventSender : IEventSender // TypeDefIndex: 5260
{
	// Fields
	private static EventSender _instance; // 0x0
	private List<IEventSender> _eventSenders; // 0x10
	private FirebaseEventSender _firebaseEventSender; // 0x18
	private readonly InventoryParametersProvider _grandSDKInventoryProvider; // 0x20

	// Properties
	public static EventSender Instance { get; }

	// Methods

	// RVA: 0x1447A5C Offset: 0x1447A5C VA: 0x1447A5C
	public static EventSender get_Instance() { }

	// RVA: 0x1447AA4 Offset: 0x1447AA4 VA: 0x1447AA4
	private void .ctor(FirebaseInitializer firebaseInitializer) { }

	// RVA: 0x1447C34 Offset: 0x1447C34 VA: 0x1447C34
	public static void Initialize(FirebaseInitializer firebaseInitializer) { }

	// RVA: 0x1447CA8 Offset: 0x1447CA8 VA: 0x1447CA8
	public void SetInventoryService(InventoryService inventoryService) { }

	// RVA: 0x1447DB4 Offset: 0x1447DB4 VA: 0x1447DB4 Slot: 4
	public void SendEvent(Event eventToSend) { }

	// RVA: 0x1447F64 Offset: 0x1447F64 VA: 0x1447F64 Slot: 5
	public void SendEventWithoutExtraParameter(Event eventToSend) { }

	// RVA: 0x1448118 Offset: 0x1448118 VA: 0x1448118
	public void SendVibrationEnabledEvent() { }

	// RVA: 0x1448374 Offset: 0x1448374 VA: 0x1448374
	public void SendVibrationDisabledEvent() { }

	// RVA: 0x14484C4 Offset: 0x14484C4 VA: 0x14484C4
	public void SendSoundEnabledEvent() { }

	// RVA: 0x1448614 Offset: 0x1448614 VA: 0x1448614
	public void SendSoundDisabledEvent() { }

	// RVA: 0x1448764 Offset: 0x1448764 VA: 0x1448764
	public void SendMusicEnabledEvent() { }

	// RVA: 0x14488B4 Offset: 0x14488B4 VA: 0x14488B4
	public void SendMusicDisabledEvent() { }

	// RVA: 0x1448A04 Offset: 0x1448A04 VA: 0x1448A04
	public void SendClientFirstTouchEvent() { }

	// RVA: 0x1448BAC Offset: 0x1448BAC VA: 0x1448BAC
	public void SendClientSessionEvent(int sessionCount) { }

	// RVA: 0x1448DA8 Offset: 0x1448DA8 VA: 0x1448DA8
	public void SendGrandABConfigSnapshotEvent(GrandABService grandABService) { }

	// RVA: 0x1448EF8 Offset: 0x1448EF8 VA: 0x1448EF8
	public void SendSettingsImpressionEvent() { }

	// RVA: 0x1449048 Offset: 0x1449048 VA: 0x1449048
	public void SendFirebaseConfigNotFetchedEvent() { }

	// RVA: 0x144914C Offset: 0x144914C VA: 0x144914C
	public void SendNotificationsEnabledEvent() { }

	// RVA: 0x144929C Offset: 0x144929C VA: 0x144929C
	public void SendNotificationsDisabledEvent() { }

	// RVA: 0x14493EC Offset: 0x14493EC VA: 0x14493EC
	public void SendFacebookConnectedEvent() { }

	// RVA: 0x144953C Offset: 0x144953C VA: 0x144953C
	public void SendFacebookDisconnectedEvent() { }

	// RVA: 0x144968C Offset: 0x144968C VA: 0x144968C
	public void SendAppleConnectedEvent() { }

	// RVA: 0x14497DC Offset: 0x14497DC VA: 0x14497DC
	public void SendAppleDisconnectedEvent() { }

	// RVA: 0x144992C Offset: 0x144992C VA: 0x144992C
	public void SendLoginCompletedEvent() { }

	// RVA: 0x1449C7C Offset: 0x1449C7C VA: 0x1449C7C
	public void SendNameChangedEvent(string previousName, string newName) { }

	// RVA: 0x1449E40 Offset: 0x1449E40 VA: 0x1449E40
	public void SendReturnToHomeEvent() { }

	// RVA: 0x1449F90 Offset: 0x1449F90 VA: 0x1449F90
	public void SendAppKillEvent() { }

	// RVA: 0x144A0E0 Offset: 0x144A0E0 VA: 0x144A0E0
	public void SendDefaultBackendConfigEvent() { }

	// RVA: 0x144A19C Offset: 0x144A19C VA: 0x144A19C
	public void SendDefaultBackendDailyConfigEvent() { }

	// RVA: 0x144A258 Offset: 0x144A258 VA: 0x144A258
	public void SendRefillPopUpOpenedEvent() { }

	// RVA: 0x144A508 Offset: 0x144A508 VA: 0x144A508
	public void SendRefillPurchasedEvent() { }

	// RVA: 0x144A718 Offset: 0x144A718 VA: 0x144A718
	public void SendShopOpenedEvent(StorePopUpSource storePopUpSource) { }

	// RVA: 0x144A864 Offset: 0x144A864 VA: 0x144A864
	public void SendShopClosedEvent(StorePopUpSource storePopUpSource) { }

	// RVA: 0x144A9B0 Offset: 0x144A9B0 VA: 0x144A9B0
	public void SendEarnedEvent(CurrencyEarnReason currencyEarnReason, List<RewardModel> rewardModels) { }

	// RVA: 0x144B398 Offset: 0x144B398 VA: 0x144B398
	public void SendCoinSpentEvent(CurrencySpendReason currencySpendReason, int amount) { }

	// RVA: 0x144B6B4 Offset: 0x144B6B4 VA: 0x144B6B4
	public void SendInAppPurchaseEvent(string productId, string productType, int productRank, string currency, Decimal price, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context, string webProductId, bool fromWeb = False) { }

	// RVA: 0x144BE90 Offset: 0x144BE90 VA: 0x144BE90
	public void SendInAppPurchaseEventD14(string productId, string productType, int productRank, string currency, Decimal price, IAPOrigin iapOrigin, IAPReason iapReason, bool fromWeb = False) { }

	// RVA: 0x144C2E4 Offset: 0x144C2E4 VA: 0x144C2E4
	public void SendPurchaseFailedEvent(string productId, string productType, int productRank, string currency, Decimal price, string reason, IAPReason iapReason) { }

	// RVA: 0x144C650 Offset: 0x144C650 VA: 0x144C650
	public void SendPurchaseNotVerifiedEvent(string productId) { }

	// RVA: 0x144C744 Offset: 0x144C744 VA: 0x144C744
	public void SendPurchaseUnableToVerifyEvent(string productId) { }

	// RVA: 0x144C838 Offset: 0x144C838 VA: 0x144C838
	public void SendIAPVerificationVerifiedEvent(VerificationCacheModel productId, bool isDryRun, int verificationStatus) { }

	// RVA: 0x144CAA8 Offset: 0x144CAA8 VA: 0x144CAA8
	public void SendIAPVerificationNotVerifiedEvent(VerificationCacheModel productId, bool isDryRun, int verificationStatus) { }

	// RVA: 0x144CD18 Offset: 0x144CD18 VA: 0x144CD18
	public void SendIAPVerificationDryRunEvent(VerificationCacheModel verification, IAPModel iapModel) { }

	// RVA: 0x144D054 Offset: 0x144D054 VA: 0x144D054
	public void SendIAPVerificationUnableToVerifyEvent(VerificationCacheModel verification, bool isDryRun, int statusCode) { }

	// RVA: 0x144D2C4 Offset: 0x144D2C4 VA: 0x144D2C4
	public void SendIAPVerificationTokenMissingEvent(string productId, bool isDryRun, string transactionId) { }

	// RVA: 0x144D488 Offset: 0x144D488 VA: 0x144D488
	public void SendIAPVerificationReachedMaxAttemptEvent(VerificationCacheModel verification, bool isDryRun, int statusCode, int attemptCount) { }

	// RVA: 0x144D73C Offset: 0x144D73C VA: 0x144D73C
	public void SendIAPVerificationHealthEvent(int statusCode) { }

	// RVA: 0x144D860 Offset: 0x144D860 VA: 0x144D860
	public void SendIAPVerificationResponseEmptyBody() { }

	// RVA: 0x144D91C Offset: 0x144D91C VA: 0x144D91C
	public void SendBoosterUsedEvent(CurrencyType currencyType) { }

	// RVA: 0x144DD88 Offset: 0x144DD88 VA: 0x144DD88
	public void SendBoosterPurchasedEvent(CurrencyType currencyType, int price) { }

	// RVA: 0x144E414 Offset: 0x144E414 VA: 0x144E414
	public void SendLevelEvent(LevelState levelState) { }

	// RVA: 0x144EC38 Offset: 0x144EC38 VA: 0x144EC38
	private string GetLiveOpsStats() { }

	// RVA: 0x144F0B8 Offset: 0x144F0B8 VA: 0x144F0B8
	public void SendTutorialSplitEvent(int splitIndex) { }

	// RVA: 0x144F1DC Offset: 0x144F1DC VA: 0x144F1DC
	public void SendDailyLevelEvent(LevelState levelState, StuckType stuckType) { }

	// RVA: 0x144F8CC Offset: 0x144F8CC VA: 0x144F8CC
	public void SendDailyProgressBarFill(DateTime month, int completedDaysInMonth) { }

	// RVA: 0x144FC38 Offset: 0x144FC38 VA: 0x144FC38
	public void SendDailyChallengeMonthCompleted(DateTime month) { }

	// RVA: 0x144FF5C Offset: 0x144FF5C VA: 0x144FF5C
	public void SendDailyChallengeScreenViewEvent(DailyScreenViewSource dailyScreenViewSource) { }

	// RVA: 0x1450238 Offset: 0x1450238 VA: 0x1450238
	public void SendDailyRewardedWatched(DailyLevelInfo dailyLevelInfo) { }

	// RVA: 0x14504D4 Offset: 0x14504D4 VA: 0x14504D4
	public void SendStreakTournamentJoinedEvent() { }

	// RVA: 0x14508DC Offset: 0x14508DC VA: 0x14508DC
	public void SendStreakLeaderBoardImpressionStat(MagicStreakTournamentPopupImpressionSource impressionSource) { }

	// RVA: 0x14512EC Offset: 0x14512EC VA: 0x14512EC
	public void SendStreakTournamentFinishedStat() { }

	// RVA: 0x1451A60 Offset: 0x1451A60 VA: 0x1451A60
	public void SendStreakTournamentProgressClaimStat() { }

	// RVA: 0x145228C Offset: 0x145228C VA: 0x145228C
	public void SendStreakTournamentHatCollectedEvent(string levelId) { }

	// RVA: 0x145274C Offset: 0x145274C VA: 0x145274C
	public void SendMagicStreakInfoImpression() { }

	// RVA: 0x1451038 Offset: 0x1451038 VA: 0x1451038
	private Dictionary<string, object> GetStreakStats() { }

	// RVA: 0x1448268 Offset: 0x1448268 VA: 0x1448268
	private GameStateType GetGameState() { }

	// RVA: 0x1452808 Offset: 0x1452808 VA: 0x1452808
	public void SendUserCmp(MaxSdkBase.AdInfo adInfo, int loadedAdRank, AdRequestSource adRequestSource, AdProviderType provider = 0) { }

	// RVA: 0x1452F8C Offset: 0x1452F8C VA: 0x1452F8C
	public void SendAdImpression(MaxSdkBase.AdInfo adInfo, AdRequestSource adRequestSource, int adRank, AdProviderType provider = 0) { }

	// RVA: 0x1453718 Offset: 0x1453718 VA: 0x1453718
	public void SendAdImpressionD14(MaxSdkBase.AdInfo adInfo, AdRequestSource adRequestSource, int adRank, AdProviderType provider = 0) { }

	// RVA: 0x1453EA4 Offset: 0x1453EA4 VA: 0x1453EA4
	public void SendAdRevenue(MaxSdkBase.AdInfo adInfo, AdRequestSource adRequestSource, AdProviderType provider = 0) { }

	// RVA: 0x14545DC Offset: 0x14545DC VA: 0x14545DC
	public void SendAdShowStartedEvent(MaxSdkBase.AdInfo adInfo, AdRequestSource adRequestSource, AdProviderType provider = 0) { }

	// RVA: 0x1454E3C Offset: 0x1454E3C VA: 0x1454E3C
	public void SendAdClickedEvent(MaxSdkBase.AdInfo adInfo, AdRequestSource adRequestSource, AdProviderType provider = 0) { }

	// RVA: 0x145569C Offset: 0x145569C VA: 0x145569C
	public void SendAdShownEvent(MaxSdkBase.AdInfo adInfo, AdRequestSource adRequestSource, AdProviderType provider = 0) { }

	// RVA: 0x1455EFC Offset: 0x1455EFC VA: 0x1455EFC
	public void SendAdShowFailEvent(MaxSdkBase.AdInfo adInfo, AdRequestSource adRequestSource, AdProviderType provider = 0) { }

	// RVA: 0x145663C Offset: 0x145663C VA: 0x145663C
	public void SendAdReviewCreativeIdEvent(MaxSdkBase.AdInfo adInfo, string adReviewCreativeId, AdRequestSource adRequestSource, AdProviderType providerType = 0) { }

	// RVA: 0x1456DAC Offset: 0x1456DAC VA: 0x1456DAC
	public void SendWeeklyTournamentJoinedEvent() { }

	// RVA: 0x1457294 Offset: 0x1457294 VA: 0x1457294
	public void SendWeeklyTournamentClaimedEvent(int visualRank) { }

	// RVA: 0x1457730 Offset: 0x1457730 VA: 0x1457730
	public void SendWeeklyTournamentFinishedEvent(int remoteScore, string remoteTournamentId) { }

	// RVA: 0x14579E8 Offset: 0x14579E8 VA: 0x14579E8
	public void SendTowerWinStreakStarted() { }

	// RVA: 0x1457E08 Offset: 0x1457E08 VA: 0x1457E08
	public void SendBroomStreakStarted() { }

	// RVA: 0x1458258 Offset: 0x1458258 VA: 0x1458258
	public void SendTowerWinStreakImpression(TowerWinStreakSource towerWinStreakSource) { }

	// RVA: 0x14586CC Offset: 0x14586CC VA: 0x14586CC
	public void SendBroomStreakImpression(BroomStreakSource broomStreakSource) { }

	// RVA: 0x1458B88 Offset: 0x1458B88 VA: 0x1458B88
	public void SendTowerWinStreakInfoImpression() { }

	// RVA: 0x1458EB4 Offset: 0x1458EB4 VA: 0x1458EB4
	public void SendBroomStreakInfoImpression() { }

	// RVA: 0x1459230 Offset: 0x1459230 VA: 0x1459230
	public void SendTowerWinStreakFinished() { }

	// RVA: 0x1459694 Offset: 0x1459694 VA: 0x1459694
	public void SendBroomStreakFinished() { }

	// RVA: 0x1459B40 Offset: 0x1459B40 VA: 0x1459B40
	public void SendTowerWinStreakWon() { }

	// RVA: 0x1459FA4 Offset: 0x1459FA4 VA: 0x1459FA4
	public void SendBroomStreakWon() { }

	// RVA: 0x145A450 Offset: 0x145A450 VA: 0x145A450
	public void SendTowerWinStreakClaimReward(string rewardsAsString) { }

	// RVA: 0x145A888 Offset: 0x145A888 VA: 0x145A888
	public void SendBroomStreakClaimReward(string rewardsAsString, int rewardIndex) { }

	// RVA: 0x145AD50 Offset: 0x145AD50 VA: 0x145AD50
	public void SendWeeklyTournamentClaimOnDataCorruptedEvent() { }

	// RVA: 0x145AE0C Offset: 0x145AE0C VA: 0x145AE0C
	public void SendJetpackRaceJoinedEvent() { }

	// RVA: 0x145B1B0 Offset: 0x145B1B0 VA: 0x145B1B0
	public void SendJetpackRaceImpression(JetpackRaceImpressionSource jetpackRaceImpressionSource) { }

	// RVA: 0x145B624 Offset: 0x145B624 VA: 0x145B624
	public void SendJetpackRaceInfoImpression() { }

	// RVA: 0x145BA10 Offset: 0x145BA10 VA: 0x145BA10
	public void SendJetpackRaceLost() { }

	// RVA: 0x145BE74 Offset: 0x145BE74 VA: 0x145BE74
	public void SendJetpackRaceWon() { }

	// RVA: 0x145C334 Offset: 0x145C334 VA: 0x145C334
	public void SendJetpackRaceWithStageJoinedEvent() { }

	// RVA: 0x145C848 Offset: 0x145C848 VA: 0x145C848
	public void SendJetpackRaceWithStageImpression(JetpackRaceWithStageImpressionSource jetpackRaceImpressionSource) { }

	// RVA: 0x145CDB0 Offset: 0x145CDB0 VA: 0x145CDB0
	public void SendJetpackRaceWithStageInfoImpression() { }

	// RVA: 0x145D298 Offset: 0x145D298 VA: 0x145D298
	public void SendJetpackRaceWithStageLost() { }

	// RVA: 0x145D7F8 Offset: 0x145D7F8 VA: 0x145D7F8
	public void SendJetpackRaceWithStageWon() { }

	// RVA: 0x145DDB0 Offset: 0x145DDB0 VA: 0x145DDB0
	public void SendSkyJumpJoinedEvent() { }

	// RVA: 0x145E1B8 Offset: 0x145E1B8 VA: 0x145E1B8
	public void SendSkyJumpImpression(SkyJumpImpressionSource impressionSource) { }

	// RVA: 0x145E648 Offset: 0x145E648 VA: 0x145E648
	public void SendSkyJumpJoinImpression(SkyJumpImpressionSource impressionSource) { }

	// RVA: 0x145EAE0 Offset: 0x145EAE0 VA: 0x145EAE0
	public void SendSkyJumpWaitImpression() { }

	// RVA: 0x145EE8C Offset: 0x145EE8C VA: 0x145EE8C
	public void SendSkyJumpInfoImpression() { }

	// RVA: 0x145F294 Offset: 0x145F294 VA: 0x145F294
	public void SendSkyJumpLost() { }

	// RVA: 0x145F69C Offset: 0x145F69C VA: 0x145F69C
	public void SendSkyJumpWon() { }

	// RVA: 0x145FB58 Offset: 0x145FB58 VA: 0x145FB58
	public void SendSkyJumpWithStageJoinedEvent() { }

	// RVA: 0x145FFC4 Offset: 0x145FFC4 VA: 0x145FFC4
	public void SendSkyJumpWithStageImpression(SkyJumpWithStageImpressionSource impressionSource) { }

	// RVA: 0x14604B8 Offset: 0x14604B8 VA: 0x14604B8
	public void SendSkyJumpWithStageJoinImpression(SkyJumpWithStageImpressionSource impressionSource) { }

	// RVA: 0x14609B0 Offset: 0x14609B0 VA: 0x14609B0
	public void SendSkyJumpWithStageWaitImpression() { }

	// RVA: 0x1460DC4 Offset: 0x1460DC4 VA: 0x1460DC4
	public void SendSkyJumpWithStageInfoImpression() { }

	// RVA: 0x1461230 Offset: 0x1461230 VA: 0x1461230
	public void SendSkyJumpWithStageWon() { }

	// RVA: 0x1461750 Offset: 0x1461750 VA: 0x1461750
	public void SendSkyJumpWithStageLost() { }

	// RVA: 0x1461B58 Offset: 0x1461B58 VA: 0x1461B58
	public void SendEndlessPortalStartedStat() { }

	// RVA: 0x1461FB4 Offset: 0x1461FB4 VA: 0x1461FB4
	public void SendEndlessPortalPopupImpressionStat(EndlessPortalPopupImpressionSource impressionSource) { }

	// RVA: 0x14624A4 Offset: 0x14624A4 VA: 0x14624A4
	public void SendEndlessPortalClaimStat() { }

	// RVA: 0x1463048 Offset: 0x1463048 VA: 0x1463048
	public void SendEndlessPortalClaimedWithFallback(string productId) { }

	// RVA: 0x1462B5C Offset: 0x1462B5C VA: 0x1462B5C
	private static void AddRewardAmount(List<RewardModel> rewardModels, Event eventToSend) { }

	// RVA: 0x14632F0 Offset: 0x14632F0 VA: 0x14632F0
	public void SendEndlessPortalPurchaseStat(IAPModel iapModel) { }

	// RVA: 0x1463B3C Offset: 0x1463B3C VA: 0x1463B3C
	public void SendLevelDurationEvent(int finishStatus, LevelEndType levelEndType, long levelStartTimeStamp, long levelEndTimeStamp, float averageMoveDuration, float firstMoveDuration) { }

	// RVA: 0x1463F34 Offset: 0x1463F34 VA: 0x1463F34
	public void SendSpecialOfferPopupImpressionStat(SpecialOfferPopupImpressionSource impressionSource) { }

	// RVA: 0x14648E0 Offset: 0x14648E0 VA: 0x14648E0
	public void SendSpecialOfferPurchasedStat(IAPModel iapModel) { }

	// RVA: 0x14653F8 Offset: 0x14653F8 VA: 0x14653F8
	public void SendSpecialOfferFallBackRewardsStat() { }

	// RVA: 0x14654B4 Offset: 0x14654B4 VA: 0x14654B4
	public void SendNotRequestedIAPStat(string productId) { }

	// RVA: 0x14655A8 Offset: 0x14655A8 VA: 0x14655A8
	public void SendWrongSpecialOfferDataStat() { }

	// RVA: 0x1465664 Offset: 0x1465664 VA: 0x1465664
	public void SendMagicBottlePopUpImpression(MagicBottlePopUpImpressionSource impressionSource) { }

	// RVA: 0x1465A34 Offset: 0x1465A34 VA: 0x1465A34
	public void SendMagicBottleInfoPopUpImpression(MagicBottleInfoPopUpImpressionSource impressionSource) { }

	// RVA: 0x1465E04 Offset: 0x1465E04 VA: 0x1465E04
	public void SendMagicBottleClaim() { }

	// RVA: 0x14660EC Offset: 0x14660EC VA: 0x14660EC
	public void SendMagicBottleLost() { }

	// RVA: 0x14663D4 Offset: 0x14663D4 VA: 0x14663D4
	public void SendWelcomeBackClaimStat(string welcomeBackId, List<RewardModel> rewardModels) { }

	// RVA: 0x1466834 Offset: 0x1466834 VA: 0x1466834
	public void SendPawTouchOfferContainerImpressionStat(PawTouchOfferPackage offerPackage) { }

	// RVA: 0x14670DC Offset: 0x14670DC VA: 0x14670DC
	public void SendPawTouchOfferContainerFirstImpressionStat(PawTouchOfferPackage offerPackage) { }

	// RVA: 0x1467984 Offset: 0x1467984 VA: 0x1467984
	public void SendPawTouchOfferPurchasedStat(PawTouchOfferPackage offerPackage) { }

	// RVA: 0x14681D8 Offset: 0x14681D8 VA: 0x14681D8
	public void SendPawTouchOfferFallBackRewardsStat() { }

	// RVA: 0x1468294 Offset: 0x1468294 VA: 0x1468294
	public void SendCompensationClaimStat(string compensationId, List<RewardModel> rewardModels, bool isSuperChargerCompensation) { }

	// RVA: 0x1468758 Offset: 0x1468758 VA: 0x1468758
	public void SendTimeSpentInOperationStat(string operationName, double timeSpentInSeconds) { }

	// RVA: 0x14688B4 Offset: 0x14688B4 VA: 0x14688B4
	public void SendNetworkInfoStat(ValueTuple<List<string>, int, int> networkInfo) { }

	// RVA: 0x1468B3C Offset: 0x1468B3C VA: 0x1468B3C
	public void SendNewBlockerIntroducedStat(int blockerId) { }

	// RVA: 0x1468C60 Offset: 0x1468C60 VA: 0x1468C60
	public void SendBatteryInfoStat(BatteryStatus batteryStatus, float batterLevel) { }

	// RVA: 0x1468E14 Offset: 0x1468E14 VA: 0x1468E14
	public void SendJourneyPosterSelected(string oldPosterId, string selectedPosterId) { }

	// RVA: 0x146900C Offset: 0x146900C VA: 0x146900C
	public void SendJourneyRewardGiven(int level, string currentPosterId, List<RewardModel> rewards) { }

	// RVA: 0x14694B4 Offset: 0x14694B4 VA: 0x14694B4
	public void SendJourneyOpened() { }

	// RVA: 0x14696FC Offset: 0x14696FC VA: 0x14696FC
	public void SendLeaguePosterSelected(int source) { }

	// RVA: 0x146998C Offset: 0x146998C VA: 0x146998C
	public void SendJourneyPosterUnlocked(int level, string unlockedPosterId) { }

	// RVA: 0x1469AE8 Offset: 0x1469AE8 VA: 0x1469AE8
	public void SendApplicationSceneToHomeSceneStartedEvent() { }

	// RVA: 0x1469BA4 Offset: 0x1469BA4 VA: 0x1469BA4
	public void SendBoostrapApplicationContextStartedEvent() { }

	// RVA: 0x1469C60 Offset: 0x1469C60 VA: 0x1469C60
	public void SendAdServiceInitializedEvent() { }

	// RVA: 0x1469D1C Offset: 0x1469D1C VA: 0x1469D1C
	public void SendNotificationsInitializedEvent() { }

	// RVA: 0x1469DD8 Offset: 0x1469DD8 VA: 0x1469DD8
	public void SendMagicStreakGaeStartedEvent() { }

	// RVA: 0x146A080 Offset: 0x146A080 VA: 0x146A080
	public void SendMagicStreakGaePopupImpressionEvent() { }

	// RVA: 0x146A47C Offset: 0x146A47C VA: 0x146A47C
	public void SendMagicStreakGaeInfoImpressionEvent() { }

	// RVA: 0x146A724 Offset: 0x146A724 VA: 0x146A724
	public void SendMagicStreakGaeHatCollectedEvent(string levelId) { }

	// RVA: 0x146AD78 Offset: 0x146AD78 VA: 0x146AD78
	public void SendMagicStreakGaeRewardCompletedEvent(int totalCompletedStepCount, string rewardAsString) { }

	// RVA: 0x146B4E8 Offset: 0x146B4E8 VA: 0x146B4E8
	public void SendMagicStreakGaeFinishedEvent() { }

	// RVA: 0x146B998 Offset: 0x146B998 VA: 0x146B998
	public void SendMagicStreakGaeCompletedEvent() { }

	// RVA: 0x146BE50 Offset: 0x146BE50 VA: 0x146BE50
	public void SendJourneyPosterTimeTracking(Dictionary<string, string> posterData) { }

	// RVA: 0x146C0A0 Offset: 0x146C0A0 VA: 0x146C0A0
	public void SendChampionsLeagueStartEvent() { }

	// RVA: 0x146C3E0 Offset: 0x146C3E0 VA: 0x146C3E0
	public void SendChampionsLeaguePreJoinPopUpImpression() { }

	// RVA: 0x146C784 Offset: 0x146C784 VA: 0x146C784
	public void SendChampionsLeagueJoined() { }

	// RVA: 0x146CD44 Offset: 0x146CD44 VA: 0x146CD44
	public void SendChampionsLeagueLeaderboardImpression() { }

	// RVA: 0x146D1A0 Offset: 0x146D1A0 VA: 0x146D1A0
	public void SendChampionsLeagueFinished(string tournamentId, int elo, int rank, int score, int promotionInfo) { }

	// RVA: 0x146D5CC Offset: 0x146D5CC VA: 0x146D5CC
	public void SendMagicLabStartedEvent() { }

	// RVA: 0x146DA08 Offset: 0x146DA08 VA: 0x146DA08
	public void SendMagicLabInfoImpressionEvent() { }

	// RVA: 0x146DDCC Offset: 0x146DDCC VA: 0x146DDCC
	public void SendMagicLabTaskCompleted(int currentStageId, int stageIdOfCompletedTask, MagicLabTaskType taskType) { }

	// RVA: 0x146E378 Offset: 0x146E378 VA: 0x146E378
	public void SendMagicLabStageCompleted(int stageId) { }

	// RVA: 0x146E7FC Offset: 0x146E7FC VA: 0x146E7FC
	public void SendMagicLabStageClaimedEvent(int stageId) { }

	// RVA: 0x146EC08 Offset: 0x146EC08 VA: 0x146EC08
	public void SendMagicLabCompletedEvent() { }

	// RVA: 0x146EFD0 Offset: 0x146EFD0 VA: 0x146EFD0
	public void SendMagicLabFinishedEvent() { }

	// RVA: 0x146F3F8 Offset: 0x146F3F8 VA: 0x146F3F8
	public void SendNoAdsOfferImpressionStat() { }

	// RVA: 0x146F6C8 Offset: 0x146F6C8 VA: 0x146F6C8
	public void SendNoAdsOfferPurchasedStat(IAPModel iapModel) { }

	// RVA: 0x146FC08 Offset: 0x146FC08 VA: 0x146FC08
	public void SendAdjustAttributionEvent(AdjustAttributionModel adjustAttributionModel, string adid) { }

	// RVA: 0x146FF24 Offset: 0x146FF24 VA: 0x146FF24
	public void SendChooseOnePopUpImpressionEvent(ChooseOneSpecialOfferPopupImpressionSource impressionSource) { }

	// RVA: 0x1470154 Offset: 0x1470154 VA: 0x1470154
	public void SendChooseOnePurchasedEvent(IAPModel iapModel, int packageId, IAPConfigModel iapConfigModel) { }

	// RVA: 0x14705B8 Offset: 0x14705B8 VA: 0x14705B8
	public void SendWrongChooseOneSpecialOfferDataStat() { }

	// RVA: 0x1470674 Offset: 0x1470674 VA: 0x1470674
	private static OnePlusFreeOfferService GetOnePlusFreeOfferService() { }

	// RVA: 0x14706E4 Offset: 0x14706E4 VA: 0x14706E4
	public void SendOnePlusFreeImpressionEvent(bool isFirstTime) { }

	// RVA: 0x14708B8 Offset: 0x14708B8 VA: 0x14708B8
	public void SendOnePlusFreePurchasedEvent(IAPModel iapModel, IAPConfigModel iapConfigModel) { }

	// RVA: 0x1470C40 Offset: 0x1470C40 VA: 0x1470C40
	public void SendOnePlusFreeIapClaimedEvent(OnePlusFreeOfferPopupImpressionSource source) { }

	// RVA: 0x1470DFC Offset: 0x1470DFC VA: 0x1470DFC
	public void SendOnePlusFreeFreeItemClaimedEvent(OnePlusFreeOfferPopupImpressionSource source) { }

	// RVA: 0x1470FB8 Offset: 0x1470FB8 VA: 0x1470FB8
	public void SendOnePlusFreePurchaseFailedEvent(string cancelReason, string productId, IAPOrigin iapOrigin) { }

	// RVA: 0x147121C Offset: 0x147121C VA: 0x147121C
	public void SendWrongOnePlusFreeOfferDataStat() { }

	// RVA: 0x14712D8 Offset: 0x14712D8 VA: 0x14712D8
	public void SendDailyRewardStartedEvent() { }

	// RVA: 0x14716C4 Offset: 0x14716C4 VA: 0x14716C4
	public void SendDailyRewardPopupImpressionEvent(DailyRewardPopUpImpressionSource source) { }

	// RVA: 0x1471A6C Offset: 0x1471A6C VA: 0x1471A6C
	public void SendDailyRewardClaimedEvent(RewardModel claimedReward, DailyRewardPopUpImpressionSource source) { }

	// RVA: 0x1471F6C Offset: 0x1471F6C VA: 0x1471F6C
	public void SendAppFocusLostEvent() { }

	// RVA: 0x1472028 Offset: 0x1472028 VA: 0x1472028
	public void SendBootstrapHomeContextStartedEvent() { }

	// RVA: 0x1472334 Offset: 0x1472334 VA: 0x1472334
	public void SendSdkInitCompletedEvent() { }

	// RVA: 0x14723F0 Offset: 0x14723F0 VA: 0x14723F0
	public void SendForceNamePopupImpressionEvent() { }

	// RVA: 0x14726C0 Offset: 0x14726C0 VA: 0x14726C0
	public void SendForceNameChangedEvent(string oldName, string newName) { }

	// RVA: 0x1472B1C Offset: 0x1472B1C VA: 0x1472B1C
	public void SendForceProfileImageChangedEvent(string name, string profilePicture) { }

	// RVA: 0x1472F78 Offset: 0x1472F78 VA: 0x1472F78
	public void SendTermsAndConditionsAskedEvent() { }

	// RVA: 0x1473034 Offset: 0x1473034 VA: 0x1473034
	public void SendTermsAndConditionsAcceptedEvent() { }

	// RVA: 0x14730F0 Offset: 0x14730F0 VA: 0x14730F0
	public void SendUmpTimeOutEvent() { }

	// RVA: 0x14731AC Offset: 0x14731AC VA: 0x14731AC
	public void SendUmpInitializationSkipped(string getConsentInfoAsStr) { }

	// RVA: 0x14732D4 Offset: 0x14732D4 VA: 0x14732D4
	public void SendUmpConsentGatheredEvent(ConsentStatus consentStatus) { }

	// RVA: 0x1473420 Offset: 0x1473420 VA: 0x1473420
	public void SendUmpConsentAlreadyGatheredEvent(ConsentStatus consentStatus) { }

	// RVA: 0x147356C Offset: 0x147356C VA: 0x147356C
	public void SendUmpStartEvent() { }

	// RVA: 0x1473628 Offset: 0x1473628 VA: 0x1473628
	public void SendIdfaRequestStartEvent() { }

	// RVA: 0x14736E4 Offset: 0x14736E4 VA: 0x14736E4
	public void SendIdfaRequestEndEvent() { }

	// RVA: 0x14737A0 Offset: 0x14737A0 VA: 0x14737A0
	public void SendStartedAdServiceInitialization(AdProviderType provider) { }

	// RVA: 0x14738EC Offset: 0x14738EC VA: 0x14738EC
	public void SendEndAdServiceInitialization(AdProviderType provider) { }

	// RVA: 0x1473A38 Offset: 0x1473A38 VA: 0x1473A38
	public void SendPersistentSeedLoadFailedEvent(string fileName) { }

	// RVA: 0x1473B2C Offset: 0x1473B2C VA: 0x1473B2C
	public void SendPersistentSeedParseFailedEvent(string fileName) { }

	// RVA: 0x1473C20 Offset: 0x1473C20 VA: 0x1473C20
	public void SendWatchAndWinPopupImpressionEvent(WatchAndWinPopupImpressionSource impressionSource) { }

	// RVA: 0x1473D78 Offset: 0x1473D78 VA: 0x1473D78
	public void SendWatchAndWinAdImpressionEvent(int adId) { }

	// RVA: 0x1473F34 Offset: 0x1473F34 VA: 0x1473F34
	public void SendSnitchPopUpImpression(SnitchJoinPopUpImpressionSource impressionSource) { }

	// RVA: 0x14742A8 Offset: 0x14742A8 VA: 0x14742A8
	public void SendSnitchInfoPopUpImpression(SnitchInfoPopUpImpressionSource impressionSource) { }

	// RVA: 0x147461C Offset: 0x147461C VA: 0x147461C
	public void SendSnitchActivationPopUpImpression() { }

	// RVA: 0x1474904 Offset: 0x1474904 VA: 0x1474904
	public void SendSnitchClaim() { }

	// RVA: 0x1474B50 Offset: 0x1474B50 VA: 0x1474B50
	public void SendSnitchLost() { }

	// RVA: 0x1474D9C Offset: 0x1474D9C VA: 0x1474D9C
	public void SendTeamCreated() { }

	// RVA: 0x1475104 Offset: 0x1475104 VA: 0x1475104
	public void SendTeamChanged() { }

	// RVA: 0x147546C Offset: 0x147546C VA: 0x147546C
	public void SendTeamLeft() { }

	// RVA: 0x14757D4 Offset: 0x14757D4 VA: 0x14757D4
	public void SendTeamMemberKicked() { }

	// RVA: 0x1475B3C Offset: 0x1475B3C VA: 0x1475B3C
	public void SendTeamHelpRequested() { }

	// RVA: 0x1475E0C Offset: 0x1475E0C VA: 0x1475E0C
	public void SendTeamHelpMade() { }

	// RVA: 0x14760DC Offset: 0x14760DC VA: 0x14760DC
	public void SendTeamsUnlocked() { }

	// RVA: 0x14763AC Offset: 0x14763AC VA: 0x14763AC
	public void SendUserJoinedTeams() { }

	// RVA: 0x147667C Offset: 0x147667C VA: 0x147667C
	public void SendUserJoinedTeam() { }

	// RVA: 0x14769E4 Offset: 0x14769E4 VA: 0x14769E4
	public void SendUserTeamInfo() { }

	// RVA: 0x1476D4C Offset: 0x1476D4C VA: 0x1476D4C
	public void SendTeamsMessageSent(int messageType) { }

	// RVA: 0x1477064 Offset: 0x1477064 VA: 0x1477064
	public void SendClickedFreeLivesButton() { }

	// RVA: 0x14773F4 Offset: 0x14773F4 VA: 0x14773F4
	public void SendFreeLivesPopupOpened() { }

	// RVA: 0x1477784 Offset: 0x1477784 VA: 0x1477784
	public void SendFreeLifeClaimedEvent() { }

	// RVA: 0x1477B14 Offset: 0x1477B14 VA: 0x1477B14
	public void SendUserProfileOpened(int source) { }

	// RVA: 0x1477E2C Offset: 0x1477E2C VA: 0x1477E2C
	public void SendCardRequested() { }

	// RVA: 0x1478218 Offset: 0x1478218 VA: 0x1478218
	public void SendCardSent() { }

	// RVA: 0x1478604 Offset: 0x1478604 VA: 0x1478604
	public void SendCollectionStarted() { }

	// RVA: 0x1478A40 Offset: 0x1478A40 VA: 0x1478A40
	public void SendCollectionPageImpression() { }

	// RVA: 0x1478F38 Offset: 0x1478F38 VA: 0x1478F38
	public void SendCollectionThemeCompleted(CollectionThemeData themeData) { }

	// RVA: 0x1479408 Offset: 0x1479408 VA: 0x1479408
	public void SendCollectionCompleted() { }

	// RVA: 0x14798A0 Offset: 0x14798A0 VA: 0x14798A0
	public void SendStarChestOpened(int openedPackId) { }

	// RVA: 0x1479D88 Offset: 0x1479D88 VA: 0x1479D88
	public void SendTokenSelected(string tokenId) { }

	// RVA: 0x147A198 Offset: 0x147A198 VA: 0x147A198
	public void SendCardReceived(int cardCount, int packType, CurrencyEarnReason source) { }

	// RVA: 0x147A818 Offset: 0x147A818 VA: 0x147A818
	public void SendCardSent(CurrencyEarnReason source) { }

	// RVA: 0x147AD9C Offset: 0x147AD9C VA: 0x147AD9C
	public void SendTreasureDrillPurchasedStat() { }

	// RVA: 0x147B100 Offset: 0x147B100 VA: 0x147B100
	public void SendTreasureDrillImpressionEvent() { }

	// RVA: 0x147B374 Offset: 0x147B374 VA: 0x147B374
	public void SendTreasureDrillTaskCompletedStat(int taskId) { }

	// RVA: 0x147B588 Offset: 0x147B588 VA: 0x147B588
	public void SendTreasureDrillStartedStat() { }

	// RVA: 0x147B84C Offset: 0x147B84C VA: 0x147B84C
	public void SendTreasureDrillFinishedStat() { }

	// RVA: 0x147BAC0 Offset: 0x147BAC0 VA: 0x147BAC0
	public void SendTreasureDrillPurchasedFallback() { }

	// RVA: 0x147BB7C Offset: 0x147BB7C VA: 0x147BB7C
	public void SendMagicPassStarted() { }

	// RVA: 0x147BFBC Offset: 0x147BFBC VA: 0x147BFBC
	public void SendMagicPassPopUpImpression(MagicPassPopUpImpressionSource impressionSource) { }

	// RVA: 0x147C764 Offset: 0x147C764 VA: 0x147C764
	public void SendMagicPassInfoPopUpImpression(MagicPassInfoPopUpImpressionSource impressionSource) { }

	// RVA: 0x147CF0C Offset: 0x147CF0C VA: 0x147CF0C
	public void SendMagicPassPurchasePopUpImpression(MagicPassActivationSource impressionSource) { }

	// RVA: 0x147D6B4 Offset: 0x147D6B4 VA: 0x147D6B4
	public void SendMagicPassPurchasedEvent(MagicPassActivationSource source) { }

	// RVA: 0x147DE5C Offset: 0x147DE5C VA: 0x147DE5C
	public void SendMagicPassStepRewardClaimed(int step, bool isFree, RewardModel rewardModel) { }

	// RVA: 0x147E7F0 Offset: 0x147E7F0 VA: 0x147E7F0
	public void SendMagicPassStepCompleted(int step) { }

	// RVA: 0x147ED44 Offset: 0x147ED44 VA: 0x147ED44
	public void SendMagicPassVaultActivated() { }

	// RVA: 0x147F1FC Offset: 0x147F1FC VA: 0x147F1FC
	public void SendMagicPassVaultCompleted() { }

	// RVA: 0x147F6B4 Offset: 0x147F6B4 VA: 0x147F6B4
	public void SendMagicPassFinished() { }

	// RVA: 0x147FD60 Offset: 0x147FD60 VA: 0x147FD60
	public void SendMagicPassTeamsGiftClaimed() { }

	// RVA: 0x14800C8 Offset: 0x14800C8 VA: 0x14800C8
	public void SendMagicPassPurchasedFallback() { }

	// RVA: 0x1480184 Offset: 0x1480184 VA: 0x1480184
	public void SendFrameSelected(string frameId) { }

	// RVA: 0x148052C Offset: 0x148052C VA: 0x148052C
	public void SendNameStyleSelected(string nameStyleId) { }

	// RVA: 0x14808D4 Offset: 0x14808D4 VA: 0x14808D4
	public void SendDuckFestivalPopUpImpression(DuckFestivalPopUpImpressionSource impressionSource) { }

	// RVA: 0x1480BA8 Offset: 0x1480BA8 VA: 0x1480BA8
	public void SendDuckFestivalInfoImpression(DuckFestivalPopUpImpressionSource impressionSource) { }

	// RVA: 0x1480E14 Offset: 0x1480E14 VA: 0x1480E14
	public void SendDuckFestivalStagePopUpImpression() { }

	// RVA: 0x1481030 Offset: 0x1481030 VA: 0x1481030
	public void SendDuckCollected(int collectedDuckAmount) { }

	// RVA: 0x1481444 Offset: 0x1481444 VA: 0x1481444
	public void SendDuckFestivalJoined() { }

	// RVA: 0x1481B1C Offset: 0x1481B1C VA: 0x1481B1C
	public void SendDuckFestivalLeaderboardImpression(DuckFestivalPopUpImpressionSource impressionSource) { }

	// RVA: 0x1482398 Offset: 0x1482398 VA: 0x1482398
	public void SendDuckFestivalStageCompleted(RewardModel rewardModel) { }

	// RVA: 0x1482840 Offset: 0x1482840 VA: 0x1482840
	public void SendWheelOfFortuneStarted() { }

	// RVA: 0x1482B58 Offset: 0x1482B58 VA: 0x1482B58
	public void SendWheelOfFortuneImpression(WheelOfFortunePopUpImpressionSource source) { }

	// RVA: 0x14830BC Offset: 0x14830BC VA: 0x14830BC
	public void SendWheelOfFortuneSpinned(int stageIndex, int spinResultIndex) { }

	// RVA: 0x14835E8 Offset: 0x14835E8 VA: 0x14835E8
	public void SendWheelOfFortuneWheelUnlockedEvent(int stageIndex) { }

	// RVA: 0x14839FC Offset: 0x14839FC VA: 0x14839FC
	public void SendWheelOfFortuneFinished() { }

	// RVA: 0x1483F48 Offset: 0x1483F48 VA: 0x1483F48
	public void SendWheelOfFortuneTaskSelected(int taskId, int taskType, int requiredAmount) { }

	// RVA: 0x1484454 Offset: 0x1484454 VA: 0x1484454
	public void SendWheelOfFortuneTaskClaimed(int taskId, int taskType, int requiredAmount) { }

	// RVA: 0x1484960 Offset: 0x1484960 VA: 0x1484960
	public void SendWheelOfFortuneTaskFinished(int taskId, int taskType, int requiredAmount) { }

	// RVA: 0x1484E6C Offset: 0x1484E6C VA: 0x1484E6C
	public void SendDuckFestivalFinished(DuckFestivalFinishEventParameters parameters) { }

	// RVA: 0x14854B4 Offset: 0x14854B4 VA: 0x14854B4
	public void SendPlayOnWithRewardedEvent(string source, List<PlayOnBehaviourType> playOnBehaviours) { }

	// RVA: 0x1485954 Offset: 0x1485954 VA: 0x1485954
	public void SendAddedTinyBottleInPlayOnEvent() { }

	// RVA: 0x1485D18 Offset: 0x1485D18 VA: 0x1485D18
	public void SendTeamArenaStarted() { }

	// RVA: 0x14861A8 Offset: 0x14861A8 VA: 0x14861A8
	public void SendTeamArenaJoinPopupSeen(bool showForced) { }

	// RVA: 0x1486704 Offset: 0x1486704 VA: 0x1486704
	public void SendTeamArenaEventPopupSeen(int directory) { }

	// RVA: 0x1486C3C Offset: 0x1486C3C VA: 0x1486C3C
	public void SendTeamArenaInfoPopupSeen(bool showForced) { }

	// RVA: 0x1487198 Offset: 0x1487198 VA: 0x1487198
	public void SendTeamArenaJoined() { }

	// RVA: 0x1487628 Offset: 0x1487628 VA: 0x1487628
	public void SendTeamArenaStepCompleted(int stepIndex) { }

	// RVA: 0x1487AA0 Offset: 0x1487AA0 VA: 0x1487AA0
	public void SendTeamArenaFinished(long previousElo, long currentElo, int teamRank, RewardModel teamReward, int rank, RewardModel contributionReward) { }

	// RVA: 0x1488394 Offset: 0x1488394 VA: 0x1488394
	public void SendMiniGameStarted() { }

	// RVA: 0x1488780 Offset: 0x1488780 VA: 0x1488780
	public void SendMiniGamePopUpImpression(MiniGamePopUpImpressionSource source) { }

	// RVA: 0x1488CB8 Offset: 0x1488CB8 VA: 0x1488CB8
	public void SendMiniGameInfoPopUpImpression(MiniGameInfoPopUpImpressionSource source) { }

	// RVA: 0x1489188 Offset: 0x1489188 VA: 0x1489188
	public void SendMiniGameStepCompletedEvent(int completedStep, RewardModel rewardModel, int usedTridentCount) { }

	// RVA: 0x1489928 Offset: 0x1489928 VA: 0x1489928
	public void SendMiniGameFinished() { }

	// RVA: 0x1489E7C Offset: 0x1489E7C VA: 0x1489E7C
	public void SendMiniGameOfferImpressionEvent() { }

	// RVA: 0x148A3D0 Offset: 0x148A3D0 VA: 0x148A3D0
	public void SendMiniGameOfferPurchasedStat() { }

	// RVA: 0x148A924 Offset: 0x148A924 VA: 0x148A924
	public void SendMiniGamePurchasedFallback() { }

	// RVA: 0x148A9E0 Offset: 0x148A9E0 VA: 0x148A9E0
	public void SendTeamQuestStarted() { }

	// RVA: 0x148ADD0 Offset: 0x148ADD0 VA: 0x148ADD0
	public void SendTeamQuestPopUpImpression(TeamQuestPopUpImpressionSource impressionSource) { }

	// RVA: 0x148B424 Offset: 0x148B424 VA: 0x148B424
	public void SendTeamQuestJoinPopUpImpression(TeamQuestPopUpImpressionSource impressionSource) { }

	// RVA: 0x148BA1C Offset: 0x148BA1C VA: 0x148BA1C
	public void SendTeamQuestInfoPopUpImpression(TeamQuestInfoPopupImpressionSource impressionSource) { }

	// RVA: 0x148BE94 Offset: 0x148BE94 VA: 0x148BE94
	public void SendTeamQuestRewardClaimed(int step, RewardModel rewardModel) { }

	// RVA: 0x148C520 Offset: 0x148C520 VA: 0x148C520
	public void SendTeamQuestJoined() { }

	// RVA: 0x148C910 Offset: 0x148C910 VA: 0x148C910
	public void SendTeamQuestFinished() { }

	// RVA: 0x148CD60 Offset: 0x148CD60 VA: 0x148CD60
	public void SendLevelReachTimeEvent(int levelIndex, DateTime firstOpenTime) { }

	// RVA: 0x148D19C Offset: 0x148D19C VA: 0x148D19C
	public void SendRevenueEvent(double value, string currencyCode = "USD") { }

	// RVA: 0x148D2F8 Offset: 0x148D2F8 VA: 0x148D2F8
	public void SendFriendsInteractionEvent(string interactionType, string targetUserId, string source) { }

	// RVA: 0x148D6B8 Offset: 0x148D6B8 VA: 0x148D6B8
	public void SendFriendsImpressionEvent() { }

	// RVA: 0x148DA2C Offset: 0x148DA2C VA: 0x148DA2C
	public void SendShareDialogueOpenedEvent(string source) { }

	// RVA: 0x148DD70 Offset: 0x148DD70 VA: 0x148DD70
	public void SendShareDialogueOpenedEvent() { }

	// RVA: 0x148E0BC Offset: 0x148E0BC VA: 0x148E0BC
	public void SendFriendInvitePopupImpression() { }

	// RVA: 0x148E258 Offset: 0x148E258 VA: 0x148E258
	public void SendReferralMilestoneReachedEvent(string referrerId) { }

	// RVA: 0x148E4D8 Offset: 0x148E4D8 VA: 0x148E4D8
	public void SendReferralRegisteredEvent(string referrerId) { }

	// RVA: 0x148E758 Offset: 0x148E758 VA: 0x148E758
	public void SendFirebaseConfigFaultedEvent() { }

	// RVA: 0x148E814 Offset: 0x148E814 VA: 0x148E814
	public void SendLeaderboardFaultedEvent() { }

	// RVA: 0x148E8D0 Offset: 0x148E8D0 VA: 0x148E8D0
	public void SendBoatRushRacePopUpImpression(BoatRushPopUpImpressionSource source) { }

	// RVA: 0x148EE74 Offset: 0x148EE74 VA: 0x148EE74
	public void SendBoatRushJoinPopUpImpression(BoatRushJoinPopUpImpressionSource source) { }

	// RVA: 0x148F3B4 Offset: 0x148F3B4 VA: 0x148F3B4
	public void SendBoatRushTutorialPopUpImpression(BoatRushInfoPopUpImpressionReason impressionReason, BoatRushInfoPopUpImpressionSource impressionSource) { }

	// RVA: 0x148F970 Offset: 0x148F970 VA: 0x148F970
	public void SendBoatRushJoinedEvent(BoatRushJoinPopUpImpressionSource source) { }

	// RVA: 0x148FEB0 Offset: 0x148FEB0 VA: 0x148FEB0
	public void SendBoatRushWonEvent(string leaderboardId) { }

	// RVA: 0x149039C Offset: 0x149039C VA: 0x149039C
	public void SendBoatRushLostEvent(BoatRushLostReason reason, string leaderboardId) { }

	// RVA: 0x1490920 Offset: 0x1490920 VA: 0x1490920
	public void SendMergeMiniGameJoinEvent() { }

	// RVA: 0x1490CA0 Offset: 0x1490CA0 VA: 0x1490CA0
	public void SendMergeMiniGameNewItemFoundEvent(string foundedItemId) { }

	// RVA: 0x14910A8 Offset: 0x14910A8 VA: 0x14910A8
	public void SendMergeMiniGameEventScreenCloseEvent() { }

	// RVA: 0x1491600 Offset: 0x1491600 VA: 0x1491600
	public void SendMergeMiniGameEventScreenOpenEvent(MergeMiniGamePopUpImpressionSource source) { }

	// RVA: 0x1491BDC Offset: 0x1491BDC VA: 0x1491BDC
	public void SendMergeEventFinishedEvent() { }

	// RVA: 0x1492194 Offset: 0x1492194 VA: 0x1492194
	public void SendMergeMiniGameGeneratorItemFinishedEvent(string generatorItemId) { }

	// RVA: 0x14925B8 Offset: 0x14925B8 VA: 0x14925B8
	public void SendMergeMiniGameSpendEnergyEvent(int multiplier) { }

	// RVA: 0x1492A3C Offset: 0x1492A3C VA: 0x1492A3C
	public void SendWebShopOfferPopupImpressionEvent(IAPConfigModel configModel, WebShopProduct webShopProduct) { }

	// RVA: 0x1492DD4 Offset: 0x1492DD4 VA: 0x1492DD4
	public void SendWebShopOfferSelectedEvent(IAPConfigModel configModel, WebShopProduct webShopProduct) { }

	// RVA: 0x1492F00 Offset: 0x1492F00 VA: 0x1492F00
	public void SendRedirectedToTheWebShopEvent(WebShopTransactionDataModel transaction) { }

	// RVA: 0x1493344 Offset: 0x1493344 VA: 0x1493344
	public void SendWebOfferAppliedEvent(WebShopTransactionDataModel transaction) { }

	// RVA: 0x1493788 Offset: 0x1493788 VA: 0x1493788
	public void SendWebOfferClaimedEvent(WebShopTransactionDataModel transaction) { }

	// RVA: 0x1493BF8 Offset: 0x1493BF8 VA: 0x1493BF8
	public void SendWebPurchaseEvent(string productId, string webProductId, string transactionId, float price) { }

	// RVA: 0x1493F8C Offset: 0x1493F8C VA: 0x1493F8C
	public void SendWebShopOfferTransactionStatus(WebShopTransactionDataModel transaction, string transactionStatus) { }

	// RVA: 0x1494280 Offset: 0x1494280 VA: 0x1494280
	public void SendWebShopOfferTransactionStatusFailed(WebShopTransactionDataModel transaction, string transactionStatus, int statusCode) { }

	// RVA: 0x14945B8 Offset: 0x14945B8 VA: 0x14945B8
	public void SendWebShopClaimablePurchaseFetchStarted() { }

	// RVA: 0x1494674 Offset: 0x1494674 VA: 0x1494674
	public void SendWebShopClaimablePurchaseCountEvent(int count) { }

	// RVA: 0x1494798 Offset: 0x1494798 VA: 0x1494798
	public void SendRestorePurchaseButtonSelectedEvent(string source) { }

	// RVA: 0x149488C Offset: 0x149488C VA: 0x149488C
	public void SendPurchaseButtonSelected(string productId, IAPOrigin iapOrigin, IAPReason iapReason, IAPContext context) { }

	// RVA: 0x1494D78 Offset: 0x1494D78 VA: 0x1494D78
	public void SendWebShopPromptResultEvent(WebShopPromptResultType result, string productId) { }

	// RVA: 0x14951A0 Offset: 0x14951A0 VA: 0x14951A0
	public void SendWebShopPurchaseFailedClosedEvent() { }

	// RVA: 0x14954EC Offset: 0x14954EC VA: 0x14954EC
	public void SendWebShopFlowChangedEvent(WebShopState newState, WebShopFlowChangeReason reason) { }

	// RVA: 0x1495B10 Offset: 0x1495B10 VA: 0x1495B10
	public void SendSuperChargerActivationPopUpImpression() { }

	// RVA: 0x1495DF8 Offset: 0x1495DF8 VA: 0x1495DF8
	public void SendSuperChargerJoinPopUpImpression(SuperChargerJoinPopupReason reason) { }

	// RVA: 0x1496294 Offset: 0x1496294 VA: 0x1496294
	public void SendSuperChargerUsed(SuperChargerUseEventDTO dto) { }

	// RVA: 0x14969B8 Offset: 0x14969B8 VA: 0x14969B8
	public void SendSuperChargerTutorialSeen() { }

	// RVA: 0x1496E50 Offset: 0x1496E50 VA: 0x1496E50
	public void SendSuperChargerStatus(SuperChargerStatusEventDTO dto, bool onAppLaunch = False, bool didWin = False) { }

	// RVA: 0x14976D4 Offset: 0x14976D4 VA: 0x14976D4
	public void SendInvalidConfigEvent(string configName) { }

	// RVA: 0x14977C8 Offset: 0x14977C8 VA: 0x14977C8
	public void SendGameEconomyFetchedFromBackendEvent(int configType, long lastSeenHierarchy, long remoteHierarchy) { }

	// RVA: 0x1497998 Offset: 0x1497998 VA: 0x1497998
	public void SendPlayOnStatus(LevelState state) { }

	// RVA: 0x1497F58 Offset: 0x1497F58 VA: 0x1497F58
	public void SendWindQuestFetched() { }

	// RVA: 0x14987C4 Offset: 0x14987C4 VA: 0x14987C4
	public void SendWindQuestJoined() { }

	// RVA: 0x1498B4C Offset: 0x1498B4C VA: 0x1498B4C
	public void SendWindQuestPopupImpression(WindQuestPopupImpressionSource impressionSource) { }

	// RVA: 0x14990F4 Offset: 0x14990F4 VA: 0x14990F4
	public void SendWindQuestFinished(bool isAutoClaim, bool isCompleted) { }

	// RVA: 0x1499624 Offset: 0x1499624 VA: 0x1499624
	public void SendWindQuestClaimed(int goalIndex) { }

	// RVA: 0x1498364 Offset: 0x1498364 VA: 0x1498364
	private static void AddWindQuestCommonData(Event eventToSend) { }

	// RVA: 0x1499BB8 Offset: 0x1499BB8 VA: 0x1499BB8
	public void SendStrikeShowReceived() { }

	// RVA: 0x149A398 Offset: 0x149A398 VA: 0x149A398
	public void SendStrikeShowPreJoin() { }

	// RVA: 0x149A6B4 Offset: 0x149A6B4 VA: 0x149A6B4
	public void SendStrikeShowJoined() { }

	// RVA: 0x149B120 Offset: 0x149B120 VA: 0x149B120
	public void SendStrikeShowImpression() { }

	// RVA: 0x149B58C Offset: 0x149B58C VA: 0x149B58C
	public void SendStrikeShowTutorialImpression(string source) { }

	// RVA: 0x149BA28 Offset: 0x149BA28 VA: 0x149BA28
	public void SendStrikeShowFinished() { }

	// RVA: 0x149BFB0 Offset: 0x149BFB0 VA: 0x149BFB0
	public void SendStrikeShowBallCollected(int ballCollected, int totalScore) { }

	// RVA: 0x1499ED4 Offset: 0x1499ED4 VA: 0x1499ED4
	private static void AddStrikeShowPreJoinData(Event eventToSend) { }

	// RVA: 0x149AB20 Offset: 0x149AB20 VA: 0x149AB20
	private static void AddStrikeShowCommonData(Event eventToSend) { }

	// RVA: 0x149A2A8 Offset: 0x149A2A8 VA: 0x149A2A8
	private static string GetStrikeShowCurrentLeague(StrikeShowDataService strikeShowDataService) { }

	// RVA: 0x149C588 Offset: 0x149C588 VA: 0x149C588
	public void SendTikTokSdkInitializationStartEvent() { }

	// RVA: 0x149C644 Offset: 0x149C644 VA: 0x149C644
	public void SendTikTokSdkInitializationEndEvent(bool success) { }

	// RVA: 0x149C774 Offset: 0x149C774 VA: 0x149C774
	public void SendDeviceIdMigrationEvent(string playerModelAppleDeviceTransformID) { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts