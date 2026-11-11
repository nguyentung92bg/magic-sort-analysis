public sealed class GoogleTranslation.fnOnTranslationReady : MulticastDelegate // TypeDefIndex: 5417
{
	// Methods

	// RVA: 0x19D00C0 Offset: 0x19D00C0 VA: 0x19D00C0
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x19D31B4 Offset: 0x19D31B4 VA: 0x19D31B4 Slot: 12
	public virtual void Invoke(Dictionary<string, TranslationQuery> dict, string error) { }

	// RVA: 0x19D31C8 Offset: 0x19D31C8 VA: 0x19D31C8 Slot: 13
	public virtual IAsyncResult BeginInvoke(Dictionary<string, TranslationQuery> dict, string error, AsyncCallback callback, object object) { }

	// RVA: 0x19D31F0 Offset: 0x19D31F0 VA: 0x19D31F0 Slot: 14
	public virtual void EndInvoke(IAsyncResult result) { }
}

// Namespace: 
[CompilerGenerated]