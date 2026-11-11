public class WatchAndWinView : MonoBehaviour // TypeDefIndex: 3161
{
	// Fields
	[SerializeField]
	private List<TextMeshPro> _coinTexts; // 0x18
	[SerializeField]
	private List<TextMeshPro> _requiredAdCountsToWatchTexts; // 0x20
	[SerializeField]
	private List<GameObject> _greenTicks; // 0x28
	[SerializeField]
	private List<SpriteRenderer> _progressSeparators; // 0x30
	[SerializeField]
	private Sprite _blueSeparator; // 0x38
	[SerializeField]
	private Sprite _brownSeparator; // 0x40
	[SerializeField]
	private SpriteRenderer _progressBarSprite; // 0x48
	[SerializeField]
	private Transform _pivot; // 0x50
	[SerializeField]
	private TextMeshPro _pivotText; // 0x58
	[SerializeField]
	private WatchAndWinAnimationConfig _config; // 0x60

	// Methods

	// RVA: 0x32FE700 Offset: 0x32FE700 VA: 0x32FE700
	public void Show(List<RewardModel> rewardModels, int progress, int maxProgress, int stepProgress, List<int> requiredAdCountsToWatch) { }

	// RVA: 0x32FEC08 Offset: 0x32FEC08 VA: 0x32FEC08
	public void Hide() { }

	// RVA: 0x32FEC2C Offset: 0x32FEC2C VA: 0x32FEC2C
	public Sequence IncreaseProgressAnimation(int progress, List<int> requiredAdCountsToWatch, int stepProgress) { }

	// RVA: 0x32FEB18 Offset: 0x32FEB18 VA: 0x32FEB18
	private void SetRequiredAdCountsTexts(List<int> requiredAdCountsToWatch) { }

	// RVA: 0x32FEA78 Offset: 0x32FEA78 VA: 0x32FEA78
	private void SetPivot(int progress, List<int> requiredAdCountsToWatch) { }

	// RVA: 0x32FE9C4 Offset: 0x32FE9C4 VA: 0x32FE9C4
	public void SetSeparatorSprites(int stepProgress) { }

	// RVA: 0x32FE79C Offset: 0x32FE79C VA: 0x32FE79C
	public void SetCoins(List<RewardModel> rewardModels, int stepProgress) { }

	// RVA: 0x32FE924 Offset: 0x32FE924 VA: 0x32FE924
	public void SetGreenTicks(int stepProgress) { }

	// RVA: 0x32FE8D8 Offset: 0x32FE8D8 VA: 0x32FE8D8
	public void SetProgressBar(int progress, List<int> requiredAdCountsToWatch) { }

	// RVA: 0x32FEEF4 Offset: 0x32FEEF4 VA: 0x32FEEF4
	private Tween PlayProgressBarSize(float targetBarSizeX) { }

	// RVA: 0x32FF02C Offset: 0x32FF02C VA: 0x32FF02C
	private Tween PlayProgressBarPivot(float targetPivotXPosition) { }

	// RVA: 0x32FF230 Offset: 0x32FF230 VA: 0x32FF230
	private Tween PlayGreenTickAt(int progress) { }

	// RVA: 0x32FF0AC Offset: 0x32FF0AC VA: 0x32FF0AC
	private Tween PlayPivotText(int from, int to) { }

	// RVA: 0x32FF32C Offset: 0x32FF32C VA: 0x32FF32C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x32FF334 Offset: 0x32FF334 VA: 0x32FF334
	private float <PlayProgressBarSize>b__19_0() { }

	[CompilerGenerated]
	// RVA: 0x32FF350 Offset: 0x32FF350 VA: 0x32FF350
	private void <PlayProgressBarSize>b__19_1(float x) { }
}

// Namespace: 
[CompilerGenerated]