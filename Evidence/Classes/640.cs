public interface INativeKeyboardBridge // TypeDefIndex: 640
{
	// Methods

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 0
	public abstract void add_OnTextChangedEvent(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 1
	public abstract void remove_OnTextChangedEvent(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 2
	public abstract void add_OnTextSubmittedEvent(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 3
	public abstract void remove_OnTextSubmittedEvent(Action<string> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 4
	public abstract void add_OnKeyboardHeightChangedEvent(Action<int> value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 5
	public abstract void remove_OnKeyboardHeightChangedEvent(Action<int> value);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Show(string placeholder, string initial);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void Hide();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void SetText(string text);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract int GetHeight();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract string GetCurrentInput();
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.NativeKeyboard