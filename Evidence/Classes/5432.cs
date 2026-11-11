public sealed class LanguageSource.fnOnSourceUpdated : MulticastDelegate // TypeDefIndex: 5432
{
	// Methods

	// RVA: 0x19D5C38 Offset: 0x19D5C38 VA: 0x19D5C38
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x19D5D78 Offset: 0x19D5D78 VA: 0x19D5D78 Slot: 12
	public virtual void Invoke(LanguageSourceData source, bool ReceivedNewData, string errorMsg) { }

	// RVA: 0x19D5D90 Offset: 0x19D5D90 VA: 0x19D5D90 Slot: 13
	public virtual IAsyncResult BeginInvoke(LanguageSourceData source, bool ReceivedNewData, string errorMsg, AsyncCallback callback, object object) { }

	// RVA: 0x19D5E2C Offset: 0x19D5E2C VA: 0x19D5E2C Slot: 14
	public virtual void EndInvoke(IAsyncResult result) { }
}

// Namespace: I2.Loc
[ExecuteInEditMode]
[AddComponentMenu("I2/Localization/Source")]