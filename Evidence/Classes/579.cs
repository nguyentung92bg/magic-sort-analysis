public class Viewport : IViewport // TypeDefIndex: 579
{
	// Fields
	private Vector2 _viewPortMin; // 0x10
	private Vector2 _viewPortMax; // 0x18

	// Methods

	// RVA: 0x4003860 Offset: 0x4003860 VA: 0x4003860
	public void .ctor() { }

	// RVA: 0x4003710 Offset: 0x4003710 VA: 0x4003710
	public void .ctor(Vector2 viewPortMin, Vector2 viewPortMax) { }

	// RVA: 0x4003754 Offset: 0x4003754 VA: 0x4003754
	public void .ctor(Vector2[] viewportPositions) { }

	// RVA: 0x40038E4 Offset: 0x40038E4 VA: 0x40038E4
	public void AddPosition(Vector2 position) { }

	// RVA: 0x400391C Offset: 0x400391C VA: 0x400391C
	public Vector2 GetMinPosition() { }

	// RVA: 0x4003924 Offset: 0x4003924 VA: 0x4003924
	public Vector2 GetMiddlePoint() { }

	// RVA: 0x4003940 Offset: 0x4003940 VA: 0x4003940
	public Vector2 GetMaxPosition() { }

	// RVA: 0x4003948 Offset: 0x4003948 VA: 0x4003948
	public Vector2 GetSize() { }

	// RVA: 0x4003958 Offset: 0x4003958 VA: 0x4003958
	public bool IsInViewPort(Vector2 position) { }

	// RVA: 0x4003994 Offset: 0x4003994 VA: 0x4003994 Slot: 3
	public override string ToString() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts