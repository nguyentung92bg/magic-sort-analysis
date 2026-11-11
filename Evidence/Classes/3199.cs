public class TreasureDrillController : MonoBehaviour // TypeDefIndex: 3199
{
	// Fields
	[SerializeField]
	private TreasureDrillScrollController _drillScrollController; // 0x18
	[SerializeField]
	private TreasureDrillProgressView _treasureDrillProgressView; // 0x20
	[SerializeField]
	private TreasureDrillAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private TreasureDrillRibbonView _ribbon; // 0x30
	private TreasureDrillViewModel _viewModel; // 0x38
	private Sequence _unlockAnimationSequence; // 0x40
	private Sequence _progressAnimationSequence; // 0x48
	private List<Sequence> _claimAnimationSequences; // 0x50
	private TreasureDrillService _service; // 0x58

	// Methods

	// RVA: 0x3307234 Offset: 0x3307234 VA: 0x3307234
	public void Initialize() { }

	// RVA: 0x33078B0 Offset: 0x33078B0 VA: 0x33078B0
	public void Dispose() { }

	// RVA: 0x3307D44 Offset: 0x3307D44 VA: 0x3307D44
	private void OnClaimStep() { }

	// RVA: 0x3307E60 Offset: 0x3307E60 VA: 0x3307E60
	private void OnUnlocked() { }

	// RVA: 0x3307F7C Offset: 0x3307F7C VA: 0x3307F7C
	private void OnProgressbarAnimation() { }

	[Button]
	// RVA: 0x3308098 Offset: 0x3308098 VA: 0x3308098
	public void PlayUnlockedAnimation() { }

	// RVA: 0x33083D0 Offset: 0x33083D0 VA: 0x33083D0
	public void PlayClaimAnimation(int index) { }

	// RVA: 0x3307624 Offset: 0x3307624 VA: 0x3307624
	private void PlayProgressAnimation() { }

	// RVA: 0x33085A4 Offset: 0x33085A4 VA: 0x33085A4
	private Sequence PlayProgressBarAnimation() { }

	// RVA: 0x330892C Offset: 0x330892C VA: 0x330892C
	private Sequence PlayProgressBarAndTaskCompleteTaskIfNeeded(TreasureDrillStepElementView stepView, float progressBarAnimationDuration) { }

	[Button]
	// RVA: 0x3308570 Offset: 0x3308570 VA: 0x3308570
	private Sequence PlayDrillProgressAnimation() { }

	// RVA: 0x3308C30 Offset: 0x3308C30 VA: 0x3308C30
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3308CB8 Offset: 0x3308CB8 VA: 0x3308CB8
	private void <PlayUnlockedAnimation>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x3308D40 Offset: 0x3308D40 VA: 0x3308D40
	private void <PlayUnlockedAnimation>b__14_1() { }
}

// Namespace: 
[CompilerGenerated]