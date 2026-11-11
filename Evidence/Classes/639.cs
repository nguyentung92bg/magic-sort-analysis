public class EditorKeyboard : INativeKeyboardBridge // TypeDefIndex: 639
{
	// Fields
	[CompilerGenerated]
	private Action<string> OnTextChangedEvent; // 0x10
	[CompilerGenerated]
	private Action<string> OnTextSubmittedEvent; // 0x18
	[CompilerGenerated]
	private Action<int> OnKeyboardHeightChangedEvent; // 0x20
	[CompilerGenerated]
	private Action OnKeyboardDismissedEvent; // 0x28

	// Methods

	[CompilerGenerated]
	// RVA: 0x4012324 Offset: 0x4012324 VA: 0x4012324 Slot: 4
	public void add_OnTextChangedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x40123D4 Offset: 0x40123D4 VA: 0x40123D4 Slot: 5
	public void remove_OnTextChangedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4012484 Offset: 0x4012484 VA: 0x4012484 Slot: 6
	public void add_OnTextSubmittedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x4012534 Offset: 0x4012534 VA: 0x4012534 Slot: 7
	public void remove_OnTextSubmittedEvent(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x40125E4 Offset: 0x40125E4 VA: 0x40125E4 Slot: 8
	public void add_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4012694 Offset: 0x4012694 VA: 0x4012694 Slot: 9
	public void remove_OnKeyboardHeightChangedEvent(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x4012744 Offset: 0x4012744 VA: 0x4012744
	public void add_OnKeyboardDismissedEvent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x40127E0 Offset: 0x40127E0 VA: 0x40127E0
	public void remove_OnKeyboardDismissedEvent(Action value) { }

	// RVA: 0x401287C Offset: 0x401287C VA: 0x401287C Slot: 10
	public void Show(string placeholder, string initial) { }

	// RVA: 0x4012880 Offset: 0x4012880 VA: 0x4012880 Slot: 11
	public void Hide() { }

	// RVA: 0x4012884 Offset: 0x4012884 VA: 0x4012884 Slot: 12
	public void SetText(string text) { }

	// RVA: 0x4012888 Offset: 0x4012888 VA: 0x4012888 Slot: 13
	public int GetHeight() { }

	// RVA: 0x4012890 Offset: 0x4012890 VA: 0x4012890 Slot: 14
	public string GetCurrentInput() { }

	// RVA: 0x40128D8 Offset: 0x40128D8 VA: 0x40128D8
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.NativeKeyboard