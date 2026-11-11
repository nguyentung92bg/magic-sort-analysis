public class Signal : BaseSignal // TypeDefIndex: 715
{
	// Fields
	[CompilerGenerated]
	private Action _callback; // 0x20

	// Methods

	[CompilerGenerated]
	// RVA: 0x40E6F60 Offset: 0x40E6F60 VA: 0x40E6F60
	private void add__callback(Action value) { }

	[CompilerGenerated]
	// RVA: 0x40E6FFC Offset: 0x40E6FFC VA: 0x40E6FFC
	private void remove__callback(Action value) { }

	// RVA: 0x40E7098 Offset: 0x40E7098 VA: 0x40E7098
	public void Subscribe(Action handler) { }

	// RVA: 0x40E709C Offset: 0x40E709C VA: 0x40E709C
	public void Unsubscribe(Action handler) { }

	// RVA: 0x40E70A0 Offset: 0x40E70A0 VA: 0x40E70A0
	public void UnsubscribeAll() { }

	// RVA: 0x40E28A4 Offset: 0x40E28A4 VA: 0x40E28A4
	public void Invoke() { }

	// RVA: 0x40E70AC Offset: 0x40E70AC VA: 0x40E70AC
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.SignalNS