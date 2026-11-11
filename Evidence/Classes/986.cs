public abstract class ABlockerItem : AItem // TypeDefIndex: 986
{
	// Fields
	[CompilerGenerated]
	private bool <IsCompleted>k__BackingField; // 0x40

	// Properties
	public bool IsCompleted { get; set; }
	public abstract bool IsOverlay { get; }
	public virtual bool HidesWaterColors { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40E9A70 Offset: 0x40E9A70 VA: 0x40E9A70
	public bool get_IsCompleted() { }

	[CompilerGenerated]
	// RVA: 0x40E9A78 Offset: 0x40E9A78 VA: 0x40E9A78
	protected void set_IsCompleted(bool value) { }

	// RVA: -1 Offset: -1 Slot: 22
	public abstract bool get_IsOverlay();

	// RVA: 0x40E9A84 Offset: 0x40E9A84 VA: 0x40E9A84 Slot: 23
	public virtual bool get_HidesWaterColors() { }

	// RVA: 0x40E9A94 Offset: 0x40E9A94 VA: 0x40E9A94 Slot: 24
	public virtual bool IsAllowShuffle() { }

	// RVA: 0x40E9A9C Offset: 0x40E9A9C VA: 0x40E9A9C Slot: 25
	public virtual bool IsRevealable() { }

	// RVA: 0x40E9AA4 Offset: 0x40E9AA4 VA: 0x40E9AA4 Slot: 26
	public virtual void OnAnyBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x40E9AA8 Offset: 0x40E9AA8 VA: 0x40E9AA8 Slot: 27
	public virtual void OnAnyMoveStarted(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x40E9AAC Offset: 0x40E9AAC VA: 0x40E9AAC Slot: 28
	public virtual void OnAnyMoveFinished() { }

	// RVA: 0x40E9AB0 Offset: 0x40E9AB0 VA: 0x40E9AB0 Slot: 29
	public virtual void OnWaterRotate(float rotation, Vector3 rotationRelatedWorldPosition, int index) { }

	// RVA: 0x40E9AB4 Offset: 0x40E9AB4 VA: 0x40E9AB4 Slot: 30
	public virtual bool HasHidingWaters() { }

	// RVA: 0x40E9ABC Offset: 0x40E9ABC VA: 0x40E9ABC Slot: 31
	public virtual void UndoComplete() { }

	// RVA: 0x40E9AC0 Offset: 0x40E9AC0 VA: 0x40E9AC0 Slot: 32
	public virtual void UndoBlockerBehavior(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x40E9AC4 Offset: 0x40E9AC4 VA: 0x40E9AC4 Slot: 33
	public virtual void OnBottleSelectedAsOrigin() { }

	// RVA: 0x40E9AC8 Offset: 0x40E9AC8 VA: 0x40E9AC8 Slot: 34
	public virtual void OnBottleSelectedAsOrigin(int waterOrder) { }

	// RVA: 0x40E9ACC Offset: 0x40E9ACC VA: 0x40E9ACC Slot: 35
	public virtual void OnBottleDeselectedAsOrigin() { }

	// RVA: 0x40E9AD0 Offset: 0x40E9AD0 VA: 0x40E9AD0 Slot: 36
	public virtual void OnBottleDeselectedAsOrigin(int waterOrder) { }

	// RVA: 0x40E9AD4 Offset: 0x40E9AD4 VA: 0x40E9AD4 Slot: 37
	public virtual void OnShuffleSelected() { }

	// RVA: 0x40E9AD8 Offset: 0x40E9AD8 VA: 0x40E9AD8 Slot: 38
	public virtual void OnShuffleDeselected() { }

	// RVA: 0x40E9ADC Offset: 0x40E9ADC VA: 0x40E9ADC Slot: 39
	public virtual void OnRevealSelected() { }

	// RVA: 0x40E9AE0 Offset: 0x40E9AE0 VA: 0x40E9AE0 Slot: 40
	public virtual void OnRevealDeselected() { }

	// RVA: 0x40E9AE4 Offset: 0x40E9AE4 VA: 0x40E9AE4 Slot: 41
	public virtual void OnBeforeUndoLastWaterPour(int waterHeight, ColorId topWaterColorId) { }

	// RVA: 0x40E9AE8 Offset: 0x40E9AE8 VA: 0x40E9AE8 Slot: 42
	public virtual bool IsIntersect(Vector3 worldPosition) { }

	// RVA: 0x40E9AF0 Offset: 0x40E9AF0 VA: 0x40E9AF0 Slot: 43
	public virtual void UpdateBounds() { }

	// RVA: 0x40E9AF4 Offset: 0x40E9AF4 VA: 0x40E9AF4 Slot: 44
	public virtual Vector3 GetBottleReturnOffset() { }

	// RVA: 0x40E9B38 Offset: 0x40E9B38 VA: 0x40E9B38 Slot: 45
	public virtual bool HasReturnOffset() { }

	// RVA: 0x40E9B40 Offset: 0x40E9B40 VA: 0x40E9B40 Slot: 46
	public virtual bool IsParentedToBottle() { }

	// RVA: 0x40E9B48 Offset: 0x40E9B48 VA: 0x40E9B48 Slot: 47
	public virtual bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x40E9B50 Offset: 0x40E9B50 VA: 0x40E9B50 Slot: 48
	public virtual void OnSnitchPerformed() { }

	// RVA: 0x40E9B54 Offset: 0x40E9B54 VA: 0x40E9B54 Slot: 49
	public virtual void OnRevealPerformed() { }

	// RVA: 0x40E9B64 Offset: 0x40E9B64 VA: 0x40E9B64 Slot: 50
	public virtual BottleItem GetBelongingBottle() { }

	// RVA: 0x40E9B6C Offset: 0x40E9B6C VA: 0x40E9B6C Slot: 51
	public virtual void OnOverlayItemRevealed() { }

	// RVA: 0x40E9B70 Offset: 0x40E9B70 VA: 0x40E9B70 Slot: 52
	public virtual void OnOverBoardItemRevealed() { }

	// RVA: 0x40E9B74 Offset: 0x40E9B74 VA: 0x40E9B74
	protected void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.Component