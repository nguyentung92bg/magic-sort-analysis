public class BroomStreakView : MonoBehaviour // TypeDefIndex: 4804
{
	// Fields
	[SerializeField]
	private List<BroomStreakMainStepView> _staticMainSteps; // 0x18
	[SerializeField]
	private BroomStreakIntermediateStepView _broomStreakIntermediateStepViewPrefab; // 0x20
	[SerializeField]
	private SimpleScrollBar _scrollBar; // 0x28
	[SerializeField]
	private Transform _contentTransform; // 0x30
	[SerializeField]
	private BroomStreakCatView _catView; // 0x38
	[SerializeField]
	private BroomStreakProgressBar _mainProgressBar; // 0x40
	[SerializeField]
	private BroomStreakAnimationsConfig _config; // 0x48
	[SerializeField]
	private ParticleSystem _riseParticle; // 0x50
	private BroomStreakActionState _broomStreakActionState; // 0x58
	private List<IBroomStreakStepView> _allSteps; // 0x60
	private int _lastSeenStep; // 0x68
	private Sequence _riseSequence; // 0x70
	private Sequence _fallSequence; // 0x78
	private bool _isFalling; // 0x80

	// Methods

	// RVA: 0x3FC67FC Offset: 0x3FC67FC VA: 0x3FC67FC
	public void Initialize(List<BroomStreakStepViewModel> lastSeenViewModels, int lastSeenStep, bool resultsView = False, bool fallDownView = False) { }

	// RVA: 0x3FC70C4 Offset: 0x3FC70C4 VA: 0x3FC70C4
	public void PlayUnseenStepAnimations(int currentStep, bool resultsView = False) { }

	// RVA: 0x3FC6F08 Offset: 0x3FC6F08 VA: 0x3FC6F08
	public void SetBroomStreakActionState(BroomStreakActionState actionState) { }

	// RVA: 0x3FC8960 Offset: 0x3FC8960 VA: 0x3FC8960
	private void SetProgressBarPivotForCurrentStep() { }

	// RVA: 0x3FC9964 Offset: 0x3FC9964 VA: 0x3FC9964
	private void SetProgressBarPivotForLastSeenStep() { }

	// RVA: 0x3FC8734 Offset: 0x3FC8734 VA: 0x3FC8734
	private void InitializeScrollBar() { }

	// RVA: 0x3FC85E4 Offset: 0x3FC85E4 VA: 0x3FC85E4
	private void InitializeViews(List<BroomStreakStepViewModel> viewModels, int step) { }

	// RVA: 0x3FC82CC Offset: 0x3FC82CC VA: 0x3FC82CC
	private void GenerateViews(List<BroomStreakStepViewModel> viewModels) { }

	// RVA: 0x3FC9A64 Offset: 0x3FC9A64 VA: 0x3FC9A64
	private void CreateIntermediateStepView(BroomStreakStepViewModel viewModel, Vector3 previousMainStepPosition, Vector3 currentMainStepPosition) { }

	// RVA: 0x3FC9C14 Offset: 0x3FC9C14 VA: 0x3FC9C14
	private void UpdateStepPositions(ref Vector3 previousMainStepPosition, ref Vector3 currentMainStepPosition, int currentStaticMainStep) { }

	// RVA: 0x3FC9CCC Offset: 0x3FC9CCC VA: 0x3FC9CCC
	private Vector3 CalculateUnitDistance(Vector3 previousPosition, Vector3 currentPosition, BroomStreakStepViewModel viewModel) { }

	// RVA: 0x3FC8EB8 Offset: 0x3FC8EB8 VA: 0x3FC8EB8
	private void PrepareStepsForAnimation(int lastSeenStep) { }

	[Button]
	// RVA: 0x3FC90A4 Offset: 0x3FC90A4 VA: 0x3FC90A4
	private void MainRaiseAnimation(int lastSeenStep, int currentStep, bool resultsView) { }

	[Button]
	// RVA: 0x3FC6AC4 Offset: 0x3FC6AC4 VA: 0x3FC6AC4
	public void FallToStep(int stepToFallFrom, int stepToFall) { }

	// RVA: 0x3FC9F28 Offset: 0x3FC9F28 VA: 0x3FC9F28
	private Tween RevealCurrentStepRewards(int currentStep) { }

	// RVA: 0x3FC9A44 Offset: 0x3FC9A44 VA: 0x3FC9A44
	private void FillProgressBarStep(int step) { }

	// RVA: 0x3FCA458 Offset: 0x3FCA458 VA: 0x3FCA458
	private void ResetMainProgressBarStep() { }

	// RVA: 0x3FC9D04 Offset: 0x3FC9D04 VA: 0x3FC9D04
	private Tween MainProgressFillTween(int currentStep, int targetStep) { }

	// RVA: 0x3FCA01C Offset: 0x3FCA01C VA: 0x3FCA01C
	private Tween ProgressFallTween(int currentStep, int targetStep, float duration) { }

	// RVA: 0x3FCA130 Offset: 0x3FCA130 VA: 0x3FCA130
	private Tween IterateAllStepsAndLock(int lastSeenStep, int stepToFall, float duration) { }

	// RVA: 0x3FC9E0C Offset: 0x3FC9E0C VA: 0x3FC9E0C
	private Tween IterateAllStepsAndUnlock(int lastSeenStep, int currentStep) { }

	[Button]
	[AsyncStateMachine(typeof(BroomStreakView.<PlayFirstShowEverAnimations>d__35))]
	// RVA: 0x3FC7BB4 Offset: 0x3FC7BB4 VA: 0x3FC7BB4
	public Task PlayFirstShowEverAnimations() { }

	[Button]
	// RVA: 0x3FC7010 Offset: 0x3FC7010 VA: 0x3FC7010
	public void OpenTopChestToolbar(int index) { }

	// RVA: 0x3FCA2F4 Offset: 0x3FCA2F4 VA: 0x3FCA2F4
	private float CalculateFillValueY(int step) { }

	// RVA: 0x3FC994C Offset: 0x3FC994C VA: 0x3FC994C
	private BroomStreakCatState BroomStreakActionStateToCatAnim(BroomStreakActionState actionState) { }

	// RVA: 0x3FC8AA0 Offset: 0x3FC8AA0 VA: 0x3FC8AA0
	public float GetNextCheckPointIntervalMiddlePosition(int step) { }

	// RVA: 0x3FC7250 Offset: 0x3FC7250 VA: 0x3FC7250
	public void Dispose() { }

	// RVA: 0x3FCA480 Offset: 0x3FCA480 VA: 0x3FCA480
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FCA488 Offset: 0x3FCA488 VA: 0x3FCA488
	private void <MainRaiseAnimation>b__26_1() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI