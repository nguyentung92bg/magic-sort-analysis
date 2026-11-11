public static class LineUtils // TypeDefIndex: 342
{
	// Methods

	// RVA: 0x3DE3270 Offset: 0x3DE3270 VA: 0x3DE3270
	public static ValueTuple<Vector3, Vector3> RotateAround(Vector3 a, Vector3 b, Vector3 around, float angleDegrees) { }

	// RVA: -1 Offset: -1
	public static void Swap<T>(ref T lhs, ref T rhs) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x29BF514 Offset: 0x29BF514 VA: 0x29BF514
	|-LineUtils.Swap<object>
	|
	|-RVA: 0x29BF548 Offset: 0x29BF548 VA: 0x29BF548
	|-LineUtils.Swap<float>
	*/

	// RVA: 0x3DE33A8 Offset: 0x3DE33A8 VA: 0x3DE33A8
	public static bool Approximately(float a, float b, float tolerance = 1E-05) { }

	// RVA: 0x3DE33B8 Offset: 0x3DE33B8 VA: 0x3DE33B8
	public static float CrossProduct2D(Vector2 a, Vector2 b) { }

	// RVA: 0x3DE33C8 Offset: 0x3DE33C8 VA: 0x3DE33C8
	public static bool TryLineLineIntersection(Vector2 p1start, Vector2 p1end, Vector2 p2start, Vector2 p2end, out Vector2 intersection) { }
}

// Namespace: Modules.Infrastructure.Utils