public static class DebugTimeMeasurer // TypeDefIndex: 5275
{
	// Fields
	[TupleElementNames(new[] { "startTime", "description" })]
	private static Dictionary<string, ValueTuple<double, string>> _measurements; // 0x0

	// Methods

	[Conditional("NLOGGER")]
	// RVA: 0x1CCC080 Offset: 0x1CCC080 VA: 0x1CCC080
	public static void BeginMeasure(string description) { }

	// RVA: 0x1CCC224 Offset: 0x1CCC224 VA: 0x1CCC224
	private static string DescriptionAsId(string description) { }

	[Conditional("NLOGGER")]
	// RVA: 0x1CCC2BC Offset: 0x1CCC2BC VA: 0x1CCC2BC
	public static void EndMeasure(string description) { }

	// RVA: 0x1CCC678 Offset: 0x1CCC678 VA: 0x1CCC678
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]