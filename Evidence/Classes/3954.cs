public class MagicPassVerticalProgressBarView : MonoBehaviour // TypeDefIndex: 3954
{
	// Fields
	[SerializeField]
	private SpriteRenderer _background; // 0x18
	[SerializeField]
	private SpriteRenderer _greenBar; // 0x20
	[SerializeField]
	private SpriteRenderer _cap; // 0x28
	[SerializeField]
	private MagicPassAnimationConfig _animationConfig; // 0x30
	private MagicPassViewModel _viewModel; // 0x38
	private float _fullDistance; // 0x40

	// Methods

	// RVA: 0x38E9D68 Offset: 0x38E9D68 VA: 0x38E9D68
	public void Initialize(MagicPassViewModel viewModel, Vector3 startPosition, Vector3 endPosition) { }

	// RVA: 0x38EA144 Offset: 0x38EA144 VA: 0x38EA144
	public Tween UpdateFillAmountToCurrentStep(float duration = 0) { }

	// RVA: 0x38EC584 Offset: 0x38EC584 VA: 0x38EC584
	public Tween UpdateFillAmountByStep(int step, float duration = 0) { }

	// RVA: 0x38EA008 Offset: 0x38EA008 VA: 0x38EA008
	public Tween UpdateFillAmount(float progressRatio, float duration = 0, float customMargin = 0) { }

	// RVA: 0x38EC660 Offset: 0x38EC660 VA: 0x38EC660
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI