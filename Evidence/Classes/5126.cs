public class CustomWarningTextManager : MonoBehaviour // TypeDefIndex: 5126
{
	// Fields
	[SerializeField]
	private LoadingAnimationConfig _loadingAnimationConfig; // 0x18
	[SerializeField]
	private TextMeshPro _customText; // 0x20
	[SerializeField]
	private Transform _initialPositionTransform; // 0x28
	[SerializeField]
	private Transform _finalPositionTransform; // 0x30
	private float _positionDifference; // 0x38
	private bool isAnimationPlaying; // 0x3C
	private Sequence _sequence; // 0x40

	// Methods

	// RVA: 0x137B7A8 Offset: 0x137B7A8 VA: 0x137B7A8
	private void Awake() { }

	// RVA: 0x137B9AC Offset: 0x137B9AC VA: 0x137B9AC
	private void OnDestroy() { }

	// RVA: 0x137BBA0 Offset: 0x137BBA0 VA: 0x137BBA0
	private void CancelAnimations() { }

	// RVA: 0x137BBE8 Offset: 0x137BBE8 VA: 0x137BBE8
	private void StartAnimation(string message, Vector3 position) { }

	// RVA: 0x137BF10 Offset: 0x137BF10 VA: 0x137BF10
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x137BF18 Offset: 0x137BF18 VA: 0x137BF18
	private void <StartAnimation>b__10_0() { }
}

// Namespace: Modules.Contexts.Application.Loading.Scripts
[CreateAssetMenu(fileName = "LoadingAnimationConfig", menuName = "Configs/LoadingAnimationConfig", order = 0)]