public class MagicPassProgressBarView : MonoBehaviour // TypeDefIndex: 3937
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
	private TextMeshPro _stepText; // 0x38
	[SerializeField]
	private Transform _stepIconsParent; // 0x40
	[SerializeField]
	private Transform _stepIcon; // 0x48
	[SerializeField]
	private Transform _coinIcon; // 0x50
	[SerializeField]
	private TextMeshPro _coinText; // 0x58
	[SerializeField]
	private Button _button; // 0x60
	[SerializeField]
	private MagicPassAnimationConfig _animationConfig; // 0x68
	[SerializeField]
	private ParticleSystem _stepCompleteParticle; // 0x70
	[SerializeField]
	private Transform _starIconTransform; // 0x78
	[SerializeField]
	private ParticleSystem _lockHitParticle; // 0x80
	[SerializeField]
	private Transform _lockHitTransform; // 0x88
	[SerializeField]
	private Transform _vaultHitTransform; // 0x90
	[SerializeField]
	private ParticleSystem _vaultHitParticle; // 0x98
	[SerializeField]
	private TextMeshPro _completedText; // 0xA0
	private MagicPassViewModel _viewModel; // 0xA8
	private Sequence _progressSequence; // 0xB0
	private float _fullDistance; // 0xB8

	// Methods

	// RVA: 0x38E52E4 Offset: 0x38E52E4 VA: 0x38E52E4
	public void Initialize(MagicPassViewModel viewModel) { }

	// RVA: 0x38E63B0 Offset: 0x38E63B0 VA: 0x38E63B0
	public Tween PlayProgressAnimation() { }

	// RVA: 0x38E59A0 Offset: 0x38E59A0 VA: 0x38E59A0
	public Tween PlayInitialProgressAnimation() { }

	// RVA: 0x38E7984 Offset: 0x38E7984 VA: 0x38E7984
	private Tween UpdateFillAmount(float progressRatio, float duration = 0) { }

	// RVA: 0x38E79F0 Offset: 0x38E79F0 VA: 0x38E79F0
	private Tween UpdateProgressText(int startValue, int endValue, int maxValue, float duration) { }

	// RVA: 0x38E7B84 Offset: 0x38E7B84 VA: 0x38E7B84
	private void OnButtonClicked() { }

	// RVA: 0x38E7908 Offset: 0x38E7908 VA: 0x38E7908
	public void Dispose() { }

	// RVA: 0x38E7C54 Offset: 0x38E7C54 VA: 0x38E7C54
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38E7C5C Offset: 0x38E7C5C VA: 0x38E7C5C
	private void <PlayProgressAnimation>b__22_1() { }

	[CompilerGenerated]
	// RVA: 0x38E7CF0 Offset: 0x38E7CF0 VA: 0x38E7CF0
	private void <PlayProgressAnimation>b__22_2() { }

	[CompilerGenerated]
	// RVA: 0x38E7D0C Offset: 0x38E7D0C VA: 0x38E7D0C
	private void <PlayProgressAnimation>b__22_3() { }

	[CompilerGenerated]
	// RVA: 0x38E7D5C Offset: 0x38E7D5C VA: 0x38E7D5C
	private void <PlayProgressAnimation>b__22_6() { }

	[CompilerGenerated]
	// RVA: 0x38E7E28 Offset: 0x38E7E28 VA: 0x38E7E28
	private void <PlayProgressAnimation>b__22_7() { }

	[CompilerGenerated]
	// RVA: 0x38E7E44 Offset: 0x38E7E44 VA: 0x38E7E44
	private void <PlayInitialProgressAnimation>b__23_0() { }

	[CompilerGenerated]
	// RVA: 0x38E7E60 Offset: 0x38E7E60 VA: 0x38E7E60
	private void <PlayInitialProgressAnimation>b__23_1() { }

	[CompilerGenerated]
	// RVA: 0x38E7E8C Offset: 0x38E7E8C VA: 0x38E7E8C
	private void <PlayInitialProgressAnimation>b__23_2() { }

	[CompilerGenerated]
	// RVA: 0x38E7EB8 Offset: 0x38E7EB8 VA: 0x38E7EB8
	private void <PlayInitialProgressAnimation>b__23_3() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI