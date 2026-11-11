public class BoatRushBannerView : MonoBehaviour // TypeDefIndex: 4854
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private List<BoatRushBannerUserView> _userViews; // 0x20
	[SerializeField]
	private List<Transform> _rankPositions; // 0x28
	[SerializeField]
	private BoatRushBannerAnimationConfig _animationConfig; // 0x30
	[SerializeField]
	private ParticleSystem _userSitParticle; // 0x38
	private Sequence _mainSequence; // 0x40
	private Tween _tween1; // 0x48
	private BoatRushService _boatRushService; // 0x50

	// Methods

	// RVA: 0x40F69AC Offset: 0x40F69AC VA: 0x40F69AC
	private void Initialize() { }

	// RVA: 0x40F7380 Offset: 0x40F7380 VA: 0x40F7380
	public void Show() { }

	// RVA: 0x40F6D3C Offset: 0x40F6D3C VA: 0x40F6D3C
	public bool ShouldPlayUnseenAnimation(List<BoatRushLeaderboardPlayerViewModel> lastSeenModels, List<BoatRushLeaderboardPlayerViewModel> currentModels) { }

	// RVA: 0x40F7384 Offset: 0x40F7384 VA: 0x40F7384
	private Sequence AnimateRankChange(BoatRushBannerUserView myUserView, int oldRank, int newRank, List<BoatRushBannerUserView> userViews) { }

	[Button]
	// RVA: 0x40F6E68 Offset: 0x40F6E68 VA: 0x40F6E68
	public void PlayUnseenAnimation() { }

	// RVA: 0x40F78F8 Offset: 0x40F78F8 VA: 0x40F78F8
	public void Hide() { }

	// RVA: 0x40F7A8C Offset: 0x40F7A8C VA: 0x40F7A8C
	private void OnDestroy() { }

	// RVA: 0x40F7928 Offset: 0x40F7928 VA: 0x40F7928
	public void Dispose() { }

	// RVA: 0x40F7A90 Offset: 0x40F7A90 VA: 0x40F7A90
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI