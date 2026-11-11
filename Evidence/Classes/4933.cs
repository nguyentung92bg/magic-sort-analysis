public class DailyProgressBarController : MonoBehaviour // TypeDefIndex: 4933
{
	// Fields
	[SerializeField]
	private CurrencyViewFactory _dailyCurrencyViewFactory; // 0x18
	[SerializeField]
	private List<DailyProgressRewardStepView> _rewardSteps; // 0x20
	[SerializeField]
	private SpriteRenderer _progressBarBody; // 0x28
	[SerializeField]
	private SpriteRenderer _progressBarPivot; // 0x30
	[SerializeField]
	private TextMeshPro _progressBarPivotText; // 0x38
	[SerializeField]
	private DailyAnimationConfig _animationConfig; // 0x40
	private readonly List<CurrencyView> _usingCurrencyViews; // 0x48

	// Methods

	// RVA: 0x3E1EAD8 Offset: 0x3E1EAD8 VA: 0x3E1EAD8
	public void SetProgressBarStepRewards(int currentProgress, RewardModel rewardModel) { }

	// RVA: 0x3E1E1AC Offset: 0x3E1E1AC VA: 0x3E1E1AC
	public void Dispose() { }

	// RVA: 0x3E1F2B4 Offset: 0x3E1F2B4 VA: 0x3E1F2B4
	public Sequence PlayProgressBar(int currentDay, int targetDay) { }

	// RVA: 0x3E1EDB8 Offset: 0x3E1EDB8 VA: 0x3E1EDB8
	public void SetProgressBarToDay(int targetDay) { }

	// RVA: 0x3E215A0 Offset: 0x3E215A0 VA: 0x3E215A0
	private float CalculateProgressBarSize(int targetDay) { }

	// RVA: 0x3E212D0 Offset: 0x3E212D0 VA: 0x3E212D0
	private float GetProgressBarDayXPosition(int day) { }

	// RVA: 0x3E1EA20 Offset: 0x3E1EA20 VA: 0x3E1EA20
	public void SetLastStepDate(int maxProgress) { }

	// RVA: 0x3E1E8D0 Offset: 0x3E1E8D0 VA: 0x3E1E8D0
	public void RecycleCurrencyViews() { }

	// RVA: 0x3E215D8 Offset: 0x3E215D8 VA: 0x3E215D8
	private Tween PlayProgressBarSize(float targetBarSizeX) { }

	// RVA: 0x3E21710 Offset: 0x3E21710 VA: 0x3E21710
	private Tween PlayProgressBarPivot(float targetPivotXPosition) { }

	// RVA: 0x3E2179C Offset: 0x3E2179C VA: 0x3E2179C
	private Tween PlayProgressBarPivotText(int targetDay) { }

	// RVA: 0x3E21C18 Offset: 0x3E21C18 VA: 0x3E21C18
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3E21CA0 Offset: 0x3E21CA0 VA: 0x3E21CA0
	private float <PlayProgressBarSize>b__15_0() { }

	[CompilerGenerated]
	// RVA: 0x3E21CBC Offset: 0x3E21CBC VA: 0x3E21CBC
	private void <PlayProgressBarSize>b__15_1(float x) { }

	[CompilerGenerated]
	// RVA: 0x3E21CF8 Offset: 0x3E21CF8 VA: 0x3E21CF8
	private int <PlayProgressBarPivotText>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x3E21D24 Offset: 0x3E21D24 VA: 0x3E21D24
	private void <PlayProgressBarPivotText>b__17_1(int x) { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts.UI