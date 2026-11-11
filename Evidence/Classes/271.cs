public abstract class EditorABlockerItem : EditorAItem // TypeDefIndex: 271
{
	// Fields
	[CompilerGenerated]
	private bool <IsCompleted>k__BackingField; // 0x28

	// Properties
	public abstract bool BottleVisibilityBlocker { get; }
	public bool IsCompleted { get; set; }
	public abstract bool IsOverlay { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 10
	public abstract bool get_BottleVisibilityBlocker();

	[CompilerGenerated]
	// RVA: 0x37ADFD8 Offset: 0x37ADFD8 VA: 0x37ADFD8
	public bool get_IsCompleted() { }

	[CompilerGenerated]
	// RVA: 0x37ADFE0 Offset: 0x37ADFE0 VA: 0x37ADFE0
	protected void set_IsCompleted(bool value) { }

	// RVA: -1 Offset: -1 Slot: 11
	public abstract bool get_IsOverlay();

	// RVA: 0x37ADFEC Offset: 0x37ADFEC VA: 0x37ADFEC Slot: 12
	public virtual bool HasHidingWaters() { }

	// RVA: 0x37ADFF4 Offset: 0x37ADFF4 VA: 0x37ADFF4 Slot: 13
	public virtual bool IsIntersect(Vector3 worldPosition) { }

	// RVA: 0x37ADFFC Offset: 0x37ADFFC VA: 0x37ADFFC Slot: 14
	public virtual void UpdateBounds() { }

	// RVA: 0x37AE000 Offset: 0x37AE000 VA: 0x37AE000 Slot: 15
	public virtual Vector3 GetBottleReturnOffset() { }

	// RVA: 0x37AE044 Offset: 0x37AE044 VA: 0x37AE044 Slot: 16
	public virtual bool HasReturnOffset() { }

	// RVA: 0x37AE04C Offset: 0x37AE04C VA: 0x37AE04C Slot: 17
	public virtual bool IsParentedToBottle() { }

	// RVA: 0x37AE054 Offset: 0x37AE054 VA: 0x37AE054 Slot: 18
	public virtual EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37ACBA4 Offset: 0x37ACBA4 VA: 0x37ACBA4
	protected void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems