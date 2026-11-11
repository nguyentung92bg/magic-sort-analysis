public class SkyJumpWithStageStepView : MonoBehaviour // TypeDefIndex: 2713
{
	// Fields
	[SerializeField]
	private SkyJumpWithStageAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private Transform _pillowFaceParent; // 0x20
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0x28
	[SerializeField]
	private bool _disableAnimations; // 0x30
	[SerializeField]
	private bool _isNextStageStep; // 0x31
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

	// RVA: 0x23403A0 Offset: 0x23403A0 VA: 0x23403A0
	private void Start() { }

	// RVA: 0x2340658 Offset: 0x2340658 VA: 0x2340658
	private void Update() { }

	// RVA: 0x2340578 Offset: 0x2340578 VA: 0x2340578
	private void WaveUpdate() { }

	// RVA: 0x234068C Offset: 0x234068C VA: 0x234068C
	private void PillowUpdate() { }

	// RVA: 0x234090C Offset: 0x234090C VA: 0x234090C
	public void ApplyPush(float forceAmount, float duration) { }

	// RVA: 0x234097C Offset: 0x234097C VA: 0x234097C
	public void ApplyPillowFaceSquish(float forceAmount) { }

	// RVA: 0x23409C0 Offset: 0x23409C0 VA: 0x23409C0
	public void StopWaveMovement() { }

	// RVA: 0x23409CC Offset: 0x23409CC VA: 0x23409CC
	public Sequence PlayStepFall() { }

	// RVA: 0x2340B48 Offset: 0x2340B48 VA: 0x2340B48
	public void MarkAsCurrentStep(int playerCount) { }

	// RVA: 0x2340C18 Offset: 0x2340C18 VA: 0x2340C18
	public void MarkAsOtherStep() { }

	// RVA: 0x2340CAC Offset: 0x2340CAC VA: 0x2340CAC
	public void MarkAsFinalStep() { }

	// RVA: 0x2340D40 Offset: 0x2340D40 VA: 0x2340D40
	public void DisableToolbar() { }

	// RVA: 0x23404E4 Offset: 0x23404E4 VA: 0x23404E4
	private void MarkAsNextStageStep() { }

	// RVA: 0x2340D50 Offset: 0x2340D50 VA: 0x2340D50
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI