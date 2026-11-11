public static class TransformExtension // TypeDefIndex: 1567
{
	// Methods

	[Extension]
	// RVA: 0x23064F0 Offset: 0x23064F0 VA: 0x23064F0
	public static TweenerCore<Vector3, Vector3, VectorOptions> DOMove(ITransform target, Vector3 endValue, float duration, bool snapping = False) { }

	[Extension]
	// RVA: 0x23066A4 Offset: 0x23066A4 VA: 0x23066A4
	public static TweenerCore<Quaternion, Vector3, QuaternionOptions> DORotate(ITransform target, Vector3 endValue, float duration, RotateMode mode = 0) { }

	[Extension]
	// RVA: 0x2306854 Offset: 0x2306854 VA: 0x2306854
	public static TweenerCore<Vector3, Vector3, VectorOptions> DOScale(ITransform target, Vector3 endValue, float duration) { }

	[Extension]
	// RVA: 0x23069F8 Offset: 0x23069F8 VA: 0x23069F8
	public static TweenerCore<Vector3, Vector3, VectorOptions> DOScale(ITransform target, float endValue, float duration) { }

	[Extension]
	// RVA: 0x2306B8C Offset: 0x2306B8C VA: 0x2306B8C
	public static TweenerCore<Vector3, Vector3, VectorOptions> DOSizeDelta(SpriteRenderer target, Vector3 endValue, float duration) { }

	[Extension]
	// RVA: 0x22FD54C Offset: 0x22FD54C VA: 0x22FD54C
	public static TweenerCore<Vector3, Vector3, VectorOptions> DOLocalMove(ITransform target, Vector3 endValue, float duration, bool snapping = False) { }

	[Extension]
	// RVA: 0x22FD3A4 Offset: 0x22FD3A4 VA: 0x22FD3A4
	public static TweenerCore<Quaternion, Vector3, QuaternionOptions> DOLocalRotate(ITransform target, Vector3 endValue, float duration, RotateMode mode = 0) { }

	[Extension]
	// RVA: 0x2306D40 Offset: 0x2306D40 VA: 0x2306D40
	public static TweenerCore<Vector3, Path, PathOptions> DOPath(ITransform target, Vector3[] path, float duration, PathType pathType = 0, PathMode pathMode = 1, int resolution = 10, Nullable<Color> gizmoColor) { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Common