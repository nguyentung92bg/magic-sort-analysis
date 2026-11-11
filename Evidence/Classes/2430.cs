public class SuperChargerService : IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 2430
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private SuperChargerDataService _dataService; // 0x18
	private IPlayerService _playerService; // 0x20
	private static readonly HashSet<SuperChargerType> EligibleSuperChargerTypes; // 0x0
	private static readonly HashSet<SuperChargerType> SuperChargerTypesWithInGameUI; // 0x8

	// Methods

	// RVA: 0x296FE3C Offset: 0x296FE3C VA: 0x296FE3C
	public void .ctor(RemoteConfigs remoteConfigs, SuperChargerDataService dataService, IPlayerService playerService) { }

	// RVA: 0x296FE9C Offset: 0x296FE9C VA: 0x296FE9C Slot: 4
	public void Initialize() { }

	// RVA: 0x296FEA0 Offset: 0x296FEA0 VA: 0x296FEA0 Slot: 6
	public void InitializeData() { }

	// RVA: 0x296FEA4 Offset: 0x296FEA4 VA: 0x296FEA4
	public bool IsActive() { }

	// RVA: 0x2970070 Offset: 0x2970070 VA: 0x2970070
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x2970074 Offset: 0x2970074 VA: 0x2970074
	public void MarkInfoPopUpAsIntroduced() { }

	// RVA: 0x29700A4 Offset: 0x29700A4 VA: 0x29700A4
	public bool IsInfoPopUpIntroduced() { }

	// RVA: 0x29700C8 Offset: 0x29700C8 VA: 0x29700C8
	public bool ShouldShowInLevelActivationPopup() { }

	// RVA: 0x2970134 Offset: 0x2970134 VA: 0x2970134
	public bool HasActivatedSuperCharger() { }

	// RVA: 0x2970174 Offset: 0x2970174 VA: 0x2970174
	public void MarkInLevelActivationPopUpAsIntroduced() { }

	// RVA: 0x29701A0 Offset: 0x29701A0 VA: 0x29701A0
	public void TryMarkActivationIntroducedWithoutPopup() { }

	// RVA: 0x29701D0 Offset: 0x29701D0 VA: 0x29701D0
	public bool ShouldAutoOpenPopUp() { }

	// RVA: 0x2970220 Offset: 0x2970220 VA: 0x2970220
	public void MarkEventShownInLifeTime() { }

	// RVA: 0x2970250 Offset: 0x2970250 VA: 0x2970250
	public void MarkJoinPopUpShown() { }

	// RVA: 0x297027C Offset: 0x297027C VA: 0x297027C
	public void TryIncreaseProgress() { }

	// RVA: 0x2970344 Offset: 0x2970344 VA: 0x2970344
	public void CompleteSuperChargerTargetProgress() { }

	// RVA: 0x29703E8 Offset: 0x29703E8 VA: 0x29703E8
	public int GetClampedProgress() { }

	// RVA: 0x2970030 Offset: 0x2970030 VA: 0x2970030
	public int GetProgress() { }

	// RVA: 0x2970054 Offset: 0x2970054 VA: 0x2970054
	public int GetTargetLevelProgress() { }

	// RVA: 0x296FEF4 Offset: 0x296FEF4 VA: 0x296FEF4
	public bool IsEligible() { }

	// RVA: 0x29704D4 Offset: 0x29704D4 VA: 0x29704D4
	public SuperChargerConfigModel GetConfig() { }

	// RVA: 0x29704F8 Offset: 0x29704F8 VA: 0x29704F8
	public void TryResetProgress(bool onAppLaunch = False) { }

	// RVA: 0x2970118 Offset: 0x2970118 VA: 0x2970118
	public SuperChargerType GetSuperChargerType() { }

	// RVA: 0x2970624 Offset: 0x2970624 VA: 0x2970624
	public bool HasInGameUI() { }

	// RVA: 0x29706D0 Offset: 0x29706D0 VA: 0x29706D0
	public bool ShouldShowInLevelView() { }

	// RVA: 0x297071C Offset: 0x297071C VA: 0x297071C Slot: 5
	public void Dispose() { }

	// RVA: 0x29707C4 Offset: 0x29707C4 VA: 0x29707C4
	public SuperChargerJoinPopupReason GetJoinPopupShowReason() { }

	// RVA: 0x2970820 Offset: 0x2970820 VA: 0x2970820
	public bool ShouldShowChargerTutorial(bool onLevelStart) { }

	// RVA: 0x2970A28 Offset: 0x2970A28 VA: 0x2970A28
	public void IncreaseTutorialShowCount() { }

	// RVA: 0x2970B54 Offset: 0x2970B54 VA: 0x2970B54
	public int GetTutorialSeenCount() { }

	// RVA: 0x2970C00 Offset: 0x2970C00 VA: 0x2970C00
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts.UI
[Serializable]