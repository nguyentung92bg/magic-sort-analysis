public class DailyDateView : MonoBehaviour // TypeDefIndex: 4924
{
	// Fields
	[SerializeField]
	private Button _dailyDateButton; // 0x18
	[SerializeField]
	private SpriteRenderer _dailySpriteBackground; // 0x20
	[SerializeField]
	private SpriteRenderer _tickSprite; // 0x28
	[SerializeField]
	private TextMeshPro _dailyDateUpcomingText; // 0x30
	[SerializeField]
	private TextMeshPro _dailyDateDefaultText; // 0x38
	[SerializeField]
	private TextMeshPro _dailyDateActiveText; // 0x40
	[CompilerGenerated]
	private DailyDateModel <DailyDateModel>k__BackingField; // 0x48
	private DailyCalendarController _calendarController; // 0x58
	private DailyAnimationConfig _animationConfig; // 0x60

	// Properties
	public DailyDateModel DailyDateModel { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3E1F57C Offset: 0x3E1F57C VA: 0x3E1F57C
	public DailyDateModel get_DailyDateModel() { }

	[CompilerGenerated]
	// RVA: 0x3E1F588 Offset: 0x3E1F588 VA: 0x3E1F588
	private void set_DailyDateModel(DailyDateModel value) { }

	// RVA: 0x3E1F590 Offset: 0x3E1F590 VA: 0x3E1F590
	private void Awake() { }

	// RVA: 0x3E1F61C Offset: 0x3E1F61C VA: 0x3E1F61C
	private void OnDailyDateButtonClicked() { }

	// RVA: 0x3E1F668 Offset: 0x3E1F668 VA: 0x3E1F668
	public void SetDailyDateModel(DailyDateModel dailyDateModel) { }

	// RVA: 0x3E1F670 Offset: 0x3E1F670 VA: 0x3E1F670
	public void SetAnimationConfig(DailyAnimationConfig animationConfig) { }

	// RVA: 0x3E1F678 Offset: 0x3E1F678 VA: 0x3E1F678
	public void SetDailyDateView(DailyDateModel dailyDateModel) { }

	// RVA: 0x3E1F940 Offset: 0x3E1F940 VA: 0x3E1F940
	public void SetSelectedView() { }

	// RVA: 0x3E1F88C Offset: 0x3E1F88C VA: 0x3E1F88C
	private void SetUpcomingView() { }

	// RVA: 0x3E1F0D4 Offset: 0x3E1F0D4 VA: 0x3E1F0D4
	public void SetUnclaimedView() { }

	// RVA: 0x3E1F7D8 Offset: 0x3E1F7D8 VA: 0x3E1F7D8
	private void SetClaimedView() { }

	// RVA: 0x3E1F9A4 Offset: 0x3E1F9A4 VA: 0x3E1F9A4
	private void SetUnlockedView() { }

	// RVA: 0x3E1FA58 Offset: 0x3E1FA58 VA: 0x3E1FA58
	private void SetLockedView() { }

	// RVA: 0x3E1F76C Offset: 0x3E1F76C VA: 0x3E1F76C
	private void SetAllTexts(string text) { }

	// RVA: 0x3E1FB0C Offset: 0x3E1FB0C VA: 0x3E1FB0C
	public void ToggleDailyDateView(bool toggle) { }

	// RVA: 0x3E1FB34 Offset: 0x3E1FB34 VA: 0x3E1FB34
	public void SetBackUnselectedView() { }

	// RVA: 0x3E1FB3C Offset: 0x3E1FB3C VA: 0x3E1FB3C
	public void SetCalendarController(DailyCalendarController calendarController) { }

	// RVA: 0x3E1FB44 Offset: 0x3E1FB44 VA: 0x3E1FB44
	public Sequence PlayDateComplete() { }

	// RVA: 0x3E1FD64 Offset: 0x3E1FD64 VA: 0x3E1FD64
	private void DisableTexts() { }

	// RVA: 0x3E1FDD4 Offset: 0x3E1FDD4 VA: 0x3E1FDD4
	private void OnDestroy() { }

	// RVA: 0x3E1FE60 Offset: 0x3E1FE60 VA: 0x3E1FE60
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3E1FE68 Offset: 0x3E1FE68 VA: 0x3E1FE68
	private void <PlayDateComplete>b__27_0() { }
}

// Namespace: 
[CompilerGenerated]