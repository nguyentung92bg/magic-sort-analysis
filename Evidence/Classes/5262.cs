public class GrandEventSender // TypeDefIndex: 5262
{
	// Fields
	private static GrandEventSender _instance; // 0x0
	private GrandEventSenderRemoteService _grandEventSenderRemoteService; // 0x10
	private GrandScreenShotRemoteService _grandScreenShotRemoteService; // 0x18
	private IPlayerService _playerService; // 0x20
	private SessionTracker _sessionTracker; // 0x28
	private FpsTracker _fpsTracker; // 0x30
	private int _lowMemoryEventCount; // 0x38
	private string _firstInstallAppV; // 0x40
	[CompilerGenerated]
	private LevelStats <LevelStats>k__BackingField; // 0x48
	private InputService _inputService; // 0x50
	private bool _onLowMemoryEventListening; // 0x58
	private FirebaseInitializer _firebaseInitializer; // 0x60
	private IdfaService _idfaService; // 0x68
	private PlayIntegrityManager _playIntegrityManager; // 0x70

	// Properties
	public static GrandEventSender Instance { get; }
	public LevelStats LevelStats { get; set; }

	// Methods

	// RVA: 0x1CC7650 Offset: 0x1CC7650 VA: 0x1CC7650
	public static GrandEventSender get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x1CC7698 Offset: 0x1CC7698 VA: 0x1CC7698
	public LevelStats get_LevelStats() { }

	[CompilerGenerated]
	// RVA: 0x1CC76A0 Offset: 0x1CC76A0 VA: 0x1CC76A0
	public void set_LevelStats(LevelStats value) { }

	// RVA: 0x1CC76A8 Offset: 0x1CC76A8 VA: 0x1CC76A8
	private void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, IPlayerService playerService, FpsTracker fpsTracker, SessionTracker sessionTracker, string firstInstallAppV, FirebaseInitializer firebaseInitializer) { }

	// RVA: 0x1CC7874 Offset: 0x1CC7874 VA: 0x1CC7874
	public static void Initialize(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, IPlayerService playerService, FpsTracker fpsTracker, SessionTracker sessionTracker, string firstInstallAppV, FirebaseInitializer firebaseInitializer) { }

	// RVA: 0x1CC7A5C Offset: 0x1CC7A5C VA: 0x1CC7A5C
	public void SetPlayIntegrityManager(PlayIntegrityManager playIntegrityManager) { }

	// RVA: 0x1CC7A64 Offset: 0x1CC7A64 VA: 0x1CC7A64
	public void SetIdfaService(IdfaService idfaService) { }

	// RVA: 0x1CC7A6C Offset: 0x1CC7A6C VA: 0x1CC7A6C
	public void SetInputService(InputService inputService) { }

	// RVA: 0x1CC7A74 Offset: 0x1CC7A74 VA: 0x1CC7A74
	private void OnLowMemory() { }

	// RVA: 0x1CC7B40 Offset: 0x1CC7B40 VA: 0x1CC7B40
	private void SendEvent(Event eventToSend, string extraParams) { }

	// RVA: 0x1CC7B44 Offset: 0x1CC7B44 VA: 0x1CC7B44
	private void SendScreenShotToServer() { }

	// RVA: 0x1CC7B48 Offset: 0x1CC7B48 VA: 0x1CC7B48
	public void SendApplicationContextInstallerStartedEvent() { }

	// RVA: 0x1CC7BF8 Offset: 0x1CC7BF8 VA: 0x1CC7BF8
	public void SendInstallRuntimeServicesStartedEvent() { }

	// RVA: 0x1CC7CA8 Offset: 0x1CC7CA8 VA: 0x1CC7CA8
	public void SendInstallRuntimeServicesEndEvent() { }

	// RVA: 0x1CC7D58 Offset: 0x1CC7D58 VA: 0x1CC7D58
	public void SendSdkInitStartedEvent() { }

	// RVA: 0x1CC7E08 Offset: 0x1CC7E08 VA: 0x1CC7E08
	public void SendInitFirebaseStartEvent() { }

	// RVA: 0x1CC7EB8 Offset: 0x1CC7EB8 VA: 0x1CC7EB8
	public void SendInitFirebaseEndEvent() { }

	// RVA: 0x1CC7F68 Offset: 0x1CC7F68 VA: 0x1CC7F68
	public void SendInitFirebaseEndWithFailEvent() { }

	// RVA: 0x1CC8018 Offset: 0x1CC8018 VA: 0x1CC8018
	public void SendInitFirebaseEndWithTimeoutEvent() { }

	// RVA: 0x1CC80C8 Offset: 0x1CC80C8 VA: 0x1CC80C8
	public void SendGrandConfigFetchEndEvent() { }

	// RVA: 0x1CC8178 Offset: 0x1CC8178 VA: 0x1CC8178
	public void SendLoginEndEvent() { }

	// RVA: 0x1CC8228 Offset: 0x1CC8228 VA: 0x1CC8228
	public void SendLoginEndWithFailEvent() { }

	// RVA: 0x1CC82D8 Offset: 0x1CC82D8 VA: 0x1CC82D8
	public void SendStartedAdServiceInitialization() { }

	// RVA: 0x1CC8388 Offset: 0x1CC8388 VA: 0x1CC8388
	public void SendEndAdServiceInitialization() { }

	// RVA: 0x1CC8438 Offset: 0x1CC8438 VA: 0x1CC8438
	public void SendSdkInitCompletedEvent() { }

	// RVA: 0x1CC84E8 Offset: 0x1CC84E8 VA: 0x1CC84E8
	public void SendInstallAppContextServicesStartEvent() { }

	// RVA: 0x1CC8598 Offset: 0x1CC8598 VA: 0x1CC8598
	public void SendInstallAppContextServicesEndEvent() { }

	// RVA: 0x1CC8648 Offset: 0x1CC8648 VA: 0x1CC8648
	public void SendSyncAndInitEndEvent() { }

	// RVA: 0x1CC86F8 Offset: 0x1CC86F8 VA: 0x1CC86F8
	public void SendBootstrapApplicationContextStartedEvent() { }

	// RVA: 0x1CC87A8 Offset: 0x1CC87A8 VA: 0x1CC87A8
	public void SendBootstrapApplicationContextEndEvent() { }

	// RVA: 0x1CC8858 Offset: 0x1CC8858 VA: 0x1CC8858
	public void SendApplicationSceneToHomeSceneStartedEvent() { }

	// RVA: 0x1CC8908 Offset: 0x1CC8908 VA: 0x1CC8908
	public void SendInterAdShowStartedEvent() { }

	// RVA: 0x1CC896C Offset: 0x1CC896C VA: 0x1CC896C
	public void SendRewardedAdShowStartedEvent() { }

	// RVA: 0x1CC89D0 Offset: 0x1CC89D0 VA: 0x1CC89D0
	public void SendLevelEvent(LevelState levelState, int progress) { }

	// RVA: 0x1CC8B20 Offset: 0x1CC8B20 VA: 0x1CC8B20
	public void SendTutorialSplitEvent(int i) { }

	// RVA: 0x1CC8BDC Offset: 0x1CC8BDC VA: 0x1CC8BDC
	public void SendLevelEntranceAnimationEndedEvent() { }

	// RVA: 0x1CC8C40 Offset: 0x1CC8C40 VA: 0x1CC8C40
	public void SendAppFocusLostEvent() { }

	// RVA: 0x1CC8EC0 Offset: 0x1CC8EC0 VA: 0x1CC8EC0
	public void SendAppFocusGainEvent() { }

	// RVA: 0x1CC7A90 Offset: 0x1CC7A90 VA: 0x1CC7A90
	public void SendLowMemoryEvent() { }

	// RVA: 0x1CC8F24 Offset: 0x1CC8F24 VA: 0x1CC8F24
	public void SendLevelIsNotLoadedEvent() { }

	// RVA: 0x1CC8F88 Offset: 0x1CC8F88 VA: 0x1CC8F88
	public void SendRefillPopUpOpenedEvent() { }

	// RVA: 0x1CC8FEC Offset: 0x1CC8FEC VA: 0x1CC8FEC
	public void SendReinstalledEvent() { }

	// RVA: 0x1CC909C Offset: 0x1CC909C VA: 0x1CC909C
	public void SendReturnToHomeEvent() { }

	// RVA: 0x1CC9100 Offset: 0x1CC9100 VA: 0x1CC9100
	public void SendReturnToHomeCompletedEvent() { }

	// RVA: 0x1CC9164 Offset: 0x1CC9164 VA: 0x1CC9164
	public void SendQuitFromSettingsClickedEvent() { }

	// RVA: 0x1CC91C8 Offset: 0x1CC91C8 VA: 0x1CC91C8
	public void SendBoosterClickedEvent() { }

	// RVA: 0x1CC922C Offset: 0x1CC922C VA: 0x1CC922C
	public void SendSettingsClickedEvent() { }

	// RVA: 0x1CC9290 Offset: 0x1CC9290 VA: 0x1CC9290
	public void SendNotificationsInitializationStartEvent() { }

	// RVA: 0x1CC9340 Offset: 0x1CC9340 VA: 0x1CC9340
	public void SendNotificationsInitializedEvent() { }

	// RVA: 0x1CC93F0 Offset: 0x1CC93F0 VA: 0x1CC93F0
	public void SendBootstrapHomeContextStartedEvent() { }

	// RVA: 0x1CC94A0 Offset: 0x1CC94A0 VA: 0x1CC94A0
	public void SendUmpTimeOutEvent() { }

	// RVA: 0x1CC9550 Offset: 0x1CC9550 VA: 0x1CC9550
	public void SendUmpInitializationSkipped(string extraMessage) { }

	// RVA: 0x1CC9624 Offset: 0x1CC9624 VA: 0x1CC9624
	public void SendUmpStartEvent() { }

	// RVA: 0x1CC96D4 Offset: 0x1CC96D4 VA: 0x1CC96D4
	public void SendUmpConsentAlreadyGatheredEvent(ConsentStatus consentStatus) { }

	// RVA: 0x1CC97DC Offset: 0x1CC97DC VA: 0x1CC97DC
	public void SendUmpConsentGatheredEvent(ConsentStatus consentStatus) { }

	// RVA: 0x1CC98E4 Offset: 0x1CC98E4 VA: 0x1CC98E4
	public void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x1CC9908 Offset: 0x1CC9908 VA: 0x1CC9908
	public void SendTermsAndConditionsAskedEvent() { }

	// RVA: 0x1CC99B8 Offset: 0x1CC99B8 VA: 0x1CC99B8
	public void SendTermsAndConditionsAcceptedEvent() { }

	// RVA: 0x1CC9A68 Offset: 0x1CC9A68 VA: 0x1CC9A68
	public void SendTermsAndConditionsAlreadyAcceptedEvent() { }

	// RVA: 0x1CC9B18 Offset: 0x1CC9B18 VA: 0x1CC9B18
	public void SendFacebookSdkInitializedEvent() { }

	// RVA: 0x1CC9BC8 Offset: 0x1CC9BC8 VA: 0x1CC9BC8
	public void SendFacebookSdkInitStartEvent() { }

	// RVA: 0x1CC9C78 Offset: 0x1CC9C78 VA: 0x1CC9C78
	public void PlayButtonClickedEvent() { }

	// RVA: 0x1CC9CDC Offset: 0x1CC9CDC VA: 0x1CC9CDC
	public void PlayButtonClickFailEvent() { }

	// RVA: 0x1CC9D40 Offset: 0x1CC9D40 VA: 0x1CC9D40
	public void LevelFirstBottleClickEvent() { }

	// RVA: 0x1CC9DA4 Offset: 0x1CC9DA4 VA: 0x1CC9DA4
	public void LevelFirstMoveEvent() { }

	// RVA: 0x1CC9E08 Offset: 0x1CC9E08 VA: 0x1CC9E08
	public void LevelCongratsEvent() { }

	// RVA: 0x1CC9E6C Offset: 0x1CC9E6C VA: 0x1CC9E6C
	public void LevelWinPopUpOpened() { }

	// RVA: 0x1CC9ED0 Offset: 0x1CC9ED0 VA: 0x1CC9ED0
	public void LevelWinPopUpContinueClicked() { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts
[Serializable]