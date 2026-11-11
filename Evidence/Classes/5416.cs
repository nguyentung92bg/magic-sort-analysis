public sealed class GoogleTranslation.fnOnTranslated : MulticastDelegate // TypeDefIndex: 5416
{
	// Methods

	// RVA: 0x19D3084 Offset: 0x19D3084 VA: 0x19D3084
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x19D316C Offset: 0x19D316C VA: 0x19D316C Slot: 12
	public virtual void Invoke(string Translation, string Error) { }

	// RVA: 0x19D3180 Offset: 0x19D3180 VA: 0x19D3180 Slot: 13
	public virtual IAsyncResult BeginInvoke(string Translation, string Error, AsyncCallback callback, object object) { }

	// RVA: 0x19D31A8 Offset: 0x19D31A8 VA: 0x19D31A8 Slot: 14
	public virtual void EndInvoke(IAsyncResult result) { }
}

// Namespace: 