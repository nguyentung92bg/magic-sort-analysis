public class CollectionProgressView : MonoBehaviour // TypeDefIndex: 4605
{
	// Fields
	[SerializeField]
	private Transform _startTransform; // 0x18
	[SerializeField]
	private Transform _endTransform; // 0x20
	[SerializeField]
	private SpriteRenderer _greenBar; // 0x28
	[SerializeField]
	private SpriteRenderer _progressBarBackground; // 0x30
	[SerializeField]
	private TextMeshPro _progressText; // 0x38
	[SerializeField]
	private Transform _progressBarParent; // 0x40
	[SerializeField]
	private Transform _completedIcon; // 0x48
	[SerializeField]
	private Transform _themeRewardParent; // 0x50
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x58
	private CurrencyView _rewardCurrencyView; // 0x60
	private float _fullDistance; // 0x68

	// Methods

	// RVA: 0x3A6C3FC Offset: 0x3A6C3FC VA: 0x3A6C3FC
	public void SetBackground(Sprite background) { }

	// RVA: 0x3A67764 Offset: 0x3A67764 VA: 0x3A67764
	public void UpdateProgress(int currentProgress, int maxProgress) { }

	// RVA: 0x3A6C4E8 Offset: 0x3A6C4E8 VA: 0x3A6C4E8
	public void UpdateReward(RewardModel rewardModel) { }

	// RVA: 0x3A6C6C8 Offset: 0x3A6C6C8 VA: 0x3A6C6C8
	public bool IsRewardViewInitialized() { }

	// RVA: 0x3A6C494 Offset: 0x3A6C494 VA: 0x3A6C494
	private void UpdateFillAmount(float progressRatio) { }

	// RVA: 0x3A6C728 Offset: 0x3A6C728 VA: 0x3A6C728
	public Tween PlayCompleteAnimation(float duration) { }

	// RVA: 0x3A6C898 Offset: 0x3A6C898 VA: 0x3A6C898
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A6C8A0 Offset: 0x3A6C8A0 VA: 0x3A6C8A0
	private void <PlayCompleteAnimation>b__16_0() { }
}

// Namespace: 
[CompilerGenerated]