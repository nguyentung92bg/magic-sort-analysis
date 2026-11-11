public class BroomstreakLobbyIconCollectibleAnimation : MonoBehaviour // TypeDefIndex: 4789
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

	// RVA: 0x3FC4C8C Offset: 0x3FC4C8C VA: 0x3FC4C8C
	private void Awake() { }

	[Button]
	// RVA: 0x3FC4CBC Offset: 0x3FC4CBC VA: 0x3FC4CBC
	private void CachePathPoints() { }

	[Button]
	// RVA: 0x3FC4DA0 Offset: 0x3FC4DA0 VA: 0x3FC4DA0
	public Sequence PlayAnimation() { }

	// RVA: 0x3FC50FC Offset: 0x3FC50FC VA: 0x3FC50FC
	private Tween LobbyIconAnimation() { }

	// RVA: 0x3FC51BC Offset: 0x3FC51BC VA: 0x3FC51BC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FC51C4 Offset: 0x3FC51C4 VA: 0x3FC51C4
	private void <PlayAnimation>b__9_0() { }

	[CompilerGenerated]
	// RVA: 0x3FC52D8 Offset: 0x3FC52D8 VA: 0x3FC52D8
	private void <PlayAnimation>b__9_1() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI