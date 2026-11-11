public class MagicPassVaultProgressBarView : MonoBehaviour // TypeDefIndex: 3949
{
	// Fields
	[SerializeField]
	private Transform _startTransform; // 0x18
	[SerializeField]
	private Transform _endTransform; // 0x20
	[SerializeField]
	private SpriteRenderer _greenBar; // 0x28
	[SerializeField]
	private TextMeshPro _progressText; // 0x30
	[SerializeField]
	private float _minProgressBarSize; // 0x38
	[SerializeField]
	private MagicPassAnimationConfig _animationConfig; // 0x40
	private MagicPassViewModel _viewModel; // 0x48
	private float _fullDistance; // 0x50

	// Methods

	// RVA: 0x38EB0E8 Offset: 0x38EB0E8 VA: 0x38EB0E8
	public void Initialize(MagicPassViewModel viewModel) { }

	// RVA: 0x38EB708 Offset: 0x38EB708 VA: 0x38EB708
	private Tween UpdateFillAmount(float progressRatio, float duration = 0) { }

	// RVA: 0x38EB570 Offset: 0x38EB570 VA: 0x38EB570
	public Tween UpdateFillAmountByCurrentStep() { }

	// RVA: 0x38EB774 Offset: 0x38EB774 VA: 0x38EB774
	private Tween UpdateProgressText(int startValue, int endValue, int maxValue, float duration) { }

	// RVA: 0x38EB904 Offset: 0x38EB904 VA: 0x38EB904
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]