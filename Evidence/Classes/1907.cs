public class WheelOfFortuneRewardTargetController : MonoBehaviour // TypeDefIndex: 1907
{
	// Fields
	[SerializeField]
	private List<WheelOfFortuneTokenContainer> _rewardTargets; // 0x18
	[SerializeField]
	private WheelOfFortuneViewAdapter _viewAdapter; // 0x20
	private WheelOfFortuneViewModel _viewModel; // 0x28
	private WheelOfFortuneService _service; // 0x30

	// Methods

	// RVA: 0x319AEAC Offset: 0x319AEAC VA: 0x319AEAC
	public void Initialize(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x31A1E6C Offset: 0x31A1E6C VA: 0x31A1E6C
	public Transform GetRewardTargetTransform() { }

	// RVA: 0x31A1F30 Offset: 0x31A1F30 VA: 0x31A1F30
	public WheelOfFortuneTokenContainer GetCurrentRewardTarget() { }

	// RVA: 0x31A1FE8 Offset: 0x31A1FE8 VA: 0x31A1FE8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI