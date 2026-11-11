public class CollectionTokenRotator : MonoBehaviour // TypeDefIndex: 4625
{
	// Fields
	[Header("Rotation Settings")]
	public float swipeSensitivity; // 0x18
	public float inertiaDamping; // 0x1C
	[Header("Return to Idle Settings")]
	public float returnSpeed; // 0x20
	[Header("Idle Settings")]
	public float idleAngle; // 0x24
	public float idleSpeed; // 0x28
	private float rotationVelocity; // 0x2C
	private Vector2 lastTouchPos; // 0x30
	private bool dragging; // 0x38
	private Quaternion initialRotation; // 0x3C

	// Methods

	// RVA: 0x3A7038C Offset: 0x3A7038C VA: 0x3A7038C
	private void Start() { }

	// RVA: 0x3A703BC Offset: 0x3A703BC VA: 0x3A703BC
	private void Update() { }

	// RVA: 0x3A70638 Offset: 0x3A70638 VA: 0x3A70638
	private void HandleTouchInput() { }

	// RVA: 0x3A706C8 Offset: 0x3A706C8 VA: 0x3A706C8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI