public class LoadingAnimationConfig : ScriptableObject // TypeDefIndex: 5127
{
	// Fields
	[SerializeField]
	private float rotationDuration; // 0x18
	[SerializeField]
	private Vector3 rotationAxis; // 0x1C
	[SerializeField]
	private Ease rotationEase; // 0x28
	[SerializeField]
	public float NoInternetMoveDuration; // 0x2C
	[SerializeField]
	public float NoInternetFadeInDuration; // 0x30
	[SerializeField]
	public float NoInternetFadeOutDuration; // 0x34
	[SerializeField]
	public float NoInternetIdleDuration; // 0x38
	[SerializeField]
	public AnimationCurve NoInternetMoveCurve; // 0x40

	// Properties
	public float RotationDuration { get; }
	public Vector3 RotationAxis { get; }
	public Ease RotationEase { get; }

	// Methods

	// RVA: 0x137BF4C Offset: 0x137BF4C VA: 0x137BF4C
	public float get_RotationDuration() { }

	// RVA: 0x137BF54 Offset: 0x137BF54 VA: 0x137BF54
	public Vector3 get_RotationAxis() { }

	// RVA: 0x137BF60 Offset: 0x137BF60 VA: 0x137BF60
	public Ease get_RotationEase() { }

	// RVA: 0x137BF68 Offset: 0x137BF68 VA: 0x137BF68
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Loading.Scripts