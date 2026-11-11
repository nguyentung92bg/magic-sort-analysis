public class CatLobbyView : MonoBehaviour // TypeDefIndex: 1999
{
	// Fields
	[SerializeField]
	private Animator _animator; // 0x18
	[SerializeField]
	private Transform _broomTransform; // 0x20
	[SerializeField]
	private CatLobbyAnimationConfig _config; // 0x28
	private float _timeSinceLastAction; // 0x30
	private int _currentAnimationIndex; // 0x34
	private static readonly int CheckAroundTrigger; // 0x0
	private static readonly int BroomHitTrigger; // 0x4
	private Sequence _broomSequence; // 0x38

	// Methods

	// RVA: 0x32DF894 Offset: 0x32DF894 VA: 0x32DF894
	private void Update() { }

	// RVA: 0x32DF898 Offset: 0x32DF898 VA: 0x32DF898
	private void PlayNextAnimation() { }

	// RVA: 0x32DF934 Offset: 0x32DF934 VA: 0x32DF934
	public void AnimEvent() { }

	// RVA: 0x32DFB0C Offset: 0x32DFB0C VA: 0x32DFB0C
	private void OnDestroy() { }

	// RVA: 0x32DFB24 Offset: 0x32DFB24 VA: 0x32DFB24
	public void .ctor() { }

	// RVA: 0x32DFB2C Offset: 0x32DFB2C VA: 0x32DFB2C
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts
[CreateAssetMenu(fileName = "TowerAnimationsConfig", menuName = "Configs/TowerAnimationsConfig")]