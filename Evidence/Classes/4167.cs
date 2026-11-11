public class JetpackRaceWithStageBannerView : MonoBehaviour // TypeDefIndex: 4167
{
	// Fields
	[SerializeField]
	private List<JetpackRaceWithStageBannerUserView> _userViews; // 0x18
	[SerializeField]
	private List<Transform> _rankPositions; // 0x20
	[SerializeField]
	private JetpackRaceWithStageBannerAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private ParticleSystem _userSitParticle; // 0x30
	private Sequence _mainSequence; // 0x38
	private Tween _tween1; // 0x40
	private JetpackRaceWithStageService _jetpackRaceWithStageService; // 0x48

	// Methods

	// RVA: 0x3B0B078 Offset: 0x3B0B078 VA: 0x3B0B078
	private void Initialize() { }

	// RVA: 0x3B0BA28 Offset: 0x3B0BA28 VA: 0x3B0BA28
	public void Show() { }

	// RVA: 0x3B0B3E4 Offset: 0x3B0B3E4 VA: 0x3B0B3E4
	public bool ShouldPlayUnseenAnimation(List<JetpackRaceWithStageLeaderboardPlayerViewModel> lastSeenModels, List<JetpackRaceWithStageLeaderboardPlayerViewModel> currentModels) { }

	// RVA: 0x3B0BA2C Offset: 0x3B0BA2C VA: 0x3B0BA2C
	private Sequence AnimateRankChange(JetpackRaceWithStageBannerUserView myUserView, int oldRank, int newRank, List<JetpackRaceWithStageBannerUserView> userViews) { }

	// RVA: 0x3B0BFA0 Offset: 0x3B0BFA0 VA: 0x3B0BFA0
	private List<JetpackRaceWithStageLeaderboardPlayerViewModel> MockCurrent() { }

	// RVA: 0x3B0C4B4 Offset: 0x3B0C4B4 VA: 0x3B0C4B4
	private List<JetpackRaceWithStageLeaderboardPlayerViewModel> MockLastSeen() { }

	[Button]
	// RVA: 0x3B0C900 Offset: 0x3B0C900 VA: 0x3B0C900
	public void ResetToInitialState() { }

	[Button]
	// RVA: 0x3B0B510 Offset: 0x3B0B510 VA: 0x3B0B510
	public void PlayUnseenAnimation() { }

	// RVA: 0x3B0CB90 Offset: 0x3B0CB90 VA: 0x3B0CB90
	public void Hide() { }

	// RVA: 0x3B0CD24 Offset: 0x3B0CD24 VA: 0x3B0CD24
	private void OnDestroy() { }

	// RVA: 0x3B0CBC0 Offset: 0x3B0CBC0 VA: 0x3B0CBC0
	public void Dispose() { }

	// RVA: 0x3B0CD28 Offset: 0x3B0CD28 VA: 0x3B0CD28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI