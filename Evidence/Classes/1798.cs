public class WindQuestController : MonoBehaviour // TypeDefIndex: 1798
{
	// Fields
	[SerializeField]
	private Button _closeButton; // 0x18
	[SerializeField]
	private Button _continueButton; // 0x20
	[SerializeField]
	private Timer _timer; // 0x28
	[SerializeField]
	private GameObject _timerContainer; // 0x30
	[SerializeField]
	private GameObject _completedText; // 0x38
	[SerializeField]
	private WindQuestOneGoalUI _oneGoalUI; // 0x40
	[SerializeField]
	private WindQuestMultipleGoalUI _twoGoalUI; // 0x48
	[SerializeField]
	private WindQuestMultipleGoalUI _threeGoalUI; // 0x50
	[SerializeField]
	private TMP_Text _taskDescriptionText; // 0x58
	[SerializeField]
	private GameObject _heroAnimation; // 0x60
	[SerializeField]
	private GameObject _failedSkyView; // 0x68
	[SerializeField]
	private WindQuestTaskView _animationTaskView; // 0x70
	[SerializeField]
	private GameObject _congratulationsText; // 0x78
	[SerializeField]
	private TMP_Text _failedText; // 0x80
	[SerializeField]
	private WindQuestAnimationConfig _animationConfig; // 0x88
	[SerializeField]
	private Transform _textsContainer; // 0x90
	[SerializeField]
	private Vector3 _textsContainerPositionForOneGoal; // 0x98
	[SerializeField]
	private Vector3 _textsContainerPositionForMultipleGoals; // 0xA4
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0xB0
	private WindQuestService _windQuestService; // 0xB8
	private WindQuestViewModel _viewModel; // 0xC0
	private Sequence _progressSequence; // 0xC8
	private const string first_try_wins_task_localization_term = "WindQuestFirstTryWinsTask";
	private const string level_wins_task_localization_term = "WindQuestLevelWinsTask";
	private const string streak_wins_task_localization_term = "WindQuestStreakWinsTask";
	private const string complete_bottles_task_localization_term = "WindQuestCompleteBottlesTask";
	private const string earn_coin_task_localization_term = "WindQuestEarnCoinTask";
	private const string hard_level_wins_task_localization_term = "WindQuestHardLevelWinsTask";
	private const string super_hard_level_wins_task_localization_term = "WindQuestSuperHardLevelWinsTask";
	private const string first_try_wins_task_localization_term_lose = "WindQuestFirstTryWinsTaskLose";
	private const string level_wins_task_localization_term_lose = "WindQuestLevelWinsTaskLose";
	private const string streak_wins_task_localization_term_lose = "WindQuestStreakWinsTaskLose";
	private const string complete_bottles_task_localization_term_lose = "WindQuestCompleteBottlesTaskLose";
	private const string earn_coin_task_localization_term_lose = "WindQuestEarnCoinTaskLose";
	private const string hard_level_wins_task_localization_term_lose = "WindQuestHardLevelWinsTaskLose";
	private const string super_hard_level_wins_task_localization_term_lose = "WindQuestSuperHardLevelWinsTaskLose";
	private const string first_try_wins_tooltip_term = "WindQuestFirstTryWinsTooltip";
	private const string level_wins_tooltip_term = "WindQuestLevelWinsTooltip";
	private const string streak_wins_tooltip_term = "WindQuestStreakWinsTooltip";
	private const string complete_bottles_tooltip_term = "WindQuestCompleteBottlesTooltip";
	private const string earn_coin_tooltip_term = "WindQuestEarnCoinTooltip";
	private const string hard_level_wins_tooltip_term = "WindQuestHardLevelWinsTooltip";
	private const string super_hard_level_wins_tooltip_term = "WindQuestSuperHardLevelWinsTooltip";
	private const string lost_tooltip_term = "WindQuestFailedText";

	// Methods

	// RVA: 0x2D97838 Offset: 0x2D97838 VA: 0x2D97838
	private void Awake() { }

	// RVA: 0x2D97960 Offset: 0x2D97960 VA: 0x2D97960
	private void OnDestroy() { }

	// RVA: 0x2D97A6C Offset: 0x2D97A6C VA: 0x2D97A6C
	public void Show(WindQuestViewModel viewModel) { }

	// RVA: 0x2D98ABC Offset: 0x2D98ABC VA: 0x2D98ABC
	public void Hide() { }

	// RVA: 0x2D9887C Offset: 0x2D9887C VA: 0x2D9887C
	private void PlayProgressAnimation(Tween progressTween) { }

	// RVA: 0x2D97A34 Offset: 0x2D97A34 VA: 0x2D97A34
	private void KillProgressSequence() { }

	// RVA: 0x2D98920 Offset: 0x2D98920 VA: 0x2D98920
	private void SetEventEndUI(bool shouldShowClaim) { }

	// RVA: 0x2D97DD8 Offset: 0x2D97DD8 VA: 0x2D97DD8
	private string GetTaskDescriptionTerm(WindQuestTaskType taskType, bool isLose = False) { }

	// RVA: 0x2D97F88 Offset: 0x2D97F88 VA: 0x2D97F88
	private string GetToolbarTerm(WindQuestTaskType taskType, bool isLose = False) { }

	// RVA: 0x2D98C80 Offset: 0x2D98C80 VA: 0x2D98C80
	private void OnButtonClicked() { }

	[AsyncStateMachine(typeof(WindQuestController.<TryClaimEvent>d__54))]
	// RVA: 0x2D98D18 Offset: 0x2D98D18 VA: 0x2D98D18
	private void TryClaimEvent() { }

	// RVA: 0x2D98DD0 Offset: 0x2D98DD0 VA: 0x2D98DD0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]