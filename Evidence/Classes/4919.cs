public class DailyCalendarController : MonoBehaviour // TypeDefIndex: 4919
{
	// Fields
	[SerializeField]
	private List<DailyDateView> _dailyDateViews; // 0x18
	[SerializeField]
	private DailyAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private TextMeshPro _monthText; // 0x28
	[SerializeField]
	private DailyPlayButton _dailyPlayButton; // 0x30
	[SerializeField]
	public DailySpriteConfig SpriteConfig; // 0x38
	private DailyDateView _currentDailyDateView; // 0x40

	// Methods

	// RVA: 0x410692C Offset: 0x410692C VA: 0x410692C
	public void Initialize() { }

	// RVA: 0x4106AB0 Offset: 0x4106AB0 VA: 0x4106AB0
	public void Dispose() { }

	// RVA: 0x4106AB4 Offset: 0x4106AB4 VA: 0x4106AB4
	public void SetPlayButtonDate(DateTime dateTime) { }

	// RVA: 0x4106AD0 Offset: 0x4106AD0 VA: 0x4106AD0
	public void SetDailyPlayButtonViewForState(DailyPlayButtonState state) { }

	// RVA: 0x4106AEC Offset: 0x4106AEC VA: 0x4106AEC
	public void SetDailyPlayButtonView(DailyDateModel dateModel) { }

	// RVA: 0x4106C2C Offset: 0x4106C2C VA: 0x4106C2C
	public void SelectFirstOpenDailyDateView(DailyViewModel viewModel) { }

	// RVA: 0x4106D74 Offset: 0x4106D74 VA: 0x4106D74
	public void SetCurrentSelectedDailyDate(DailyDateView dailyDateView) { }

	// RVA: 0x4106E30 Offset: 0x4106E30 VA: 0x4106E30
	public void SetDailyDateViews(DailyViewModel viewModels) { }

	// RVA: 0x4106F60 Offset: 0x4106F60 VA: 0x4106F60
	private void ResetAllDailyDateViews() { }

	// RVA: 0x4106FF0 Offset: 0x4106FF0 VA: 0x4106FF0
	public DailyDateView GetDailyDateView(int day) { }

	// RVA: 0x4107048 Offset: 0x4107048 VA: 0x4107048
	public void SetMonthText(DateTime dateTime) { }

	// RVA: 0x4107080 Offset: 0x4107080 VA: 0x4107080
	public Sequence PlayIndividualDateClaim(DateTime dateToPlay) { }

	// RVA: 0x4107134 Offset: 0x4107134 VA: 0x4107134
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI