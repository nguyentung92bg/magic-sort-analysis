public class MiniGameProgressBarView : MonoBehaviour // TypeDefIndex: 3523
{
	// Fields
	[SerializeField]
	private List<MiniGameProgressBarRewardView> _rewardsViews; // 0x18
	[SerializeField]
	private Transform _progressParent; // 0x20
	[SerializeField]
	private Transform _startTransform; // 0x28
	[SerializeField]
	private Transform _endTransform; // 0x30
	[SerializeField]
	private SpriteRenderer _greenBar; // 0x38
	[SerializeField]
	private MiniGameAnimationConfig _animationConfig; // 0x40
	[SerializeField]
	private TextMeshPro _currentStageText; // 0x48
	[SerializeField]
	private MiniGameProgressBarTooltipView _tooltipView; // 0x50
	private MiniGameViewModel _viewModel; // 0x58
	private Sequence _progressSequence; // 0x60
	private float _fullDistance; // 0x68

	// Methods

	// RVA: 0x218315C Offset: 0x218315C VA: 0x218315C
	public void Initialize(MiniGameViewModel viewModel) { }

	// RVA: 0x21847D8 Offset: 0x21847D8 VA: 0x21847D8
	private void InitializeRewardViews() { }

	// RVA: 0x21848EC Offset: 0x21848EC VA: 0x21848EC
	private void InitializeProgressBar() { }

	// RVA: 0x2184C74 Offset: 0x2184C74 VA: 0x2184C74
	private float GetFillAmountByStage(int stageIndex) { }

	// RVA: 0x2184DB8 Offset: 0x2184DB8 VA: 0x2184DB8
	private Tween UpdateFillAmount(float progressRatio, float duration = 0) { }

	// RVA: 0x2184B04 Offset: 0x2184B04 VA: 0x2184B04
	private void UpdateStageText(int stageIndex) { }

	// RVA: 0x21833E8 Offset: 0x21833E8 VA: 0x21833E8
	public void UpdateViewModel(MiniGameViewModel viewModel) { }

	// RVA: 0x2184F40 Offset: 0x2184F40 VA: 0x2184F40
	public Tween PlayStageProgressAnimation(int completedStageIndex) { }

	// RVA: 0x218525C Offset: 0x218525C VA: 0x218525C
	public Transform GetStageCompletedTarget(int completedStageIndex) { }

	// RVA: 0x2183C3C Offset: 0x2183C3C VA: 0x2183C3C
	public void Dispose() { }

	// RVA: 0x2183E28 Offset: 0x2183E28 VA: 0x2183E28
	public void HideTooltip() { }

	// RVA: 0x2185408 Offset: 0x2185408 VA: 0x2185408
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI.Tooltip