public static class PersistentData // TypeDefIndex: 455
{
	// Methods

	[AsyncStateMachine(typeof(PersistentData.<SaveAsync>d__0))]
	// RVA: 0x3D1E30C Offset: 0x3D1E30C VA: 0x3D1E30C
	public static Task SaveAsync(string data, string directory, string fileName) { }

	[AsyncStateMachine(typeof(PersistentData.<WriteToFileAsync>d__1))]
	// RVA: 0x3D1E42C Offset: 0x3D1E42C VA: 0x3D1E42C
	private static Task WriteToFileAsync(string filePath, string content) { }

	// RVA: 0x3D1E52C Offset: 0x3D1E52C VA: 0x3D1E52C
	public static void Save(string data, string directory, string fileName) { }

	// RVA: 0x3D1E690 Offset: 0x3D1E690 VA: 0x3D1E690
	public static void Save(byte[] bytes, string directory, string fileName) { }

	[AsyncStateMachine(typeof(PersistentData.<TryLoadAsync>d__4))]
	// RVA: 0x3D1E764 Offset: 0x3D1E764 VA: 0x3D1E764
	public static Task<string> TryLoadAsync(string directory, string fileName) { }

	// RVA: 0x3D1E890 Offset: 0x3D1E890 VA: 0x3D1E890
	public static bool TryLoad(string directory, string fileName, out string data) { }

	// RVA: 0x3D1E960 Offset: 0x3D1E960 VA: 0x3D1E960
	public static bool IsExist(string directory, string fileName) { }

	// RVA: 0x3D1EA20 Offset: 0x3D1EA20 VA: 0x3D1EA20
	public static bool IsInUse(string directory, string fileName) { }

	// RVA: 0x3D1EC94 Offset: 0x3D1EC94 VA: 0x3D1EC94
	public static void DeleteAll() { }

	// RVA: 0x3D1ECD0 Offset: 0x3D1ECD0 VA: 0x3D1ECD0
	private static void RemoveFiles(string path) { }

	// RVA: 0x3D1E600 Offset: 0x3D1E600 VA: 0x3D1E600
	private static void CreateDirectoryIfNotExists(string filePath) { }

	// RVA: 0x3D1ED38 Offset: 0x3D1ED38 VA: 0x3D1ED38
	private static void RemoveDirectories(string path) { }

	// RVA: 0x3D1EDA4 Offset: 0x3D1EDA4 VA: 0x3D1EDA4
	public static void Delete(string directory, string fileName) { }
}

// Namespace: 
[CompilerGenerated]