public interface IDraggable // TypeDefIndex: 599
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnDragStart(Vector2 position);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnDrag(Vector2 position);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract bool IsDragging();
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll
[Serializable]