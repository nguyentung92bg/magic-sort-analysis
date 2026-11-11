public interface ITransform // TypeDefIndex: 1794
{
	// Properties
	public abstract Vector3 Position { get; set; }
	public abstract Quaternion Rotation { get; set; }
	public abstract Vector3 LocalPosition { get; set; }
	public abstract Vector3 LocalScale { get; set; }
	public abstract Quaternion LocalRotation { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract Vector3 get_Position();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void set_Position(Vector3 value);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract Quaternion get_Rotation();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void set_Rotation(Quaternion value);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract Vector3 get_LocalPosition();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void set_LocalPosition(Vector3 value);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Vector3 get_LocalScale();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void set_LocalScale(Vector3 value);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract Quaternion get_LocalRotation();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void set_LocalRotation(Quaternion value);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void SetParent(ITransform parent);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract Transform GetTransform();

	// RVA: -1 Offset: -1 Slot: 12
	public abstract ITransform GetParent();
}

// Namespace: Modules.Contexts.GamePlay.Board.Common.Scripts