public class InertialMovement // TypeDefIndex: 600
{
	// Fields
	private float _velocity; // 0x10
	[SerializeField]
	private bool _isActive; // 0x14
	[SerializeField]
	private InertialMovementConfig _inertialMovementConfig; // 0x18

	// Properties
	public float Velocity { get; }
	public bool IsActive { get; }
	public bool IsAboutToStop { get; }

	// Methods

	// RVA: 0x4008EA4 Offset: 0x4008EA4 VA: 0x4008EA4
	public float get_Velocity() { }

	// RVA: 0x4008EAC Offset: 0x4008EAC VA: 0x4008EAC
	public bool get_IsActive() { }

	// RVA: 0x4008EB4 Offset: 0x4008EB4 VA: 0x4008EB4
	public bool get_IsAboutToStop() { }

	// RVA: 0x4008EE0 Offset: 0x4008EE0 VA: 0x4008EE0
	public void SetLeavingSpeed(float leavingSpeed) { }

	// RVA: 0x4008EE8 Offset: 0x4008EE8 VA: 0x4008EE8
	public float GetClampedSpeed(float scrollAmount) { }

	// RVA: 0x4008F24 Offset: 0x4008F24 VA: 0x4008F24
	public void SlowDown() { }

	// RVA: 0x4008F4C Offset: 0x4008F4C VA: 0x4008F4C
	public void RubberBack(int scrollDirection, float distanceFromLimit) { }

	// RVA: 0x4008FD8 Offset: 0x4008FD8 VA: 0x4008FD8
	public void ForceStop() { }

	// RVA: 0x4008FE0 Offset: 0x4008FE0 VA: 0x4008FE0
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll
[CreateAssetMenu(fileName = "InertialMovementConfig", menuName = "Configs/InertialMovementConfig")]