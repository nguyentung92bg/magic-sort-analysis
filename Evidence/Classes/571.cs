public interface IUIRoot // TypeDefIndex: 571
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Show();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Hide();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Dispose();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void SetInnerAndOuterOrtho(float ortho);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract Vector2 GetOuterInnerScaleRatio();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract Vector2 GetInnerByReferenceScaleRatio();
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts