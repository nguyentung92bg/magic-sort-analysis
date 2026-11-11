public class ElapsedTimeTracker // TypeDefIndex: 5125
{
	// Fields
	private static ElapsedTimeTracker _instance; // 0x0
	[TupleElementNames(new[] { "timer", "description" })]
	private Dictionary<string, ValueTuple<Stopwatch, string>> _measurements; // 0x10

	// Properties
	public static ElapsedTimeTracker Instance { get; }

	// Methods

	// RVA: 0x137B498 Offset: 0x137B498 VA: 0x137B498
	public static ElapsedTimeTracker get_Instance() { }

	// RVA: 0x137B5A0 Offset: 0x137B5A0 VA: 0x137B5A0
	public void BeginMeasurement(string description) { }

	// RVA: 0x137B690 Offset: 0x137B690 VA: 0x137B690
	public bool TryEndMeasurement(string description, out double elapsedSeconds) { }

	// RVA: 0x137B518 Offset: 0x137B518 VA: 0x137B518
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Loading.Scripts