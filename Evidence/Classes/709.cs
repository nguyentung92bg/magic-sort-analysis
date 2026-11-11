public static class Vector3Utils // TypeDefIndex: 709
{
	// Methods

	// RVA: 0x40E6494 Offset: 0x40E6494 VA: 0x40E6494
	public static float GetDistanceToTargetPosition(Vector3 currentPosition, Vector3 startPosition, Vector3 targetPosition) { }

	// RVA: 0x40E65B8 Offset: 0x40E65B8 VA: 0x40E65B8
	public static bool WillArriveToTheTarget(Vector3 position, Vector3 previousPosition, Vector3 targetPosition) { }

	// RVA: 0x40E66D8 Offset: 0x40E66D8 VA: 0x40E66D8
	public static bool WillArriveToTheTarget(float position, float previousPosition, float targetPosition) { }

	// RVA: 0x40E66EC Offset: 0x40E66EC VA: 0x40E66EC
	public static bool HasDirectionChanged(Vector3 initialDirection, Vector3 currentDirection) { }

	// RVA: 0x40E670C Offset: 0x40E670C VA: 0x40E670C
	public static bool LineSegmentsIntersect(Vector2 p1, Vector2 q1, Vector2 p2, Vector2 q2) { }

	// RVA: 0x40E687C Offset: 0x40E687C VA: 0x40E687C
	private static int Orientation(Vector2 p, Vector2 q, Vector2 r) { }

	// RVA: 0x40E6928 Offset: 0x40E6928 VA: 0x40E6928
	private static bool OnSegment(Vector2 p, Vector2 q, Vector2 r) { }
}

// Namespace: Modules.Infrastructure.Common.Scripts.TileMapNS