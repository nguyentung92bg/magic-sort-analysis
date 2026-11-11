public interface IMergeable // TypeDefIndex: 3670
{
	// Properties
	public abstract int SetID { get; set; }
	public abstract int ItemLevel { get; set; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract int get_SetID();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void set_SetID(int value);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract int get_ItemLevel();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void set_ItemLevel(int value);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool CanMergeWith(IMergeable item);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract Tween MoveTargetWithScale(Transform target);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Dispose();
}

// Namespace: 
[CompilerGenerated]
[Serializable]