public class TreasureDrillProgressBar : MonoBehaviour // TypeDefIndex: 3219
{
	// Fields
	[SerializeField]
	private TextMeshPro _progressText; // 0x18
	[SerializeField]
	private SpriteRenderer _progressBarSpriteRenderer; // 0x20
	[SerializeField]
	private TreasureDrillPopUpConfig _treasureDrillPopUpConfig; // 0x28
	[SerializeField]
	private TreasureDrillAnimationConfig _animationConfig; // 0x30

	// Methods

	// RVA: 0x330CD68 Offset: 0x330CD68 VA: 0x330CD68
	public void Initialize(int currentAmount, int requiredAmount) { }

	// RVA: 0x330CEC4 Offset: 0x330CEC4 VA: 0x330CEC4
	public Sequence PlayProgressBarIncreaseAnimation(TreasureDrillStepViewModel viewModel, float duration) { }

	[Button]
	// RVA: 0x330CF94 Offset: 0x330CF94 VA: 0x330CF94
	private Tween PlayProgressBarFillAmount(int target, int max, float duration) { }

	[Button]
	// RVA: 0x330D0F0 Offset: 0x330D0F0 VA: 0x330D0F0
	private Tween PlayProgressBarTextIncrease(int current, int target, int max, float duration) { }

	// RVA: 0x330D1F8 Offset: 0x330D1F8 VA: 0x330D1F8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x330D200 Offset: 0x330D200 VA: 0x330D200
	private float <PlayProgressBarFillAmount>b__6_0() { }

	[CompilerGenerated]
	// RVA: 0x330D21C Offset: 0x330D21C VA: 0x330D21C
	private void <PlayProgressBarFillAmount>b__6_1(float x) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]