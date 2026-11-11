public class UIRaycaster : IDisposable // TypeDefIndex: 586
{
	// Fields
	private List<UITouchableElement> _uiTouchableElements; // 0x10
	private List<Type> _castOnlyTheseElements; // 0x18

	// Methods

	// RVA: 0x4003B28 Offset: 0x4003B28 VA: 0x4003B28
	public void .ctor() { }

	// RVA: 0x4003DA0 Offset: 0x4003DA0 VA: 0x4003DA0
	private void UpdateSortedElements(UITouchableElement obj) { }

	// RVA: 0x4003DF0 Offset: 0x4003DF0 VA: 0x4003DF0
	public void LimitRaycastElement(Type type) { }

	// RVA: 0x4003EA0 Offset: 0x4003EA0 VA: 0x4003EA0
	public void RemoveLimits() { }

	// RVA: 0x4003F10 Offset: 0x4003F10 VA: 0x4003F10
	private void AddUITouchableElement(UITouchableElement uiTouchableElement) { }

	// RVA: 0x4003FE0 Offset: 0x4003FE0 VA: 0x4003FE0
	private void RemoveUITouchableElement(UITouchableElement uiTouchableElement) { }

	// RVA: 0x400405C Offset: 0x400405C VA: 0x400405C
	public bool TryGetRaycastResult(List<UITouchableElement> touchedElements, Ray ray) { }

	// RVA: 0x4004560 Offset: 0x4004560 VA: 0x4004560 Slot: 4
	public void Dispose() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Touch
[RequireComponent(typeof(BoxCollider2D))]