public interface IScrollAdapter : IInitializable // TypeDefIndex: 602
{
	// Properties
	public abstract Orientation Orientation { get; }
	public abstract Direction ElementPlacementDirection { get; }
	public abstract Direction ContentMoveDirection { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ScrollElement GetScrollElementAt(int index);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int GetScrollElementsCount();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void SetInvisibleAt(int index);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void SetVisibleAt(int index);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract MaxMin GetLocalLimit();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool IsReversed();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Orientation get_Orientation();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract Direction get_ElementPlacementDirection();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract Direction get_ContentMoveDirection();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract float GetScrollContentSize();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void Dispose();
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll