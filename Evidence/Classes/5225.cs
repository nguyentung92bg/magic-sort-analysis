public static class FirebaseConfigValueParser // TypeDefIndex: 5225
{
	// Methods

	// RVA: -1 Offset: -1
	public static T Deserialize<T>(string key, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2381E08 Offset: 0x2381E08 VA: 0x2381E08
	|-FirebaseConfigValueParser.Deserialize<object>
	*/

	// RVA: -1 Offset: -1
	public static T Get<T>(string key, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2381F18 Offset: 0x2381F18 VA: 0x2381F18
	|-FirebaseConfigValueParser.Get<object>
	*/

	// RVA: 0x1CBC5EC Offset: 0x1CBC5EC VA: 0x1CBC5EC
	public static string GetString(string key, string defaultValue = "") { }

	// RVA: 0x1CBC6B0 Offset: 0x1CBC6B0 VA: 0x1CBC6B0
	public static int GetInt(string key, int defaultValue = 0) { }

	// RVA: 0x1CBC788 Offset: 0x1CBC788 VA: 0x1CBC788
	public static float GetFloat(string key, float defaultValue = 0) { }

	// RVA: 0x1CBC860 Offset: 0x1CBC860 VA: 0x1CBC860
	public static bool GetBool(string key, bool defaultValue = False) { }

	// RVA: 0x1CBC974 Offset: 0x1CBC974 VA: 0x1CBC974
	public static double GetDouble(string key, double defaultValue = 0) { }

	// RVA: 0x1CBCA4C Offset: 0x1CBCA4C VA: 0x1CBCA4C
	public static long GetLong(string key, long defaultValue = 0) { }

	// RVA: 0x1CBCB20 Offset: 0x1CBCB20 VA: 0x1CBCB20
	public static byte GetByte(string key, byte defaultValue = 0) { }

	// RVA: 0x1CBCBF8 Offset: 0x1CBCBF8 VA: 0x1CBCBF8
	public static DateTime GetDateTime(string key, DateTime defaultValue) { }

	// RVA: -1 Offset: -1
	public static T GetEnum<T>(string key, T defaultValue) { }
}

// Namespace: Modules.Contexts.Application.FirebaseNS.Scripts