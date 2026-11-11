public class CameraController : MonoBehaviour // TypeDefIndex: 66
{
	// Fields
	private Transform cameraTransform; // 0x18
	private Transform dummyTarget; // 0x20
	public Transform CameraTarget; // 0x28
	public float FollowDistance; // 0x30
	public float MaxFollowDistance; // 0x34
	public float MinFollowDistance; // 0x38
	public float ElevationAngle; // 0x3C
	public float MaxElevationAngle; // 0x40
	public float MinElevationAngle; // 0x44
	public float OrbitalAngle; // 0x48
	public CameraController.CameraModes CameraMode; // 0x4C
	public bool MovementSmoothing; // 0x50
	public bool RotationSmoothing; // 0x51
	private bool previousSmoothing; // 0x52
	public float MovementSmoothingValue; // 0x54
	public float RotationSmoothingValue; // 0x58
	public float MoveSensitivity; // 0x5C
	private Vector3 currentVelocity; // 0x60
	private Vector3 desiredPosition; // 0x6C
	private float mouseX; // 0x78
	private float mouseY; // 0x7C
	private Vector3 moveVector; // 0x80
	private float mouseWheel; // 0x8C
	private const string event_SmoothingValue = "Slider - Smoothing Value";
	private const string event_FollowDistance = "Slider - Camera Zoom";

	// Methods

	// RVA: 0x19FC26C Offset: 0x19FC26C VA: 0x19FC26C
	private void Awake() { }

	// RVA: 0x19FC2E8 Offset: 0x19FC2E8 VA: 0x19FC2E8
	private void Start() { }

	// RVA: 0x19FC3DC Offset: 0x19FC3DC VA: 0x19FC3DC
	private void LateUpdate() { }

	// RVA: 0x19FC710 Offset: 0x19FC710 VA: 0x19FC710
	private void GetPlayerInput() { }

	// RVA: 0x19FCF38 Offset: 0x19FCF38 VA: 0x19FCF38
	public void .ctor() { }
}

// Namespace: 