public sealed class LocalizationManager.FnCustomApplyLocalizationParams : MulticastDelegate // TypeDefIndex: 5449
{
	// Methods

	// RVA: 0x19E8298 Offset: 0x19E8298 VA: 0x19E8298
	public void .ctor(object object, IntPtr method) { }

	// RVA: 0x19E8380 Offset: 0x19E8380 VA: 0x19E8380 Slot: 12
	public virtual bool Invoke(ref string translation, LocalizationManager._GetParam getParam, bool allowLocalizedParameters) { }

	// RVA: 0x19E8398 Offset: 0x19E8398 VA: 0x19E8398 Slot: 13
	public virtual IAsyncResult BeginInvoke(ref string translation, LocalizationManager._GetParam getParam, bool allowLocalizedParameters, AsyncCallback callback, object object) { }

	// RVA: 0x19E8438 Offset: 0x19E8438 VA: 0x19E8438 Slot: 14
	public virtual bool EndInvoke(ref string translation, IAsyncResult result) { }
}

// Namespace: 