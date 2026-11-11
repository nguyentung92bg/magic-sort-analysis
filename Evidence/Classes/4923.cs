public class DailyController : MonoBehaviour // TypeDefIndex: 4923
{
	// Fields
	[SerializeField]
	private DailyProgressBarController _progressBarController; // 0x18
	[SerializeField]
	private DailyCalendarController _calendarController; // 0x20
	[SerializeField]
	private GameObject _lockedView; // 0x28
	[SerializeField]
	private GameObject _unlockedView; // 0x30
	[SerializeField]
	private FingerView _fingerView; // 0x38
	[SerializeField]
	public TextMeshPro _lockedText; // 0x40
	[SerializeField]
	private DailyViewExtender _dailyViewExtender; // 0x48
	private DailyViewModel _currentDailyViewModel; // 0x50
	private DailyService _dailyService; // 0x70
	private Sequence _mainSequence; // 0x78

	// Methods

	// RVA: 0x3E1DBE4 Offset: 0x3E1DBE4 VA: 0x3E1DBE4
	public void Show() { }

	// RVA: 0x3E1DDE8 Offset: 0x3E1DDE8 VA: 0x3E1DDE8
	public void Initialize() { }

	// RVA: 0x3E1E024 Offset: 0x3E1E024 VA: 0x3E1E024
	public void Dispose() { }

	// RVA: 0x3E1E420 Offset: 0x3E1E420 VA: 0x3E1E420
	private void SelectFirstOpenDailyDateView(DailyViewModel viewModel) { }

	// RVA: 0x3E1DC14 Offset: 0x3E1DC14 VA: 0x3E1DC14
	private void UpdateView() { }

	// RVA: 0x3E1E880 Offset: 0x3E1E880 VA: 0x3E1E880
	private void UpdateViewByDate(DateTime date) { }

	// RVA: 0x3E1E4BC Offset: 0x3E1E4BC VA: 0x3E1E4BC
	public void SetDailyViewModel(DailyViewModel viewModel) { }

	// RVA: 0x3E1F024 Offset: 0x3E1F024 VA: 0x3E1F024
	public void SetUnclaimedViewAtDate(DateTime dateTime) { }

	// RVA: 0x3E1F188 Offset: 0x3E1F188 VA: 0x3E1F188
	public Sequence PlayClaimDay(DateTime dateTime) { }

	// RVA: 0x3E1F518 Offset: 0x3E1F518 VA: 0x3E1F518
	public void PlayFirstIntroduceFingerAnimation() { }

	// RVA: 0x3E1F574 Offset: 0x3E1F574 VA: 0x3E1F574
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI