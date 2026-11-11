public class BoatRushProgressBar : MonoBehaviour // TypeDefIndex: 4877
{
	// Fields
	[SerializeField]
	private Transform _rootView; // 0x18
	[SerializeField]
	private Transform _currencyPivot; // 0x20
	[SerializeField]
	private SpriteRenderer _progressBarRenderer; // 0x28
	[SerializeField]
	private TMP_Text _progressText; // 0x30
	[SerializeField]
	private BoatRushAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private Transform _progressBarDisappearPosition; // 0x40
	[SerializeField]
	private Transform _progressBarAppearPosition; // 0x48
	[SerializeField]
	private ParticleSystem _iconParticle; // 0x50
	[SerializeField]
	private List<Transform> _chests; // 0x58
	private BoatRushService _boatRushService; // 0x60
	private BoatRushProgressBarViewModel _viewModel; // 0x68

	// Methods

	// RVA: 0x40FD604 Offset: 0x40FD604 VA: 0x40FD604
	public void Initialize(BoatRushProgressBarViewModel viewModel) { }

	// RVA: 0x40FD6AC Offset: 0x40FD6AC VA: 0x40FD6AC
	private void SetView() { }

	// RVA: 0x40FD7D8 Offset: 0x40FD7D8 VA: 0x40FD7D8
	private void SetChestSprite() { }

	// RVA: 0x40FD88C Offset: 0x40FD88C VA: 0x40FD88C
	private Sequence PlayProgressBarAnimation() { }

	// RVA: 0x40FDD08 Offset: 0x40FDD08 VA: 0x40FDD08
	public Tween ProgressBarAppearAnimation() { }

	// RVA: 0x40FDC84 Offset: 0x40FDC84 VA: 0x40FDC84
	private Tween ProgressBarDisappearAnimation() { }

	// RVA: 0x40FDD8C Offset: 0x40FDD8C VA: 0x40FDD8C
	public Sequence OnMedalReachedToCurrency() { }

	// RVA: 0x40FDA24 Offset: 0x40FDA24 VA: 0x40FDA24
	private Tween PlayProgressBarFillAmount(int target, int max, float duration) { }

	// RVA: 0x40FDB84 Offset: 0x40FDB84 VA: 0x40FDB84
	private Tween PlayProgressBarTextIncrease(int current, int target, int max, float duration) { }

	// RVA: 0x40FDF14 Offset: 0x40FDF14 VA: 0x40FDF14
	public void Dispose() { }

	// RVA: 0x40FDF38 Offset: 0x40FDF38 VA: 0x40FDF38
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x40FDF40 Offset: 0x40FDF40 VA: 0x40FDF40
	private void <OnMedalReachedToCurrency>b__17_0() { }

	[CompilerGenerated]
	// RVA: 0x40FDF5C Offset: 0x40FDF5C VA: 0x40FDF5C
	private float <PlayProgressBarFillAmount>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x40FDF78 Offset: 0x40FDF78 VA: 0x40FDF78
	private void <PlayProgressBarFillAmount>b__18_1(float x) { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI