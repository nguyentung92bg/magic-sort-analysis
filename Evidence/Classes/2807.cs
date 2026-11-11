public class SkyJumpStepView : MonoBehaviour // TypeDefIndex: 2807
{
	// Fields
	[SerializeField]
	private SkyJumpAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Transform _pillowFaceParent; // 0x20
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0x28
	[SerializeField]
	private bool _disableAnimations; // 0x30
	private float _randomStartOffset; // 0x34
	private Vector3 _initialPosition; // 0x38
	private float _currentForce; // 0x44
	private float _smoothVelocity; // 0x48
	private bool _isFalling; // 0x4C
	private float _currentAmplitude; // 0x50
	private float _currentFrequency; // 0x54
	private float _currentPillowForce; // 0x58
	private float _pillowSmoothVelocity; // 0x5C
	private Vector3 _initialPillowPosition; // 0x60
	private Vector3 _initialPillowScale; // 0x6C
	private Vector3 _pillowPositionSmoothVelocity; // 0x78
	private Vector3 _pillowScaleSmoothVelocity; // 0x84

	// Methods

	// RVA: 0x2F234CC Offset: 0x2F234CC VA: 0x2F234CC
	private void Start() { }

	// RVA: 0x2F236E0 Offset: 0x2F236E0 VA: 0x2F236E0
	private void Update() { }

	// RVA: 0x2F23600 Offset: 0x2F23600 VA: 0x2F23600
	private void WaveUpdate() { }

	// RVA: 0x2F23714 Offset: 0x2F23714 VA: 0x2F23714
	private void PillowUpdate() { }

	// RVA: 0x2F23994 Offset: 0x2F23994 VA: 0x2F23994
	public void ApplyPush(float forceAmount, float duration) { }

	// RVA: 0x2F23A04 Offset: 0x2F23A04 VA: 0x2F23A04
	public void ApplyPillowFaceSquish(float forceAmount) { }

	// RVA: 0x2F23A48 Offset: 0x2F23A48 VA: 0x2F23A48
	public void StopWaveMovement() { }

	// RVA: 0x2F23A54 Offset: 0x2F23A54 VA: 0x2F23A54
	public Sequence PlayStepFall() { }

	// RVA: 0x2F23BD0 Offset: 0x2F23BD0 VA: 0x2F23BD0
	public void MarkAsCurrentStep(int playerCount) { }

	// RVA: 0x2F23CA4 Offset: 0x2F23CA4 VA: 0x2F23CA4
	public void MarkAsOtherStep() { }

	// RVA: 0x2F23D30 Offset: 0x2F23D30 VA: 0x2F23D30
	public void MarkAsFinalStep() { }

	// RVA: 0x2F23DBC Offset: 0x2F23DBC VA: 0x2F23DBC
	public void DisableToolbar() { }

	// RVA: 0x2F23DD8 Offset: 0x2F23DD8 VA: 0x2F23DD8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI