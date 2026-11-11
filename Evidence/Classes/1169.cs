public class SuperChargerProgressBar : MonoBehaviour // TypeDefIndex: 1169
{
	// Fields
	[SerializeField]
	private CircleProgressBar _circleProgressBar; // 0x18
	[SerializeField]
	private Transform _dividerTemplate; // 0x20
	[SerializeField]
	private Transform _frontDividerTemplate; // 0x28
	[SerializeField]
	private Transform _dividerParent; // 0x30
	[SerializeField]
	private Transform _fillTrail; // 0x38
	[SerializeField]
	private List<Transform> _dividers; // 0x40
	[SerializeField]
	private List<Transform> _frontDividers; // 0x48
	[SerializeField]
	private float _trailLeadAngle; // 0x50
	private readonly Queue<SuperChargerProgressBar.ProgressBarAnimQueue> _animationQueue; // 0x58
	private int _stepCount; // 0x60
	private int _activeDividerCount; // 0x64
	private int _requestedStepCount; // 0x68
	private float _currentProgress; // 0x6C
	private bool _isAnimating; // 0x70

	// Methods

	// RVA: 0x1617F04 Offset: 0x1617F04 VA: 0x1617F04
	public void Initialize() { }

	// RVA: 0x1618010 Offset: 0x1618010 VA: 0x1618010
	public void SetStepCount(int stepCount) { }

	// RVA: 0x1618198 Offset: 0x1618198 VA: 0x1618198
	public void PlayProgressAnimation(float progress, float duration, AnimationCurve animationCurve) { }

	// RVA: 0x16183EC Offset: 0x16183EC VA: 0x16183EC
	private void TryPlayNextAnimation() { }

	// RVA: 0x1618B98 Offset: 0x1618B98 VA: 0x1618B98
	private void PlayTrailAnimation(float progress, float duration, AnimationCurve animationCurve) { }

	// RVA: 0x1618E14 Offset: 0x1618E14 VA: 0x1618E14
	private void MoveTrailToProgress(float progress) { }

	// RVA: 0x1618A04 Offset: 0x1618A04 VA: 0x1618A04
	private void UpdateFrontDividers(float progress) { }

	// RVA: 0x16185B0 Offset: 0x16185B0 VA: 0x16185B0
	private void RebuildDividers() { }

	// RVA: 0x1618ED0 Offset: 0x1618ED0 VA: 0x1618ED0
	private float GetAngleForProgress(float progress) { }

	// RVA: 0x16182F0 Offset: 0x16182F0 VA: 0x16182F0
	public void Dispose() { }

	// RVA: 0x1618EEC Offset: 0x1618EEC VA: 0x1618EEC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x1618F80 Offset: 0x1618F80 VA: 0x1618F80
	private void <TryPlayNextAnimation>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x1618F88 Offset: 0x1618F88 VA: 0x1618F88
	private void <PlayTrailAnimation>b__19_0() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.ScriptableObjects
[CreateAssetMenu(fileName = "RainbowWaterAnimationConfig", menuName = "Configs/RainbowWaterAnimationConfig")]