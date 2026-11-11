public class TeamArenaEventInProgressController : MonoBehaviour // TypeDefIndex: 2378
{
	// Fields
	[SerializeField]
	private TeamArenaEventProgressBarController _progressBar; // 0x18
	[SerializeField]
	private TeamArenaLeaderboardController _leaderboardController; // 0x20
	[SerializeField]
	private Button _stepsButton; // 0x28
	[SerializeField]
	private TeamArenaStepsRewardTooltip _stepsRewardTooltip; // 0x30
	private TeamArenaService _teamArenaService; // 0x38
	private bool _canContribute; // 0x40

	// Methods

	// RVA: 0x2965338 Offset: 0x2965338 VA: 0x2965338
	public void Show(List<TeamArenaProgressStepViewModel> steps, bool canContribute, bool allStepsCompleted) { }

	// RVA: 0x2965608 Offset: 0x2965608 VA: 0x2965608
	public void Hide() { }

	// RVA: 0x296562C Offset: 0x296562C VA: 0x296562C
	public void Dispose() { }

	// RVA: 0x29655AC Offset: 0x29655AC VA: 0x29655AC
	private void ShowProgress(List<TeamArenaProgressStepViewModel> steps, bool canContribute, bool allStepsCompleted) { }

	// RVA: 0x29659C0 Offset: 0x29659C0 VA: 0x29659C0
	private void OnEnable() { }

	// RVA: 0x2965A4C Offset: 0x2965A4C VA: 0x2965A4C
	private void OnDisable() { }

	// RVA: 0x2965AD8 Offset: 0x2965AD8 VA: 0x2965AD8
	private void OnStepsButtonSelected() { }

	// RVA: 0x2965D90 Offset: 0x2965D90 VA: 0x2965D90
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups