public class SuperChargerButtonUI : MonoBehaviour // TypeDefIndex: 1167
{
	// Fields
	[SerializeField]
	private SuperChargerProgressBar _progressBar; // 0x18
	[SerializeField]
	private List<SuperChargerButtonInnerView> _innerViews; // 0x20
	private SuperChargerButtonInnerView _activeView; // 0x28

	// Methods

	// RVA: 0x1617D18 Offset: 0x1617D18 VA: 0x1617D18
	public void Initialize(SuperChargerType type) { }

	// RVA: 0x1617F78 Offset: 0x1617F78 VA: 0x1617F78
	public Transform GetTrailPivot() { }

	// RVA: 0x1617FF8 Offset: 0x1617FF8 VA: 0x1617FF8
	public void SetStepCount(int stepCount) { }

	// RVA: 0x16180BC Offset: 0x16180BC VA: 0x16180BC
	public void PlayProgressAnimation(float progress, float duration, AnimationCurve animationCurve, bool isInstant = False) { }

	// RVA: 0x1618254 Offset: 0x1618254 VA: 0x1618254
	public void Dispose() { }

	// RVA: 0x1618364 Offset: 0x1618364 VA: 0x1618364
	public void PlayUseAnimation() { }

	// RVA: 0x16183E4 Offset: 0x16183E4 VA: 0x16183E4
	public void .ctor() { }
}

// Namespace: 