public class KeyboardService : MonoBehaviour, IService, IInitializable, IDisposable // TypeDefIndex: 642
{
	// Fields
	[SerializeField]
	private IOSKeyboardBridge _iosKeyboardBridge; // 0x18
	[SerializeField]
	private AndroidKeyboardBridge _androidKeyboardBridge; // 0x20
	private INativeKeyboardBridge _keyboard; // 0x28
	private bool _isVisible; // 0x30
	[CompilerGenerated]
	private Action<string> OnInputChanged; // 0x38
	[CompilerGenerated]
	private Action<string> OnInputSubmited; // 0x40
	[CompilerGenerated]
	private Action<int> OnKeyboardHeightChangedEvent; // 0x48
	[CompilerGenerated]
	private Action<string> OnInputCanceled; // 0x50

	// Methods

	[CompilerGenerated]
	// RVA: 0x4012FE8 Offset: 0x4012FE8 VA: 0x4012FE8
	public void add_OnInputChanged(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4013098 Offset: 0x4013098 VA: 0x4013098
	public void remove_OnInputChanged(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4013148 Offset: 0x4013148 VA: 0x4013148
	public void add_OnInputSubmited(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x40131F8 Offset: 0x40131F8 VA: 0x40131F8
	public void remove_OnInputSubmited(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x40132A8 Offset: 0x40132A8 VA: 0x40132A8
	public void add_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4013358 Offset: 0x4013358 VA: 0x4013358
	public void remove_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4013408 Offset: 0x4013408 VA: 0x4013408
	public void add_OnInputCanceled(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x40134B8 Offset: 0x40134B8 VA: 0x40134B8
	public void remove_OnInputCanceled(Action<string> value) { }

	// RVA: 0x4013568 Offset: 0x4013568 VA: 0x4013568
	public void Show(string placeholder, string initial) { }

	// RVA: 0x4013644 Offset: 0x4013644 VA: 0x4013644
	public void Hide() { }

	// RVA: 0x4013700 Offset: 0x4013700 VA: 0x4013700
	public void SetText(string text) { }

	// RVA: 0x40137AC Offset: 0x40137AC VA: 0x40137AC Slot: 4
	public void Initialize() { }

	// RVA: 0x4013A08 Offset: 0x4013A08 VA: 0x4013A08 Slot: 5
	public void Dispose() { }

	// RVA: 0x4013C5C Offset: 0x4013C5C VA: 0x4013C5C
	private void OnTextSubmitted(string text) { }

	// RVA: 0x4013C78 Offset: 0x4013C78 VA: 0x4013C78
	private void OnTextChanged(string text) { }

	// RVA: 0x4013C94 Offset: 0x4013C94 VA: 0x4013C94
	private void KeyboardHeightChanged(int height) { }

	// RVA: 0x4013CB0 Offset: 0x4013CB0 VA: 0x4013CB0
	private void KeyboardDismissed() { }

	// RVA: 0x4013CB4 Offset: 0x4013CB4 VA: 0x4013CB4
	private void Update() { }

	// RVA: 0x4013E30 Offset: 0x4013E30 VA: 0x4013E30
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.MaskNS