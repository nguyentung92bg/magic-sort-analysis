public class IOSKeyboardBridge : MonoBehaviour, INativeKeyboardBridge // TypeDefIndex: 641
{
	// Fields
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

	[CompilerGenerated]
	// RVA: 0x40128E0 Offset: 0x40128E0 VA: 0x40128E0 Slot: 4
	public void add_OnTextChangedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4012990 Offset: 0x4012990 VA: 0x4012990 Slot: 5
	public void remove_OnTextChangedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4012A40 Offset: 0x4012A40 VA: 0x4012A40 Slot: 6
	public void add_OnTextSubmittedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4012AF0 Offset: 0x4012AF0 VA: 0x4012AF0 Slot: 7
	public void remove_OnTextSubmittedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4012BA0 Offset: 0x4012BA0 VA: 0x4012BA0 Slot: 8
	public void add_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4012C50 Offset: 0x4012C50 VA: 0x4012C50 Slot: 9
	public void remove_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4012D00 Offset: 0x4012D00 VA: 0x4012D00
	public void add_OnKeyboardDismissedEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x4012D9C Offset: 0x4012D9C VA: 0x4012D9C
	public void remove_OnKeyboardDismissedEvent(Action value) { }

	// RVA: 0x4012E38 Offset: 0x4012E38 VA: 0x4012E38
	private void Awake() { }

	// RVA: 0x4012EA4 Offset: 0x4012EA4 VA: 0x4012EA4 Slot: 10
	public void Show(string placeholder, string initial) { }

	// RVA: 0x4012EA8 Offset: 0x4012EA8 VA: 0x4012EA8 Slot: 11
	public void Hide() { }

	// RVA: 0x4012EAC Offset: 0x4012EAC VA: 0x4012EAC Slot: 12
	public void SetText(string text) { }

	// RVA: 0x4012EB0 Offset: 0x4012EB0 VA: 0x4012EB0 Slot: 13
	public int GetHeight() { }

	// RVA: 0x4012EB8 Offset: 0x4012EB8 VA: 0x4012EB8 Slot: 14
	public string GetCurrentInput() { }

	// RVA: 0x4012EC0 Offset: 0x4012EC0 VA: 0x4012EC0
	public void OnKeyboardHeightChanged(string heightPxStr) { }

	// RVA: 0x4012F04 Offset: 0x4012F04 VA: 0x4012F04
	public void OnNativeTextChanged(string text) { }

	// RVA: 0x4012F50 Offset: 0x4012F50 VA: 0x4012F50
	public void OnNativeSend(string text) { }

	// RVA: 0x4012FDC Offset: 0x4012FDC VA: 0x4012FDC
	public void DebugPing() { }

	// RVA: 0x4012FE0 Offset: 0x4012FE0 VA: 0x4012FE0
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.NativeKeyboard