public class BasicTransform : ITransform // TypeDefIndex: 1780
{
	// Fields
	private readonly Transform _transform; // 0x10
	private ITransform _parent; // 0x18

	// Properties
	public Vector3 Position { get; set; }
	public Quaternion Rotation { get; set; }
	public Vector3 LocalPosition { get; set; }
	public Vector3 LocalScale { get; set; }
	public Quaternion LocalRotation { get; set; }

	// Methods

	// RVA: 0x2F60E44 Offset: 0x2F60E44 VA: 0x2F60E44 Slot: 4
	public Vector3 get_Position() { }

	// RVA: 0x2F60E60 Offset: 0x2F60E60 VA: 0x2F60E60 Slot: 5
	public void set_Position(Vector3 value) { }

	// RVA: 0x2F60E7C Offset: 0x2F60E7C VA: 0x2F60E7C Slot: 6
	public Quaternion get_Rotation() { }

	// RVA: 0x2F60E98 Offset: 0x2F60E98 VA: 0x2F60E98 Slot: 7
	public void set_Rotation(Quaternion value) { }

	// RVA: 0x2F60EB4 Offset: 0x2F60EB4 VA: 0x2F60EB4 Slot: 8
	public Vector3 get_LocalPosition() { }

	// RVA: 0x2F60ED0 Offset: 0x2F60ED0 VA: 0x2F60ED0 Slot: 9
	public void set_LocalPosition(Vector3 value) { }

	// RVA: 0x2F60EEC Offset: 0x2F60EEC VA: 0x2F60EEC Slot: 10
	public Vector3 get_LocalScale() { }

	// RVA: 0x2F60F08 Offset: 0x2F60F08 VA: 0x2F60F08 Slot: 11
	public void set_LocalScale(Vector3 value) { }

	// RVA: 0x2F60F24 Offset: 0x2F60F24 VA: 0x2F60F24 Slot: 12
	public Quaternion get_LocalRotation() { }

	// RVA: 0x2F60F40 Offset: 0x2F60F40 VA: 0x2F60F40 Slot: 13
	public void set_LocalRotation(Quaternion value) { }

	// RVA: 0x2F60E0C Offset: 0x2F60E0C VA: 0x2F60E0C
	public void .ctor(Transform transform) { }

	// RVA: 0x2F60F5C Offset: 0x2F60F5C VA: 0x2F60F5C Slot: 15
	public Transform GetTransform() { }

	// RVA: 0x2F60F64 Offset: 0x2F60F64 VA: 0x2F60F64 Slot: 14
	public void SetParent(ITransform parent) { }

	// RVA: 0x2F61048 Offset: 0x2F61048 VA: 0x2F61048 Slot: 16
	public ITransform GetParent() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]