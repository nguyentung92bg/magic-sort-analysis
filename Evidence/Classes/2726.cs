public class SkyJumpWithStageView : MonoBehaviour // TypeDefIndex: 2726
{
	// Fields
	[SerializeField]
	private SkyJumpWithStageAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private GameObject _inProgressContainer; // 0x20
	[SerializeField]
	private GameObject _failedContainer; // 0x28
	[SerializeField]
	private List<SkyJumpWithStageStepViewContainer> _stepViewContainers; // 0x30
	[SerializeField]
	private TextMeshPro _userCountText; // 0x38
	[SerializeField]
	private TextMeshPro _stepCountText; // 0x40
	[SerializeField]
	private ParticleSystem _textHitParticle; // 0x48
	[SerializeField]
	private ParticleSystem _stepTextHitParticle; // 0x50
	[SerializeField]
	private ParticleSystem _winCongratsParticle; // 0x58
	[SerializeField]
	private TextMeshPro _stageText; // 0x60
	private Sequence _stepAnimationSequence; // 0x68
	private SkyJumpWithStageService _SkyJumpWithStageService; // 0x70
	private bool _didUserFall; // 0x78
	private bool _didUserWinEvent; // 0x79
	private int currentStage; // 0x7C
	private List<SkyJumpWithStageUserView> _userViews; // 0x80
	private List<Transform> _stepAnchorPoints; // 0x88
	private List<SkyJumpWithStageStepView> _stepViews; // 0x90
	private int _stageStepCount; // 0x98
	private const string stage_text_localization_term = "SkyJumpWithStageJoinPopupStage";

	// Methods

	// RVA: 0x233D9D8 Offset: 0x233D9D8 VA: 0x233D9D8
	public void Initialize() { }

	// RVA: 0x233E198 Offset: 0x233E198 VA: 0x233E198
	public Sequence InitializeForWin(List<SkyJumpWithStageLeaderboardPlayerViewModel> previousViewModels, List<SkyJumpWithStageLeaderboardPlayerViewModel> currentViewModels, int previousStep) { }

	// RVA: 0x233E020 Offset: 0x233E020 VA: 0x233E020
	public Sequence InitializeForStepIncrease(List<SkyJumpWithStageLeaderboardPlayerViewModel> previousViewModels, List<SkyJumpWithStageLeaderboardPlayerViewModel> currentViewModels, int previousStep) { }

	// RVA: 0x233E0D4 Offset: 0x233E0D4 VA: 0x233E0D4
	public Sequence InitializeForIdle(List<SkyJumpWithStageLeaderboardPlayerViewModel> currentViewModels, int currentStep) { }

	// RVA: 0x233E250 Offset: 0x233E250 VA: 0x233E250
	public Sequence InitializeForLose(List<SkyJumpWithStageLeaderboardPlayerViewModel> previousViewModels, List<SkyJumpWithStageLeaderboardPlayerViewModel> currentViewModels, int previousStep) { }

	// RVA: 0x234281C Offset: 0x234281C VA: 0x234281C
	private void MarkCurrentStep(int currentStep) { }

	[Button]
	// RVA: 0x2343F04 Offset: 0x2343F04 VA: 0x2343F04
	public void MockInitialize(int mockCurrentStep) { }

	// RVA: 0x2341BAC Offset: 0x2341BAC VA: 0x2341BAC
	private void ToggleUserViews(bool toggle) { }

	// RVA: 0x2342618 Offset: 0x2342618 VA: 0x2342618
	private void ToggleStepsForCurrentStepCount(int currentStepCount) { }

	// RVA: 0x2342908 Offset: 0x2342908 VA: 0x2342908
	private void SetInProgressDisplay() { }

	// RVA: 0x2343EB4 Offset: 0x2343EB4 VA: 0x2343EB4
	private void SetFailedDisplay() { }

	[Button]
	// RVA: 0x2344944 Offset: 0x2344944 VA: 0x2344944
	public void MockAnim(int oldStep, int newStep) { }

	// RVA: 0x2341E04 Offset: 0x2341E04 VA: 0x2341E04
	private void SetUserModels(List<SkyJumpWithStageLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2342220 Offset: 0x2342220 VA: 0x2342220
	private void SetUserViewPositions(int step) { }

	// RVA: 0x23429C4 Offset: 0x23429C4 VA: 0x23429C4
	private Sequence PlayStepAnimations(int oldStep, int newStep) { }

	// RVA: 0x2345AA0 Offset: 0x2345AA0 VA: 0x2345AA0
	private ValueTuple<Vector3, float> GetJumpParameters(int targetStep) { }

	// RVA: 0x2345494 Offset: 0x2345494 VA: 0x2345494
	private Vector3 GetPositionInStep(int targetStep, int order) { }

	// RVA: 0x2345740 Offset: 0x2345740 VA: 0x2345740
	private Vector3 GetLocalPositionInStep(int targetStep, int order) { }

	// RVA: 0x2344198 Offset: 0x2344198 VA: 0x2344198
	private List<SkyJumpWithStageLeaderboardPlayerViewModel> MockCurrent() { }

	// RVA: 0x23449B8 Offset: 0x23449B8 VA: 0x23449B8
	private List<SkyJumpWithStageLeaderboardPlayerViewModel> MockLastSeen() { }

	// RVA: 0x2341F04 Offset: 0x2341F04 VA: 0x2341F04
	private void MarkUserStepStatus(List<SkyJumpWithStageLeaderboardPlayerViewModel> current, List<SkyJumpWithStageLeaderboardPlayerViewModel> lastSeen) { }

	// RVA: 0x23426B0 Offset: 0x23426B0 VA: 0x23426B0
	private void SetUserCountText(int stepCount) { }

	// RVA: 0x2342750 Offset: 0x2342750 VA: 0x2342750
	private void SetStepCountText(int stepCount) { }

	// RVA: 0x2345C24 Offset: 0x2345C24 VA: 0x2345C24
	private Tween PlayUserCountText(int stepCount) { }

	// RVA: 0x2345DCC Offset: 0x2345DCC VA: 0x2345DCC
	private Tween PlayStepCountText(int newStep) { }

	// RVA: 0x2345F1C Offset: 0x2345F1C VA: 0x2345F1C
	private Tween ScaleText(Vector3 target, float duration, AnimationCurve curve, Transform textTransform) { }

	// RVA: 0x234580C Offset: 0x234580C VA: 0x234580C
	private Sequence UserCountTextSequence(int currentStep) { }

	// RVA: 0x2345560 Offset: 0x2345560 VA: 0x2345560
	private Sequence StepCountTextSequence(int currentStep) { }

	// RVA: 0x2345FAC Offset: 0x2345FAC VA: 0x2345FAC
	private void PlayTextParticle(Vector3 position) { }

	// RVA: 0x2346010 Offset: 0x2346010 VA: 0x2346010
	private void PlayStepTextHitParticle(Vector3 position) { }

	// RVA: 0x2346074 Offset: 0x2346074 VA: 0x2346074
	private void PlayCongratsParticles() { }

	// RVA: 0x2342958 Offset: 0x2342958 VA: 0x2342958
	private void DisableFallingStepToolbarButton(int step) { }

	// RVA: 0x233E59C Offset: 0x233E59C VA: 0x233E59C
	public void Dispose() { }

	// RVA: 0x2346090 Offset: 0x2346090 VA: 0x2346090
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2346098 Offset: 0x2346098 VA: 0x2346098
	private void <UserCountTextSequence>b__46_0() { }

	[CompilerGenerated]
	// RVA: 0x23460CC Offset: 0x23460CC VA: 0x23460CC
	private void <StepCountTextSequence>b__47_0() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI