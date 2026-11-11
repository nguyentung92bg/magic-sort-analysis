public class JetpackRaceBannerView : MonoBehaviour // TypeDefIndex: 4253
{
	// Fields
	[SerializeField]
	private List<JetpackRaceBannerUserView> _userViews; // 0x18
	[SerializeField]
	private List<Transform> _rankPositions; // 0x20
	[SerializeField]
	private JetpackRaceBannerAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private ParticleSystem _userSitParticle; // 0x30
	private Sequence _mainSequence; // 0x38
	private Tween _tween1; // 0x40
	private JetpackRaceService _jetpackRaceService; // 0x48

	// Methods

	// RVA: 0x1C67B10 Offset: 0x1C67B10 VA: 0x1C67B10
	private void Initialize() { }

	// RVA: 0x1C684C0 Offset: 0x1C684C0 VA: 0x1C684C0
	public void Show() { }

	// RVA: 0x1C67E7C Offset: 0x1C67E7C VA: 0x1C67E7C
	public bool ShouldPlayUnseenAnimation(List<JetpackRaceLeaderboardPlayerViewModel> lastSeenModels, List<JetpackRaceLeaderboardPlayerViewModel> currentModels) { }

	// RVA: 0x1C684C4 Offset: 0x1C684C4 VA: 0x1C684C4
	private Sequence AnimateRankChange(JetpackRaceBannerUserView myUserView, int oldRank, int newRank, List<JetpackRaceBannerUserView> userViews) { }

	// RVA: 0x1C68A38 Offset: 0x1C68A38 VA: 0x1C68A38
	private List<JetpackRaceLeaderboardPlayerViewModel> MockCurrent() { }

	// RVA: 0x1C68F4C Offset: 0x1C68F4C VA: 0x1C68F4C
	private List<JetpackRaceLeaderboardPlayerViewModel> MockLastSeen() { }

	[Button]
	// RVA: 0x1C69398 Offset: 0x1C69398 VA: 0x1C69398
	public void ResetToInitialState() { }

	[Button]
	// RVA: 0x1C67FA8 Offset: 0x1C67FA8 VA: 0x1C67FA8
	public void PlayUnseenAnimation() { }

	// RVA: 0x1C69628 Offset: 0x1C69628 VA: 0x1C69628
	public void Hide() { }

	// RVA: 0x1C697BC Offset: 0x1C697BC VA: 0x1C697BC
	private void OnDestroy() { }

	// RVA: 0x1C69658 Offset: 0x1C69658 VA: 0x1C69658
	public void Dispose() { }

	// RVA: 0x1C697C0 Offset: 0x1C697C0 VA: 0x1C697C0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRace.Scripts.UI