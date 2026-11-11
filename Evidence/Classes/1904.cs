public class WheelOfFortuneProgressBarStageView : MonoBehaviour // TypeDefIndex: 1904
{
	// Fields
	[SerializeField]
	private Transform _tickTransform; // 0x18
	[SerializeField]
	private Transform _wheelGlow; // 0x20
	[SerializeField]
	private Transform _lock; // 0x28
	[SerializeField]
	private SpriteRenderer _wheelRenderer; // 0x30
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x38
	private WheelOfFortuneStageViewModel _stageViewModel; // 0x40
	private WheelOfFortuneViewModel _viewModel; // 0x48
	private Sequence _claimSequence; // 0x50
	private Sequence _revealTaskSequence; // 0x58

	// Methods

	// RVA: 0x31A0028 Offset: 0x31A0028 VA: 0x31A0028
	public void Initialize(WheelOfFortuneViewModel viewModel, WheelOfFortuneStageViewModel stageViewModel) { }

	// RVA: 0x31A022C Offset: 0x31A022C VA: 0x31A022C
	public void UpdateView(WheelOfFortuneViewModel viewModel, WheelOfFortuneStageViewModel stageViewModel) { }

	// RVA: 0x31A0648 Offset: 0x31A0648 VA: 0x31A0648
	public Tween PlayClaimedAnimation(int stageId) { }

	// RVA: 0x31A0360 Offset: 0x31A0360 VA: 0x31A0360
	public Tween PlayUnlockedAnimation(int stageId) { }

	// RVA: 0x31A0880 Offset: 0x31A0880 VA: 0x31A0880
	public void Dispose() { }

	// RVA: 0x31A09E0 Offset: 0x31A09E0 VA: 0x31A09E0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]