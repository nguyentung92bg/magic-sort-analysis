public class WheelOfFortuneTaskProgressBar : MonoBehaviour // TypeDefIndex: 1922
{
	// Fields
	[SerializeField]
	private TextMeshPro _progressText; // 0x18
	[SerializeField]
	private SpriteRenderer _progressBarSpriteRenderer; // 0x20
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x28

	// Methods

	// RVA: 0x31A5358 Offset: 0x31A5358 VA: 0x31A5358
	public void Initialize(int currentAmount, int requiredAmount) { }

	// RVA: 0x31A54B4 Offset: 0x31A54B4 VA: 0x31A54B4
	public Sequence PlayProgressBarIncreaseAnimation(int previous, int target, int max, float duration) { }

	[Button]
	// RVA: 0x31A5590 Offset: 0x31A5590 VA: 0x31A5590
	private Tween PlayProgressBarFillAmount(int target, int max, float duration) { }

	[Button]
	// RVA: 0x31A5710 Offset: 0x31A5710 VA: 0x31A5710
	private Tween PlayProgressBarTextIncrease(int current, int target, int max, float duration) { }

	// RVA: 0x31A5818 Offset: 0x31A5818 VA: 0x31A5818
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A5820 Offset: 0x31A5820 VA: 0x31A5820
	private float <PlayProgressBarFillAmount>b__5_0() { }

	[CompilerGenerated]
	// RVA: 0x31A583C Offset: 0x31A583C VA: 0x31A583C
	private void <PlayProgressBarFillAmount>b__5_1(float x) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]