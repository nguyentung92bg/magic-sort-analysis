public class LobbyIconCollectibleAnimation : MonoBehaviour // TypeDefIndex: 2028
{
	// Fields
	[SerializeField]
	private Transform _lobbyButtonTransform; // 0x18
	[SerializeField]
	private LobbyIconCollectibleAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private ParticleSystem _onCurrencyArrivedParticleSystem; // 0x28
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x30
	[SerializeField]
	private Transform[] _pathTransforms; // 0x38
	[SerializeField]
	private Vector3[] _pathPoints; // 0x40
	[SerializeField]
	private Vector3 _lobbyIconInitialScale; // 0x48

	// Methods

	// RVA: 0x32E4EC0 Offset: 0x32E4EC0 VA: 0x32E4EC0
	private void Awake() { }

	[Button]
	// RVA: 0x32E4F1C Offset: 0x32E4F1C VA: 0x32E4F1C
	private void CachePathPoints() { }

	[Button]
	// RVA: 0x32E5000 Offset: 0x32E5000 VA: 0x32E5000
	public Sequence PlayAnimation(bool playHaptic = False) { }

	// RVA: 0x32E53AC Offset: 0x32E53AC VA: 0x32E53AC
	private Tween LobbyIconAnimation() { }

	// RVA: 0x32E546C Offset: 0x32E546C VA: 0x32E546C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI
[CreateAssetMenu(fileName = "LobbyIconCollectibleAnimationConfig", menuName = "Configs/LobbyIconCollectibleAnimationConfig", order = 1)]