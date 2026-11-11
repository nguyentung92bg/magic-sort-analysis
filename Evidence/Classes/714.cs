public class BaseSignal : ISignal // TypeDefIndex: 714
{
	// Fields
	[CompilerGenerated]
	private Action<ISignal, object[]> BaseListener; // 0x10
	private string _hash; // 0x18

	// Properties
	public string Hash { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40E6CF4 Offset: 0x40E6CF4 VA: 0x40E6CF4
	public void add_BaseListener(Action<ISignal, object[]> value) { }

	[CompilerGenerated]
	// RVA: 0x40E6DA4 Offset: 0x40E6DA4 VA: 0x40E6DA4
	public void remove_BaseListener(Action<ISignal, object[]> value) { }

	// RVA: 0x40E6E54 Offset: 0x40E6E54 VA: 0x40E6E54
	public void Subscribe(Action<ISignal, object[]> callback) { }

	// RVA: 0x40E6ED0 Offset: 0x40E6ED0 VA: 0x40E6ED0
	public void Invoke(object[] args) { }

	// RVA: 0x40E6EF8 Offset: 0x40E6EF8 VA: 0x40E6EF8 Slot: 4
	public string get_Hash() { }

	// RVA: 0x40E6F58 Offset: 0x40E6F58 VA: 0x40E6F58
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS