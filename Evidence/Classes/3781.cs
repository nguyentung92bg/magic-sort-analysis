public class MagicStreakTournamentHatCollectableView : MonoBehaviour // TypeDefIndex: 3781
{
	// Fields
	[SerializeField]
	private MagicStreakTournamentBannerAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private SpriteRenderer[] _collectables; // 0x20
	[SerializeField]
	private Transform _initialTransform; // 0x28
	[SerializeField]
	private Transform[] _pathTransforms; // 0x30
	[SerializeField]
	private Transform _lobbyIconTransform; // 0x38
	[SerializeField]
	private ParticleSystem _onCurrencyArrivedParticleSystem; // 0x40
	private Vector3[] _pathPoints; // 0x48
	private Vector3 _lobbyIconInitialScale; // 0x50
	private Sequence _lobbyIconScaleSequence; // 0x60
	private Sequence _hatMoveSequence; // 0x68

	// Methods

	// RVA: 0x3E11AB0 Offset: 0x3E11AB0 VA: 0x3E11AB0
	private void Start() { }

	// RVA: 0x3E11AE0 Offset: 0x3E11AE0 VA: 0x3E11AE0
	private void CachePathPoints() { }

	[Button]
	// RVA: 0x3E11BC4 Offset: 0x3E11BC4 VA: 0x3E11BC4
	public Tween PlayHatAnimation(int getEarnedHats) { }

	// RVA: 0x3E11D84 Offset: 0x3E11D84 VA: 0x3E11D84
	private Sequence GetHatMoveSequence(SpriteRenderer collectable) { }

	// RVA: 0x3E12050 Offset: 0x3E12050 VA: 0x3E12050
	private void LobbyIconAnimation() { }

	// RVA: 0x3E12134 Offset: 0x3E12134 VA: 0x3E12134
	private void OnDestroy() { }

	// RVA: 0x3E12170 Offset: 0x3E12170 VA: 0x3E12170
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3E12178 Offset: 0x3E12178 VA: 0x3E12178
	private void <PlayHatAnimation>b__12_0() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI.LobbyButton
[CreateAssetMenu(fileName = "MagicStreakTournamentLobbyButtonAnimationConfig", menuName = "Configs/MagicStreakTournamentLobbyButtonAnimationConfig", order = 1)]