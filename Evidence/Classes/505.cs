public static class NLogger // TypeDefIndex: 505
{
	// Fields
	[CompilerGenerated]
	private static bool <IsEnabled>k__BackingField; // 0x0

	// Properties
	public static bool IsEnabled { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3D29DB8 Offset: 0x3D29DB8 VA: 0x3D29DB8
	public static bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x3D29E00 Offset: 0x3D29E00 VA: 0x3D29E00
	public static void set_IsEnabled(bool value) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D29E4C Offset: 0x3D29E4C VA: 0x3D29E4C
	public static void Log(string message) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D29F48 Offset: 0x3D29F48 VA: 0x3D29F48
	public static void LogError(string message) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D29FE4 Offset: 0x3D29FE4 VA: 0x3D29FE4
	public static void LogError(string message, string info) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2A09C Offset: 0x3D2A09C VA: 0x3D2A09C
	public static void LogException(Exception exception, Object context) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2A140 Offset: 0x3D2A140 VA: 0x3D2A140
	public static void LogException(Exception exception) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2A198 Offset: 0x3D2A198 VA: 0x3D2A198
	public static void Log(string serviceName, string methodName, string messaage) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2A3A8 Offset: 0x3D2A3A8 VA: 0x3D2A3A8
	public static void LogWithMethodName(string message, string memberName = "", string filePath = "", int lineNumber = 0) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2A68C Offset: 0x3D2A68C VA: 0x3D2A68C
	public static void LogHttpError(HttpRequestModel httpRequestModel) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2A760 Offset: 0x3D2A760 VA: 0x3D2A760
	public static void LogDictionary(IDictionary<string, object> dictionary, int depth) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2AB04 Offset: 0x3D2AB04 VA: 0x3D2AB04
	public static void LogWarning(string warning) { }

	[Conditional("NLOGGER")]
	// RVA: 0x3D2ABA0 Offset: 0x3D2ABA0 VA: 0x3D2ABA0
	public static void LogWarning(string warning, Object context) { }
}

// Namespace: Modules.Infrastructure.Input