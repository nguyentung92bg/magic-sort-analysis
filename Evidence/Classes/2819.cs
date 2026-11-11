public class SkyJumpView : MonoBehaviour // TypeDefIndex: 2819
{
	// Fields
	[SerializeField]
	private SkyJumpAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private GameObject _inProgressContainer; // 0x20
	[SerializeField]
	private GameObject _failedContainer; // 0x28
	[SerializeField]
	private List<SkyJumpUserView> _userViews; // 0x30
	[SerializeField]
	private List<Transform> _stepAnchorPoints; // 0x38
	[SerializeField]
	private List<SkyJumpStepView> _stepViews; // 0x40
	[SerializeField]
	private TextMeshPro _userCountText; // 0x48
	[SerializeField]
	private TextMeshPro _stepCountText; // 0x50
	[SerializeField]
	private ParticleSystem _textHitParticle; // 0x58
	[SerializeField]
	private ParticleSystem _stepTextHitParticle; // 0x60
	[SerializeField]
	private ParticleSystem _winCongratsParticle; // 0x68
	[SerializeField]
	private TextMeshPro _infoText; // 0x70
	private Sequence _stepAnimationSequence; // 0x78
	private SkyJumpService _skyJumpService; // 0x80
	private bool _didUserFall; // 0x88
	private bool _didUserWinEvent; // 0x89

	// Methods

	// RVA: 0x2DC1A10 Offset: 0x2DC1A10 VA: 0x2DC1A10
	public void Initialize() { }

	// RVA: 0x2DC1A94 Offset: 0x2DC1A94 VA: 0x2DC1A94
	public Sequence InitializeForWin(List<SkyJumpLeaderboardPlayerViewModel> previousViewModels, List<SkyJumpLeaderboardPlayerViewModel> currentViewModels, int previousStep) { }

	// RVA: 0x2DC3ECC Offset: 0x2DC3ECC VA: 0x2DC3ECC
	public Sequence InitializeForStepIncrease(List<SkyJumpLeaderboardPlayerViewModel> previousViewModels, List<SkyJumpLeaderboardPlayerViewModel> currentViewModels, int previousStep) { }

	// RVA: 0x2DC4008 Offset: 0x2DC4008 VA: 0x2DC4008
	public Sequence InitializeForIdle(List<SkyJumpLeaderboardPlayerViewModel> currentViewModels, int currentStep) { }

	// RVA: 0x2DC4134 Offset: 0x2DC4134 VA: 0x2DC4134
	public Sequence InitializeForLose(List<SkyJumpLeaderboardPlayerViewModel> previousViewModels, List<SkyJumpLeaderboardPlayerViewModel> currentViewModels, int previousStep) { }

	// RVA: 0x2DC2804 Offset: 0x2DC2804 VA: 0x2DC2804
	private void MarkCurrentStep(int currentStep) { }

	[Button]
	// RVA: 0x2DC423C Offset: 0x2DC423C VA: 0x2DC423C
	public void MockInitialize(int mockCurrentStep) { }

	// RVA: 0x2DC1BD4 Offset: 0x2DC1BD4 VA: 0x2DC1BD4
	private void ToggleUserViews(bool toggle) { }

	// RVA: 0x2DC2640 Offset: 0x2DC2640 VA: 0x2DC2640
	private void ToggleStepsForCurrentStepCount(int currentStepCount) { }

	// RVA: 0x2DC2900 Offset: 0x2DC2900 VA: 0x2DC2900
	private void SetInProgressDisplay() { }

	// RVA: 0x2DC41EC Offset: 0x2DC41EC VA: 0x2DC41EC
	private void SetFailedDisplay() { }

	[Button]
	// RVA: 0x2DC4CB8 Offset: 0x2DC4CB8 VA: 0x2DC4CB8
	public void MockAnim(int oldStep, int newStep) { }

	// RVA: 0x2DC1E2C Offset: 0x2DC1E2C VA: 0x2DC1E2C
	private void SetUserModels(List<SkyJumpLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2DC2248 Offset: 0x2DC2248 VA: 0x2DC2248
	private void SetUserViewPositions(int step) { }

	// RVA: 0x2DC29D8 Offset: 0x2DC29D8 VA: 0x2DC29D8
	private Sequence PlayStepAnimations(int oldStep, int newStep) { }

	// RVA: 0x2DC5E68 Offset: 0x2DC5E68 VA: 0x2DC5E68
	private ValueTuple<Vector3, float> GetJumpParameters(int targetStep) { }

	// RVA: 0x2DC5844 Offset: 0x2DC5844 VA: 0x2DC5844
	private Vector3 GetPositionInStep(int targetStep, int order) { }

	// RVA: 0x2DC5B00 Offset: 0x2DC5B00 VA: 0x2DC5B00
	private Vector3 GetLocalPositionInStep(int targetStep, int order) { }

	// RVA: 0x2DC44D0 Offset: 0x2DC44D0 VA: 0x2DC44D0
	private List<SkyJumpLeaderboardPlayerViewModel> MockCurrent() { }

	// RVA: 0x2DC4D2C Offset: 0x2DC4D2C VA: 0x2DC4D2C
	private List<SkyJumpLeaderboardPlayerViewModel> MockLastSeen() { }

	// RVA: 0x2DC1F2C Offset: 0x2DC1F2C VA: 0x2DC1F2C
	private void MarkUserStepStatus(List<SkyJumpLeaderboardPlayerViewModel> current, List<SkyJumpLeaderboardPlayerViewModel> lastSeen) { }

	// RVA: 0x2DC26D8 Offset: 0x2DC26D8 VA: 0x2DC26D8
	private void SetUserCountText(int stepCount) { }

	// RVA: 0x2DC277C Offset: 0x2DC277C VA: 0x2DC277C
	private void SetStepCountText(int stepCount) { }

	// RVA: 0x2DC5FF4 Offset: 0x2DC5FF4 VA: 0x2DC5FF4
	private Tween PlayUserCountText(int stepCount) { }

	// RVA: 0x2DC61AC Offset: 0x2DC61AC VA: 0x2DC61AC
	private Tween PlayStepCountText(int newStep) { }

	// RVA: 0x2DC6304 Offset: 0x2DC6304 VA: 0x2DC6304
	private Tween ScaleText(Vector3 target, float duration, AnimationCurve curve, Transform textTransform) { }

	// RVA: 0x2DC5BCC Offset: 0x2DC5BCC VA: 0x2DC5BCC
	private Sequence UserCountTextSequence(int currentStep) { }

	// RVA: 0x2DC5920 Offset: 0x2DC5920 VA: 0x2DC5920
	private Sequence StepCountTextSequence(int currentStep) { }

	// RVA: 0x2DC6394 Offset: 0x2DC6394 VA: 0x2DC6394
	private void PlayTextParticle(Vector3 position) { }

	// RVA: 0x2DC63F8 Offset: 0x2DC63F8 VA: 0x2DC63F8
	private void PlayStepTextHitParticle(Vector3 position) { }

	// RVA: 0x2DC645C Offset: 0x2DC645C VA: 0x2DC645C
	private void PlayCongratsParticles() { }

	// RVA: 0x2DC2950 Offset: 0x2DC2950 VA: 0x2DC2950
	private void SetInfoText(string text) { }

	// RVA: 0x2DC2974 Offset: 0x2DC2974 VA: 0x2DC2974
	private void DisableFallingStepToolbarButton(int step) { }

	// RVA: 0x2DC6478 Offset: 0x2DC6478 VA: 0x2DC6478
	public void Dispose() { }

	// RVA: 0x2DC6490 Offset: 0x2DC6490 VA: 0x2DC6490
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2DC6498 Offset: 0x2DC6498 VA: 0x2DC6498
	private void <UserCountTextSequence>b__42_0() { }

	[CompilerGenerated]
	// RVA: 0x2DC64CC Offset: 0x2DC64CC VA: 0x2DC64CC
	private void <StepCountTextSequence>b__43_0() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI