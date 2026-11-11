public class TowerWinStreakBannerView : MonoBehaviour // TypeDefIndex: 2051
{
	// Fields
	[SerializeField]
	private TowerCatView _catView; // 0x18
	[SerializeField]
	private TowerWinStreakBannerConfig _config; // 0x20
	[SerializeField]
	private Transform _stepContainerLeftPivot; // 0x28
	[SerializeField]
	private SpriteRenderer _progressBar; // 0x30
	[SerializeField]
	private SpriteRenderer _progressBarBack; // 0x38
	[SerializeField]
	private Transform _progressFrontPivot; // 0x40
	[SerializeField]
	private ParticleSystem _unlockParticle; // 0x48
	private readonly List<ITowerStepView> _allSteps; // 0x50
	private bool _isAnimPlaying; // 0x58
	private Sequence _mainSequence; // 0x60

	// Methods

	// RVA: 0x359D6C0 Offset: 0x359D6C0 VA: 0x359D6C0
	public void CreateSteps(List<TowerWinStreakStepViewModel> streakStepViewModels) { }

	[Button]
	// RVA: 0x359DBA4 Offset: 0x359DBA4 VA: 0x359DBA4
	public void Show() { }

	// RVA: 0x359DD00 Offset: 0x359DD00 VA: 0x359DD00
	private void PlayBannerAnimations(int newStep, int oldStep, List<TowerWinStreakStepViewModel> viewModels) { }

	// RVA: 0x359E3D4 Offset: 0x359E3D4 VA: 0x359E3D4
	private void UnlockPastSteps(int newStep) { }

	// RVA: 0x359E6DC Offset: 0x359E6DC VA: 0x359E6DC
	private Sequence PlayCatMove(int newStep, int oldStep, List<TowerWinStreakStepViewModel> viewModels) { }

	// RVA: 0x359E32C Offset: 0x359E32C VA: 0x359E32C
	private void SetInitialProgressBarFill(int step) { }

	// RVA: 0x359EDE4 Offset: 0x359EDE4 VA: 0x359EDE4
	private int GetMainStepCount(List<TowerWinStreakStepViewModel> viewModels) { }

	// RVA: 0x359E370 Offset: 0x359E370 VA: 0x359E370
	private void SetProgressBarBackSize(List<TowerWinStreakStepViewModel> viewModels) { }

	// RVA: 0x359E4E8 Offset: 0x359E4E8 VA: 0x359E4E8
	private Tween PlayProgressBarFill(int newStep) { }

	// RVA: 0x359E638 Offset: 0x359E638 VA: 0x359E638
	private Tween PlayProgressPivotMove(Vector3 endPosition) { }

	// RVA: 0x359EC80 Offset: 0x359EC80 VA: 0x359EC80
	private float GetProgressBarFillValue(int step) { }

	// RVA: 0x359E130 Offset: 0x359E130 VA: 0x359E130
	private void SetInitialContainerPosition(List<TowerWinStreakStepViewModel> viewModels, int newStep) { }

	// RVA: 0x359EF38 Offset: 0x359EF38 VA: 0x359EF38
	public void Hide() { }

	// RVA: 0x359F0CC Offset: 0x359F0CC VA: 0x359F0CC
	private void OnDestroy() { }

	// RVA: 0x359EF68 Offset: 0x359EF68 VA: 0x359EF68
	private void Dispose() { }

	// RVA: 0x359F0D0 Offset: 0x359F0D0 VA: 0x359F0D0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x359F158 Offset: 0x359F158 VA: 0x359F158
	private float <PlayProgressBarFill>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x359F174 Offset: 0x359F174 VA: 0x359F174
	private void <PlayProgressBarFill>b__18_1(float x) { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI