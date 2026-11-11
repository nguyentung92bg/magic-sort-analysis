public class BroomStreakBannerView : MonoBehaviour // TypeDefIndex: 4781
{
	// Fields
	[SerializeField]
	private BroomStreakCatView _catView; // 0x18
	[SerializeField]
	private BroomStreakBannerConfig _config; // 0x20
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
	[SerializeField]
	private ChestSpriteConfig _chestSpriteConfig; // 0x50
	private readonly List<IBroomStreakStepView> _allSteps; // 0x58
	private bool _isAnimPlaying; // 0x60
	private Sequence _mainSequence; // 0x68

	// Methods

	// RVA: 0x3FC1CFC Offset: 0x3FC1CFC VA: 0x3FC1CFC
	public void CreateSteps(List<BroomStreakStepViewModel> streakStepViewModels) { }

	[Button]
	// RVA: 0x3FC21E4 Offset: 0x3FC21E4 VA: 0x3FC21E4
	public void Show() { }

	// RVA: 0x3FC2408 Offset: 0x3FC2408 VA: 0x3FC2408
	private void PlayBannerAnimations(int newStep, int oldStep, List<BroomStreakStepViewModel> viewModels) { }

	// RVA: 0x3FC2AD8 Offset: 0x3FC2AD8 VA: 0x3FC2AD8
	private void UnlockPastSteps(int newStep) { }

	// RVA: 0x3FC2DE0 Offset: 0x3FC2DE0 VA: 0x3FC2DE0
	private Sequence PlayCatMove(int newStep, int oldStep, List<BroomStreakStepViewModel> viewModels) { }

	// RVA: 0x3FC2A30 Offset: 0x3FC2A30 VA: 0x3FC2A30
	private void SetInitialProgressBarFill(int step) { }

	// RVA: 0x3FC3140 Offset: 0x3FC3140 VA: 0x3FC3140
	private int GetMainStepCount(List<BroomStreakStepViewModel> viewModels) { }

	// RVA: 0x3FC2A74 Offset: 0x3FC2A74 VA: 0x3FC2A74
	private void SetProgressBarBackSize(List<BroomStreakStepViewModel> viewModels) { }

	// RVA: 0x3FC2BEC Offset: 0x3FC2BEC VA: 0x3FC2BEC
	private Tween PlayProgressBarFill(int newStep) { }

	// RVA: 0x3FC2D3C Offset: 0x3FC2D3C VA: 0x3FC2D3C
	private Tween PlayProgressPivotMove(Vector3 endPosition) { }

	// RVA: 0x3FC2FDC Offset: 0x3FC2FDC VA: 0x3FC2FDC
	private float GetProgressBarFillValue(int step) { }

	// RVA: 0x3FC2834 Offset: 0x3FC2834 VA: 0x3FC2834
	private void SetInitialContainerPosition(List<BroomStreakStepViewModel> viewModels, int newStep) { }

	// RVA: 0x3FC3294 Offset: 0x3FC3294 VA: 0x3FC3294
	public void Hide() { }

	// RVA: 0x3FC3428 Offset: 0x3FC3428 VA: 0x3FC3428
	private void OnDestroy() { }

	// RVA: 0x3FC32C4 Offset: 0x3FC32C4 VA: 0x3FC32C4
	private void Dispose() { }

	// RVA: 0x3FC342C Offset: 0x3FC342C VA: 0x3FC342C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FC34B4 Offset: 0x3FC34B4 VA: 0x3FC34B4
	private float <PlayProgressBarFill>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x3FC34D0 Offset: 0x3FC34D0 VA: 0x3FC34D0
	private void <PlayProgressBarFill>b__19_1(float x) { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI