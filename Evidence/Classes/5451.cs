public sealed class LocalizationManager.OnLocalizeCallback : MulticastDelegate // TypeDefIndex: 5451
{
	// Methods

	// RVA: 0x19E1CBC Offset: 0x19E1CBC VA: 0x19E1CBC
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x19E84A4 Offset: 0x19E84A4 VA: 0x19E84A4 Slot: 12
	public virtual void Invoke() { }

	// RVA: 0x19E84B8 Offset: 0x19E84B8 VA: 0x19E84B8 Slot: 13
	public virtual IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

	// RVA: 0x19E84D8 Offset: 0x19E84D8 VA: 0x19E84D8 Slot: 14
	public virtual void EndInvoke(IAsyncResult result) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]