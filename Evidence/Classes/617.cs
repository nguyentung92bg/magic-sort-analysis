public class UIElementScaler : MonoBehaviour, IScalable // TypeDefIndex: 617
{
	// Fields
	[SerializeField]
	private UIElement _uiElement; // 0x18
	[SerializeField]
	private bool _isScalable; // 0x20
	[SerializeField]
	private bool _scaleX; // 0x21
	[SerializeField]
	private bool _scaleY; // 0x22
	[SerializeField]
	private AspectRatioSettings _aspectRatioSettings; // 0x24
	private Vector3 _firstScale; // 0x28
	private bool _initialized; // 0x34

	// Properties
	public bool IsScalable { get; }

	// Methods

	// RVA: 0x400D75C Offset: 0x400D75C VA: 0x400D75C Slot: 4
	public bool get_IsScalable() { }

	// RVA: 0x400D764 Offset: 0x400D764 VA: 0x400D764
	private void Awake() { }

	// RVA: 0x400D774 Offset: 0x400D774 VA: 0x400D774
	private void Initialize() { }

	// RVA: 0x400D7B4 Offset: 0x400D7B4 VA: 0x400D7B4 Slot: 6
	public virtual void Scale(Vector3 scaleRatio) { }

	// RVA: 0x400D88C Offset: 0x400D88C VA: 0x400D88C
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scaler