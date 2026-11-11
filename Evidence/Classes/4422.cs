public class DuckFestivalProgressView : MonoBehaviour // TypeDefIndex: 4422
{
	// Fields
	[SerializeField]
	private Transform _startTransform; // 0x18
	[SerializeField]
	private Transform _endTransform; // 0x20
	[SerializeField]
	private SpriteRenderer _greenBar; // 0x28
	[SerializeField]
	private TextMeshPro _progressText; // 0x30
	[SerializeField]
	private Transform _rewardParent; // 0x38
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x40
	[SerializeField]
	private TextMeshPro _rewardStepText; // 0x48
	[SerializeField]
	private GameObject _completedText; // 0x50
	[SerializeField]
	private GameObject _inProgressText; // 0x58
	[SerializeField]
	private GameObject _completedTick; // 0x60
	[SerializeField]
	private float _rewardScaleMultiplier; // 0x68
	[SerializeField]
	private DuckFestivalProgressAnimationConfig _animationConfig; // 0x70
	[SerializeField]
	private ParticleSystem _completeParticle; // 0x78
	private CurrencyView _rewardCurrencyView; // 0x80

	// Methods

	// RVA: 0x1B9C3B0 Offset: 0x1B9C3B0 VA: 0x1B9C3B0
	public void UpdateProgress(DuckFestivalProgressViewModel progressModel) { }

	// RVA: 0x1B9DCF4 Offset: 0x1B9DCF4 VA: 0x1B9DCF4
	private void UpdateProgressInstant(DuckFestivalProgressViewModel progressModel) { }

	// RVA: 0x1B9C444 Offset: 0x1B9C444 VA: 0x1B9C444
	public Sequence GetTotalProgressTween(List<DuckFestivalProgressViewModel> progressModels) { }

	// RVA: 0x1B9D9D0 Offset: 0x1B9D9D0 VA: 0x1B9D9D0
	private Tween GetProgressTween(DuckFestivalProgressViewModel progressModel, bool isFirstComplete, bool isLastComplete) { }

	// RVA: 0x1B9E03C Offset: 0x1B9E03C VA: 0x1B9E03C
	private Tween SampleScale(bool inScale) { }

	// RVA: 0x1B9DFB8 Offset: 0x1B9DFB8 VA: 0x1B9DFB8
	private void SetCompleted(bool isCompleted) { }

	// RVA: 0x1B9DD90 Offset: 0x1B9DD90 VA: 0x1B9DD90
	private void SetStepText(int progressModelStepIndex, int totalStepCount) { }

	// RVA: 0x1B9DEA8 Offset: 0x1B9DEA8 VA: 0x1B9DEA8
	private void SetSlider(float progressRatio) { }

	// RVA: 0x1B9DEEC Offset: 0x1B9DEEC VA: 0x1B9DEEC
	private void SetText(int currentProgress, int maxProgress) { }

	// RVA: 0x1B9CA94 Offset: 0x1B9CA94 VA: 0x1B9CA94
	public void UpdateReward(RewardModel rewardModel) { }

	// RVA: 0x1B9E134 Offset: 0x1B9E134 VA: 0x1B9E134
	private float GetFillAmount(float progressRatio) { }

	// RVA: 0x1B9B3DC Offset: 0x1B9B3DC VA: 0x1B9B3DC
	public void Dispose() { }

	// RVA: 0x1B9E21C Offset: 0x1B9E21C VA: 0x1B9E21C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI