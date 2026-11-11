public class LevelWinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 1069
{
	// Fields
	[SerializeField]
	private MagicStreakTournamentBannerView _magicStreakTournamentBannerView; // 0x18
	[FormerlySerializedAs("_magicStreakGaeLevelWinBannerView")]
	[SerializeField]
	private MagicStreakGaeBannerView _magicStreakGaeBannerView; // 0x20
	[SerializeField]
	private TowerWinStreakBannerView _towerWinStreakBannerView; // 0x28
	[SerializeField]
	private BroomStreakBannerView _broomStreakBannerView; // 0x30
	[SerializeField]
	private JetpackRaceBannerView _jetpackRaceBannerView; // 0x38
	[SerializeField]
	private JetpackRaceWithStageBannerView _jetpackRaceWithStageBannerView; // 0x40
	[SerializeField]
	private BoatRushBannerView _boatRushBannerView; // 0x48
	[SerializeField]
	private LevelWinContinueOrQuitButton _continueButton; // 0x50
	[SerializeField]
	private LevelWinPopUpView _levelWinPopUpViewWithout2x; // 0x58
	[SerializeField]
	private LevelWinPopUpView _levelWinPopUpViewWith2x; // 0x60
	private LevelWinPopUpView _levelWinPopUpView; // 0x68
	private LevelWinPopUpArguments _levelWinPopUpArguments; // 0x70
	private bool _isHardLevel; // 0x78
	private bool _isSuperHardLevel; // 0x79

	// Properties
	private bool IsDaily { get; }

	// Methods

	// RVA: 0x16EF250 Offset: 0x16EF250 VA: 0x16EF250
	private bool get_IsDaily() { }

	// RVA: 0x16EF27C Offset: 0x16EF27C VA: 0x16EF27C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x16EF884 Offset: 0x16EF884 VA: 0x16EF884
	private bool ShouldShow2XRewarded() { }

	// RVA: 0x16EFDD0 Offset: 0x16EFDD0 VA: 0x16EFDD0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x16EFE74 Offset: 0x16EFE74 VA: 0x16EFE74 Slot: 6
	public Task Hide() { }

	// RVA: 0x16EFF58 Offset: 0x16EFF58 VA: 0x16EFF58 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x16EFF60 Offset: 0x16EFF60 VA: 0x16EFF60
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts