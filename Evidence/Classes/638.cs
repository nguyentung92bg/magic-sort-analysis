public class AndroidKeyboardBridge : MonoBehaviour, INativeKeyboardBridge // TypeDefIndex: 638
{
	// Fields
	private static AndroidJavaClass _cls; // 0x0
	private int _currentHeight; // 0x18
	private string _currentInput; // 0x20
	[CompilerGenerated]
	private Action<string> OnTextChangedEvent; // 0x28
	[CompilerGenerated]
	private Action<string> OnTextSubmittedEvent; // 0x30
	[CompilerGenerated]
	private Action<int> OnKeyboardHeightChangedEvent; // 0x38
	[CompilerGenerated]
	private Action OnKeyboardDismissedEvent; // 0x40

	// Methods

	// RVA: 0x4011678 Offset: 0x4011678 VA: 0x4011678
	private void Awake() { }

	[CompilerGenerated]
	// RVA: 0x40117DC Offset: 0x40117DC VA: 0x40117DC Slot: 4
	public void add_OnTextChangedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x401188C Offset: 0x401188C VA: 0x401188C Slot: 5
	public void remove_OnTextChangedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x401193C Offset: 0x401193C VA: 0x401193C Slot: 6
	public void add_OnTextSubmittedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x40119EC Offset: 0x40119EC VA: 0x40119EC Slot: 7
	public void remove_OnTextSubmittedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4011A9C Offset: 0x4011A9C VA: 0x4011A9C Slot: 8
	public void add_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4011B4C Offset: 0x4011B4C VA: 0x4011B4C Slot: 9
	public void remove_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4011BFC Offset: 0x4011BFC VA: 0x4011BFC
	public void add_OnKeyboardDismissedEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x4011C98 Offset: 0x4011C98 VA: 0x4011C98
	public void remove_OnKeyboardDismissedEvent(Action value) { }

	// RVA: 0x4011D34 Offset: 0x4011D34 VA: 0x4011D34 Slot: 10
	public void Show(string placeholder = "", string initial = "") { }

	// RVA: 0x4011E8C Offset: 0x4011E8C VA: 0x4011E8C Slot: 11
	public void Hide() { }

	// RVA: 0x4011F50 Offset: 0x4011F50 VA: 0x4011F50 Slot: 12
	public void SetText(string text) { }

	// RVA: 0x40120C8 Offset: 0x40120C8 VA: 0x40120C8 Slot: 13
	public int GetHeight() { }

	// RVA: 0x40120D0 Offset: 0x40120D0 VA: 0x40120D0 Slot: 14
	public string GetCurrentInput() { }

	// RVA: 0x40120D8 Offset: 0x40120D8 VA: 0x40120D8
	public void SetSendIconRotation(float deg) { }

	// RVA: 0x40121FC Offset: 0x40121FC VA: 0x40121FC
	public void OnKeyboardHeightChanged(string pxStr) { }

	// RVA: 0x4012240 Offset: 0x4012240 VA: 0x4012240
	public void OnNativeTextChanged(string text) { }

	// RVA: 0x401228C Offset: 0x401228C VA: 0x401228C
	public void OnNativeSend(string text) { }

	// RVA: 0x4012318 Offset: 0x4012318 VA: 0x4012318
	public void OnNativeKeyboardDismissed() { }

	// RVA: 0x401231C Offset: 0x401231C VA: 0x401231C
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.NativeKeyboard