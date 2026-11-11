public class CollaborativeAnimationPlayer : MonoBehaviour, IIntervalUpdate // TypeDefIndex: 4089
{
	// Fields
	[SerializeField]
	private SimpleAnimation[] _animations; // 0x18
	[SerializeField]
	private float _intervalAsSeconds; // 0x20
	[SerializeField]
	private int _animationsToPlayAtSameTime; // 0x24

	// Methods

	// RVA: 0x3A7BCC8 Offset: 0x3A7BCC8 VA: 0x3A7BCC8
	private void Awake() { }

	// RVA: 0x3A7BD50 Offset: 0x3A7BD50 VA: 0x3A7BD50
	private void OnDestroy() { }

	// RVA: 0x3A7BDD4 Offset: 0x3A7BDD4 VA: 0x3A7BDD4 Slot: 4
	public void IntervalUpdate() { }

	// RVA: 0x3A7BDD8 Offset: 0x3A7BDD8 VA: 0x3A7BDD8
	private void PlayRandomAnimation() { }

	// RVA: 0x3A7BE90 Offset: 0x3A7BE90 VA: 0x3A7BE90
	private int[] GenerateUniqueRandomNumbers(int min, int max, int count) { }

	// RVA: 0x3A7C04C Offset: 0x3A7C04C VA: 0x3A7C04C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Journey.Scripts.UI