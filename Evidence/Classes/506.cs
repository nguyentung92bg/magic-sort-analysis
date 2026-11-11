public class InputHistory // TypeDefIndex: 506
{
	// Fields
	private int _touchDownOnNotActiveCount; // 0x10
	private int _moreThan2FingerCount; // 0x14
	private Queue<string> _lastInputs; // 0x18
	private Queue<Vector3> _touchesOnEmptyArea; // 0x20
	private bool _hasAnyTouch; // 0x28

	// Methods

	// RVA: 0x3D2AC44 Offset: 0x3D2AC44 VA: 0x3D2AC44
	public void .ctor() { }

	// RVA: 0x3D2AD20 Offset: 0x3D2AD20 VA: 0x3D2AD20
	public void AddMoreThan2FingerCount() { }

	// RVA: 0x3D2AD3C Offset: 0x3D2AD3C VA: 0x3D2AD3C
	public int GetMoreThan2FingerCount() { }

	// RVA: 0x3D2AD44 Offset: 0x3D2AD44 VA: 0x3D2AD44
	public void AddTouchDownOnNotActive() { }

	// RVA: 0x3D2AD54 Offset: 0x3D2AD54 VA: 0x3D2AD54
	public int GetTouchDownOnNotActiveCount() { }

	// RVA: 0x3D2AD5C Offset: 0x3D2AD5C VA: 0x3D2AD5C
	public void HasTouch() { }

	// RVA: 0x3D2AD68 Offset: 0x3D2AD68 VA: 0x3D2AD68
	public int HasAnyTouch() { }

	// RVA: 0x3D2AD70 Offset: 0x3D2AD70 VA: 0x3D2AD70
	public void AddTouchDownOnEmptyArea(Vector3 worldPosition) { }

	// RVA: 0x3D2AE24 Offset: 0x3D2AE24 VA: 0x3D2AE24
	public void AddTouchDownToTouchableElement(UITouchableElement uiTouchableElement) { }

	// RVA: 0x3D2AEE4 Offset: 0x3D2AEE4 VA: 0x3D2AEE4
	public void AddTouchCancelToTouchDownUiElement(UITouchableElement touchDownUIElement) { }

	// RVA: 0x3D2AFA4 Offset: 0x3D2AFA4 VA: 0x3D2AFA4
	public void AddTouchUpToUiElement(UITouchableElement touchDownUIElement) { }

	// RVA: 0x3D2B064 Offset: 0x3D2B064 VA: 0x3D2B064
	public string GetLastInputs() { }

	// RVA: 0x3D2B26C Offset: 0x3D2B26C VA: 0x3D2B26C
	public string GetTouchesOnEmptyArea() { }
}

// Namespace: Modules.Infrastructure.Input