public abstract class I2BasePersistentStorage // TypeDefIndex: 5408
{
	// Methods

	// RVA: 0x18642A8 Offset: 0x18642A8 VA: 0x18642A8 Slot: 4
	public virtual void SetSetting_String(string key, string value) { }

	// RVA: 0x1864544 Offset: 0x1864544 VA: 0x1864544 Slot: 5
	public virtual string GetSetting_String(string key, string defaultValue) { }

	// RVA: 0x18647C0 Offset: 0x18647C0 VA: 0x18647C0 Slot: 6
	public virtual void DeleteSetting(string key) { }

	// RVA: 0x1864A00 Offset: 0x1864A00 VA: 0x1864A00 Slot: 7
	public virtual void ForceSaveSettings() { }

	// RVA: 0x1864A08 Offset: 0x1864A08 VA: 0x1864A08 Slot: 8
	public virtual bool HasSetting(string key) { }

	// RVA: 0x1864A14 Offset: 0x1864A14 VA: 0x1864A14 Slot: 9
	public virtual bool CanAccessFiles() { }

	// RVA: 0x1864A1C Offset: 0x1864A1C VA: 0x1864A1C
	private string UpdateFilename(PersistentStorage.eFileType fileType, string fileName) { }

	// RVA: 0x1864AB4 Offset: 0x1864AB4 VA: 0x1864AB4 Slot: 10
	public virtual bool SaveFile(PersistentStorage.eFileType fileType, string fileName, string data, bool logExceptions = True) { }

	// RVA: 0x1864C48 Offset: 0x1864C48 VA: 0x1864C48 Slot: 11
	public virtual string LoadFile(PersistentStorage.eFileType fileType, string fileName, bool logExceptions = True) { }

	// RVA: 0x1864DD0 Offset: 0x1864DD0 VA: 0x1864DD0 Slot: 12
	public virtual bool DeleteFile(PersistentStorage.eFileType fileType, string fileName, bool logExceptions = True) { }

	// RVA: 0x1864F4C Offset: 0x1864F4C VA: 0x1864F4C Slot: 13
	public virtual bool HasFile(PersistentStorage.eFileType fileType, string fileName, bool logExceptions = True) { }

	// RVA: 0x18650C8 Offset: 0x18650C8 VA: 0x18650C8
	protected void .ctor() { }
}

// Namespace: I2.Loc