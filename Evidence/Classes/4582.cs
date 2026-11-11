public class CollectionCardStarView : MonoBehaviour // TypeDefIndex: 4582
{
	// Fields
	[SerializeField]
	private Transform _starVisualParent; // 0x18
	[SerializeField]
	private TextMeshPro _starCountText; // 0x20
	[SerializeField]
	private AnimationCurve _starsMoveCurve; // 0x28
	[SerializeField]
	private ParticleSystem _moveEndParticle; // 0x30
	[SerializeField]
	private AnimationCurve _starMoveCurveX; // 0x38
	[SerializeField]
	private AnimationCurve _starMoveCurveY; // 0x40
	[SerializeField]
	private float _starMoveDurationX; // 0x48
	[SerializeField]
	private float _starMoveDurationY; // 0x4C

	// Methods

	// RVA: 0x37783D4 Offset: 0x37783D4 VA: 0x37783D4
	public void Initialize(int starCount) { }

	// RVA: 0x3778808 Offset: 0x3778808 VA: 0x3778808
	public Tween MoveToTarget(Transform target) { }

	// RVA: 0x377A5B0 Offset: 0x377A5B0 VA: 0x377A5B0
	private void OnStarMoveCompleted() { }

	// RVA: 0x377A644 Offset: 0x377A644 VA: 0x377A644
	private void PlayParticle(Transform target) { }

	// RVA: 0x377A6C4 Offset: 0x377A6C4 VA: 0x377A6C4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI