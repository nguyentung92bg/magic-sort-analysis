public class TowerView : MonoBehaviour // TypeDefIndex: 2041
{
	// Fields
	[SerializeField]
	private List<TowerMainStepView> _staticMainSteps; // 0x18
	[SerializeField]
	private TowerIntermediateStepView _towerIntermediateStepViewPrefab; // 0x20
	[SerializeField]
	private SimpleScrollBar _scrollBar; // 0x28
	[SerializeField]
	private Transform _contentTransform; // 0x30
	[SerializeField]
	private TowerCatView _catView; // 0x38
	[SerializeField]
	private ProgressBar _mainProgressBar; // 0x40
	[SerializeField]
	private TowerAnimationsConfig _config; // 0x48
	[SerializeField]
	private ParticleSystem _riseParticle; // 0x50
	private TowerActionState _towerActionState; // 0x58
	private List<ITowerStepView> _allSteps; // 0x60
	private int _lastSeenStep; // 0x68
	private Sequence _riseSequence; // 0x70
	private Sequence _fallSequence; // 0x78
	private bool _isFalling; // 0x80

	// Methods

	// RVA: 0x32E672C Offset: 0x32E672C VA: 0x32E672C
	public void Initialize(List<TowerWinStreakStepViewModel> lastSeenViewModels, int lastSeenStep) { }

	// RVA: 0x32E72C8 Offset: 0x32E72C8 VA: 0x32E72C8
	public void PlayUnseenStepAnimations(int currentStep) { }

	// RVA: 0x32E7978 Offset: 0x32E7978 VA: 0x32E7978
	public void SetTowerActionState(TowerActionState actionState) { }

	// RVA: 0x32E6FA8 Offset: 0x32E6FA8 VA: 0x32E6FA8
	private void SetProgressBarPivotForCurrentStep() { }

	// RVA: 0x32E79C4 Offset: 0x32E79C4 VA: 0x32E79C4
	private void SetProgressBarPivotForLastSeenStep() { }

	// RVA: 0x32E6D7C Offset: 0x32E6D7C VA: 0x32E6D7C
	private void InitializeScrollBar() { }

	// RVA: 0x32E6C2C Offset: 0x32E6C2C VA: 0x32E6C2C
	private void InitializeViews(List<TowerWinStreakStepViewModel> viewModels, int step) { }

	// RVA: 0x32E6914 Offset: 0x32E6914 VA: 0x32E6914
	private void GenerateViews(List<TowerWinStreakStepViewModel> viewModels) { }

	// RVA: 0x32E7AC4 Offset: 0x32E7AC4 VA: 0x32E7AC4
	private void CreateIntermediateStepView(TowerWinStreakStepViewModel viewModel, Vector3 previousMainStepPosition, Vector3 currentMainStepPosition) { }

	// RVA: 0x32E7C74 Offset: 0x32E7C74 VA: 0x32E7C74
	private void UpdateStepPositions(ref Vector3 previousMainStepPosition, ref Vector3 currentMainStepPosition, int currentStaticMainStep) { }

	// RVA: 0x32E7D2C Offset: 0x32E7D2C VA: 0x32E7D2C
	private Vector3 CalculateUnitDistance(Vector3 previousPosition, Vector3 currentPosition, TowerWinStreakStepViewModel viewModel) { }

	// RVA: 0x32E70DC Offset: 0x32E70DC VA: 0x32E70DC
	private void PrepareStepsForAnimation(int lastSeenStep) { }

	[Button]
	// RVA: 0x32E72D8 Offset: 0x32E72D8 VA: 0x32E72D8
	private void MainRaiseAnimation(int lastSeenStep, int currentStep) { }

	[Button]
	// RVA: 0x32E807C Offset: 0x32E807C VA: 0x32E807C
	public void FallAnimation(int stepToFallFrom) { }

	// RVA: 0x32E7F88 Offset: 0x32E7F88 VA: 0x32E7F88
	private Tween RevealCurrentStepRewards(int currentStep) { }

	// RVA: 0x32E7AA4 Offset: 0x32E7AA4 VA: 0x32E7AA4
	private void FillProgressBarStep(int step) { }

	// RVA: 0x32E89C8 Offset: 0x32E89C8 VA: 0x32E89C8
	private void ResetMainProgressBarStep() { }

	// RVA: 0x32E7D64 Offset: 0x32E7D64 VA: 0x32E7D64
	private Tween MainProgressFillTween(int currentStep, int targetStep) { }

	// RVA: 0x32E859C Offset: 0x32E859C VA: 0x32E859C
	private Tween ProgressFallTween(int currentStep, int targetStep, float duration) { }

	// RVA: 0x32E86B0 Offset: 0x32E86B0 VA: 0x32E86B0
	private Tween IterateAllStepsAndLock(int lastSeenStep, float duration) { }

	// RVA: 0x32E7E6C Offset: 0x32E7E6C VA: 0x32E7E6C
	private Tween IterateAllStepsAndUnlock(int lastSeenStep, int currentStep) { }

	[AsyncStateMachine(typeof(TowerView.<PlayFirstShowEverAnimations>d__35))]
	[Button]
	// RVA: 0x32E89E0 Offset: 0x32E89E0 VA: 0x32E89E0
	public Task PlayFirstShowEverAnimations() { }

	[Button]
	// RVA: 0x32E8ACC Offset: 0x32E8ACC VA: 0x32E8ACC
	public void OpenTopChestToolbar(int index) { }

	// RVA: 0x32E8864 Offset: 0x32E8864 VA: 0x32E8864
	private float CalculateFillValueY(int step) { }

	// RVA: 0x32E79AC Offset: 0x32E79AC VA: 0x32E79AC
	private CatState TowerActionStateToCatAnim(TowerActionState actionState) { }

	// RVA: 0x32E8B80 Offset: 0x32E8B80 VA: 0x32E8B80
	public void Dispose() { }

	// RVA: 0x32E8DD0 Offset: 0x32E8DD0 VA: 0x32E8DD0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x32E8DD8 Offset: 0x32E8DD8 VA: 0x32E8DD8
	private void <MainRaiseAnimation>b__26_1() { }

	[CompilerGenerated]
	// RVA: 0x32E8DF4 Offset: 0x32E8DF4 VA: 0x32E8DF4
	private void <FallAnimation>b__27_0() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI