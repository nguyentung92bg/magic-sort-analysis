public static class PersistentStorage // TypeDefIndex: 5407
{
	// Fields
	private static I2CustomPersistentStorage mStorage; // 0x0

	// Methods

	// RVA: 0x1863AEC Offset: 0x1863AEC VA: 0x1863AEC
	public static void SetSetting_String(string key, string value) { }

	// RVA: 0x1863BBC Offset: 0x1863BBC VA: 0x1863BBC
	public static string GetSetting_String(string key, string defaultValue) { }

	// RVA: 0x1863C84 Offset: 0x1863C84 VA: 0x1863C84
	public static void DeleteSetting(string key) { }

	// RVA: 0x1863D3C Offset: 0x1863D3C VA: 0x1863D3C
	public static bool HasSetting(string key) { }

	// RVA: 0x1863DF4 Offset: 0x1863DF4 VA: 0x1863DF4
	public static void ForceSaveSettings() { }

	// RVA: 0x1863EA4 Offset: 0x1863EA4 VA: 0x1863EA4
	public static bool CanAccessFiles() { }

	// RVA: 0x1863F54 Offset: 0x1863F54 VA: 0x1863F54
	public static bool SaveFile(PersistentStorage.eFileType fileType, string fileName, string data, bool logExceptions = True) { }

	// RVA: 0x1864034 Offset: 0x1864034 VA: 0x1864034
	public static string LoadFile(PersistentStorage.eFileType fileType, string fileName, bool logExceptions = True) { }

	// RVA: 0x1864104 Offset: 0x1864104 VA: 0x1864104
	public static bool DeleteFile(PersistentStorage.eFileType fileType, string fileName, bool logExceptions = True) { }

	// RVA: 0x18641D4 Offset: 0x18641D4 VA: 0x18641D4
	public static bool HasFile(PersistentStorage.eFileType fileType, string fileName, bool logExceptions = True) { }
}

// Namespace: I2.Loc