public class TeamArenaEventProgressBarController : MonoBehaviour // TypeDefIndex: 2384
{
	// Fields
	[SerializeField]
	private Transform _startTransform; // 0x18
	[SerializeField]
	private Transform _endTransform; // 0x20
	[SerializeField]
	private Transform _rewardPositionReference; // 0x28
	[SerializeField]
	private SpriteRenderer _fillSprite; // 0x30
	[SerializeField]
	private TMP_Text _progressText; // 0x38
	[SerializeField]
	private TMP_Text _eventProgressText; // 0x40
	[SerializeField]
	private DuckFestivalProgressAnimationConfig _animationConfig; // 0x48
	[SerializeField]
	private ParticleSystem _completeParticle; // 0x50
	[SerializeField]
	private GameObject _rewardsCompletedContainer; // 0x58
	[SerializeField]
	private GameObject _unableToContributionOverlay; // 0x60
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x68
	[SerializeField]
	private int _rewardSortingOrder; // 0x70
	private CurrencyView _rewardCurrencyView; // 0x78

	// Methods

	// RVA: 0x29657C4 Offset: 0x29657C4 VA: 0x29657C4
	public void Initialize(List<TeamArenaProgressStepViewModel> steps, int totalSteps, bool canContribute, bool completed) { }

	// RVA: 0x2965654 Offset: 0x2965654 VA: 0x2965654
	public void Dispose() { }

	// RVA: 0x2966B60 Offset: 0x2966B60 VA: 0x2966B60
	private void ShowStep(TeamArenaProgressStepViewModel step, int totalSteps) { }

	// RVA: 0x29670EC Offset: 0x29670EC VA: 0x29670EC
	private void SetReward(RewardModel reward) { }

	// RVA: 0x2966BEC Offset: 0x2966BEC VA: 0x2966BEC
	private Tween ShowStepSmooth(TeamArenaProgressStepViewModel step, int totalSteps, bool allStepsCompleted, bool isFirstRewardInSequence = False) { }

	// RVA: 0x2966F14 Offset: 0x2966F14 VA: 0x2966F14
	private Tween ShowStepsSmooth(List<TeamArenaProgressStepViewModel> steps, int totalSteps, bool allStepsCompleted) { }

	// RVA: 0x2966818 Offset: 0x2966818 VA: 0x2966818
	private void SetProgressText(int current, int total, bool allStepsCompleted) { }

	// RVA: 0x296698C Offset: 0x296698C VA: 0x296698C
	private void SetEventProgressText(int current, int total) { }

	// RVA: 0x2966930 Offset: 0x2966930 VA: 0x2966930
	private void SetFill(int stepProgress, int stepTarget) { }

	// RVA: 0x29674C4 Offset: 0x29674C4 VA: 0x29674C4
	private void SetFillNormalized(float normalized) { }

	// RVA: 0x2967388 Offset: 0x2967388 VA: 0x2967388
	private Tween GetRewardScaleTween(bool inScale) { }

	// RVA: 0x2966A98 Offset: 0x2966A98 VA: 0x2966A98
	private void SetCompleted(bool completed) { }

	// RVA: 0x2967478 Offset: 0x2967478 VA: 0x2967478
	private float GetFillAmount(float normalizedFill) { }

	// RVA: 0x296751C Offset: 0x296751C VA: 0x296751C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups