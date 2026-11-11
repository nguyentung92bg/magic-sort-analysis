public class TouchAnimationConfig : ScriptableObject // TypeDefIndex: 585
{
	// Fields
	[SerializeField]
	private AnimationCurve _touchDownAnimationCurve; // 0x18
	[SerializeField]
	private Vector3 _touchDownAnimationScale; // 0x20
	[SerializeField]
	private float _touchDownAnimationDuration; // 0x2C

	// Properties
	public AnimationCurve TouchDownAnimationCurve { get; }
	public Vector3 TouchDownAnimationScale { get; }
	public float TouchDownAnimationDuration { get; }

	// Methods

	// RVA: 0x4003B04 Offset: 0x4003B04 VA: 0x4003B04
	public AnimationCurve get_TouchDownAnimationCurve() { }

	// RVA: 0x4003B0C Offset: 0x4003B0C VA: 0x4003B0C
	public Vector3 get_TouchDownAnimationScale() { }

	// RVA: 0x4003B18 Offset: 0x4003B18 VA: 0x4003B18
	public float get_TouchDownAnimationDuration() { }

	// RVA: 0x4003B20 Offset: 0x4003B20 VA: 0x4003B20
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Touch