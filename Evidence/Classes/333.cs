public static class BezierUtils // TypeDefIndex: 333
{
	// Methods

	// RVA: 0x3DE0A80 Offset: 0x3DE0A80 VA: 0x3DE0A80
	public static Vector3[] Get2NodeBezierPathControlPointsAnchoredX(Vector3 startPosition, Vector3 endPosition, float heightOffset) { }

	// RVA: 0x3DE0B30 Offset: 0x3DE0B30 VA: 0x3DE0B30
	public static Vector3[] Get2NodeBezierControlPointsXYConfigurable(Vector3 startPosition, Vector3 endPosition, Vector3 aOffset, Vector3 bOffset) { }

	// RVA: 0x3DE0BF8 Offset: 0x3DE0BF8 VA: 0x3DE0BF8
	public static float GetBezierPathLength(Vector3[] path, int segments = 20) { }

	// RVA: 0x3DE0D18 Offset: 0x3DE0D18 VA: 0x3DE0D18
	public static Vector3 GetBezierPointAtTime(Vector3[] path, float t) { }

	[Extension]
	// RVA: 0x3DE0DA4 Offset: 0x3DE0DA4 VA: 0x3DE0DA4
	public static Tween DOVectorJump(Transform transform, Vector3 endValue, Vector3 upVector, float jumpheight, float duration) { }

	// RVA: 0x3DE0FB4 Offset: 0x3DE0FB4 VA: 0x3DE0FB4
	private static Vector3 CalcJumpVector(Vector3 from, Vector3 to, float time, Vector3 upVector, float jumpheight) { }
}

// Namespace: Modules.Infrastructure.Utils