public class BoatRushView : MonoBehaviour // TypeDefIndex: 4884
{
	// Fields
	[SerializeField]
	private TMP_Text _titleInfoText; // 0x18
	[SerializeField]
	private List<GameObject> _tiers; // 0x20
	[SerializeField]
	private List<TMP_Text> _stageTexts; // 0x28
	[SerializeField]
	private List<BoatRushUserView> _userViews; // 0x30
	[SerializeField]
	private List<BoatRushProfileView> _profileViews; // 0x38
	[SerializeField]
	private BoatRushProgressBar _boatRushProgressBar; // 0x40
	[SerializeField]
	private BoatRushClaimView _claimView; // 0x48
	[SerializeField]
	private List<Transform> _medalViews; // 0x50
	[SerializeField]
	private List<Transform> _medalViewsFinished; // 0x58
	[SerializeField]
	private List<Transform> _medalViewsFinishedNew; // 0x60
	[SerializeField]
	private List<ToolbarButton> _toolbarButtons; // 0x68
	[SerializeField]
	private BoatRushAnimationConfig _animationConfig; // 0x70
	[SerializeField]
	private List<Transform> _startPositionsTier1; // 0x78
	[SerializeField]
	private List<Transform> _startPositionsTier2; // 0x80
	[SerializeField]
	private List<Transform> _startPositionsTier3; // 0x88
	[SerializeField]
	private Transform _medalPositionXRefTransform; // 0x90
	[SerializeField]
	private Transform _profileStartPositionXRefTransform; // 0x98
	[SerializeField]
	private Transform _userStartPositionXRefTransform; // 0xA0
	[SerializeField]
	private Transform _userEndPositionXRefTransform; // 0xA8
	[SerializeField]
	private ParticleSystem _finishParticle; // 0xB0
	private List<BoatRushLeaderboardPlayerViewModel> _initialViewModels; // 0xB8
	private BoatRushProgressBarViewModel _progressBarViewModel; // 0xC0
	private Sequence _claimSequence; // 0xC8
	private Sequence _claimAppearSequence; // 0xD0
	private BoatRushRaceViewModel _viewModel; // 0xD8
	private List<BoatRushLeaderboardPlayerViewModel> _leaderboardViewModel; // 0xE0

	// Methods

	// RVA: 0x40FC92C Offset: 0x40FC92C VA: 0x40FC92C
	public void Initialize(BoatRushRaceViewModel viewModel, BoatRushProgressBarViewModel progressBarViewModel) { }

	// RVA: 0x40FECA4 Offset: 0x40FECA4 VA: 0x40FECA4
	private void SetToolbars() { }

	// RVA: 0x40FEDA8 Offset: 0x40FEDA8 VA: 0x40FEDA8
	private void ShowMedals() { }

	// RVA: 0x40FF720 Offset: 0x40FF720 VA: 0x40FF720
	private BoatRushLeaderboardPlayerViewModel GetPlayerViewModelByRank(int rank) { }

	// RVA: 0x40FF400 Offset: 0x40FF400 VA: 0x40FF400
	private List<string> GetChangedPlayersIds() { }

	// RVA: 0x40FF5AC Offset: 0x40FF5AC VA: 0x40FF5AC
	private int FindRankIndex(int rank) { }

	// RVA: 0x40FF660 Offset: 0x40FF660 VA: 0x40FF660
	private Vector3 GetMedalPositionByTier(int index) { }

	// RVA: 0x40FF2B0 Offset: 0x40FF2B0 VA: 0x40FF2B0
	private void PrepareProgressBar() { }

	// RVA: 0x40FF2D0 Offset: 0x40FF2D0 VA: 0x40FF2D0
	private void SetCurrentStageText(int tierIndex, int currentStage) { }

	// RVA: 0x40FF360 Offset: 0x40FF360 VA: 0x40FF360
	private void SetTierChest(int tierIndex) { }

	// RVA: 0x40FC908 Offset: 0x40FC908 VA: 0x40FC908
	public void SetInfoText(string text) { }

	// RVA: 0x40FCC94 Offset: 0x40FCC94 VA: 0x40FCC94
	public void ShowFirstRankToolbar() { }

	// RVA: 0x40FCF38 Offset: 0x40FCF38 VA: 0x40FCF38
	public void InstantSetClaimView() { }

	// RVA: 0x40FCBF8 Offset: 0x40FCBF8 VA: 0x40FCBF8
	public void PlayUnseenAnimations() { }

	// RVA: 0x40FF8B8 Offset: 0x40FF8B8 VA: 0x40FF8B8
	private void PlayUnseenAnimationsInternal() { }

	// RVA: 0x40FFC74 Offset: 0x40FFC74 VA: 0x40FFC74
	public Sequence PlayClaimAppearSequence() { }

	[AsyncStateMachine(typeof(BoatRushView.<PlayClaimSequence>d__42))]
	// RVA: 0x40FCD0C Offset: 0x40FCD0C VA: 0x40FCD0C
	public Task PlayClaimSequence() { }

	// RVA: 0x40FEB18 Offset: 0x40FEB18 VA: 0x40FEB18
	private Vector3 GetEndPositionsByTierAndRank(int stage, int rank) { }

	// RVA: 0x40FEA04 Offset: 0x40FEA04 VA: 0x40FEA04
	private Vector3 GetStartPositionsByTierAndRank(int stage, int rank, bool forBoat = False) { }

	// RVA: 0x40FEBE4 Offset: 0x40FEBE4 VA: 0x40FEBE4
	private Vector3 GetProfileViewStartPositionsByTierAndRank(int stage, int rank) { }

	// RVA: 0x40FF88C Offset: 0x40FF88C VA: 0x40FF88C
	private List<Transform> GetStartPositionsByTier(int tierIndex) { }

	// RVA: 0x40FD430 Offset: 0x40FD430 VA: 0x40FD430
	public void Dispose() { }

	// RVA: 0x40FFE08 Offset: 0x40FFE08 VA: 0x40FFE08
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x40FFE10 Offset: 0x40FFE10 VA: 0x40FFE10
	private void <PlayUnseenAnimationsInternal>b__40_0() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.Commands